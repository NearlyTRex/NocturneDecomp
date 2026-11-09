; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder *this_ptr,short *pcm_output)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; short *          Stack[0x8]:4   pcm_output
; Local Variables:
; undefined4       Stack[-0x60b0]:4  local_60b0
; undefined4       Stack[-0x60ac]:4  local_60ac
; undefined        Stack[-0x60a8]:1  local_60a8
; undefined        Stack[-0x4ea8]:1  local_4ea8
; undefined        Stack[-0x3ca8]:1  local_3ca8
; undefined        Stack[-0x3c68]:1  local_3c68
; undefined        Stack[-0x33a8]:1  local_33a8
; undefined        Stack[-0x2aa8]:1  local_2aa8
; undefined        Stack[-0x21a8]:1  local_21a8
; undefined        Stack[-0x18a8]:1  local_18a8
; undefined        Stack[-0xfa8]:1  local_fa8
; undefined        Stack[-0xca8]:1  local_ca8
; undefined        Stack[-0x9a8]:1  local_9a8
; undefined        Stack[-0x6a8]:1  local_6a8
; undefined4       Stack[-0x4b8]:4  local_4b8
; undefined        Stack[-0x4b0]:1  local_4b0
; undefined        Stack[-0x4a0]:1  local_4a0
; undefined        Stack[-0x370]:1  local_370
; undefined        Stack[-0x270]:1  local_270
; undefined        Stack[-0x170]:1  local_170
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined8       Stack[-0xa4]:8  local_a4
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
; XREF[2]:
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00502a80 at 00502b64
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_00502bc0 at 00502c9d
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005ca3a7
;   TerminatedCString s_Not_enough_main_data_to_005ca3b8
;   undefined4 DAT_006011b8
;   undefined4 DAT_006011f8
;   undefined4 DAT_00601360
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   sound_mp3.cpp_antiAliasingButterfly_FUN_005019f0
;   sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004fe990
;   sound_mp3.cpp_calculateMainDataSize_FUN_00502190
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004fde40
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004fdd10
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004fe1f0
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004fdef0
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004fd780
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502d60
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60
    PUSH ESI                            ; 00502d61
    PUSH EDI                            ; 00502d62
    PUSH EBP                            ; 00502d63
    MOV EBP,ESP                         ; 00502d64
    SUB ESP,0x60a0                      ; 00502d66
    AND ESP,0xfffffff8                  ; 00502d6c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00502d6f
    LEA EAX,[ESP + 0x5fc0]              ; 00502d72
    MOV ECX,0xffffffff                  ; 00502d79
    MOV ESI,dword ptr [EBP + 0x14]      ; 00502d7e
    XOR EDX,EDX                         ; 00502d81
    MOV dword ptr [ESP + 0x5ff0],EAX    ; 00502d83
    ADD ESI,0x5320                      ; 00502d8a
    MOV dword ptr [ESP + 0x5ffc],ECX    ; 00502d90
    MOV dword ptr [ESP + 0x5ff8],EDX    ; 00502d97
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00502d9e
    MOV dword ptr [ESP + 0x601c],EDX    ; 00502da1
    TEST EAX,EAX                        ; 00502da8
    JZ 0x00502db7                       ; 00502daa
        ;   XREF to: 00502db7 (CONDITIONAL_JUMP)  ; LAB_00502db7
    XOR ESI,ESI                         ; 00502dac
    MOV EAX,ESI                         ; 00502dae
    MOV ESP,EBP                         ; 00502db0
    POP EBP                             ; 00502db2
    POP EDI                             ; 00502db3
    POP ESI                             ; 00502db4
    POP EBX                             ; 00502db5
    RET                                 ; 00502db6
    PUSH 0xc                            ; 00502db7
        ;   Label: LAB_00502db7
    PUSH 0xfff                          ; 00502db9
    PUSH ESI                            ; 00502dbe
    CALL sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004fd780 ; 00502dbf
        ;   XREF to: 004fd780 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004fd780(CFileBitStream * this_ptr, uint sync_pattern, uint pattern_bits)
    ADD ESP,0xc                         ; 00502dc4
    TEST EAX,EAX                        ; 00502dc7
    JNZ 0x00503921                      ; 00502dc9
        ;   XREF to: 00503921 (CONDITIONAL_JUMP)  ; LAB_00503921
    XOR ESI,ESI                         ; 00502dcf
    MOV EAX,ESI                         ; 00502dd1
    MOV ESP,EBP                         ; 00502dd3
    POP EBP                             ; 00502dd5
    POP EDI                             ; 00502dd6
    POP ESI                             ; 00502dd7
    POP EBX                             ; 00502dd8
    RET                                 ; 00502dd9
    LEA EAX,[ESP + 0x5ff0]              ; 00502dda
        ;   Label: LAB_00502dda
    PUSH EAX                            ; 00502de1
    LEA EAX,[ESP + 0x5e44]              ; 00502de2
    PUSH EAX                            ; 00502de9
    MOV EBX,0x20                        ; 00502dea
    MOV EDI,0x180                       ; 00502def
    PUSH ESI                            ; 00502df4
    MOV dword ptr [ESP + 0x10],EBX      ; 00502df5
    MOV dword ptr [ESP + 0xc],EDI       ; 00502df9
    CALL sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004fde40 ; 00502dfd
        ;   XREF to: 004fde40 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004fde40(CFileBitStream * this_ptr, uint * output_array, SMpegFrame * frame)
    ADD ESP,0xc                         ; 00502e02
    LEA EAX,[ESP + 0x5ff0]              ; 00502e05
    PUSH EAX                            ; 00502e0c
    LEA EAX,[ESP + 0x540c]              ; 00502e0d
    PUSH EAX                            ; 00502e14
    LEA EAX,[ESP + 0x5e48]              ; 00502e15
    PUSH EAX                            ; 00502e1c
    PUSH ESI                            ; 00502e1d
    CALL sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004fdef0 ; 00502e1e
        ;   XREF to: 004fdef0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004fdef0(CFileBitStream * this_ptr, SMpegSubbandAllocation * allocation_indices, SMpegSubbandScalefactors * scalefactors, SMpegFrame * frame)
    ADD ESP,0x10                        ; 00502e23
    XOR EAX,EAX                         ; 00502e26
    MOV dword ptr [ESP + 0x6088],EAX    ; 00502e28
    MOV dword ptr [ESP + 0x6024],ESI    ; 00502e2f
    LEA EAX,[ESP + 0x5ff0]              ; 00502e36
        ;   Label: LAB_00502e36
    PUSH EAX                            ; 00502e3d
    LEA EAX,[ESP + 0x5e44]              ; 00502e3e
    PUSH EAX                            ; 00502e45
    LEA EAX,[ESP + 0x5110]              ; 00502e46
    PUSH EAX                            ; 00502e4d
    MOV EBX,dword ptr [ESP + 0x6030]    ; 00502e4e
    PUSH EBX                            ; 00502e55
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004fe1f0 ; 00502e56
        ;   XREF to: 004fe1f0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004fe1f0(CFileBitStream * this_ptr, SMpegSubbandScalefactors * quantized_samples, SMpegSubbandAllocation * allocation, SMpegFrame * frame)
    ADD ESP,0x10                        ; 00502e5b
    LEA EAX,[ESP + 0x5ff0]              ; 00502e5e
    PUSH EAX                            ; 00502e65
    LEA EAX,[ESP + 0x5e44]              ; 00502e66
    PUSH EAX                            ; 00502e6d
    LEA EAX,[ESP + 0x5710]              ; 00502e6e
    PUSH EAX                            ; 00502e75
    LEA EAX,[ESP + 0x5114]              ; 00502e76
    PUSH EAX                            ; 00502e7d
    XOR ESI,ESI                         ; 00502e7e
    CALL sound_mp3.cpp_requantizeSamples_FUN_004fe850 ; 00502e80
        ;   XREF to: 004fe850 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeSamples_FUN_004fe850()
    ADD ESP,0x10                        ; 00502e85
    LEA EAX,[ESP + 0x5708]              ; 00502e88
    MOV EDI,dword ptr [ESP + 0x6000]    ; 00502e8f
    MOV dword ptr [ESP + 0x6028],EAX    ; 00502e96
    LEA EAX,[ESP + 0x5408]              ; 00502e9d
    MOV dword ptr [ESP + 0x6050],ESI    ; 00502ea4
    MOV dword ptr [ESP + 0x602c],EAX    ; 00502eab
    XOR EAX,EAX                         ; 00502eb2
    MOV ECX,EAX                         ; 00502eb4
        ;   Label: LAB_00502eb4
    TEST EDI,EDI                        ; 00502eb6
    JLE 0x00502f00                      ; 00502eb8
        ;   XREF to: 00502f00 (CONDITIONAL_JUMP)  ; LAB_00502f00
    MOV EBX,dword ptr [ESP + 0x6050]    ; 00502eba
    MOV EDX,dword ptr [ESP + 0x602c]    ; 00502ec1
    MOV ESI,dword ptr [ESP + 0x6028]    ; 00502ec8
    ADD EBX,EDX                         ; 00502ecf
    MOV EDX,dword ptr [ESP + 0x6050]    ; 00502ed1
    ADD EDX,ESI                         ; 00502ed8
    FLD float ptr [EDX]                 ; 00502eda
        ;   Label: LAB_00502eda
    MOV ESI,dword ptr [EBX]             ; 00502edc
    FLD ST0                             ; 00502ede
    FMUL double ptr [ESI*0x8 + 0x601360] ; 00502ee0 | DAT_00601360
    ADD EBX,0x180                       ; 00502ee7
    ADD EDX,0x180                       ; 00502eed
    INC ECX                             ; 00502ef3
    FSTP ST1                            ; 00502ef4
    FSTP float ptr [EDX + 0xfffffe80]   ; 00502ef6
    CMP ECX,EDI                         ; 00502efc
    JL 0x00502eda                       ; 00502efe
        ;   XREF to: 00502eda (CONDITIONAL_JUMP)  ; LAB_00502eda
    MOV EDX,dword ptr [ESP + 0x6050]    ; 00502f00
        ;   Label: LAB_00502f00
    ADD EDX,0x4                         ; 00502f07
    MOV dword ptr [ESP + 0x6050],EDX    ; 00502f0a
    CMP EDX,0x80                        ; 00502f11
    JNZ 0x00502eb4                      ; 00502f17
        ;   XREF to: 00502eb4 (CONDITIONAL_JUMP)  ; LAB_00502eb4
    MOV ESI,dword ptr [ESP + 0x6018]    ; 00502f19
    XOR EBX,EBX                         ; 00502f20
    TEST ESI,ESI                        ; 00502f22
    JLE 0x00502f5b                      ; 00502f24
        ;   XREF to: 00502f5b (CONDITIONAL_JUMP)  ; LAB_00502f5b
    LEA EDI,[ESP + 0x2408]              ; 00502f26
    LEA ESI,[ESP + 0x5708]              ; 00502f2d
    PUSH EDI                            ; 00502f34
        ;   Label: LAB_00502f34
    PUSH EBX                            ; 00502f35
    PUSH ESI                            ; 00502f36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502f37
    PUSH EAX                            ; 00502f3a
    ADD EDI,0x480                       ; 00502f3b
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90 ; 00502f41
        ;   XREF to: 004feb90 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 00502f46
    INC EBX                             ; 00502f49
    MOV EDX,dword ptr [ESP + 0x6018]    ; 00502f4a
    ADD ESI,0x180                       ; 00502f51
    CMP EBX,EDX                         ; 00502f57
    JL 0x00502f34                       ; 00502f59
        ;   XREF to: 00502f34 (CONDITIONAL_JUMP)  ; LAB_00502f34
    MOV ECX,dword ptr [ESP + 0x6088]    ; 00502f5b
        ;   Label: LAB_00502f5b
    INC ECX                             ; 00502f62
    MOV dword ptr [ESP + 0x6088],ECX    ; 00502f63
    CMP ECX,0xc                         ; 00502f6a
    JL 0x00502e36                       ; 00502f6d
        ;   XREF to: 00502e36 (CONDITIONAL_JUMP)  ; LAB_00502e36
    CMP dword ptr [ESP + 0x5fcc],0x0    ; 00502f73
        ;   Label: LAB_00502f73
    JLE 0x00503090                      ; 00502f7b
        ;   XREF to: 00503090 (CONDITIONAL_JUMP)  ; LAB_00503090
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 00502f81
    DEC EAX                             ; 00502f88
    SHL EAX,0x2                         ; 00502f89
    MOV ECX,EAX                         ; 00502f8c
    SHL ECX,0x4                         ; 00502f8e
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 00502f91
    SUB ECX,EAX                         ; 00502f98
    LEA EAX,[EDX*0x4 + 0x0]             ; 00502f9a
    SUB EAX,EDX                         ; 00502fa1
    SHL EAX,0x2                         ; 00502fa3
    MOV EDX,EAX                         ; 00502fa6
    SHL EAX,0x4                         ; 00502fa8
    SUB EAX,EDX                         ; 00502fab
    ADD ECX,EAX                         ; 00502fad
    MOV EAX,dword ptr [ESP + 0x5fcc]    ; 00502faf
    MOV EDX,dword ptr [ESP + 0x5fd0]    ; 00502fb6
    FILD dword ptr [ECX + EAX*0x4 + 0x6011f8] ; 00502fbd | DAT_006011f8
    MOV EAX,dword ptr [ESP + 0x5fc0]    ; 00502fc4
    SHL EDX,0x3                         ; 00502fcb
    SHL EAX,0x5                         ; 00502fce
    XOR ECX,ECX                         ; 00502fd1
    ADD EAX,EDX                         ; 00502fd3
    MOV EDX,dword ptr [ESP]             ; 00502fd5
    MOV dword ptr [ESP + 0x6010],ECX    ; 00502fd8
    MOV dword ptr [ESP + 0x600c],EDX    ; 00502fdf
    FILD qword ptr [ESP + 0x600c]       ; 00502fe6
    FDIV double ptr [EAX + 0x6011b8]    ; 00502fed | DAT_006011b8
    FMULP                               ; 00502ff3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00502ff5
    MOV dword ptr [ESP + 0x6010],ECX    ; 00502ff9
    MOV dword ptr [ESP + 0x600c],EAX    ; 00503000
    FILD qword ptr [ESP + 0x600c]       ; 00503007
    FDIVP                               ; 0050300e
    MOV ESI,dword ptr [ESP + 0x5fd4]    ; 00503010
    CALL crt_math.c_round_FUN_005a3120  ; 00503017
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x6048]      ; 0050301c
    TEST ESI,ESI                        ; 00503023
    JZ 0x0050302e                       ; 00503025
        ;   XREF to: 0050302e (CONDITIONAL_JUMP)  ; LAB_0050302e
    INC dword ptr [ESP + 0x6048]        ; 00503027
    MOV EAX,dword ptr [ESP + 0x6048]    ; 0050302e
        ;   Label: LAB_0050302e
    IMUL EAX,dword ptr [ESP + 0x4]      ; 00503035
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050303a
    MOV ECX,dword ptr [ESP + 0x608c]    ; 0050303d
    MOV dword ptr [ESP + 0x6048],EAX    ; 00503044
    MOV EAX,dword ptr [ESI + 0x532c]    ; 0050304b
    SUB EAX,ECX                         ; 00503051
    MOV EBX,dword ptr [ESP + 0x6048]    ; 00503053
    ADD EAX,0xc                         ; 0050305a
    SUB EBX,EAX                         ; 0050305d
    MOV dword ptr [ESP + 0x6048],EBX    ; 0050305f
    ADD ESI,0x5320                      ; 00503066
    MOV EDI,dword ptr [ESP + 0x6048]    ; 0050306c
    XOR EBX,EBX                         ; 00503073
    TEST EDI,EDI                        ; 00503075
    JLE 0x00503090                      ; 00503077
        ;   XREF to: 00503090 (CONDITIONAL_JUMP)  ; LAB_00503090
    PUSH ESI                            ; 00503079
        ;   Label: LAB_00503079
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0 ; 0050307a
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_004fd4f0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0050307f
    INC EBX                             ; 00503082
    CMP EBX,dword ptr [ESP + 0x6048]    ; 00503083
    JL 0x00503079                       ; 0050308a
        ;   XREF to: 00503079 (CONDITIONAL_JUMP)  ; LAB_00503079
    LEA EAX,[EAX]                       ; 0050308c
    MOV EDX,dword ptr [ESP + 0x6020]    ; 00503090
        ;   Label: LAB_00503090
    LEA ESI,[EDX*0x8 + 0x0]             ; 00503097
    ADD ESI,EDX                         ; 0050309e
    SHL ESI,0x6                         ; 005030a0
    MOV EAX,ESI                         ; 005030a3
    MOV ESP,EBP                         ; 005030a5
    POP EBP                             ; 005030a7
    POP EDI                             ; 005030a8
    POP ESI                             ; 005030a9
    POP EBX                             ; 005030aa
    RET                                 ; 005030ab
    MOV dword ptr [ESP],0x480           ; 005030ac
        ;   Label: LAB_005030ac
    LEA EAX,[ESP + 0x5ff0]              ; 005030b3
    PUSH EAX                            ; 005030ba
    LEA EAX,[ESP + 0x5e44]              ; 005030bb
    PUSH EAX                            ; 005030c2
    MOV EDI,0x8                         ; 005030c3
    PUSH ESI                            ; 005030c8
    MOV dword ptr [ESP + 0x10],EDI      ; 005030c9
    CALL sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004fdd10 ; 005030cd
        ;   XREF to: 004fdd10 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004fdd10(CFileBitStream * this_ptr, SMpegSubbandAllocation * output_allocation, SMpegFrame * frame)
    ADD ESP,0xc                         ; 005030d2
    LEA EAX,[ESP + 0x5ff0]              ; 005030d5
    PUSH EAX                            ; 005030dc
    LEA EAX,[ESP + 0x540c]              ; 005030dd
    PUSH EAX                            ; 005030e4
    LEA EAX,[ESP + 0x5e48]              ; 005030e5
    PUSH EAX                            ; 005030ec
    LEA EAX,[ESP + 0x5d4c]              ; 005030ed
    PUSH EAX                            ; 005030f4
    PUSH ESI                            ; 005030f5
    CALL sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80 ; 005030f6
        ;   XREF to: 004fdf80 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80(CFileBitStream * this_ptr, SMpegSubbandSCFSI * scfsi_array, SMpegSubbandAllocation * allocation_array, SMpegSubbandScalefactors * scalefactor_array, ...)
    ADD ESP,0x14                        ; 005030fb
    XOR EDX,EDX                         ; 005030fe
    MOV dword ptr [ESP + 0x6014],EDX    ; 00503100
    MOV dword ptr [ESP + 0x6030],ESI    ; 00503107
    LEA EAX,[ESP + 0x5ff0]              ; 0050310e
        ;   Label: LAB_0050310e
    PUSH EAX                            ; 00503115
    LEA EAX,[ESP + 0x5e44]              ; 00503116
    PUSH EAX                            ; 0050311d
    LEA EAX,[ESP + 0x5110]              ; 0050311e
    PUSH EAX                            ; 00503125
    MOV EDI,dword ptr [ESP + 0x603c]    ; 00503126
    PUSH EDI                            ; 0050312d
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0 ; 0050312e
        ;   XREF to: 004fe2f0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0(CFileBitStream * this_ptr, SMpegSubbandScalefactors * sample_array, SMpegSubbandAllocation * allocation_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 00503133
    LEA EAX,[ESP + 0x5ff0]              ; 00503136
    PUSH EAX                            ; 0050313d
    LEA EAX,[ESP + 0x570c]              ; 0050313e
    PUSH EAX                            ; 00503145
    LEA EAX,[ESP + 0x5e48]              ; 00503146
    PUSH EAX                            ; 0050314d
    LEA EAX,[ESP + 0x5114]              ; 0050314e
    PUSH EAX                            ; 00503155
    CALL sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004fe580 ; 00503156
        ;   XREF to: 004fe580 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004fe580()
    ADD ESP,0x10                        ; 0050315b
    MOV EAX,dword ptr [ESP + 0x6014]    ; 0050315e
    SAR EAX,0x2                         ; 00503165
    PUSH EAX                            ; 00503168
    LEA EAX,[ESP + 0x5ff4]              ; 00503169
    PUSH EAX                            ; 00503170
    LEA EAX,[ESP + 0x5410]              ; 00503171
    PUSH EAX                            ; 00503178
    LEA EAX,[ESP + 0x5714]              ; 00503179
    PUSH EAX                            ; 00503180
    CALL sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004fe990 ; 00503181
        ;   XREF to: 004fe990 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004fe990()
    ADD ESP,0x10                        ; 00503186
    TEST EBX,EBX                        ; 00503189
    JNZ 0x005031aa                      ; 0050318b
        ;   XREF to: 005031aa (CONDITIONAL_JUMP)  ; LAB_005031aa
    MOV EDI,dword ptr [ESP + 0x6014]    ; 0050318d
        ;   Label: LAB_0050318d
    INC EDI                             ; 00503194
    MOV dword ptr [ESP + 0x6014],EDI    ; 00503195
    CMP EDI,0xc                         ; 0050319c
    JL 0x0050310e                       ; 0050319f
        ;   XREF to: 0050310e (CONDITIONAL_JUMP)  ; LAB_0050310e
    JMP 0x00502f73                      ; 005031a5
        ;   XREF to: 00502f73 (UNCONDITIONAL_JUMP)  ; LAB_00502f73
    XOR EAX,EAX                         ; 005031aa
        ;   Label: LAB_005031aa
    MOV dword ptr [ESP + 0x6080],EAX    ; 005031ac
    MOV dword ptr [ESP + 0x607c],EAX    ; 005031b3
    MOV ECX,dword ptr [ESP + 0x6018]    ; 005031ba
        ;   Label: LAB_005031ba
    XOR ESI,ESI                         ; 005031c1
    TEST ECX,ECX                        ; 005031c3
    JLE 0x0050322a                      ; 005031c5
        ;   XREF to: 0050322a (CONDITIONAL_JUMP)  ; LAB_0050322a
    MOV EDX,dword ptr [ESP + 0x607c]    ; 005031c7
    LEA EAX,[ESP + 0x5708]              ; 005031ce
    ADD EAX,EDX                         ; 005031d5
    MOV EDI,dword ptr [ESP + 0x6080]    ; 005031d7
    MOV dword ptr [ESP + 0x609c],EAX    ; 005031de
    LEA EAX,[ESP + 0x2408]              ; 005031e5
    ADD EDI,EAX                         ; 005031ec
    PUSH EDI                            ; 005031ee
        ;   Label: LAB_005031ee
    PUSH ESI                            ; 005031ef
    MOV EAX,dword ptr [ESP + 0x60a4]    ; 005031f0
    PUSH EAX                            ; 005031f7
    MOV EDX,dword ptr [EBP + 0x14]      ; 005031f8
    PUSH EDX                            ; 005031fb
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90 ; 005031fc
        ;   XREF to: 004feb90 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 00503201
    ADD EDI,0x480                       ; 00503204
    MOV ECX,dword ptr [ESP + 0x609c]    ; 0050320a
    INC ESI                             ; 00503211
    ADD ECX,0x180                       ; 00503212
    MOV EAX,dword ptr [ESP + 0x6018]    ; 00503218
    MOV dword ptr [ESP + 0x609c],ECX    ; 0050321f
    CMP ESI,EAX                         ; 00503226
    JL 0x005031ee                       ; 00503228
        ;   XREF to: 005031ee (CONDITIONAL_JUMP)  ; LAB_005031ee
    MOV ECX,dword ptr [ESP + 0x6080]    ; 0050322a
        ;   Label: LAB_0050322a
    MOV EDX,dword ptr [ESP + 0x607c]    ; 00503231
    ADD ECX,0x40                        ; 00503238
    ADD EDX,0x80                        ; 0050323b
    MOV dword ptr [ESP + 0x6080],ECX    ; 00503241
    MOV dword ptr [ESP + 0x607c],EDX    ; 00503248
    CMP ECX,0xc0                        ; 0050324f
    JNZ 0x005031ba                      ; 00503255
        ;   XREF to: 005031ba (CONDITIONAL_JUMP)  ; LAB_005031ba
    XOR EDI,EDI                         ; 0050325b
    MOV dword ptr [ESP + 0x6084],EDI    ; 0050325d
    MOV dword ptr [ESP + 0x6014],EDI    ; 00503264
    MOV EAX,dword ptr [ESP + 0x6084]    ; 0050326b
        ;   Label: LAB_0050326b
    XOR EDI,EDI                         ; 00503272
    MOV ESI,dword ptr [ESP + 0x6018]    ; 00503274
        ;   Label: LAB_00503274
    XOR ECX,ECX                         ; 0050327b
    TEST ESI,ESI                        ; 0050327d
    JLE 0x005032a5                      ; 0050327f
        ;   XREF to: 005032a5 (CONDITIONAL_JUMP)  ; LAB_005032a5
    LEA ESI,[EDI + EAX*0x1]             ; 00503281
    ADD EBX,0x2                         ; 00503284
        ;   Label: LAB_00503284
    MOV DX,word ptr [ESP + ESI*0x1 + 0x2408] ; 00503287
    INC ECX                             ; 0050328f
    MOV word ptr [EBX + -0x2],DX        ; 00503290
    MOV EDX,dword ptr [ESP + 0x6018]    ; 00503294
    ADD ESI,0x480                       ; 0050329b
    CMP ECX,EDX                         ; 005032a1
    JL 0x00503284                       ; 005032a3
        ;   XREF to: 00503284 (CONDITIONAL_JUMP)  ; LAB_00503284
    ADD EDI,0x2                         ; 005032a5
        ;   Label: LAB_005032a5
    CMP EDI,0x40                        ; 005032a8
    JNZ 0x00503274                      ; 005032ab
        ;   XREF to: 00503274 (CONDITIONAL_JUMP)  ; LAB_00503274
    MOV ECX,dword ptr [ESP + 0x6084]    ; 005032ad
    ADD ECX,EDI                         ; 005032b4
    MOV dword ptr [ESP + 0x6084],ECX    ; 005032b6
    CMP ECX,0xc0                        ; 005032bd
    JZ 0x0050318d                       ; 005032c3
        ;   XREF to: 0050318d (CONDITIONAL_JUMP)  ; LAB_0050318d
    JMP 0x0050326b                      ; 005032c9
        ;   XREF to: 0050326b (UNCONDITIONAL_JUMP)  ; LAB_0050326b
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 005032cb
        ;   Label: LAB_005032cb
    MOV ESI,0x8                         ; 005032d2
    MOV EDI,dword ptr [EAX]             ; 005032d7
    MOV dword ptr [ESP + 0x4],ESI       ; 005032d9
    TEST EDI,EDI                        ; 005032dd
    JZ 0x0050343a                       ; 005032df
        ;   XREF to: 0050343a (CONDITIONAL_JUMP)  ; LAB_0050343a
    MOV dword ptr [ESP],0x480           ; 005032e5
    LEA EAX,[ESP + 0x5ff0]              ; 005032ec
        ;   Label: LAB_005032ec
    PUSH EAX                            ; 005032f3
    LEA EAX,[ESP + 0x5bfc]              ; 005032f4
    PUSH EAX                            ; 005032fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005032fc
    ADD EAX,0x5320                      ; 005032ff
    PUSH EAX                            ; 00503304
    MOV ESI,dword ptr [EBP + 0x14]      ; 00503305
    PUSH ESI                            ; 00503308
    MOV dword ptr [ESP + 0x604c],EAX    ; 00503309
    CALL sound_mp3.cpp_FUN_004fee40     ; 00503310
        ;   XREF to: 004fee40 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_004fee40(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3SideInfo * side_info_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 00503315
    MOV ECX,0x7                         ; 00503318
    SUB ESP,0x1c                        ; 0050331d
    LEA ESI,[ESP + 0x600c]              ; 00503320
    MOV EDI,ESP                         ; 00503327
    MOVSD.REP ES:EDI,ESI                ; 00503329
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_00502190 ; 0050332b
        ;   XREF to: 00502190 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateMainDataSize_FUN_00502190()
    ADD ESP,0x1c                        ; 00503330
    MOV ESI,EAX                         ; 00503333
    TEST EAX,EAX                        ; 00503335
    JLE 0x00503360                      ; 00503337
        ;   XREF to: 00503360 (CONDITIONAL_JUMP)  ; LAB_00503360
    MOV EDI,dword ptr [ESP + 0x603c]    ; 00503339
    PUSH 0x8                            ; 00503340
        ;   Label: LAB_00503340
    PUSH 0x8                            ; 00503342
    PUSH EDI                            ; 00503344
    CALL sound_mp3.cpp_FUN_004fd5e0     ; 00503345
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_004fd5e0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0050334a
    PUSH EAX                            ; 0050334d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050334e
    PUSH EDX                            ; 00503351
    DEC ESI                             ; 00503352
    CALL sound_mp3.cpp_FUN_004fd900     ; 00503353
        ;   XREF to: 004fd900 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_004fd900(CMP3Decoder * this_ptr, uint byte_value, uint bits_per_byte)
    ADD ESP,0xc                         ; 00503358
    TEST ESI,ESI                        ; 0050335b
    JG 0x00503340                       ; 0050335d
        ;   XREF to: 00503340 (CONDITIONAL_JUMP)  ; LAB_00503340
    NOP                                 ; 0050335f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00503360
        ;   Label: LAB_00503360
    PUSH ECX                            ; 00503363
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800 ; 00503364
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00503369
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050336c
    PUSH EDI                            ; 0050336f
    MOV ESI,EAX                         ; 00503370
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800 ; 00503372
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00503377
    XOR EDX,EDX                         ; 0050337a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050337c
    DIV ECX                             ; 00503380
    SHR ESI,0x3                         ; 00503382
    TEST EDX,EDX                        ; 00503385
    JZ 0x00503398                       ; 00503387
        ;   XREF to: 00503398 (CONDITIONAL_JUMP)  ; LAB_00503398
    MOV EAX,ECX                         ; 00503389
    SUB EAX,EDX                         ; 0050338b
    PUSH EAX                            ; 0050338d
    PUSH EDI                            ; 0050338e
    INC ESI                             ; 0050338f
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 00503390
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00503395
    MOV EAX,dword ptr [EBP + 0x14]      ; 00503398
        ;   Label: LAB_00503398
    MOV EAX,dword ptr [EAX + 0x534c]    ; 0050339b
    MOV EDX,dword ptr [ESP + 0x5bf8]    ; 005033a1
    SUB EAX,ESI                         ; 005033a8
    SUB EAX,EDX                         ; 005033aa
    MOV dword ptr [ESP + 0x6038],EAX    ; 005033ac
    CMP ESI,0x1000                      ; 005033b3
    JLE 0x005033de                      ; 005033b9
        ;   XREF to: 005033de (CONDITIONAL_JUMP)  ; LAB_005033de
    MOV ECX,dword ptr [EBP + 0x14]      ; 005033bb
    MOV ESI,dword ptr [ECX + 0x534c]    ; 005033be
    PUSH 0x1000                         ; 005033c4
    SUB ESI,0x1000                      ; 005033c9
    PUSH ECX                            ; 005033cf
    MOV dword ptr [ECX + 0x534c],ESI    ; 005033d0
    CALL sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004fd9c0 ; 005033d6
        ;   XREF to: 004fd9c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004fd9c0(CMP3Decoder * this_ptr, int num_bytes)
    ADD ESP,0x8                         ; 005033db
    MOV ECX,0x7                         ; 005033de
        ;   Label: LAB_005033de
    SUB ESP,0x1c                        ; 005033e3
    LEA ESI,[ESP + 0x600c]              ; 005033e6
    MOV EDI,ESP                         ; 005033ed
    MOVSD.REP ES:EDI,ESI                ; 005033ef
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_00502190 ; 005033f1
        ;   XREF to: 00502190 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateMainDataSize_FUN_00502190()
    ADD ESP,0x1c                        ; 005033f6
    MOV EDX,dword ptr [EBP + 0x14]      ; 005033f9
    MOV EDI,dword ptr [EDX + 0x534c]    ; 005033fc
    ADD EDI,EAX                         ; 00503402
    MOV EAX,dword ptr [ESP + 0x6038]    ; 00503404
    MOV dword ptr [EDX + 0x534c],EDI    ; 0050340b
    TEST EAX,EAX                        ; 00503411
    JL 0x00503446                       ; 00503413
        ;   XREF to: 00503446 (CONDITIONAL_JUMP)  ; LAB_00503446
    MOV ESI,dword ptr [ESP + 0x6038]    ; 00503415
        ;   Label: LAB_00503415
    TEST ESI,ESI                        ; 0050341c
    JLE 0x00503474                      ; 0050341e
        ;   XREF to: 00503474 (CONDITIONAL_JUMP)  ; LAB_00503474
    PUSH 0x8                            ; 00503420
    MOV EDX,dword ptr [EBP + 0x14]      ; 00503422
    PUSH EDX                            ; 00503425
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 00503426
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0050342b
    LEA ECX,[ESI + -0x1]                ; 0050342e
    MOV dword ptr [ESP + 0x6038],ECX    ; 00503431
    JMP 0x00503415                      ; 00503438
        ;   XREF to: 00503415 (UNCONDITIONAL_JUMP)  ; LAB_00503415
    MOV dword ptr [ESP],0x240           ; 0050343a
        ;   Label: LAB_0050343a
    JMP 0x005032ec                      ; 00503441
        ;   XREF to: 005032ec (UNCONDITIONAL_JUMP)  ; LAB_005032ec
    MOV EAX,dword ptr [ESP + 0x601c]    ; 00503446
        ;   Label: LAB_00503446
    DEC EAX                             ; 0050344d
    PUSH EAX                            ; 0050344e
    MOV EDX,0x5ca3a7                    ; 0050344f | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1029                      ; 00503454
    PUSH 0x5ca3b8                       ; 00503459 | = "Not enough main data to decode frame %d."
    MOV dword ptr [0x01d71de0],EDX      ; 0050345e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00503464 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050346a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0050346f
    JMP 0x00503415                      ; 00503472
        ;   XREF to: 00503415 (UNCONDITIONAL_JUMP)  ; LAB_00503415
    TEST EBX,EBX                        ; 00503474
        ;   Label: LAB_00503474
    JZ 0x00502f73                       ; 00503476
        ;   XREF to: 00502f73 (CONDITIONAL_JUMP)  ; LAB_00502f73
    XOR EDI,EDI                         ; 0050347c
    MOV EAX,dword ptr [ESP + 0x6020]    ; 0050347e
    MOV dword ptr [ESP + 0x6034],EDI    ; 00503485
    TEST EAX,EAX                        ; 0050348c
    JLE 0x00502f73                      ; 0050348e
        ;   XREF to: 00502f73 (CONDITIONAL_JUMP)  ; LAB_00502f73
    LEA EAX,[ESP + 0x5c10]              ; 00503494
    MOV dword ptr [ESP + 0x6078],EDI    ; 0050349b
    MOV dword ptr [ESP + 0x6074],EAX    ; 005034a2
    MOV EDI,dword ptr [ESP + 0x6018]    ; 005034a9
        ;   Label: LAB_005034a9
    XOR ESI,ESI                         ; 005034b0
    TEST EDI,EDI                        ; 005034b2
    JLE 0x005035b1                      ; 005034b4
        ;   XREF to: 005035b1 (CONDITIONAL_JUMP)  ; LAB_005035b1
    LEA EAX,[ESP + 0x8]                 ; 005034ba
    MOV EDI,dword ptr [ESP + 0x6078]    ; 005034be
    MOV dword ptr [ESP + 0x6054],EAX    ; 005034c5
    ADD EDI,0x10                        ; 005034cc
    LEA EAX,[ESP + 0x5c00]              ; 005034cf
    ADD EDI,EAX                         ; 005034d6
    MOV EDX,dword ptr [EBP + 0x14]      ; 005034d8
        ;   Label: LAB_005034d8
    PUSH EDX                            ; 005034db
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800 ; 005034dc
        ;   XREF to: 004fd800 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005034e1
    MOV dword ptr [ESP + 0x6040],EAX    ; 005034e4
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 005034eb
    CMP dword ptr [EAX],0x0             ; 005034f2
    JZ 0x005038f2                       ; 005034f5
        ;   XREF to: 005038f2 (CONDITIONAL_JUMP)  ; LAB_005038f2
    LEA EAX,[ESP + 0x5ff0]              ; 005034fb
    PUSH EAX                            ; 00503502
    PUSH ESI                            ; 00503503
    MOV ECX,dword ptr [ESP + 0x603c]    ; 00503504
    PUSH ECX                            ; 0050350b
    LEA EAX,[ESP + 0x5c04]              ; 0050350c
    PUSH EAX                            ; 00503513
    LEA EAX,[ESP + 0x5a18]              ; 00503514
    PUSH EAX                            ; 0050351b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050351c
    PUSH EAX                            ; 0050351f
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004ff3c0 ; 00503520
        ;   XREF to: 004ff3c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004ff3c0(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x18                        ; 00503525
        ;   Label: LAB_00503525
    LEA EAX,[ESP + 0x5ff0]              ; 00503528
    PUSH EAX                            ; 0050352f
    MOV EAX,dword ptr [ESP + 0x6044]    ; 00503530
    PUSH EAX                            ; 00503537
    MOV EDX,dword ptr [ESP + 0x603c]    ; 00503538
    PUSH EDX                            ; 0050353f
    PUSH ESI                            ; 00503540
    LEA EAX,[ESP + 0x5c08]              ; 00503541
    PUSH EAX                            ; 00503548
    LEA EAX,[ESP + 0x481c]              ; 00503549
    PUSH EAX                            ; 00503550
    MOV ECX,dword ptr [EBP + 0x14]      ; 00503551
    PUSH ECX                            ; 00503554
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20 ; 00503555
        ;   XREF to: 004ffd20 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20(CMP3Decoder * this_ptr, SMpegSubbandQuantizedSamples * quantized_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x1c                        ; 0050355a
    LEA EAX,[ESP + 0x5ff0]              ; 0050355d
    PUSH EAX                            ; 00503564
    PUSH ESI                            ; 00503565
    PUSH EDI                            ; 00503566
    LEA EAX,[ESP + 0x5a14]              ; 00503567
    PUSH EAX                            ; 0050356e
    MOV EAX,dword ptr [ESP + 0x6064]    ; 0050356f
    PUSH EAX                            ; 00503576
    LEA EAX,[ESP + 0x481c]              ; 00503577
    PUSH EAX                            ; 0050357e
    CALL sound_mp3.cpp_requantizeLayer3Samples_FUN_005003f0 ; 0050357f
        ;   XREF to: 005003f0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeLayer3Samples_FUN_005003f0()
    ADD ESP,0x18                        ; 00503584
    INC ESI                             ; 00503587
    MOV EDX,dword ptr [ESP + 0x6054]    ; 00503588
    ADD EDI,0xa0                        ; 0050358f
    ADD EDX,0x900                       ; 00503595
    MOV ECX,dword ptr [ESP + 0x6018]    ; 0050359b
    MOV dword ptr [ESP + 0x6054],EDX    ; 005035a2
    CMP ESI,ECX                         ; 005035a9
    JL 0x005034d8                       ; 005035ab
        ;   XREF to: 005034d8 (CONDITIONAL_JUMP)  ; LAB_005034d8
    LEA EAX,[ESP + 0x5ff0]              ; 005035b1
        ;   Label: LAB_005035b1
    PUSH EAX                            ; 005035b8
    MOV ESI,dword ptr [ESP + 0x6078]    ; 005035b9
    PUSH ESI                            ; 005035c0
    LEA EAX,[ESP + 0x5a10]              ; 005035c1
    PUSH EAX                            ; 005035c8
    LEA EAX,[ESP + 0x1214]              ; 005035c9
    PUSH EAX                            ; 005035d0
    LEA EAX,[ESP + 0x18]                ; 005035d1
    PUSH EAX                            ; 005035d5
    CALL sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00500c80 ; 005035d6
        ;   XREF to: 00500c80 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00500c80()
    ADD ESP,0x14                        ; 005035db
    XOR EDI,EDI                         ; 005035de
    MOV EAX,dword ptr [ESP + 0x6018]    ; 005035e0
    MOV dword ptr [ESP + 0x6090],EDI    ; 005035e7
    TEST EAX,EAX                        ; 005035ee
    JLE 0x0050384a                      ; 005035f0
        ;   XREF to: 0050384a (CONDITIONAL_JUMP)  ; LAB_0050384a
    MOV EDX,dword ptr [ESP + 0x6078]    ; 005035f6
    LEA EAX,[ESP + 0x5c00]              ; 005035fd
    ADD EDX,0x10                        ; 00503604
    ADD EAX,EDX                         ; 00503607
    LEA EDX,[ESP + 0x1208]              ; 00503609
    MOV dword ptr [ESP + 0x6064],EAX    ; 00503610
    MOV dword ptr [ESP + 0x606c],EAX    ; 00503617
    LEA EAX,[ESP + 0x2408]              ; 0050361e
    MOV dword ptr [ESP + 0x6068],EDX    ; 00503625
    MOV dword ptr [ESP + 0x6070],EAX    ; 0050362c
    LEA EAX,[ESP + 0x5ff0]              ; 00503633
        ;   Label: LAB_00503633
    PUSH EAX                            ; 0050363a
    MOV ESI,dword ptr [ESP + 0x6070]    ; 0050363b
    PUSH ESI                            ; 00503642
    LEA EAX,[ESP + 0x2d10]              ; 00503643
    PUSH EAX                            ; 0050364a
    MOV EDI,dword ptr [ESP + 0x6074]    ; 0050364b
    PUSH EDI                            ; 00503652
    CALL sound_mp3.cpp_reorderShortBlockSamples_FUN_005008a0 ; 00503653
        ;   XREF to: 005008a0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_reorderShortBlockSamples_FUN_005008a0()
    ADD ESP,0x10                        ; 00503658
    LEA EAX,[ESP + 0x5ff0]              ; 0050365b
    PUSH EAX                            ; 00503662
    PUSH ESI                            ; 00503663
    LEA EAX,[ESP + 0x3610]              ; 00503664
    PUSH EAX                            ; 0050366b
    LEA EAX,[ESP + 0x2d14]              ; 0050366c
    PUSH EAX                            ; 00503673
    CALL sound_mp3.cpp_antiAliasingButterfly_FUN_005019f0 ; 00503674
        ;   XREF to: 005019f0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_antiAliasingButterfly_FUN_005019f0()
    ADD ESP,0x10                        ; 00503679
    MOV EAX,dword ptr [ESP + 0x6064]    ; 0050367c
    LEA EDI,[ESP + 0x3608]              ; 00503683
    MOV dword ptr [ESP + 0x6044],EAX    ; 0050368a
    LEA EAX,[ESP + 0x3f08]              ; 00503691
    XOR ESI,ESI                         ; 00503698
    MOV dword ptr [ESP + 0x6058],EAX    ; 0050369a
    LEA EDX,[ESP + 0x5ff0]              ; 005036a1
        ;   Label: LAB_005036a1
    PUSH EDX                            ; 005036a8
    MOV EDX,dword ptr [ESP + 0x6048]    ; 005036a9
    PUSH EDX                            ; 005036b0
    MOV ECX,dword ptr [ESP + 0x6098]    ; 005036b1
    PUSH ECX                            ; 005036b8
    PUSH ESI                            ; 005036b9
    MOV EAX,dword ptr [ESP + 0x6068]    ; 005036ba
    PUSH EAX                            ; 005036c1
    PUSH EDI                            ; 005036c2
    MOV EDX,dword ptr [EBP + 0x14]      ; 005036c3
    PUSH EDX                            ; 005036c6
    CALL sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_005020e0 ; 005036c7
        ;   XREF to: 005020e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_005020e0(CMP3Decoder * this_ptr, float * input_samples, float * output_buffer, int subband_index, ...)
    ADD ESP,0x1c                        ; 005036cc
    MOV ECX,dword ptr [ESP + 0x6058]    ; 005036cf
    INC ESI                             ; 005036d6
    ADD ECX,0x48                        ; 005036d7
    ADD EDI,0x48                        ; 005036da
    MOV dword ptr [ESP + 0x6058],ECX    ; 005036dd
    CMP ESI,0x20                        ; 005036e4
    JL 0x005036a1                       ; 005036e7
        ;   XREF to: 005036a1 (CONDITIONAL_JUMP)  ; LAB_005036a1
    XOR ESI,ESI                         ; 005036e9
    MOV dword ptr [ESP + 0x605c],ESI    ; 005036eb
    MOV dword ptr [ESP + 0x6094],ESI    ; 005036f2
    MOV EAX,dword ptr [ESP + 0x6094]    ; 005036f9
        ;   Label: LAB_005036f9
    MOV EDX,EAX                         ; 00503700
    MOV ESI,0x2                         ; 00503702
    SAR EDX,0x1f                        ; 00503707
    IDIV ESI                            ; 0050370a
    XOR ECX,ECX                         ; 0050370c
    MOV ESI,dword ptr [ESP + 0x605c]    ; 0050370e
    MOV EDI,EDX                         ; 00503715
    TEST EDI,EDI                        ; 00503717
        ;   Label: LAB_00503717
    JZ 0x00503748                       ; 00503719
        ;   XREF to: 00503748 (CONDITIONAL_JUMP)  ; LAB_00503748
    MOV dword ptr [ESP + 0x604c],0x2    ; 0050371b
    MOV EDX,ECX                         ; 00503726
    MOV EAX,ECX                         ; 00503728
    SAR EDX,0x1f                        ; 0050372a
    IDIV dword ptr [ESP + 0x604c]       ; 0050372d
    TEST EDX,EDX                        ; 00503734
    JZ 0x00503748                       ; 00503736
        ;   XREF to: 00503748 (CONDITIONAL_JUMP)  ; LAB_00503748
    FLD float ptr [ESP + ESI*0x1 + 0x3f08] ; 00503738
    FCHS                                ; 0050373f
    FSTP float ptr [ESP + ESI*0x1 + 0x3f08] ; 00503741
    INC ECX                             ; 00503748
        ;   Label: LAB_00503748
    ADD ESI,0x48                        ; 00503749
    CMP ECX,0x20                        ; 0050374c
    JL 0x00503717                       ; 0050374f
        ;   XREF to: 00503717 (CONDITIONAL_JUMP)  ; LAB_00503717
    MOV EDX,dword ptr [ESP + 0x6094]    ; 00503751
    MOV EAX,dword ptr [ESP + 0x605c]    ; 00503758
    INC EDX                             ; 0050375f
    ADD EAX,0x4                         ; 00503760
    MOV dword ptr [ESP + 0x6094],EDX    ; 00503763
    MOV dword ptr [ESP + 0x605c],EAX    ; 0050376a
    CMP EDX,0x12                        ; 00503771
    JL 0x005036f9                       ; 00503774
        ;   XREF to: 005036f9 (CONDITIONAL_JUMP)  ; LAB_005036f9
    MOV EAX,dword ptr [ESP + 0x6070]    ; 00503776
    XOR EDI,EDI                         ; 0050377d
    MOV dword ptr [ESP + 0x6060],EAX    ; 0050377f
    MOV ESI,EDI                         ; 00503786
        ;   Label: LAB_00503786
    XOR ECX,ECX                         ; 00503788
    ADD ECX,0x4                         ; 0050378a
        ;   Label: LAB_0050378a
    FLD float ptr [ESP + ESI*0x1 + 0x3f08] ; 0050378d
    ADD ESI,0x48                        ; 00503794
    FSTP float ptr [ESP + ECX*0x1 + 0x5f3c] ; 00503797
    CMP ECX,0x80                        ; 0050379e
    JNZ 0x0050378a                      ; 005037a4
        ;   XREF to: 0050378a (CONDITIONAL_JUMP)  ; LAB_0050378a
    MOV ESI,dword ptr [ESP + 0x6060]    ; 005037a6
    PUSH ESI                            ; 005037ad
    MOV EAX,dword ptr [ESP + 0x6094]    ; 005037ae
    PUSH EAX                            ; 005037b5
    LEA EDX,[ESP + 0x5f48]              ; 005037b6
    PUSH EDX                            ; 005037bd
    MOV EDX,dword ptr [EBP + 0x14]      ; 005037be
    PUSH EDX                            ; 005037c1
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90 ; 005037c2
        ;   XREF to: 004feb90 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 005037c7
    LEA ECX,[ESI + 0x40]                ; 005037ca
    ADD EDI,0x4                         ; 005037cd
    MOV dword ptr [ESP + 0x6060],ECX    ; 005037d0
    CMP EDI,0x48                        ; 005037d7
    JNZ 0x00503786                      ; 005037da
        ;   XREF to: 00503786 (CONDITIONAL_JUMP)  ; LAB_00503786
    MOV EDX,dword ptr [ESP + 0x6064]    ; 005037dc
    MOV ECX,dword ptr [ESP + 0x6068]    ; 005037e3
    MOV ESI,dword ptr [ESP + 0x606c]    ; 005037ea
    MOV EDI,dword ptr [ESP + 0x6070]    ; 005037f1
    MOV EAX,dword ptr [ESP + 0x6090]    ; 005037f8
    ADD EDX,0xa0                        ; 005037ff
    ADD ECX,0x900                       ; 00503805
    ADD ESI,0xa0                        ; 0050380b
    ADD EDI,0x480                       ; 00503811
    INC EAX                             ; 00503817
    MOV dword ptr [ESP + 0x6064],EDX    ; 00503818
    MOV dword ptr [ESP + 0x6068],ECX    ; 0050381f
    MOV dword ptr [ESP + 0x606c],ESI    ; 00503826
    MOV dword ptr [ESP + 0x6070],EDI    ; 0050382d
    MOV EDX,dword ptr [ESP + 0x6018]    ; 00503834
    MOV dword ptr [ESP + 0x6090],EAX    ; 0050383b
    CMP EAX,EDX                         ; 00503842
    JL 0x00503633                       ; 00503844
        ;   XREF to: 00503633 (CONDITIONAL_JUMP)  ; LAB_00503633
    XOR ECX,ECX                         ; 0050384a
        ;   Label: LAB_0050384a
    MOV dword ptr [ESP + 0x6098],ECX    ; 0050384c
    MOV EAX,dword ptr [ESP + 0x6098]    ; 00503853
        ;   Label: LAB_00503853
    XOR EDI,EDI                         ; 0050385a
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050385c
        ;   Label: LAB_0050385c
    XOR ESI,ESI                         ; 00503863
    TEST EDX,EDX                        ; 00503865
    JLE 0x0050388d                      ; 00503867
        ;   XREF to: 0050388d (CONDITIONAL_JUMP)  ; LAB_0050388d
    LEA ECX,[EDI + EAX*0x1]             ; 00503869
    ADD EBX,0x2                         ; 0050386c
        ;   Label: LAB_0050386c
    MOV DX,word ptr [ESP + ECX*0x1 + 0x2408] ; 0050386f
    INC ESI                             ; 00503877
    MOV word ptr [EBX + -0x2],DX        ; 00503878
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050387c
    ADD ECX,0x480                       ; 00503883
    CMP ESI,EDX                         ; 00503889
    JL 0x0050386c                       ; 0050388b
        ;   XREF to: 0050386c (CONDITIONAL_JUMP)  ; LAB_0050386c
    ADD EDI,0x2                         ; 0050388d
        ;   Label: LAB_0050388d
    CMP EDI,0x40                        ; 00503890
    JNZ 0x0050385c                      ; 00503893
        ;   XREF to: 0050385c (CONDITIONAL_JUMP)  ; LAB_0050385c
    MOV ECX,dword ptr [ESP + 0x6098]    ; 00503895
    ADD ECX,EDI                         ; 0050389c
    MOV dword ptr [ESP + 0x6098],ECX    ; 0050389e
    CMP ECX,0x480                       ; 005038a5
    JNZ 0x00503853                      ; 005038ab
        ;   XREF to: 00503853 (CONDITIONAL_JUMP)  ; LAB_00503853
    MOV ESI,dword ptr [ESP + 0x6074]    ; 005038ad
    MOV EDI,dword ptr [ESP + 0x6078]    ; 005038b4
    MOV EAX,dword ptr [ESP + 0x6034]    ; 005038bb
    MOV EDX,dword ptr [ESP + 0x6020]    ; 005038c2
    ADD ESI,0x48                        ; 005038c9
    ADD EDI,0x48                        ; 005038cc
    INC EAX                             ; 005038cf
    MOV dword ptr [ESP + 0x6074],ESI    ; 005038d0
    MOV dword ptr [ESP + 0x6078],EDI    ; 005038d7
    MOV dword ptr [ESP + 0x6034],EAX    ; 005038de
    CMP EAX,EDX                         ; 005038e5
    JGE 0x00502f73                      ; 005038e7
        ;   XREF to: 00502f73 (CONDITIONAL_JUMP)  ; LAB_00502f73
    JMP 0x005034a9                      ; 005038ed
        ;   XREF to: 005034a9 (UNCONDITIONAL_JUMP)  ; LAB_005034a9
    LEA EAX,[ESP + 0x5ff0]              ; 005038f2
        ;   Label: LAB_005038f2
    PUSH EAX                            ; 005038f9
    PUSH ESI                            ; 005038fa
    MOV EAX,dword ptr [ESP + 0x603c]    ; 005038fb
    PUSH EAX                            ; 00503902
    LEA EAX,[ESP + 0x5c04]              ; 00503903
    PUSH EAX                            ; 0050390a
    LEA EAX,[ESP + 0x5a18]              ; 0050390b
    PUSH EAX                            ; 00503912
    MOV EDX,dword ptr [EBP + 0x14]      ; 00503913
    PUSH EDX                            ; 00503916
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004ffb20 ; 00503917
        ;   XREF to: 004ffb20 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004ffb20(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    JMP 0x00503525                      ; 0050391c
        ;   XREF to: 00503525 (UNCONDITIONAL_JUMP)  ; LAB_00503525
    MOV EAX,dword ptr [ESI + 0xc]       ; 00503921
        ;   Label: LAB_00503921
    MOV dword ptr [ESP + 0x608c],EAX    ; 00503924
    LEA EAX,[ESP + 0x5ff0]              ; 0050392b
    PUSH EAX                            ; 00503932
    PUSH ESI                            ; 00503933
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50 ; 00503934
        ;   XREF to: 004fdc50 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50(CFileBitStream * this_ptr, SMpegFrameHeader * * header_out)
    ADD ESP,0x8                         ; 00503939
    LEA EAX,[ESP + 0x5ff0]              ; 0050393c
    PUSH EAX                            ; 00503943
    CALL sound_mp3.cpp_FUN_004fd150     ; 00503944
        ;   XREF to: 004fd150 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_004fd150(SMpegFrame * frame)
    ADD ESP,0x4                         ; 00503949
    MOV EAX,dword ptr [ESP + 0x6000]    ; 0050394c
    MOV dword ptr [ESP + 0x6018],EAX    ; 00503953
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0050395a
    CMP dword ptr [EAX],0x0             ; 00503961
    SETNZ AL                            ; 00503964
    AND EAX,0xff                        ; 00503967
    INC EAX                             ; 0050396c
    MOV dword ptr [ESP + 0x6020],EAX    ; 0050396d
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 00503974
    CMP EAX,0x2                         ; 0050397b
    JNC 0x0050398e                      ; 0050397e
        ;   XREF to: 0050398e (CONDITIONAL_JUMP)  ; LAB_0050398e
    CMP EAX,0x1                         ; 00503980
    JZ 0x00502dda                       ; 00503983
        ;   XREF to: 00502dda (CONDITIONAL_JUMP)  ; LAB_00502dda
    JMP 0x00502f73                      ; 00503989
        ;   XREF to: 00502f73 (UNCONDITIONAL_JUMP)  ; LAB_00502f73
    CMP EAX,0x2                         ; 0050398e
        ;   Label: LAB_0050398e
    JBE 0x005030ac                      ; 00503991
        ;   XREF to: 005030ac (CONDITIONAL_JUMP)  ; LAB_005030ac
    CMP EAX,0x3                         ; 00503997
    JZ 0x005032cb                       ; 0050399a
        ;   XREF to: 005032cb (CONDITIONAL_JUMP)  ; LAB_005032cb
    JMP 0x00502f73                      ; 005039a0
        ;   XREF to: 00502f73 (UNCONDITIONAL_JUMP)  ; LAB_00502f73

