; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_0050a280(CMP3Decoder *this_ptr,short *pcm_output)
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
;   sound_mp3.cpp_CMP3Decoder_read_FUN_00509fa0 at 0050a084
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_0050a0e0 at 0050a1bd
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005e033b
;   TerminatedCString s_Not_enough_main_data_to_005e034c
;   undefined4 DAT_00618e88
;   undefined4 DAT_00618ec8
;   undefined4 DAT_00619030
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   sound_mp3.cpp_antiAliasingButterfly_FUN_00508f10
;   sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00505eb0
;   sound_mp3.cpp_calculateMainDataSize_FUN_005096b0
;   sound_mp3.cpp_calculateMpegFrame_FUN_00504670
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00505360
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00505230
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_00505710
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_00505810
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_00505410
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_005054a0
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a280
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280
    PUSH ESI                            ; 0050a281
    PUSH EDI                            ; 0050a282
    PUSH EBP                            ; 0050a283
    MOV EBP,ESP                         ; 0050a284
    SUB ESP,0x60a0                      ; 0050a286
    AND ESP,0xfffffff8                  ; 0050a28c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0050a28f
    LEA EAX,[ESP + 0x5fc0]              ; 0050a292
    MOV ECX,0xffffffff                  ; 0050a299
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050a29e
    XOR EDX,EDX                         ; 0050a2a1
    MOV dword ptr [ESP + 0x5ff0],EAX    ; 0050a2a3
    ADD ESI,0x5320                      ; 0050a2aa
    MOV dword ptr [ESP + 0x5ffc],ECX    ; 0050a2b0
    MOV dword ptr [ESP + 0x5ff8],EDX    ; 0050a2b7
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0050a2be
    MOV dword ptr [ESP + 0x601c],EDX    ; 0050a2c1
    TEST EAX,EAX                        ; 0050a2c8
    JZ 0x0050a2d7                       ; 0050a2ca
        ;   XREF to: 0050a2d7 (CONDITIONAL_JUMP)  ; LAB_0050a2d7
    XOR ESI,ESI                         ; 0050a2cc
    MOV EAX,ESI                         ; 0050a2ce
    MOV ESP,EBP                         ; 0050a2d0
    POP EBP                             ; 0050a2d2
    POP EDI                             ; 0050a2d3
    POP ESI                             ; 0050a2d4
    POP EBX                             ; 0050a2d5
    RET                                 ; 0050a2d6
    PUSH 0xc                            ; 0050a2d7
        ;   Label: LAB_0050a2d7
    PUSH 0xfff                          ; 0050a2d9
    PUSH ESI                            ; 0050a2de
    CALL sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00504ca0 ; 0050a2df
        ;   XREF to: 00504ca0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00504ca0(CFileBitStream * this_ptr, uint sync_pattern, uint pattern_bits)
    ADD ESP,0xc                         ; 0050a2e4
    TEST EAX,EAX                        ; 0050a2e7
    JNZ 0x0050ae41                      ; 0050a2e9
        ;   XREF to: 0050ae41 (CONDITIONAL_JUMP)  ; LAB_0050ae41
    XOR ESI,ESI                         ; 0050a2ef
    MOV EAX,ESI                         ; 0050a2f1
    MOV ESP,EBP                         ; 0050a2f3
    POP EBP                             ; 0050a2f5
    POP EDI                             ; 0050a2f6
    POP ESI                             ; 0050a2f7
    POP EBX                             ; 0050a2f8
    RET                                 ; 0050a2f9
    LEA EAX,[ESP + 0x5ff0]              ; 0050a2fa
        ;   Label: LAB_0050a2fa
    PUSH EAX                            ; 0050a301
    LEA EAX,[ESP + 0x5e44]              ; 0050a302
    PUSH EAX                            ; 0050a309
    MOV EBX,0x20                        ; 0050a30a
    MOV EDI,0x180                       ; 0050a30f
    PUSH ESI                            ; 0050a314
    MOV dword ptr [ESP + 0x10],EBX      ; 0050a315
    MOV dword ptr [ESP + 0xc],EDI       ; 0050a319
    CALL sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00505360 ; 0050a31d
        ;   XREF to: 00505360 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00505360(CFileBitStream * this_ptr, uint * output_array, SMpegFrame * frame)
    ADD ESP,0xc                         ; 0050a322
    LEA EAX,[ESP + 0x5ff0]              ; 0050a325
    PUSH EAX                            ; 0050a32c
    LEA EAX,[ESP + 0x540c]              ; 0050a32d
    PUSH EAX                            ; 0050a334
    LEA EAX,[ESP + 0x5e48]              ; 0050a335
    PUSH EAX                            ; 0050a33c
    PUSH ESI                            ; 0050a33d
    CALL sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_00505410 ; 0050a33e
        ;   XREF to: 00505410 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_00505410(CFileBitStream * this_ptr, SMpegSubbandAllocation * allocation_indices, SMpegSubbandScalefactors * scalefactors, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050a343
    XOR EAX,EAX                         ; 0050a346
    MOV dword ptr [ESP + 0x6088],EAX    ; 0050a348
    MOV dword ptr [ESP + 0x6024],ESI    ; 0050a34f
    LEA EAX,[ESP + 0x5ff0]              ; 0050a356
        ;   Label: LAB_0050a356
    PUSH EAX                            ; 0050a35d
    LEA EAX,[ESP + 0x5e44]              ; 0050a35e
    PUSH EAX                            ; 0050a365
    LEA EAX,[ESP + 0x5110]              ; 0050a366
    PUSH EAX                            ; 0050a36d
    MOV EBX,dword ptr [ESP + 0x6030]    ; 0050a36e
    PUSH EBX                            ; 0050a375
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_00505710 ; 0050a376
        ;   XREF to: 00505710 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_00505710(CFileBitStream * this_ptr, SMpegSubbandScalefactors * quantized_samples, SMpegSubbandAllocation * allocation, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050a37b
    LEA EAX,[ESP + 0x5ff0]              ; 0050a37e
    PUSH EAX                            ; 0050a385
    LEA EAX,[ESP + 0x5e44]              ; 0050a386
    PUSH EAX                            ; 0050a38d
    LEA EAX,[ESP + 0x5710]              ; 0050a38e
    PUSH EAX                            ; 0050a395
    LEA EAX,[ESP + 0x5114]              ; 0050a396
    PUSH EAX                            ; 0050a39d
    XOR ESI,ESI                         ; 0050a39e
    CALL sound_mp3.cpp_requantizeSamples_FUN_00505d70 ; 0050a3a0
        ;   XREF to: 00505d70 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_requantizeSamples_FUN_00505d70(SMpegSubbandScalefactors * quantized_samples, SMpegSubbandScalefactors * dequantized_samples, SMpegSubbandAllocation * allocation, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050a3a5
    LEA EAX,[ESP + 0x5708]              ; 0050a3a8
    MOV EDI,dword ptr [ESP + 0x6000]    ; 0050a3af
    MOV dword ptr [ESP + 0x6028],EAX    ; 0050a3b6
    LEA EAX,[ESP + 0x5408]              ; 0050a3bd
    MOV dword ptr [ESP + 0x6050],ESI    ; 0050a3c4
    MOV dword ptr [ESP + 0x602c],EAX    ; 0050a3cb
    XOR EAX,EAX                         ; 0050a3d2
    MOV ECX,EAX                         ; 0050a3d4
        ;   Label: LAB_0050a3d4
    TEST EDI,EDI                        ; 0050a3d6
    JLE 0x0050a420                      ; 0050a3d8
        ;   XREF to: 0050a420 (CONDITIONAL_JUMP)  ; LAB_0050a420
    MOV EBX,dword ptr [ESP + 0x6050]    ; 0050a3da
    MOV EDX,dword ptr [ESP + 0x602c]    ; 0050a3e1
    MOV ESI,dword ptr [ESP + 0x6028]    ; 0050a3e8
    ADD EBX,EDX                         ; 0050a3ef
    MOV EDX,dword ptr [ESP + 0x6050]    ; 0050a3f1
    ADD EDX,ESI                         ; 0050a3f8
    FLD float ptr [EDX]                 ; 0050a3fa
        ;   Label: LAB_0050a3fa
    MOV ESI,dword ptr [EBX]             ; 0050a3fc
    FLD ST0                             ; 0050a3fe
    FMUL double ptr [ESI*0x8 + 0x619030] ; 0050a400 | DAT_00619030
    ADD EBX,0x180                       ; 0050a407
    ADD EDX,0x180                       ; 0050a40d
    INC ECX                             ; 0050a413
    FSTP ST1                            ; 0050a414
    FSTP float ptr [EDX + 0xfffffe80]   ; 0050a416
    CMP ECX,EDI                         ; 0050a41c
    JL 0x0050a3fa                       ; 0050a41e
        ;   XREF to: 0050a3fa (CONDITIONAL_JUMP)  ; LAB_0050a3fa
    MOV EDX,dword ptr [ESP + 0x6050]    ; 0050a420
        ;   Label: LAB_0050a420
    ADD EDX,0x4                         ; 0050a427
    MOV dword ptr [ESP + 0x6050],EDX    ; 0050a42a
    CMP EDX,0x80                        ; 0050a431
    JNZ 0x0050a3d4                      ; 0050a437
        ;   XREF to: 0050a3d4 (CONDITIONAL_JUMP)  ; LAB_0050a3d4
    MOV ESI,dword ptr [ESP + 0x6018]    ; 0050a439
    XOR EBX,EBX                         ; 0050a440
    TEST ESI,ESI                        ; 0050a442
    JLE 0x0050a47b                      ; 0050a444
        ;   XREF to: 0050a47b (CONDITIONAL_JUMP)  ; LAB_0050a47b
    LEA EDI,[ESP + 0x2408]              ; 0050a446
    LEA ESI,[ESP + 0x5708]              ; 0050a44d
    PUSH EDI                            ; 0050a454
        ;   Label: LAB_0050a454
    PUSH EBX                            ; 0050a455
    PUSH ESI                            ; 0050a456
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050a457
    PUSH EAX                            ; 0050a45a
    ADD EDI,0x480                       ; 0050a45b
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0 ; 0050a461
        ;   XREF to: 005060b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 0050a466
    INC EBX                             ; 0050a469
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050a46a
    ADD ESI,0x180                       ; 0050a471
    CMP EBX,EDX                         ; 0050a477
    JL 0x0050a454                       ; 0050a479
        ;   XREF to: 0050a454 (CONDITIONAL_JUMP)  ; LAB_0050a454
    MOV ECX,dword ptr [ESP + 0x6088]    ; 0050a47b
        ;   Label: LAB_0050a47b
    INC ECX                             ; 0050a482
    MOV dword ptr [ESP + 0x6088],ECX    ; 0050a483
    CMP ECX,0xc                         ; 0050a48a
    JL 0x0050a356                       ; 0050a48d
        ;   XREF to: 0050a356 (CONDITIONAL_JUMP)  ; LAB_0050a356
    CMP dword ptr [ESP + 0x5fcc],0x0    ; 0050a493
        ;   Label: LAB_0050a493
    JLE 0x0050a5b0                      ; 0050a49b
        ;   XREF to: 0050a5b0 (CONDITIONAL_JUMP)  ; LAB_0050a5b0
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 0050a4a1
    DEC EAX                             ; 0050a4a8
    SHL EAX,0x2                         ; 0050a4a9
    MOV ECX,EAX                         ; 0050a4ac
    SHL ECX,0x4                         ; 0050a4ae
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 0050a4b1
    SUB ECX,EAX                         ; 0050a4b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050a4ba
    SUB EAX,EDX                         ; 0050a4c1
    SHL EAX,0x2                         ; 0050a4c3
    MOV EDX,EAX                         ; 0050a4c6
    SHL EAX,0x4                         ; 0050a4c8
    SUB EAX,EDX                         ; 0050a4cb
    ADD ECX,EAX                         ; 0050a4cd
    MOV EAX,dword ptr [ESP + 0x5fcc]    ; 0050a4cf
    MOV EDX,dword ptr [ESP + 0x5fd0]    ; 0050a4d6
    FILD dword ptr [ECX + EAX*0x4 + 0x618ec8] ; 0050a4dd | DAT_00618ec8
    MOV EAX,dword ptr [ESP + 0x5fc0]    ; 0050a4e4
    SHL EDX,0x3                         ; 0050a4eb
    SHL EAX,0x5                         ; 0050a4ee
    XOR ECX,ECX                         ; 0050a4f1
    ADD EAX,EDX                         ; 0050a4f3
    MOV EDX,dword ptr [ESP]             ; 0050a4f5
    MOV dword ptr [ESP + 0x6010],ECX    ; 0050a4f8
    MOV dword ptr [ESP + 0x600c],EDX    ; 0050a4ff
    FILD qword ptr [ESP + 0x600c]       ; 0050a506
    FDIV double ptr [EAX + 0x618e88]    ; 0050a50d | DAT_00618e88
    FMULP                               ; 0050a513
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050a515
    MOV dword ptr [ESP + 0x6010],ECX    ; 0050a519
    MOV dword ptr [ESP + 0x600c],EAX    ; 0050a520
    FILD qword ptr [ESP + 0x600c]       ; 0050a527
    FDIVP                               ; 0050a52e
    MOV ESI,dword ptr [ESP + 0x5fd4]    ; 0050a530
    CALL crt_math.c_round_FUN_005b7ff0  ; 0050a537
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x6048]      ; 0050a53c
    TEST ESI,ESI                        ; 0050a543
    JZ 0x0050a54e                       ; 0050a545
        ;   XREF to: 0050a54e (CONDITIONAL_JUMP)  ; LAB_0050a54e
    INC dword ptr [ESP + 0x6048]        ; 0050a547
    MOV EAX,dword ptr [ESP + 0x6048]    ; 0050a54e
        ;   Label: LAB_0050a54e
    IMUL EAX,dword ptr [ESP + 0x4]      ; 0050a555
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050a55a
    MOV ECX,dword ptr [ESP + 0x608c]    ; 0050a55d
    MOV dword ptr [ESP + 0x6048],EAX    ; 0050a564
    MOV EAX,dword ptr [ESI + 0x532c]    ; 0050a56b
    SUB EAX,ECX                         ; 0050a571
    MOV EBX,dword ptr [ESP + 0x6048]    ; 0050a573
    ADD EAX,0xc                         ; 0050a57a
    SUB EBX,EAX                         ; 0050a57d
    MOV dword ptr [ESP + 0x6048],EBX    ; 0050a57f
    ADD ESI,0x5320                      ; 0050a586
    MOV EDI,dword ptr [ESP + 0x6048]    ; 0050a58c
    XOR EBX,EBX                         ; 0050a593
    TEST EDI,EDI                        ; 0050a595
    JLE 0x0050a5b0                      ; 0050a597
        ;   XREF to: 0050a5b0 (CONDITIONAL_JUMP)  ; LAB_0050a5b0
    PUSH ESI                            ; 0050a599
        ;   Label: LAB_0050a599
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10 ; 0050a59a
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00504a10(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0050a59f
    INC EBX                             ; 0050a5a2
    CMP EBX,dword ptr [ESP + 0x6048]    ; 0050a5a3
    JL 0x0050a599                       ; 0050a5aa
        ;   XREF to: 0050a599 (CONDITIONAL_JUMP)  ; LAB_0050a599
    LEA EAX,[EAX]                       ; 0050a5ac
    MOV EDX,dword ptr [ESP + 0x6020]    ; 0050a5b0
        ;   Label: LAB_0050a5b0
    LEA ESI,[EDX*0x8 + 0x0]             ; 0050a5b7
    ADD ESI,EDX                         ; 0050a5be
    SHL ESI,0x6                         ; 0050a5c0
    MOV EAX,ESI                         ; 0050a5c3
    MOV ESP,EBP                         ; 0050a5c5
    POP EBP                             ; 0050a5c7
    POP EDI                             ; 0050a5c8
    POP ESI                             ; 0050a5c9
    POP EBX                             ; 0050a5ca
    RET                                 ; 0050a5cb
    MOV dword ptr [ESP],0x480           ; 0050a5cc
        ;   Label: LAB_0050a5cc
    LEA EAX,[ESP + 0x5ff0]              ; 0050a5d3
    PUSH EAX                            ; 0050a5da
    LEA EAX,[ESP + 0x5e44]              ; 0050a5db
    PUSH EAX                            ; 0050a5e2
    MOV EDI,0x8                         ; 0050a5e3
    PUSH ESI                            ; 0050a5e8
    MOV dword ptr [ESP + 0x10],EDI      ; 0050a5e9
    CALL sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00505230 ; 0050a5ed
        ;   XREF to: 00505230 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00505230(CFileBitStream * this_ptr, SMpegSubbandAllocation * output_allocation, SMpegFrame * frame)
    ADD ESP,0xc                         ; 0050a5f2
    LEA EAX,[ESP + 0x5ff0]              ; 0050a5f5
    PUSH EAX                            ; 0050a5fc
    LEA EAX,[ESP + 0x540c]              ; 0050a5fd
    PUSH EAX                            ; 0050a604
    LEA EAX,[ESP + 0x5e48]              ; 0050a605
    PUSH EAX                            ; 0050a60c
    LEA EAX,[ESP + 0x5d4c]              ; 0050a60d
    PUSH EAX                            ; 0050a614
    PUSH ESI                            ; 0050a615
    CALL sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_005054a0 ; 0050a616
        ;   XREF to: 005054a0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_005054a0(CFileBitStream * this_ptr, SMpegSubbandSCFSI * scfsi_array, SMpegSubbandAllocation * allocation_array, SMpegSubbandScalefactors * scalefactor_array, ...)
    ADD ESP,0x14                        ; 0050a61b
    XOR EDX,EDX                         ; 0050a61e
    MOV dword ptr [ESP + 0x6014],EDX    ; 0050a620
    MOV dword ptr [ESP + 0x6030],ESI    ; 0050a627
    LEA EAX,[ESP + 0x5ff0]              ; 0050a62e
        ;   Label: LAB_0050a62e
    PUSH EAX                            ; 0050a635
    LEA EAX,[ESP + 0x5e44]              ; 0050a636
    PUSH EAX                            ; 0050a63d
    LEA EAX,[ESP + 0x5110]              ; 0050a63e
    PUSH EAX                            ; 0050a645
    MOV EDI,dword ptr [ESP + 0x603c]    ; 0050a646
    PUSH EDI                            ; 0050a64d
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_00505810 ; 0050a64e
        ;   XREF to: 00505810 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_00505810(CFileBitStream * this_ptr, SMpegSubbandScalefactors * sample_array, SMpegSubbandAllocation * allocation_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050a653
    LEA EAX,[ESP + 0x5ff0]              ; 0050a656
    PUSH EAX                            ; 0050a65d
    LEA EAX,[ESP + 0x570c]              ; 0050a65e
    PUSH EAX                            ; 0050a665
    LEA EAX,[ESP + 0x5e48]              ; 0050a666
    PUSH EAX                            ; 0050a66d
    LEA EAX,[ESP + 0x5114]              ; 0050a66e
    PUSH EAX                            ; 0050a675
    CALL sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_00505aa0 ; 0050a676
        ;   XREF to: 00505aa0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_00505aa0(int * scalefactor_indices, uint * quantized_samples, float * dequantized_output, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050a67b
    MOV EAX,dword ptr [ESP + 0x6014]    ; 0050a67e
    SAR EAX,0x2                         ; 0050a685
    PUSH EAX                            ; 0050a688
    LEA EAX,[ESP + 0x5ff4]              ; 0050a689
    PUSH EAX                            ; 0050a690
    LEA EAX,[ESP + 0x5410]              ; 0050a691
    PUSH EAX                            ; 0050a698
    LEA EAX,[ESP + 0x5714]              ; 0050a699
    PUSH EAX                            ; 0050a6a0
    CALL sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00505eb0 ; 0050a6a1
        ;   XREF to: 00505eb0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00505eb0(float * spectral_samples, int * scalefactor_band_indices, SMpegFrame * frame_info, int channel_or_granule_index)
    ADD ESP,0x10                        ; 0050a6a6
    TEST EBX,EBX                        ; 0050a6a9
    JNZ 0x0050a6ca                      ; 0050a6ab
        ;   XREF to: 0050a6ca (CONDITIONAL_JUMP)  ; LAB_0050a6ca
    MOV EDI,dword ptr [ESP + 0x6014]    ; 0050a6ad
        ;   Label: LAB_0050a6ad
    INC EDI                             ; 0050a6b4
    MOV dword ptr [ESP + 0x6014],EDI    ; 0050a6b5
    CMP EDI,0xc                         ; 0050a6bc
    JL 0x0050a62e                       ; 0050a6bf
        ;   XREF to: 0050a62e (CONDITIONAL_JUMP)  ; LAB_0050a62e
    JMP 0x0050a493                      ; 0050a6c5
        ;   XREF to: 0050a493 (UNCONDITIONAL_JUMP)  ; LAB_0050a493
    XOR EAX,EAX                         ; 0050a6ca
        ;   Label: LAB_0050a6ca
    MOV dword ptr [ESP + 0x6080],EAX    ; 0050a6cc
    MOV dword ptr [ESP + 0x607c],EAX    ; 0050a6d3
    MOV ECX,dword ptr [ESP + 0x6018]    ; 0050a6da
        ;   Label: LAB_0050a6da
    XOR ESI,ESI                         ; 0050a6e1
    TEST ECX,ECX                        ; 0050a6e3
    JLE 0x0050a74a                      ; 0050a6e5
        ;   XREF to: 0050a74a (CONDITIONAL_JUMP)  ; LAB_0050a74a
    MOV EDX,dword ptr [ESP + 0x607c]    ; 0050a6e7
    LEA EAX,[ESP + 0x5708]              ; 0050a6ee
    ADD EAX,EDX                         ; 0050a6f5
    MOV EDI,dword ptr [ESP + 0x6080]    ; 0050a6f7
    MOV dword ptr [ESP + 0x609c],EAX    ; 0050a6fe
    LEA EAX,[ESP + 0x2408]              ; 0050a705
    ADD EDI,EAX                         ; 0050a70c
    PUSH EDI                            ; 0050a70e
        ;   Label: LAB_0050a70e
    PUSH ESI                            ; 0050a70f
    MOV EAX,dword ptr [ESP + 0x60a4]    ; 0050a710
    PUSH EAX                            ; 0050a717
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050a718
    PUSH EDX                            ; 0050a71b
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0 ; 0050a71c
        ;   XREF to: 005060b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 0050a721
    ADD EDI,0x480                       ; 0050a724
    MOV ECX,dword ptr [ESP + 0x609c]    ; 0050a72a
    INC ESI                             ; 0050a731
    ADD ECX,0x180                       ; 0050a732
    MOV EAX,dword ptr [ESP + 0x6018]    ; 0050a738
    MOV dword ptr [ESP + 0x609c],ECX    ; 0050a73f
    CMP ESI,EAX                         ; 0050a746
    JL 0x0050a70e                       ; 0050a748
        ;   XREF to: 0050a70e (CONDITIONAL_JUMP)  ; LAB_0050a70e
    MOV ECX,dword ptr [ESP + 0x6080]    ; 0050a74a
        ;   Label: LAB_0050a74a
    MOV EDX,dword ptr [ESP + 0x607c]    ; 0050a751
    ADD ECX,0x40                        ; 0050a758
    ADD EDX,0x80                        ; 0050a75b
    MOV dword ptr [ESP + 0x6080],ECX    ; 0050a761
    MOV dword ptr [ESP + 0x607c],EDX    ; 0050a768
    CMP ECX,0xc0                        ; 0050a76f
    JNZ 0x0050a6da                      ; 0050a775
        ;   XREF to: 0050a6da (CONDITIONAL_JUMP)  ; LAB_0050a6da
    XOR EDI,EDI                         ; 0050a77b
    MOV dword ptr [ESP + 0x6084],EDI    ; 0050a77d
    MOV dword ptr [ESP + 0x6014],EDI    ; 0050a784
    MOV EAX,dword ptr [ESP + 0x6084]    ; 0050a78b
        ;   Label: LAB_0050a78b
    XOR EDI,EDI                         ; 0050a792
    MOV ESI,dword ptr [ESP + 0x6018]    ; 0050a794
        ;   Label: LAB_0050a794
    XOR ECX,ECX                         ; 0050a79b
    TEST ESI,ESI                        ; 0050a79d
    JLE 0x0050a7c5                      ; 0050a79f
        ;   XREF to: 0050a7c5 (CONDITIONAL_JUMP)  ; LAB_0050a7c5
    LEA ESI,[EDI + EAX*0x1]             ; 0050a7a1
    ADD EBX,0x2                         ; 0050a7a4
        ;   Label: LAB_0050a7a4
    MOV DX,word ptr [ESP + ESI*0x1 + 0x2408] ; 0050a7a7
    INC ECX                             ; 0050a7af
    MOV word ptr [EBX + -0x2],DX        ; 0050a7b0
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050a7b4
    ADD ESI,0x480                       ; 0050a7bb
    CMP ECX,EDX                         ; 0050a7c1
    JL 0x0050a7a4                       ; 0050a7c3
        ;   XREF to: 0050a7a4 (CONDITIONAL_JUMP)  ; LAB_0050a7a4
    ADD EDI,0x2                         ; 0050a7c5
        ;   Label: LAB_0050a7c5
    CMP EDI,0x40                        ; 0050a7c8
    JNZ 0x0050a794                      ; 0050a7cb
        ;   XREF to: 0050a794 (CONDITIONAL_JUMP)  ; LAB_0050a794
    MOV ECX,dword ptr [ESP + 0x6084]    ; 0050a7cd
    ADD ECX,EDI                         ; 0050a7d4
    MOV dword ptr [ESP + 0x6084],ECX    ; 0050a7d6
    CMP ECX,0xc0                        ; 0050a7dd
    JZ 0x0050a6ad                       ; 0050a7e3
        ;   XREF to: 0050a6ad (CONDITIONAL_JUMP)  ; LAB_0050a6ad
    JMP 0x0050a78b                      ; 0050a7e9
        ;   XREF to: 0050a78b (UNCONDITIONAL_JUMP)  ; LAB_0050a78b
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0050a7eb
        ;   Label: LAB_0050a7eb
    MOV ESI,0x8                         ; 0050a7f2
    MOV EDI,dword ptr [EAX]             ; 0050a7f7
    MOV dword ptr [ESP + 0x4],ESI       ; 0050a7f9
    TEST EDI,EDI                        ; 0050a7fd
    JZ 0x0050a95a                       ; 0050a7ff
        ;   XREF to: 0050a95a (CONDITIONAL_JUMP)  ; LAB_0050a95a
    MOV dword ptr [ESP],0x480           ; 0050a805
    LEA EAX,[ESP + 0x5ff0]              ; 0050a80c
        ;   Label: LAB_0050a80c
    PUSH EAX                            ; 0050a813
    LEA EAX,[ESP + 0x5bfc]              ; 0050a814
    PUSH EAX                            ; 0050a81b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050a81c
    ADD EAX,0x5320                      ; 0050a81f
    PUSH EAX                            ; 0050a824
    MOV ESI,dword ptr [EBP + 0x14]      ; 0050a825
    PUSH ESI                            ; 0050a828
    MOV dword ptr [ESP + 0x604c],EAX    ; 0050a829
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_00506360 ; 0050a830
        ;   XREF to: 00506360 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_00506360(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3SideInfo * side_info_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050a835
    MOV ECX,0x7                         ; 0050a838
    SUB ESP,0x1c                        ; 0050a83d
    LEA ESI,[ESP + 0x600c]              ; 0050a840
    MOV EDI,ESP                         ; 0050a847
    MOVSD.REP ES:EDI,ESI                ; 0050a849
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_005096b0 ; 0050a84b
        ;   XREF to: 005096b0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_calculateMainDataSize_FUN_005096b0(SMpegFrame frame_info)
    ADD ESP,0x1c                        ; 0050a850
    MOV ESI,EAX                         ; 0050a853
    TEST EAX,EAX                        ; 0050a855
    JLE 0x0050a880                      ; 0050a857
        ;   XREF to: 0050a880 (CONDITIONAL_JUMP)  ; LAB_0050a880
    MOV EDI,dword ptr [ESP + 0x603c]    ; 0050a859
    PUSH 0x8                            ; 0050a860
        ;   Label: LAB_0050a860
    PUSH 0x8                            ; 0050a862
    PUSH EDI                            ; 0050a864
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00 ; 0050a865
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0050a86a
    PUSH EAX                            ; 0050a86d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050a86e
    PUSH EDX                            ; 0050a871
    DEC ESI                             ; 0050a872
    CALL sound_mp3.cpp_CMP3Decoder_putByte_FUN_00504e20 ; 0050a873
        ;   XREF to: 00504e20 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_putByte_FUN_00504e20(CMP3Decoder * this_ptr, uint byte_value, uint bits_per_byte)
    ADD ESP,0xc                         ; 0050a878
    TEST ESI,ESI                        ; 0050a87b
    JG 0x0050a860                       ; 0050a87d
        ;   XREF to: 0050a860 (CONDITIONAL_JUMP)  ; LAB_0050a860
    NOP                                 ; 0050a87f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050a880
        ;   Label: LAB_0050a880
    PUSH ECX                            ; 0050a883
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 0050a884
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0050a889
    MOV EDI,dword ptr [EBP + 0x14]      ; 0050a88c
    PUSH EDI                            ; 0050a88f
    MOV ESI,EAX                         ; 0050a890
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 0050a892
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0050a897
    XOR EDX,EDX                         ; 0050a89a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050a89c
    DIV ECX                             ; 0050a8a0
    SHR ESI,0x3                         ; 0050a8a2
    TEST EDX,EDX                        ; 0050a8a5
    JZ 0x0050a8b8                       ; 0050a8a7
        ;   XREF to: 0050a8b8 (CONDITIONAL_JUMP)  ; LAB_0050a8b8
    MOV EAX,ECX                         ; 0050a8a9
    SUB EAX,EDX                         ; 0050a8ab
    PUSH EAX                            ; 0050a8ad
    PUSH EDI                            ; 0050a8ae
    INC ESI                             ; 0050a8af
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 0050a8b0
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0050a8b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050a8b8
        ;   Label: LAB_0050a8b8
    MOV EAX,dword ptr [EAX + 0x534c]    ; 0050a8bb
    MOV EDX,dword ptr [ESP + 0x5bf8]    ; 0050a8c1
    SUB EAX,ESI                         ; 0050a8c8
    SUB EAX,EDX                         ; 0050a8ca
    MOV dword ptr [ESP + 0x6038],EAX    ; 0050a8cc
    CMP ESI,0x1000                      ; 0050a8d3
    JLE 0x0050a8fe                      ; 0050a8d9
        ;   XREF to: 0050a8fe (CONDITIONAL_JUMP)  ; LAB_0050a8fe
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050a8db
    MOV ESI,dword ptr [ECX + 0x534c]    ; 0050a8de
    PUSH 0x1000                         ; 0050a8e4
    SUB ESI,0x1000                      ; 0050a8e9
    PUSH ECX                            ; 0050a8ef
    MOV dword ptr [ECX + 0x534c],ESI    ; 0050a8f0
    CALL sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_00504ee0 ; 0050a8f6
        ;   XREF to: 00504ee0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_00504ee0(CMP3Decoder * this_ptr, int num_bytes)
    ADD ESP,0x8                         ; 0050a8fb
    MOV ECX,0x7                         ; 0050a8fe
        ;   Label: LAB_0050a8fe
    SUB ESP,0x1c                        ; 0050a903
    LEA ESI,[ESP + 0x600c]              ; 0050a906
    MOV EDI,ESP                         ; 0050a90d
    MOVSD.REP ES:EDI,ESI                ; 0050a90f
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_005096b0 ; 0050a911
        ;   XREF to: 005096b0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_calculateMainDataSize_FUN_005096b0(SMpegFrame frame_info)
    ADD ESP,0x1c                        ; 0050a916
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050a919
    MOV EDI,dword ptr [EDX + 0x534c]    ; 0050a91c
    ADD EDI,EAX                         ; 0050a922
    MOV EAX,dword ptr [ESP + 0x6038]    ; 0050a924
    MOV dword ptr [EDX + 0x534c],EDI    ; 0050a92b
    TEST EAX,EAX                        ; 0050a931
    JL 0x0050a966                       ; 0050a933
        ;   XREF to: 0050a966 (CONDITIONAL_JUMP)  ; LAB_0050a966
    MOV ESI,dword ptr [ESP + 0x6038]    ; 0050a935
        ;   Label: LAB_0050a935
    TEST ESI,ESI                        ; 0050a93c
    JLE 0x0050a994                      ; 0050a93e
        ;   XREF to: 0050a994 (CONDITIONAL_JUMP)  ; LAB_0050a994
    PUSH 0x8                            ; 0050a940
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050a942
    PUSH EDX                            ; 0050a945
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 0050a946
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0050a94b
    LEA ECX,[ESI + -0x1]                ; 0050a94e
    MOV dword ptr [ESP + 0x6038],ECX    ; 0050a951
    JMP 0x0050a935                      ; 0050a958
        ;   XREF to: 0050a935 (UNCONDITIONAL_JUMP)  ; LAB_0050a935
    MOV dword ptr [ESP],0x240           ; 0050a95a
        ;   Label: LAB_0050a95a
    JMP 0x0050a80c                      ; 0050a961
        ;   XREF to: 0050a80c (UNCONDITIONAL_JUMP)  ; LAB_0050a80c
    MOV EAX,dword ptr [ESP + 0x601c]    ; 0050a966
        ;   Label: LAB_0050a966
    DEC EAX                             ; 0050a96d
    PUSH EAX                            ; 0050a96e
    MOV EDX,0x5e033b                    ; 0050a96f | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1029                      ; 0050a974
    PUSH 0x5e034c                       ; 0050a979 | = "Not enough main data to decode frame %d."
    MOV dword ptr [0x01d046a0],EDX      ; 0050a97e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0050a984 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050a98a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0050a98f
    JMP 0x0050a935                      ; 0050a992
        ;   XREF to: 0050a935 (UNCONDITIONAL_JUMP)  ; LAB_0050a935
    TEST EBX,EBX                        ; 0050a994
        ;   Label: LAB_0050a994
    JZ 0x0050a493                       ; 0050a996
        ;   XREF to: 0050a493 (CONDITIONAL_JUMP)  ; LAB_0050a493
    XOR EDI,EDI                         ; 0050a99c
    MOV EAX,dword ptr [ESP + 0x6020]    ; 0050a99e
    MOV dword ptr [ESP + 0x6034],EDI    ; 0050a9a5
    TEST EAX,EAX                        ; 0050a9ac
    JLE 0x0050a493                      ; 0050a9ae
        ;   XREF to: 0050a493 (CONDITIONAL_JUMP)  ; LAB_0050a493
    LEA EAX,[ESP + 0x5c10]              ; 0050a9b4
    MOV dword ptr [ESP + 0x6078],EDI    ; 0050a9bb
    MOV dword ptr [ESP + 0x6074],EAX    ; 0050a9c2
    MOV EDI,dword ptr [ESP + 0x6018]    ; 0050a9c9
        ;   Label: LAB_0050a9c9
    XOR ESI,ESI                         ; 0050a9d0
    TEST EDI,EDI                        ; 0050a9d2
    JLE 0x0050aad1                      ; 0050a9d4
        ;   XREF to: 0050aad1 (CONDITIONAL_JUMP)  ; LAB_0050aad1
    LEA EAX,[ESP + 0x8]                 ; 0050a9da
    MOV EDI,dword ptr [ESP + 0x6078]    ; 0050a9de
    MOV dword ptr [ESP + 0x6054],EAX    ; 0050a9e5
    ADD EDI,0x10                        ; 0050a9ec
    LEA EAX,[ESP + 0x5c00]              ; 0050a9ef
    ADD EDI,EAX                         ; 0050a9f6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050a9f8
        ;   Label: LAB_0050a9f8
    PUSH EDX                            ; 0050a9fb
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 0050a9fc
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0050aa01
    MOV dword ptr [ESP + 0x6040],EAX    ; 0050aa04
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0050aa0b
    CMP dword ptr [EAX],0x0             ; 0050aa12
    JZ 0x0050ae12                       ; 0050aa15
        ;   XREF to: 0050ae12 (CONDITIONAL_JUMP)  ; LAB_0050ae12
    LEA EAX,[ESP + 0x5ff0]              ; 0050aa1b
    PUSH EAX                            ; 0050aa22
    PUSH ESI                            ; 0050aa23
    MOV ECX,dword ptr [ESP + 0x603c]    ; 0050aa24
    PUSH ECX                            ; 0050aa2b
    LEA EAX,[ESP + 0x5c04]              ; 0050aa2c
    PUSH EAX                            ; 0050aa33
    LEA EAX,[ESP + 0x5a18]              ; 0050aa34
    PUSH EAX                            ; 0050aa3b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050aa3c
    PUSH EAX                            ; 0050aa3f
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0 ; 0050aa40
        ;   XREF to: 005068e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_005068e0(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x18                        ; 0050aa45
        ;   Label: LAB_0050aa45
    LEA EAX,[ESP + 0x5ff0]              ; 0050aa48
    PUSH EAX                            ; 0050aa4f
    MOV EAX,dword ptr [ESP + 0x6044]    ; 0050aa50
    PUSH EAX                            ; 0050aa57
    MOV EDX,dword ptr [ESP + 0x603c]    ; 0050aa58
    PUSH EDX                            ; 0050aa5f
    PUSH ESI                            ; 0050aa60
    LEA EAX,[ESP + 0x5c08]              ; 0050aa61
    PUSH EAX                            ; 0050aa68
    LEA EAX,[ESP + 0x481c]              ; 0050aa69
    PUSH EAX                            ; 0050aa70
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050aa71
    PUSH ECX                            ; 0050aa74
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240 ; 0050aa75
        ;   XREF to: 00507240 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240(CMP3Decoder * this_ptr, SMpegSubbandQuantizedSamples * quantized_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x1c                        ; 0050aa7a
    LEA EAX,[ESP + 0x5ff0]              ; 0050aa7d
    PUSH EAX                            ; 0050aa84
    PUSH ESI                            ; 0050aa85
    PUSH EDI                            ; 0050aa86
    LEA EAX,[ESP + 0x5a14]              ; 0050aa87
    PUSH EAX                            ; 0050aa8e
    MOV EAX,dword ptr [ESP + 0x6064]    ; 0050aa8f
    PUSH EAX                            ; 0050aa96
    LEA EAX,[ESP + 0x481c]              ; 0050aa97
    PUSH EAX                            ; 0050aa9e
    CALL sound_mp3.cpp_requantizeLayer3Samples_FUN_00507910 ; 0050aa9f
        ;   XREF to: 00507910 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_requantizeLayer3Samples_FUN_00507910(SMpegSubbandQuantizedSamples * quantized_samples, SMpegSubbandSamples * output_samples, int * scalefactor_data, SMpegLayer3GranuleInfo * granule, ...)
    ADD ESP,0x18                        ; 0050aaa4
    INC ESI                             ; 0050aaa7
    MOV EDX,dword ptr [ESP + 0x6054]    ; 0050aaa8
    ADD EDI,0xa0                        ; 0050aaaf
    ADD EDX,0x900                       ; 0050aab5
    MOV ECX,dword ptr [ESP + 0x6018]    ; 0050aabb
    MOV dword ptr [ESP + 0x6054],EDX    ; 0050aac2
    CMP ESI,ECX                         ; 0050aac9
    JL 0x0050a9f8                       ; 0050aacb
        ;   XREF to: 0050a9f8 (CONDITIONAL_JUMP)  ; LAB_0050a9f8
    LEA EAX,[ESP + 0x5ff0]              ; 0050aad1
        ;   Label: LAB_0050aad1
    PUSH EAX                            ; 0050aad8
    MOV ESI,dword ptr [ESP + 0x6078]    ; 0050aad9
    PUSH ESI                            ; 0050aae0
    LEA EAX,[ESP + 0x5a10]              ; 0050aae1
    PUSH EAX                            ; 0050aae8
    LEA EAX,[ESP + 0x1214]              ; 0050aae9
    PUSH EAX                            ; 0050aaf0
    LEA EAX,[ESP + 0x18]                ; 0050aaf1
    PUSH EAX                            ; 0050aaf5
    CALL sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005081a0 ; 0050aaf6
        ;   XREF to: 005081a0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_mpegLayer3StereoProcess_FUN_005081a0(SMpegStereoSubbandSamples * input_lr_samples, SMpegStereoSubbandSamples * output_samples, SMpegScalefactorBandData * scalefactor_data, SMpegLayer3GranuleInfo * granule, ...)
    ADD ESP,0x14                        ; 0050aafb
    XOR EDI,EDI                         ; 0050aafe
    MOV EAX,dword ptr [ESP + 0x6018]    ; 0050ab00
    MOV dword ptr [ESP + 0x6090],EDI    ; 0050ab07
    TEST EAX,EAX                        ; 0050ab0e
    JLE 0x0050ad6a                      ; 0050ab10
        ;   XREF to: 0050ad6a (CONDITIONAL_JUMP)  ; LAB_0050ad6a
    MOV EDX,dword ptr [ESP + 0x6078]    ; 0050ab16
    LEA EAX,[ESP + 0x5c00]              ; 0050ab1d
    ADD EDX,0x10                        ; 0050ab24
    ADD EAX,EDX                         ; 0050ab27
    LEA EDX,[ESP + 0x1208]              ; 0050ab29
    MOV dword ptr [ESP + 0x6064],EAX    ; 0050ab30
    MOV dword ptr [ESP + 0x606c],EAX    ; 0050ab37
    LEA EAX,[ESP + 0x2408]              ; 0050ab3e
    MOV dword ptr [ESP + 0x6068],EDX    ; 0050ab45
    MOV dword ptr [ESP + 0x6070],EAX    ; 0050ab4c
    LEA EAX,[ESP + 0x5ff0]              ; 0050ab53
        ;   Label: LAB_0050ab53
    PUSH EAX                            ; 0050ab5a
    MOV ESI,dword ptr [ESP + 0x6070]    ; 0050ab5b
    PUSH ESI                            ; 0050ab62
    LEA EAX,[ESP + 0x2d10]              ; 0050ab63
    PUSH EAX                            ; 0050ab6a
    MOV EDI,dword ptr [ESP + 0x6074]    ; 0050ab6b
    PUSH EDI                            ; 0050ab72
    CALL sound_mp3.cpp_reorderShortBlockSamples_FUN_00507dc0 ; 0050ab73
        ;   XREF to: 00507dc0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_reorderShortBlockSamples_FUN_00507dc0(SMpegSubbandSamples * input_samples, SMpegSubbandSamples * output_samples, SMpegLayer3GranuleInfo * granule, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0050ab78
    LEA EAX,[ESP + 0x5ff0]              ; 0050ab7b
    PUSH EAX                            ; 0050ab82
    PUSH ESI                            ; 0050ab83
    LEA EAX,[ESP + 0x3610]              ; 0050ab84
    PUSH EAX                            ; 0050ab8b
    LEA EAX,[ESP + 0x2d14]              ; 0050ab8c
    PUSH EAX                            ; 0050ab93
    CALL sound_mp3.cpp_antiAliasingButterfly_FUN_00508f10 ; 0050ab94
        ;   XREF to: 00508f10 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_antiAliasingButterfly_FUN_00508f10(float * input_samples, float * output_samples, SMpegLayer3GranuleInfo * granule, SMpegFrameHeader * header)
    ADD ESP,0x10                        ; 0050ab99
    MOV EAX,dword ptr [ESP + 0x6064]    ; 0050ab9c
    LEA EDI,[ESP + 0x3608]              ; 0050aba3
    MOV dword ptr [ESP + 0x6044],EAX    ; 0050abaa
    LEA EAX,[ESP + 0x3f08]              ; 0050abb1
    XOR ESI,ESI                         ; 0050abb8
    MOV dword ptr [ESP + 0x6058],EAX    ; 0050abba
    LEA EDX,[ESP + 0x5ff0]              ; 0050abc1
        ;   Label: LAB_0050abc1
    PUSH EDX                            ; 0050abc8
    MOV EDX,dword ptr [ESP + 0x6048]    ; 0050abc9
    PUSH EDX                            ; 0050abd0
    MOV ECX,dword ptr [ESP + 0x6098]    ; 0050abd1
    PUSH ECX                            ; 0050abd8
    PUSH ESI                            ; 0050abd9
    MOV EAX,dword ptr [ESP + 0x6068]    ; 0050abda
    PUSH EAX                            ; 0050abe1
    PUSH EDI                            ; 0050abe2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050abe3
    PUSH EDX                            ; 0050abe6
    CALL sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00509600 ; 0050abe7
        ;   XREF to: 00509600 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00509600(CMP3Decoder * this_ptr, float * input_samples, float * output_buffer, int subband_index, ...)
    ADD ESP,0x1c                        ; 0050abec
    MOV ECX,dword ptr [ESP + 0x6058]    ; 0050abef
    INC ESI                             ; 0050abf6
    ADD ECX,0x48                        ; 0050abf7
    ADD EDI,0x48                        ; 0050abfa
    MOV dword ptr [ESP + 0x6058],ECX    ; 0050abfd
    CMP ESI,0x20                        ; 0050ac04
    JL 0x0050abc1                       ; 0050ac07
        ;   XREF to: 0050abc1 (CONDITIONAL_JUMP)  ; LAB_0050abc1
    XOR ESI,ESI                         ; 0050ac09
    MOV dword ptr [ESP + 0x605c],ESI    ; 0050ac0b
    MOV dword ptr [ESP + 0x6094],ESI    ; 0050ac12
    MOV EAX,dword ptr [ESP + 0x6094]    ; 0050ac19
        ;   Label: LAB_0050ac19
    MOV EDX,EAX                         ; 0050ac20
    MOV ESI,0x2                         ; 0050ac22
    SAR EDX,0x1f                        ; 0050ac27
    IDIV ESI                            ; 0050ac2a
    XOR ECX,ECX                         ; 0050ac2c
    MOV ESI,dword ptr [ESP + 0x605c]    ; 0050ac2e
    MOV EDI,EDX                         ; 0050ac35
    TEST EDI,EDI                        ; 0050ac37
        ;   Label: LAB_0050ac37
    JZ 0x0050ac68                       ; 0050ac39
        ;   XREF to: 0050ac68 (CONDITIONAL_JUMP)  ; LAB_0050ac68
    MOV dword ptr [ESP + 0x604c],0x2    ; 0050ac3b
    MOV EDX,ECX                         ; 0050ac46
    MOV EAX,ECX                         ; 0050ac48
    SAR EDX,0x1f                        ; 0050ac4a
    IDIV dword ptr [ESP + 0x604c]       ; 0050ac4d
    TEST EDX,EDX                        ; 0050ac54
    JZ 0x0050ac68                       ; 0050ac56
        ;   XREF to: 0050ac68 (CONDITIONAL_JUMP)  ; LAB_0050ac68
    FLD float ptr [ESP + ESI*0x1 + 0x3f08] ; 0050ac58
    FCHS                                ; 0050ac5f
    FSTP float ptr [ESP + ESI*0x1 + 0x3f08] ; 0050ac61
    INC ECX                             ; 0050ac68
        ;   Label: LAB_0050ac68
    ADD ESI,0x48                        ; 0050ac69
    CMP ECX,0x20                        ; 0050ac6c
    JL 0x0050ac37                       ; 0050ac6f
        ;   XREF to: 0050ac37 (CONDITIONAL_JUMP)  ; LAB_0050ac37
    MOV EDX,dword ptr [ESP + 0x6094]    ; 0050ac71
    MOV EAX,dword ptr [ESP + 0x605c]    ; 0050ac78
    INC EDX                             ; 0050ac7f
    ADD EAX,0x4                         ; 0050ac80
    MOV dword ptr [ESP + 0x6094],EDX    ; 0050ac83
    MOV dword ptr [ESP + 0x605c],EAX    ; 0050ac8a
    CMP EDX,0x12                        ; 0050ac91
    JL 0x0050ac19                       ; 0050ac94
        ;   XREF to: 0050ac19 (CONDITIONAL_JUMP)  ; LAB_0050ac19
    MOV EAX,dword ptr [ESP + 0x6070]    ; 0050ac96
    XOR EDI,EDI                         ; 0050ac9d
    MOV dword ptr [ESP + 0x6060],EAX    ; 0050ac9f
    MOV ESI,EDI                         ; 0050aca6
        ;   Label: LAB_0050aca6
    XOR ECX,ECX                         ; 0050aca8
    ADD ECX,0x4                         ; 0050acaa
        ;   Label: LAB_0050acaa
    FLD float ptr [ESP + ESI*0x1 + 0x3f08] ; 0050acad
    ADD ESI,0x48                        ; 0050acb4
    FSTP float ptr [ESP + ECX*0x1 + 0x5f3c] ; 0050acb7
    CMP ECX,0x80                        ; 0050acbe
    JNZ 0x0050acaa                      ; 0050acc4
        ;   XREF to: 0050acaa (CONDITIONAL_JUMP)  ; LAB_0050acaa
    MOV ESI,dword ptr [ESP + 0x6060]    ; 0050acc6
    PUSH ESI                            ; 0050accd
    MOV EAX,dword ptr [ESP + 0x6094]    ; 0050acce
    PUSH EAX                            ; 0050acd5
    LEA EDX,[ESP + 0x5f48]              ; 0050acd6
    PUSH EDX                            ; 0050acdd
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050acde
    PUSH EDX                            ; 0050ace1
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0 ; 0050ace2
        ;   XREF to: 005060b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_005060b0(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 0050ace7
    LEA ECX,[ESI + 0x40]                ; 0050acea
    ADD EDI,0x4                         ; 0050aced
    MOV dword ptr [ESP + 0x6060],ECX    ; 0050acf0
    CMP EDI,0x48                        ; 0050acf7
    JNZ 0x0050aca6                      ; 0050acfa
        ;   XREF to: 0050aca6 (CONDITIONAL_JUMP)  ; LAB_0050aca6
    MOV EDX,dword ptr [ESP + 0x6064]    ; 0050acfc
    MOV ECX,dword ptr [ESP + 0x6068]    ; 0050ad03
    MOV ESI,dword ptr [ESP + 0x606c]    ; 0050ad0a
    MOV EDI,dword ptr [ESP + 0x6070]    ; 0050ad11
    MOV EAX,dword ptr [ESP + 0x6090]    ; 0050ad18
    ADD EDX,0xa0                        ; 0050ad1f
    ADD ECX,0x900                       ; 0050ad25
    ADD ESI,0xa0                        ; 0050ad2b
    ADD EDI,0x480                       ; 0050ad31
    INC EAX                             ; 0050ad37
    MOV dword ptr [ESP + 0x6064],EDX    ; 0050ad38
    MOV dword ptr [ESP + 0x6068],ECX    ; 0050ad3f
    MOV dword ptr [ESP + 0x606c],ESI    ; 0050ad46
    MOV dword ptr [ESP + 0x6070],EDI    ; 0050ad4d
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050ad54
    MOV dword ptr [ESP + 0x6090],EAX    ; 0050ad5b
    CMP EAX,EDX                         ; 0050ad62
    JL 0x0050ab53                       ; 0050ad64
        ;   XREF to: 0050ab53 (CONDITIONAL_JUMP)  ; LAB_0050ab53
    XOR ECX,ECX                         ; 0050ad6a
        ;   Label: LAB_0050ad6a
    MOV dword ptr [ESP + 0x6098],ECX    ; 0050ad6c
    MOV EAX,dword ptr [ESP + 0x6098]    ; 0050ad73
        ;   Label: LAB_0050ad73
    XOR EDI,EDI                         ; 0050ad7a
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050ad7c
        ;   Label: LAB_0050ad7c
    XOR ESI,ESI                         ; 0050ad83
    TEST EDX,EDX                        ; 0050ad85
    JLE 0x0050adad                      ; 0050ad87
        ;   XREF to: 0050adad (CONDITIONAL_JUMP)  ; LAB_0050adad
    LEA ECX,[EDI + EAX*0x1]             ; 0050ad89
    ADD EBX,0x2                         ; 0050ad8c
        ;   Label: LAB_0050ad8c
    MOV DX,word ptr [ESP + ECX*0x1 + 0x2408] ; 0050ad8f
    INC ESI                             ; 0050ad97
    MOV word ptr [EBX + -0x2],DX        ; 0050ad98
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0050ad9c
    ADD ECX,0x480                       ; 0050ada3
    CMP ESI,EDX                         ; 0050ada9
    JL 0x0050ad8c                       ; 0050adab
        ;   XREF to: 0050ad8c (CONDITIONAL_JUMP)  ; LAB_0050ad8c
    ADD EDI,0x2                         ; 0050adad
        ;   Label: LAB_0050adad
    CMP EDI,0x40                        ; 0050adb0
    JNZ 0x0050ad7c                      ; 0050adb3
        ;   XREF to: 0050ad7c (CONDITIONAL_JUMP)  ; LAB_0050ad7c
    MOV ECX,dword ptr [ESP + 0x6098]    ; 0050adb5
    ADD ECX,EDI                         ; 0050adbc
    MOV dword ptr [ESP + 0x6098],ECX    ; 0050adbe
    CMP ECX,0x480                       ; 0050adc5
    JNZ 0x0050ad73                      ; 0050adcb
        ;   XREF to: 0050ad73 (CONDITIONAL_JUMP)  ; LAB_0050ad73
    MOV ESI,dword ptr [ESP + 0x6074]    ; 0050adcd
    MOV EDI,dword ptr [ESP + 0x6078]    ; 0050add4
    MOV EAX,dword ptr [ESP + 0x6034]    ; 0050addb
    MOV EDX,dword ptr [ESP + 0x6020]    ; 0050ade2
    ADD ESI,0x48                        ; 0050ade9
    ADD EDI,0x48                        ; 0050adec
    INC EAX                             ; 0050adef
    MOV dword ptr [ESP + 0x6074],ESI    ; 0050adf0
    MOV dword ptr [ESP + 0x6078],EDI    ; 0050adf7
    MOV dword ptr [ESP + 0x6034],EAX    ; 0050adfe
    CMP EAX,EDX                         ; 0050ae05
    JGE 0x0050a493                      ; 0050ae07
        ;   XREF to: 0050a493 (CONDITIONAL_JUMP)  ; LAB_0050a493
    JMP 0x0050a9c9                      ; 0050ae0d
        ;   XREF to: 0050a9c9 (UNCONDITIONAL_JUMP)  ; LAB_0050a9c9
    LEA EAX,[ESP + 0x5ff0]              ; 0050ae12
        ;   Label: LAB_0050ae12
    PUSH EAX                            ; 0050ae19
    PUSH ESI                            ; 0050ae1a
    MOV EAX,dword ptr [ESP + 0x603c]    ; 0050ae1b
    PUSH EAX                            ; 0050ae22
    LEA EAX,[ESP + 0x5c04]              ; 0050ae23
    PUSH EAX                            ; 0050ae2a
    LEA EAX,[ESP + 0x5a18]              ; 0050ae2b
    PUSH EAX                            ; 0050ae32
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050ae33
    PUSH EDX                            ; 0050ae36
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00507040 ; 0050ae37
        ;   XREF to: 00507040 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00507040(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    JMP 0x0050aa45                      ; 0050ae3c
        ;   XREF to: 0050aa45 (UNCONDITIONAL_JUMP)  ; LAB_0050aa45
    MOV EAX,dword ptr [ESI + 0xc]       ; 0050ae41
        ;   Label: LAB_0050ae41
    MOV dword ptr [ESP + 0x608c],EAX    ; 0050ae44
    LEA EAX,[ESP + 0x5ff0]              ; 0050ae4b
    PUSH EAX                            ; 0050ae52
    PUSH ESI                            ; 0050ae53
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170 ; 0050ae54
        ;   XREF to: 00505170 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00505170(CFileBitStream * this_ptr, SMpegFrameHeader * * header_out)
    ADD ESP,0x8                         ; 0050ae59
    LEA EAX,[ESP + 0x5ff0]              ; 0050ae5c
    PUSH EAX                            ; 0050ae63
    CALL sound_mp3.cpp_calculateMpegFrame_FUN_00504670 ; 0050ae64
        ;   XREF to: 00504670 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateMpegFrame_FUN_00504670(SMpegFrame * frame)
    ADD ESP,0x4                         ; 0050ae69
    MOV EAX,dword ptr [ESP + 0x6000]    ; 0050ae6c
    MOV dword ptr [ESP + 0x6018],EAX    ; 0050ae73
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0050ae7a
    CMP dword ptr [EAX],0x0             ; 0050ae81
    SETNZ AL                            ; 0050ae84
    AND EAX,0xff                        ; 0050ae87
    INC EAX                             ; 0050ae8c
    MOV dword ptr [ESP + 0x6020],EAX    ; 0050ae8d
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 0050ae94
    CMP EAX,0x2                         ; 0050ae9b
    JNC 0x0050aeae                      ; 0050ae9e
        ;   XREF to: 0050aeae (CONDITIONAL_JUMP)  ; LAB_0050aeae
    CMP EAX,0x1                         ; 0050aea0
    JZ 0x0050a2fa                       ; 0050aea3
        ;   XREF to: 0050a2fa (CONDITIONAL_JUMP)  ; LAB_0050a2fa
    JMP 0x0050a493                      ; 0050aea9
        ;   XREF to: 0050a493 (UNCONDITIONAL_JUMP)  ; LAB_0050a493
    CMP EAX,0x2                         ; 0050aeae
        ;   Label: LAB_0050aeae
    JBE 0x0050a5cc                      ; 0050aeb1
        ;   XREF to: 0050a5cc (CONDITIONAL_JUMP)  ; LAB_0050a5cc
    CMP EAX,0x3                         ; 0050aeb7
    JZ 0x0050a7eb                       ; 0050aeba
        ;   XREF to: 0050a7eb (CONDITIONAL_JUMP)  ; LAB_0050a7eb
    JMP 0x0050a493                      ; 0050aec0
        ;   XREF to: 0050a493 (UNCONDITIONAL_JUMP)  ; LAB_0050a493

