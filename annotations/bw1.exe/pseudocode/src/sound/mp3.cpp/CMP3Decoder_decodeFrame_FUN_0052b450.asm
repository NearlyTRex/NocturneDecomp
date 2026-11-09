; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_0052b450(CMP3Decoder *this_ptr,short *pcm_output)
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
;   sound_mp3.cpp_CMP3Decoder_read_FUN_0052b170 at 0052b254
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0 at 0052b38d
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb596
;   TerminatedCString s_Not_enough_main_data_to_005eb5a7
;   undefined4 DAT_006202e8
;   undefined4 DAT_00620328
;   undefined4 DAT_00620490
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   sound_mp3.cpp_antiAliasingButterfly_FUN_0052a0e0
;   sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00527080
;   sound_mp3.cpp_calculateMainDataSize_FUN_0052a880
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00526530
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00526400
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_005268e0
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_005265e0
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b450
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450
    PUSH ESI                            ; 0052b451
    PUSH EDI                            ; 0052b452
    PUSH EBP                            ; 0052b453
    MOV EBP,ESP                         ; 0052b454
    SUB ESP,0x60a0                      ; 0052b456
    AND ESP,0xfffffff8                  ; 0052b45c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052b45f
    LEA EAX,[ESP + 0x5fc0]              ; 0052b462
    MOV ECX,0xffffffff                  ; 0052b469
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052b46e
    XOR EDX,EDX                         ; 0052b471
    MOV dword ptr [ESP + 0x5ff0],EAX    ; 0052b473
    ADD ESI,0x5320                      ; 0052b47a
    MOV dword ptr [ESP + 0x5ffc],ECX    ; 0052b480
    MOV dword ptr [ESP + 0x5ff8],EDX    ; 0052b487
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0052b48e
    MOV dword ptr [ESP + 0x601c],EDX    ; 0052b491
    TEST EAX,EAX                        ; 0052b498
    JZ 0x0052b4a7                       ; 0052b49a
        ;   XREF to: 0052b4a7 (CONDITIONAL_JUMP)  ; LAB_0052b4a7
    XOR ESI,ESI                         ; 0052b49c
    MOV EAX,ESI                         ; 0052b49e
    MOV ESP,EBP                         ; 0052b4a0
    POP EBP                             ; 0052b4a2
    POP EDI                             ; 0052b4a3
    POP ESI                             ; 0052b4a4
    POP EBX                             ; 0052b4a5
    RET                                 ; 0052b4a6
    PUSH 0xc                            ; 0052b4a7
        ;   Label: LAB_0052b4a7
    PUSH 0xfff                          ; 0052b4a9
    PUSH ESI                            ; 0052b4ae
    CALL sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70 ; 0052b4af
        ;   XREF to: 00525e70 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_00525e70(CFileBitStream * this_ptr, uint sync_pattern, uint pattern_bits)
    ADD ESP,0xc                         ; 0052b4b4
    TEST EAX,EAX                        ; 0052b4b7
    JNZ 0x0052c011                      ; 0052b4b9
        ;   XREF to: 0052c011 (CONDITIONAL_JUMP)  ; LAB_0052c011
    XOR ESI,ESI                         ; 0052b4bf
    MOV EAX,ESI                         ; 0052b4c1
    MOV ESP,EBP                         ; 0052b4c3
    POP EBP                             ; 0052b4c5
    POP EDI                             ; 0052b4c6
    POP ESI                             ; 0052b4c7
    POP EBX                             ; 0052b4c8
    RET                                 ; 0052b4c9
    LEA EAX,[ESP + 0x5ff0]              ; 0052b4ca
        ;   Label: LAB_0052b4ca
    PUSH EAX                            ; 0052b4d1
    LEA EAX,[ESP + 0x5e44]              ; 0052b4d2
    PUSH EAX                            ; 0052b4d9
    MOV EBX,0x20                        ; 0052b4da
    MOV EDI,0x180                       ; 0052b4df
    PUSH ESI                            ; 0052b4e4
    MOV dword ptr [ESP + 0x10],EBX      ; 0052b4e5
    MOV dword ptr [ESP + 0xc],EDI       ; 0052b4e9
    CALL sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00526530 ; 0052b4ed
        ;   XREF to: 00526530 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_00526530(CFileBitStream * this_ptr, uint * output_array, SMpegFrame * frame)
    ADD ESP,0xc                         ; 0052b4f2
    LEA EAX,[ESP + 0x5ff0]              ; 0052b4f5
    PUSH EAX                            ; 0052b4fc
    LEA EAX,[ESP + 0x540c]              ; 0052b4fd
    PUSH EAX                            ; 0052b504
    LEA EAX,[ESP + 0x5e48]              ; 0052b505
    PUSH EAX                            ; 0052b50c
    PUSH ESI                            ; 0052b50d
    CALL sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_005265e0 ; 0052b50e
        ;   XREF to: 005265e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_005265e0(CFileBitStream * this_ptr, SMpegSubbandAllocation * allocation_indices, SMpegSubbandScalefactors * scalefactors, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0052b513
    XOR EAX,EAX                         ; 0052b516
    MOV dword ptr [ESP + 0x6088],EAX    ; 0052b518
    MOV dword ptr [ESP + 0x6024],ESI    ; 0052b51f
    LEA EAX,[ESP + 0x5ff0]              ; 0052b526
        ;   Label: LAB_0052b526
    PUSH EAX                            ; 0052b52d
    LEA EAX,[ESP + 0x5e44]              ; 0052b52e
    PUSH EAX                            ; 0052b535
    LEA EAX,[ESP + 0x5110]              ; 0052b536
    PUSH EAX                            ; 0052b53d
    MOV EBX,dword ptr [ESP + 0x6030]    ; 0052b53e
    PUSH EBX                            ; 0052b545
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_005268e0 ; 0052b546
        ;   XREF to: 005268e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_005268e0(CFileBitStream * this_ptr, SMpegSubbandScalefactors * quantized_samples, SMpegSubbandAllocation * allocation, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0052b54b
    LEA EAX,[ESP + 0x5ff0]              ; 0052b54e
    PUSH EAX                            ; 0052b555
    LEA EAX,[ESP + 0x5e44]              ; 0052b556
    PUSH EAX                            ; 0052b55d
    LEA EAX,[ESP + 0x5710]              ; 0052b55e
    PUSH EAX                            ; 0052b565
    LEA EAX,[ESP + 0x5114]              ; 0052b566
    PUSH EAX                            ; 0052b56d
    XOR ESI,ESI                         ; 0052b56e
    CALL sound_mp3.cpp_requantizeSamples_FUN_00526f40 ; 0052b570
        ;   XREF to: 00526f40 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeSamples_FUN_00526f40()
    ADD ESP,0x10                        ; 0052b575
    LEA EAX,[ESP + 0x5708]              ; 0052b578
    MOV EDI,dword ptr [ESP + 0x6000]    ; 0052b57f
    MOV dword ptr [ESP + 0x6028],EAX    ; 0052b586
    LEA EAX,[ESP + 0x5408]              ; 0052b58d
    MOV dword ptr [ESP + 0x6050],ESI    ; 0052b594
    MOV dword ptr [ESP + 0x602c],EAX    ; 0052b59b
    XOR EAX,EAX                         ; 0052b5a2
    MOV ECX,EAX                         ; 0052b5a4
        ;   Label: LAB_0052b5a4
    TEST EDI,EDI                        ; 0052b5a6
    JLE 0x0052b5f0                      ; 0052b5a8
        ;   XREF to: 0052b5f0 (CONDITIONAL_JUMP)  ; LAB_0052b5f0
    MOV EBX,dword ptr [ESP + 0x6050]    ; 0052b5aa
    MOV EDX,dword ptr [ESP + 0x602c]    ; 0052b5b1
    MOV ESI,dword ptr [ESP + 0x6028]    ; 0052b5b8
    ADD EBX,EDX                         ; 0052b5bf
    MOV EDX,dword ptr [ESP + 0x6050]    ; 0052b5c1
    ADD EDX,ESI                         ; 0052b5c8
    FLD float ptr [EDX]                 ; 0052b5ca
        ;   Label: LAB_0052b5ca
    MOV ESI,dword ptr [EBX]             ; 0052b5cc
    FLD ST0                             ; 0052b5ce
    FMUL double ptr [ESI*0x8 + 0x620490] ; 0052b5d0 | DAT_00620490
    ADD EBX,0x180                       ; 0052b5d7
    ADD EDX,0x180                       ; 0052b5dd
    INC ECX                             ; 0052b5e3
    FSTP ST1                            ; 0052b5e4
    FSTP float ptr [EDX + 0xfffffe80]   ; 0052b5e6
    CMP ECX,EDI                         ; 0052b5ec
    JL 0x0052b5ca                       ; 0052b5ee
        ;   XREF to: 0052b5ca (CONDITIONAL_JUMP)  ; LAB_0052b5ca
    MOV EDX,dword ptr [ESP + 0x6050]    ; 0052b5f0
        ;   Label: LAB_0052b5f0
    ADD EDX,0x4                         ; 0052b5f7
    MOV dword ptr [ESP + 0x6050],EDX    ; 0052b5fa
    CMP EDX,0x80                        ; 0052b601
    JNZ 0x0052b5a4                      ; 0052b607
        ;   XREF to: 0052b5a4 (CONDITIONAL_JUMP)  ; LAB_0052b5a4
    MOV ESI,dword ptr [ESP + 0x6018]    ; 0052b609
    XOR EBX,EBX                         ; 0052b610
    TEST ESI,ESI                        ; 0052b612
    JLE 0x0052b64b                      ; 0052b614
        ;   XREF to: 0052b64b (CONDITIONAL_JUMP)  ; LAB_0052b64b
    LEA EDI,[ESP + 0x2408]              ; 0052b616
    LEA ESI,[ESP + 0x5708]              ; 0052b61d
    PUSH EDI                            ; 0052b624
        ;   Label: LAB_0052b624
    PUSH EBX                            ; 0052b625
    PUSH ESI                            ; 0052b626
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052b627
    PUSH EAX                            ; 0052b62a
    ADD EDI,0x480                       ; 0052b62b
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280 ; 0052b631
        ;   XREF to: 00527280 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 0052b636
    INC EBX                             ; 0052b639
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0052b63a
    ADD ESI,0x180                       ; 0052b641
    CMP EBX,EDX                         ; 0052b647
    JL 0x0052b624                       ; 0052b649
        ;   XREF to: 0052b624 (CONDITIONAL_JUMP)  ; LAB_0052b624
    MOV ECX,dword ptr [ESP + 0x6088]    ; 0052b64b
        ;   Label: LAB_0052b64b
    INC ECX                             ; 0052b652
    MOV dword ptr [ESP + 0x6088],ECX    ; 0052b653
    CMP ECX,0xc                         ; 0052b65a
    JL 0x0052b526                       ; 0052b65d
        ;   XREF to: 0052b526 (CONDITIONAL_JUMP)  ; LAB_0052b526
    CMP dword ptr [ESP + 0x5fcc],0x0    ; 0052b663
        ;   Label: LAB_0052b663
    JLE 0x0052b780                      ; 0052b66b
        ;   XREF to: 0052b780 (CONDITIONAL_JUMP)  ; LAB_0052b780
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 0052b671
    DEC EAX                             ; 0052b678
    SHL EAX,0x2                         ; 0052b679
    MOV ECX,EAX                         ; 0052b67c
    SHL ECX,0x4                         ; 0052b67e
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 0052b681
    SUB ECX,EAX                         ; 0052b688
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b68a
    SUB EAX,EDX                         ; 0052b691
    SHL EAX,0x2                         ; 0052b693
    MOV EDX,EAX                         ; 0052b696
    SHL EAX,0x4                         ; 0052b698
    SUB EAX,EDX                         ; 0052b69b
    ADD ECX,EAX                         ; 0052b69d
    MOV EAX,dword ptr [ESP + 0x5fcc]    ; 0052b69f
    MOV EDX,dword ptr [ESP + 0x5fd0]    ; 0052b6a6
    FILD dword ptr [ECX + EAX*0x4 + 0x620328] ; 0052b6ad | DAT_00620328
    MOV EAX,dword ptr [ESP + 0x5fc0]    ; 0052b6b4
    SHL EDX,0x3                         ; 0052b6bb
    SHL EAX,0x5                         ; 0052b6be
    XOR ECX,ECX                         ; 0052b6c1
    ADD EAX,EDX                         ; 0052b6c3
    MOV EDX,dword ptr [ESP]             ; 0052b6c5
    MOV dword ptr [ESP + 0x6010],ECX    ; 0052b6c8
    MOV dword ptr [ESP + 0x600c],EDX    ; 0052b6cf
    FILD qword ptr [ESP + 0x600c]       ; 0052b6d6
    FDIV double ptr [EAX + 0x6202e8]    ; 0052b6dd | DAT_006202e8
    FMULP                               ; 0052b6e3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052b6e5
    MOV dword ptr [ESP + 0x6010],ECX    ; 0052b6e9
    MOV dword ptr [ESP + 0x600c],EAX    ; 0052b6f0
    FILD qword ptr [ESP + 0x600c]       ; 0052b6f7
    FDIVP                               ; 0052b6fe
    MOV ESI,dword ptr [ESP + 0x5fd4]    ; 0052b700
    CALL crt_math.c_round_FUN_005c03a0  ; 0052b707
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x6048]      ; 0052b70c
    TEST ESI,ESI                        ; 0052b713
    JZ 0x0052b71e                       ; 0052b715
        ;   XREF to: 0052b71e (CONDITIONAL_JUMP)  ; LAB_0052b71e
    INC dword ptr [ESP + 0x6048]        ; 0052b717
    MOV EAX,dword ptr [ESP + 0x6048]    ; 0052b71e
        ;   Label: LAB_0052b71e
    IMUL EAX,dword ptr [ESP + 0x4]      ; 0052b725
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052b72a
    MOV ECX,dword ptr [ESP + 0x608c]    ; 0052b72d
    MOV dword ptr [ESP + 0x6048],EAX    ; 0052b734
    MOV EAX,dword ptr [ESI + 0x532c]    ; 0052b73b
    SUB EAX,ECX                         ; 0052b741
    MOV EBX,dword ptr [ESP + 0x6048]    ; 0052b743
    ADD EAX,0xc                         ; 0052b74a
    SUB EBX,EAX                         ; 0052b74d
    MOV dword ptr [ESP + 0x6048],EBX    ; 0052b74f
    ADD ESI,0x5320                      ; 0052b756
    MOV EDI,dword ptr [ESP + 0x6048]    ; 0052b75c
    XOR EBX,EBX                         ; 0052b763
    TEST EDI,EDI                        ; 0052b765
    JLE 0x0052b780                      ; 0052b767
        ;   XREF to: 0052b780 (CONDITIONAL_JUMP)  ; LAB_0052b780
    PUSH ESI                            ; 0052b769
        ;   Label: LAB_0052b769
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 0052b76a
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052b76f
    INC EBX                             ; 0052b772
    CMP EBX,dword ptr [ESP + 0x6048]    ; 0052b773
    JL 0x0052b769                       ; 0052b77a
        ;   XREF to: 0052b769 (CONDITIONAL_JUMP)  ; LAB_0052b769
    LEA EAX,[EAX]                       ; 0052b77c
    MOV EDX,dword ptr [ESP + 0x6020]    ; 0052b780
        ;   Label: LAB_0052b780
    LEA ESI,[EDX*0x8 + 0x0]             ; 0052b787
    ADD ESI,EDX                         ; 0052b78e
    SHL ESI,0x6                         ; 0052b790
    MOV EAX,ESI                         ; 0052b793
    MOV ESP,EBP                         ; 0052b795
    POP EBP                             ; 0052b797
    POP EDI                             ; 0052b798
    POP ESI                             ; 0052b799
    POP EBX                             ; 0052b79a
    RET                                 ; 0052b79b
    MOV dword ptr [ESP],0x480           ; 0052b79c
        ;   Label: LAB_0052b79c
    LEA EAX,[ESP + 0x5ff0]              ; 0052b7a3
    PUSH EAX                            ; 0052b7aa
    LEA EAX,[ESP + 0x5e44]              ; 0052b7ab
    PUSH EAX                            ; 0052b7b2
    MOV EDI,0x8                         ; 0052b7b3
    PUSH ESI                            ; 0052b7b8
    MOV dword ptr [ESP + 0x10],EDI      ; 0052b7b9
    CALL sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00526400 ; 0052b7bd
        ;   XREF to: 00526400 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00526400(CFileBitStream * this_ptr, SMpegSubbandAllocation * output_allocation, SMpegFrame * frame)
    ADD ESP,0xc                         ; 0052b7c2
    LEA EAX,[ESP + 0x5ff0]              ; 0052b7c5
    PUSH EAX                            ; 0052b7cc
    LEA EAX,[ESP + 0x540c]              ; 0052b7cd
    PUSH EAX                            ; 0052b7d4
    LEA EAX,[ESP + 0x5e48]              ; 0052b7d5
    PUSH EAX                            ; 0052b7dc
    LEA EAX,[ESP + 0x5d4c]              ; 0052b7dd
    PUSH EAX                            ; 0052b7e4
    PUSH ESI                            ; 0052b7e5
    CALL sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670 ; 0052b7e6
        ;   XREF to: 00526670 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670(CFileBitStream * this_ptr, SMpegSubbandSCFSI * scfsi_array, SMpegSubbandAllocation * allocation_array, SMpegSubbandScalefactors * scalefactor_array, ...)
    ADD ESP,0x14                        ; 0052b7eb
    XOR EDX,EDX                         ; 0052b7ee
    MOV dword ptr [ESP + 0x6014],EDX    ; 0052b7f0
    MOV dword ptr [ESP + 0x6030],ESI    ; 0052b7f7
    LEA EAX,[ESP + 0x5ff0]              ; 0052b7fe
        ;   Label: LAB_0052b7fe
    PUSH EAX                            ; 0052b805
    LEA EAX,[ESP + 0x5e44]              ; 0052b806
    PUSH EAX                            ; 0052b80d
    LEA EAX,[ESP + 0x5110]              ; 0052b80e
    PUSH EAX                            ; 0052b815
    MOV EDI,dword ptr [ESP + 0x603c]    ; 0052b816
    PUSH EDI                            ; 0052b81d
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0 ; 0052b81e
        ;   XREF to: 005269e0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_005269e0(CFileBitStream * this_ptr, SMpegSubbandScalefactors * sample_array, SMpegSubbandAllocation * allocation_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0052b823
    LEA EAX,[ESP + 0x5ff0]              ; 0052b826
    PUSH EAX                            ; 0052b82d
    LEA EAX,[ESP + 0x570c]              ; 0052b82e
    PUSH EAX                            ; 0052b835
    LEA EAX,[ESP + 0x5e48]              ; 0052b836
    PUSH EAX                            ; 0052b83d
    LEA EAX,[ESP + 0x5114]              ; 0052b83e
    PUSH EAX                            ; 0052b845
    CALL sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_00526c70 ; 0052b846
        ;   XREF to: 00526c70 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_00526c70()
    ADD ESP,0x10                        ; 0052b84b
    MOV EAX,dword ptr [ESP + 0x6014]    ; 0052b84e
    SAR EAX,0x2                         ; 0052b855
    PUSH EAX                            ; 0052b858
    LEA EAX,[ESP + 0x5ff4]              ; 0052b859
    PUSH EAX                            ; 0052b860
    LEA EAX,[ESP + 0x5410]              ; 0052b861
    PUSH EAX                            ; 0052b868
    LEA EAX,[ESP + 0x5714]              ; 0052b869
    PUSH EAX                            ; 0052b870
    CALL sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00527080 ; 0052b871
        ;   XREF to: 00527080 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00527080()
    ADD ESP,0x10                        ; 0052b876
    TEST EBX,EBX                        ; 0052b879
    JNZ 0x0052b89a                      ; 0052b87b
        ;   XREF to: 0052b89a (CONDITIONAL_JUMP)  ; LAB_0052b89a
    MOV EDI,dword ptr [ESP + 0x6014]    ; 0052b87d
        ;   Label: LAB_0052b87d
    INC EDI                             ; 0052b884
    MOV dword ptr [ESP + 0x6014],EDI    ; 0052b885
    CMP EDI,0xc                         ; 0052b88c
    JL 0x0052b7fe                       ; 0052b88f
        ;   XREF to: 0052b7fe (CONDITIONAL_JUMP)  ; LAB_0052b7fe
    JMP 0x0052b663                      ; 0052b895
        ;   XREF to: 0052b663 (UNCONDITIONAL_JUMP)  ; LAB_0052b663
    XOR EAX,EAX                         ; 0052b89a
        ;   Label: LAB_0052b89a
    MOV dword ptr [ESP + 0x6080],EAX    ; 0052b89c
    MOV dword ptr [ESP + 0x607c],EAX    ; 0052b8a3
    MOV ECX,dword ptr [ESP + 0x6018]    ; 0052b8aa
        ;   Label: LAB_0052b8aa
    XOR ESI,ESI                         ; 0052b8b1
    TEST ECX,ECX                        ; 0052b8b3
    JLE 0x0052b91a                      ; 0052b8b5
        ;   XREF to: 0052b91a (CONDITIONAL_JUMP)  ; LAB_0052b91a
    MOV EDX,dword ptr [ESP + 0x607c]    ; 0052b8b7
    LEA EAX,[ESP + 0x5708]              ; 0052b8be
    ADD EAX,EDX                         ; 0052b8c5
    MOV EDI,dword ptr [ESP + 0x6080]    ; 0052b8c7
    MOV dword ptr [ESP + 0x609c],EAX    ; 0052b8ce
    LEA EAX,[ESP + 0x2408]              ; 0052b8d5
    ADD EDI,EAX                         ; 0052b8dc
    PUSH EDI                            ; 0052b8de
        ;   Label: LAB_0052b8de
    PUSH ESI                            ; 0052b8df
    MOV EAX,dword ptr [ESP + 0x60a4]    ; 0052b8e0
    PUSH EAX                            ; 0052b8e7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052b8e8
    PUSH EDX                            ; 0052b8eb
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280 ; 0052b8ec
        ;   XREF to: 00527280 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 0052b8f1
    ADD EDI,0x480                       ; 0052b8f4
    MOV ECX,dword ptr [ESP + 0x609c]    ; 0052b8fa
    INC ESI                             ; 0052b901
    ADD ECX,0x180                       ; 0052b902
    MOV EAX,dword ptr [ESP + 0x6018]    ; 0052b908
    MOV dword ptr [ESP + 0x609c],ECX    ; 0052b90f
    CMP ESI,EAX                         ; 0052b916
    JL 0x0052b8de                       ; 0052b918
        ;   XREF to: 0052b8de (CONDITIONAL_JUMP)  ; LAB_0052b8de
    MOV ECX,dword ptr [ESP + 0x6080]    ; 0052b91a
        ;   Label: LAB_0052b91a
    MOV EDX,dword ptr [ESP + 0x607c]    ; 0052b921
    ADD ECX,0x40                        ; 0052b928
    ADD EDX,0x80                        ; 0052b92b
    MOV dword ptr [ESP + 0x6080],ECX    ; 0052b931
    MOV dword ptr [ESP + 0x607c],EDX    ; 0052b938
    CMP ECX,0xc0                        ; 0052b93f
    JNZ 0x0052b8aa                      ; 0052b945
        ;   XREF to: 0052b8aa (CONDITIONAL_JUMP)  ; LAB_0052b8aa
    XOR EDI,EDI                         ; 0052b94b
    MOV dword ptr [ESP + 0x6084],EDI    ; 0052b94d
    MOV dword ptr [ESP + 0x6014],EDI    ; 0052b954
    MOV EAX,dword ptr [ESP + 0x6084]    ; 0052b95b
        ;   Label: LAB_0052b95b
    XOR EDI,EDI                         ; 0052b962
    MOV ESI,dword ptr [ESP + 0x6018]    ; 0052b964
        ;   Label: LAB_0052b964
    XOR ECX,ECX                         ; 0052b96b
    TEST ESI,ESI                        ; 0052b96d
    JLE 0x0052b995                      ; 0052b96f
        ;   XREF to: 0052b995 (CONDITIONAL_JUMP)  ; LAB_0052b995
    LEA ESI,[EDI + EAX*0x1]             ; 0052b971
    ADD EBX,0x2                         ; 0052b974
        ;   Label: LAB_0052b974
    MOV DX,word ptr [ESP + ESI*0x1 + 0x2408] ; 0052b977
    INC ECX                             ; 0052b97f
    MOV word ptr [EBX + -0x2],DX        ; 0052b980
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0052b984
    ADD ESI,0x480                       ; 0052b98b
    CMP ECX,EDX                         ; 0052b991
    JL 0x0052b974                       ; 0052b993
        ;   XREF to: 0052b974 (CONDITIONAL_JUMP)  ; LAB_0052b974
    ADD EDI,0x2                         ; 0052b995
        ;   Label: LAB_0052b995
    CMP EDI,0x40                        ; 0052b998
    JNZ 0x0052b964                      ; 0052b99b
        ;   XREF to: 0052b964 (CONDITIONAL_JUMP)  ; LAB_0052b964
    MOV ECX,dword ptr [ESP + 0x6084]    ; 0052b99d
    ADD ECX,EDI                         ; 0052b9a4
    MOV dword ptr [ESP + 0x6084],ECX    ; 0052b9a6
    CMP ECX,0xc0                        ; 0052b9ad
    JZ 0x0052b87d                       ; 0052b9b3
        ;   XREF to: 0052b87d (CONDITIONAL_JUMP)  ; LAB_0052b87d
    JMP 0x0052b95b                      ; 0052b9b9
        ;   XREF to: 0052b95b (UNCONDITIONAL_JUMP)  ; LAB_0052b95b
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0052b9bb
        ;   Label: LAB_0052b9bb
    MOV ESI,0x8                         ; 0052b9c2
    MOV EDI,dword ptr [EAX]             ; 0052b9c7
    MOV dword ptr [ESP + 0x4],ESI       ; 0052b9c9
    TEST EDI,EDI                        ; 0052b9cd
    JZ 0x0052bb2a                       ; 0052b9cf
        ;   XREF to: 0052bb2a (CONDITIONAL_JUMP)  ; LAB_0052bb2a
    MOV dword ptr [ESP],0x480           ; 0052b9d5
    LEA EAX,[ESP + 0x5ff0]              ; 0052b9dc
        ;   Label: LAB_0052b9dc
    PUSH EAX                            ; 0052b9e3
    LEA EAX,[ESP + 0x5bfc]              ; 0052b9e4
    PUSH EAX                            ; 0052b9eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052b9ec
    ADD EAX,0x5320                      ; 0052b9ef
    PUSH EAX                            ; 0052b9f4
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052b9f5
    PUSH ESI                            ; 0052b9f8
    MOV dword ptr [ESP + 0x604c],EAX    ; 0052b9f9
    CALL sound_mp3.cpp_FUN_00527530     ; 0052ba00
        ;   XREF to: 00527530 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_00527530(CMP3Decoder * this_ptr, CFileBitStream * bit_stream, SMpegLayer3SideInfo * side_info_array, SMpegFrame * frame)
    ADD ESP,0x10                        ; 0052ba05
    MOV ECX,0x7                         ; 0052ba08
    SUB ESP,0x1c                        ; 0052ba0d
    LEA ESI,[ESP + 0x600c]              ; 0052ba10
    MOV EDI,ESP                         ; 0052ba17
    MOVSD.REP ES:EDI,ESI                ; 0052ba19
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_0052a880 ; 0052ba1b
        ;   XREF to: 0052a880 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateMainDataSize_FUN_0052a880()
    ADD ESP,0x1c                        ; 0052ba20
    MOV ESI,EAX                         ; 0052ba23
    TEST EAX,EAX                        ; 0052ba25
    JLE 0x0052ba50                      ; 0052ba27
        ;   XREF to: 0052ba50 (CONDITIONAL_JUMP)  ; LAB_0052ba50
    MOV EDI,dword ptr [ESP + 0x603c]    ; 0052ba29
    PUSH 0x8                            ; 0052ba30
        ;   Label: LAB_0052ba30
    PUSH 0x8                            ; 0052ba32
    PUSH EDI                            ; 0052ba34
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052ba35
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052ba3a
    PUSH EAX                            ; 0052ba3d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052ba3e
    PUSH EDX                            ; 0052ba41
    DEC ESI                             ; 0052ba42
    CALL sound_mp3.cpp_FUN_00525ff0     ; 0052ba43
        ;   XREF to: 00525ff0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_00525ff0(CMP3Decoder * this_ptr, uint byte_value, uint bits_per_byte)
    ADD ESP,0xc                         ; 0052ba48
    TEST ESI,ESI                        ; 0052ba4b
    JG 0x0052ba30                       ; 0052ba4d
        ;   XREF to: 0052ba30 (CONDITIONAL_JUMP)  ; LAB_0052ba30
    NOP                                 ; 0052ba4f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052ba50
        ;   Label: LAB_0052ba50
    PUSH ECX                            ; 0052ba53
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 0052ba54
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052ba59
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052ba5c
    PUSH EDI                            ; 0052ba5f
    MOV ESI,EAX                         ; 0052ba60
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 0052ba62
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052ba67
    XOR EDX,EDX                         ; 0052ba6a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0052ba6c
    DIV ECX                             ; 0052ba70
    SHR ESI,0x3                         ; 0052ba72
    TEST EDX,EDX                        ; 0052ba75
    JZ 0x0052ba88                       ; 0052ba77
        ;   XREF to: 0052ba88 (CONDITIONAL_JUMP)  ; LAB_0052ba88
    MOV EAX,ECX                         ; 0052ba79
    SUB EAX,EDX                         ; 0052ba7b
    PUSH EAX                            ; 0052ba7d
    PUSH EDI                            ; 0052ba7e
    INC ESI                             ; 0052ba7f
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00 ; 0052ba80
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0052ba85
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ba88
        ;   Label: LAB_0052ba88
    MOV EAX,dword ptr [EAX + 0x534c]    ; 0052ba8b
    MOV EDX,dword ptr [ESP + 0x5bf8]    ; 0052ba91
    SUB EAX,ESI                         ; 0052ba98
    SUB EAX,EDX                         ; 0052ba9a
    MOV dword ptr [ESP + 0x6038],EAX    ; 0052ba9c
    CMP ESI,0x1000                      ; 0052baa3
    JLE 0x0052bace                      ; 0052baa9
        ;   XREF to: 0052bace (CONDITIONAL_JUMP)  ; LAB_0052bace
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052baab
    MOV ESI,dword ptr [ECX + 0x534c]    ; 0052baae
    PUSH 0x1000                         ; 0052bab4
    SUB ESI,0x1000                      ; 0052bab9
    PUSH ECX                            ; 0052babf
    MOV dword ptr [ECX + 0x534c],ESI    ; 0052bac0
    CALL sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_005260b0 ; 0052bac6
        ;   XREF to: 005260b0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_005260b0(CMP3Decoder * this_ptr, int num_bytes)
    ADD ESP,0x8                         ; 0052bacb
    MOV ECX,0x7                         ; 0052bace
        ;   Label: LAB_0052bace
    SUB ESP,0x1c                        ; 0052bad3
    LEA ESI,[ESP + 0x600c]              ; 0052bad6
    MOV EDI,ESP                         ; 0052badd
    MOVSD.REP ES:EDI,ESI                ; 0052badf
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_0052a880 ; 0052bae1
        ;   XREF to: 0052a880 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateMainDataSize_FUN_0052a880()
    ADD ESP,0x1c                        ; 0052bae6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052bae9
    MOV EDI,dword ptr [EDX + 0x534c]    ; 0052baec
    ADD EDI,EAX                         ; 0052baf2
    MOV EAX,dword ptr [ESP + 0x6038]    ; 0052baf4
    MOV dword ptr [EDX + 0x534c],EDI    ; 0052bafb
    TEST EAX,EAX                        ; 0052bb01
    JL 0x0052bb36                       ; 0052bb03
        ;   XREF to: 0052bb36 (CONDITIONAL_JUMP)  ; LAB_0052bb36
    MOV ESI,dword ptr [ESP + 0x6038]    ; 0052bb05
        ;   Label: LAB_0052bb05
    TEST ESI,ESI                        ; 0052bb0c
    JLE 0x0052bb64                      ; 0052bb0e
        ;   XREF to: 0052bb64 (CONDITIONAL_JUMP)  ; LAB_0052bb64
    PUSH 0x8                            ; 0052bb10
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052bb12
    PUSH EDX                            ; 0052bb15
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00 ; 0052bb16
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 0052bb1b
    LEA ECX,[ESI + -0x1]                ; 0052bb1e
    MOV dword ptr [ESP + 0x6038],ECX    ; 0052bb21
    JMP 0x0052bb05                      ; 0052bb28
        ;   XREF to: 0052bb05 (UNCONDITIONAL_JUMP)  ; LAB_0052bb05
    MOV dword ptr [ESP],0x240           ; 0052bb2a
        ;   Label: LAB_0052bb2a
    JMP 0x0052b9dc                      ; 0052bb31
        ;   XREF to: 0052b9dc (UNCONDITIONAL_JUMP)  ; LAB_0052b9dc
    MOV EAX,dword ptr [ESP + 0x601c]    ; 0052bb36
        ;   Label: LAB_0052bb36
    DEC EAX                             ; 0052bb3d
    PUSH EAX                            ; 0052bb3e
    MOV EDX,0x5eb596                    ; 0052bb3f | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1029                      ; 0052bb44
    PUSH 0x5eb5a7                       ; 0052bb49 | = "Not enough main data to decode frame %d."
    MOV dword ptr [0x01d1d400],EDX      ; 0052bb4e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0052bb54 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052bb5a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0052bb5f
    JMP 0x0052bb05                      ; 0052bb62
        ;   XREF to: 0052bb05 (UNCONDITIONAL_JUMP)  ; LAB_0052bb05
    TEST EBX,EBX                        ; 0052bb64
        ;   Label: LAB_0052bb64
    JZ 0x0052b663                       ; 0052bb66
        ;   XREF to: 0052b663 (CONDITIONAL_JUMP)  ; LAB_0052b663
    XOR EDI,EDI                         ; 0052bb6c
    MOV EAX,dword ptr [ESP + 0x6020]    ; 0052bb6e
    MOV dword ptr [ESP + 0x6034],EDI    ; 0052bb75
    TEST EAX,EAX                        ; 0052bb7c
    JLE 0x0052b663                      ; 0052bb7e
        ;   XREF to: 0052b663 (CONDITIONAL_JUMP)  ; LAB_0052b663
    LEA EAX,[ESP + 0x5c10]              ; 0052bb84
    MOV dword ptr [ESP + 0x6078],EDI    ; 0052bb8b
    MOV dword ptr [ESP + 0x6074],EAX    ; 0052bb92
    MOV EDI,dword ptr [ESP + 0x6018]    ; 0052bb99
        ;   Label: LAB_0052bb99
    XOR ESI,ESI                         ; 0052bba0
    TEST EDI,EDI                        ; 0052bba2
    JLE 0x0052bca1                      ; 0052bba4
        ;   XREF to: 0052bca1 (CONDITIONAL_JUMP)  ; LAB_0052bca1
    LEA EAX,[ESP + 0x8]                 ; 0052bbaa
    MOV EDI,dword ptr [ESP + 0x6078]    ; 0052bbae
    MOV dword ptr [ESP + 0x6054],EAX    ; 0052bbb5
    ADD EDI,0x10                        ; 0052bbbc
    LEA EAX,[ESP + 0x5c00]              ; 0052bbbf
    ADD EDI,EAX                         ; 0052bbc6
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052bbc8
        ;   Label: LAB_0052bbc8
    PUSH EDX                            ; 0052bbcb
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 0052bbcc
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052bbd1
    MOV dword ptr [ESP + 0x6040],EAX    ; 0052bbd4
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0052bbdb
    CMP dword ptr [EAX],0x0             ; 0052bbe2
    JZ 0x0052bfe2                       ; 0052bbe5
        ;   XREF to: 0052bfe2 (CONDITIONAL_JUMP)  ; LAB_0052bfe2
    LEA EAX,[ESP + 0x5ff0]              ; 0052bbeb
    PUSH EAX                            ; 0052bbf2
    PUSH ESI                            ; 0052bbf3
    MOV ECX,dword ptr [ESP + 0x603c]    ; 0052bbf4
    PUSH ECX                            ; 0052bbfb
    LEA EAX,[ESP + 0x5c04]              ; 0052bbfc
    PUSH EAX                            ; 0052bc03
    LEA EAX,[ESP + 0x5a18]              ; 0052bc04
    PUSH EAX                            ; 0052bc0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052bc0c
    PUSH EAX                            ; 0052bc0f
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00527ab0 ; 0052bc10
        ;   XREF to: 00527ab0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_00527ab0(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x18                        ; 0052bc15
        ;   Label: LAB_0052bc15
    LEA EAX,[ESP + 0x5ff0]              ; 0052bc18
    PUSH EAX                            ; 0052bc1f
    MOV EAX,dword ptr [ESP + 0x6044]    ; 0052bc20
    PUSH EAX                            ; 0052bc27
    MOV EDX,dword ptr [ESP + 0x603c]    ; 0052bc28
    PUSH EDX                            ; 0052bc2f
    PUSH ESI                            ; 0052bc30
    LEA EAX,[ESP + 0x5c08]              ; 0052bc31
    PUSH EAX                            ; 0052bc38
    LEA EAX,[ESP + 0x481c]              ; 0052bc39
    PUSH EAX                            ; 0052bc40
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052bc41
    PUSH ECX                            ; 0052bc44
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410 ; 0052bc45
        ;   XREF to: 00528410 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410(CMP3Decoder * this_ptr, SMpegSubbandQuantizedSamples * quantized_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    ADD ESP,0x1c                        ; 0052bc4a
    LEA EAX,[ESP + 0x5ff0]              ; 0052bc4d
    PUSH EAX                            ; 0052bc54
    PUSH ESI                            ; 0052bc55
    PUSH EDI                            ; 0052bc56
    LEA EAX,[ESP + 0x5a14]              ; 0052bc57
    PUSH EAX                            ; 0052bc5e
    MOV EAX,dword ptr [ESP + 0x6064]    ; 0052bc5f
    PUSH EAX                            ; 0052bc66
    LEA EAX,[ESP + 0x481c]              ; 0052bc67
    PUSH EAX                            ; 0052bc6e
    CALL sound_mp3.cpp_requantizeLayer3Samples_FUN_00528ae0 ; 0052bc6f
        ;   XREF to: 00528ae0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeLayer3Samples_FUN_00528ae0()
    ADD ESP,0x18                        ; 0052bc74
    INC ESI                             ; 0052bc77
    MOV EDX,dword ptr [ESP + 0x6054]    ; 0052bc78
    ADD EDI,0xa0                        ; 0052bc7f
    ADD EDX,0x900                       ; 0052bc85
    MOV ECX,dword ptr [ESP + 0x6018]    ; 0052bc8b
    MOV dword ptr [ESP + 0x6054],EDX    ; 0052bc92
    CMP ESI,ECX                         ; 0052bc99
    JL 0x0052bbc8                       ; 0052bc9b
        ;   XREF to: 0052bbc8 (CONDITIONAL_JUMP)  ; LAB_0052bbc8
    LEA EAX,[ESP + 0x5ff0]              ; 0052bca1
        ;   Label: LAB_0052bca1
    PUSH EAX                            ; 0052bca8
    MOV ESI,dword ptr [ESP + 0x6078]    ; 0052bca9
    PUSH ESI                            ; 0052bcb0
    LEA EAX,[ESP + 0x5a10]              ; 0052bcb1
    PUSH EAX                            ; 0052bcb8
    LEA EAX,[ESP + 0x1214]              ; 0052bcb9
    PUSH EAX                            ; 0052bcc0
    LEA EAX,[ESP + 0x18]                ; 0052bcc1
    PUSH EAX                            ; 0052bcc5
    CALL sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00529370 ; 0052bcc6
        ;   XREF to: 00529370 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_mpegLayer3StereoProcess_FUN_00529370()
    ADD ESP,0x14                        ; 0052bccb
    XOR EDI,EDI                         ; 0052bcce
    MOV EAX,dword ptr [ESP + 0x6018]    ; 0052bcd0
    MOV dword ptr [ESP + 0x6090],EDI    ; 0052bcd7
    TEST EAX,EAX                        ; 0052bcde
    JLE 0x0052bf3a                      ; 0052bce0
        ;   XREF to: 0052bf3a (CONDITIONAL_JUMP)  ; LAB_0052bf3a
    MOV EDX,dword ptr [ESP + 0x6078]    ; 0052bce6
    LEA EAX,[ESP + 0x5c00]              ; 0052bced
    ADD EDX,0x10                        ; 0052bcf4
    ADD EAX,EDX                         ; 0052bcf7
    LEA EDX,[ESP + 0x1208]              ; 0052bcf9
    MOV dword ptr [ESP + 0x6064],EAX    ; 0052bd00
    MOV dword ptr [ESP + 0x606c],EAX    ; 0052bd07
    LEA EAX,[ESP + 0x2408]              ; 0052bd0e
    MOV dword ptr [ESP + 0x6068],EDX    ; 0052bd15
    MOV dword ptr [ESP + 0x6070],EAX    ; 0052bd1c
    LEA EAX,[ESP + 0x5ff0]              ; 0052bd23
        ;   Label: LAB_0052bd23
    PUSH EAX                            ; 0052bd2a
    MOV ESI,dword ptr [ESP + 0x6070]    ; 0052bd2b
    PUSH ESI                            ; 0052bd32
    LEA EAX,[ESP + 0x2d10]              ; 0052bd33
    PUSH EAX                            ; 0052bd3a
    MOV EDI,dword ptr [ESP + 0x6074]    ; 0052bd3b
    PUSH EDI                            ; 0052bd42
    CALL sound_mp3.cpp_reorderShortBlockSamples_FUN_00528f90 ; 0052bd43
        ;   XREF to: 00528f90 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_reorderShortBlockSamples_FUN_00528f90()
    ADD ESP,0x10                        ; 0052bd48
    LEA EAX,[ESP + 0x5ff0]              ; 0052bd4b
    PUSH EAX                            ; 0052bd52
    PUSH ESI                            ; 0052bd53
    LEA EAX,[ESP + 0x3610]              ; 0052bd54
    PUSH EAX                            ; 0052bd5b
    LEA EAX,[ESP + 0x2d14]              ; 0052bd5c
    PUSH EAX                            ; 0052bd63
    CALL sound_mp3.cpp_antiAliasingButterfly_FUN_0052a0e0 ; 0052bd64
        ;   XREF to: 0052a0e0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_antiAliasingButterfly_FUN_0052a0e0()
    ADD ESP,0x10                        ; 0052bd69
    MOV EAX,dword ptr [ESP + 0x6064]    ; 0052bd6c
    LEA EDI,[ESP + 0x3608]              ; 0052bd73
    MOV dword ptr [ESP + 0x6044],EAX    ; 0052bd7a
    LEA EAX,[ESP + 0x3f08]              ; 0052bd81
    XOR ESI,ESI                         ; 0052bd88
    MOV dword ptr [ESP + 0x6058],EAX    ; 0052bd8a
    LEA EDX,[ESP + 0x5ff0]              ; 0052bd91
        ;   Label: LAB_0052bd91
    PUSH EDX                            ; 0052bd98
    MOV EDX,dword ptr [ESP + 0x6048]    ; 0052bd99
    PUSH EDX                            ; 0052bda0
    MOV ECX,dword ptr [ESP + 0x6098]    ; 0052bda1
    PUSH ECX                            ; 0052bda8
    PUSH ESI                            ; 0052bda9
    MOV EAX,dword ptr [ESP + 0x6068]    ; 0052bdaa
    PUSH EAX                            ; 0052bdb1
    PUSH EDI                            ; 0052bdb2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052bdb3
    PUSH EDX                            ; 0052bdb6
    CALL sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_0052a7d0 ; 0052bdb7
        ;   XREF to: 0052a7d0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_0052a7d0(CMP3Decoder * this_ptr, float * input_samples, float * output_buffer, int subband_index, ...)
    ADD ESP,0x1c                        ; 0052bdbc
    MOV ECX,dword ptr [ESP + 0x6058]    ; 0052bdbf
    INC ESI                             ; 0052bdc6
    ADD ECX,0x48                        ; 0052bdc7
    ADD EDI,0x48                        ; 0052bdca
    MOV dword ptr [ESP + 0x6058],ECX    ; 0052bdcd
    CMP ESI,0x20                        ; 0052bdd4
    JL 0x0052bd91                       ; 0052bdd7
        ;   XREF to: 0052bd91 (CONDITIONAL_JUMP)  ; LAB_0052bd91
    XOR ESI,ESI                         ; 0052bdd9
    MOV dword ptr [ESP + 0x605c],ESI    ; 0052bddb
    MOV dword ptr [ESP + 0x6094],ESI    ; 0052bde2
    MOV EAX,dword ptr [ESP + 0x6094]    ; 0052bde9
        ;   Label: LAB_0052bde9
    MOV EDX,EAX                         ; 0052bdf0
    MOV ESI,0x2                         ; 0052bdf2
    SAR EDX,0x1f                        ; 0052bdf7
    IDIV ESI                            ; 0052bdfa
    XOR ECX,ECX                         ; 0052bdfc
    MOV ESI,dword ptr [ESP + 0x605c]    ; 0052bdfe
    MOV EDI,EDX                         ; 0052be05
    TEST EDI,EDI                        ; 0052be07
        ;   Label: LAB_0052be07
    JZ 0x0052be38                       ; 0052be09
        ;   XREF to: 0052be38 (CONDITIONAL_JUMP)  ; LAB_0052be38
    MOV dword ptr [ESP + 0x604c],0x2    ; 0052be0b
    MOV EDX,ECX                         ; 0052be16
    MOV EAX,ECX                         ; 0052be18
    SAR EDX,0x1f                        ; 0052be1a
    IDIV dword ptr [ESP + 0x604c]       ; 0052be1d
    TEST EDX,EDX                        ; 0052be24
    JZ 0x0052be38                       ; 0052be26
        ;   XREF to: 0052be38 (CONDITIONAL_JUMP)  ; LAB_0052be38
    FLD float ptr [ESP + ESI*0x1 + 0x3f08] ; 0052be28
    FCHS                                ; 0052be2f
    FSTP float ptr [ESP + ESI*0x1 + 0x3f08] ; 0052be31
    INC ECX                             ; 0052be38
        ;   Label: LAB_0052be38
    ADD ESI,0x48                        ; 0052be39
    CMP ECX,0x20                        ; 0052be3c
    JL 0x0052be07                       ; 0052be3f
        ;   XREF to: 0052be07 (CONDITIONAL_JUMP)  ; LAB_0052be07
    MOV EDX,dword ptr [ESP + 0x6094]    ; 0052be41
    MOV EAX,dword ptr [ESP + 0x605c]    ; 0052be48
    INC EDX                             ; 0052be4f
    ADD EAX,0x4                         ; 0052be50
    MOV dword ptr [ESP + 0x6094],EDX    ; 0052be53
    MOV dword ptr [ESP + 0x605c],EAX    ; 0052be5a
    CMP EDX,0x12                        ; 0052be61
    JL 0x0052bde9                       ; 0052be64
        ;   XREF to: 0052bde9 (CONDITIONAL_JUMP)  ; LAB_0052bde9
    MOV EAX,dword ptr [ESP + 0x6070]    ; 0052be66
    XOR EDI,EDI                         ; 0052be6d
    MOV dword ptr [ESP + 0x6060],EAX    ; 0052be6f
    MOV ESI,EDI                         ; 0052be76
        ;   Label: LAB_0052be76
    XOR ECX,ECX                         ; 0052be78
    ADD ECX,0x4                         ; 0052be7a
        ;   Label: LAB_0052be7a
    FLD float ptr [ESP + ESI*0x1 + 0x3f08] ; 0052be7d
    ADD ESI,0x48                        ; 0052be84
    FSTP float ptr [ESP + ECX*0x1 + 0x5f3c] ; 0052be87
    CMP ECX,0x80                        ; 0052be8e
    JNZ 0x0052be7a                      ; 0052be94
        ;   XREF to: 0052be7a (CONDITIONAL_JUMP)  ; LAB_0052be7a
    MOV ESI,dword ptr [ESP + 0x6060]    ; 0052be96
    PUSH ESI                            ; 0052be9d
    MOV EAX,dword ptr [ESP + 0x6094]    ; 0052be9e
    PUSH EAX                            ; 0052bea5
    LEA EDX,[ESP + 0x5f48]              ; 0052bea6
    PUSH EDX                            ; 0052bead
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052beae
    PUSH EDX                            ; 0052beb1
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280 ; 0052beb2
        ;   XREF to: 00527280 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_00527280(CMP3Decoder * this_ptr, float * subband_samples, int channel_index, short * pcm_output)
    ADD ESP,0x10                        ; 0052beb7
    LEA ECX,[ESI + 0x40]                ; 0052beba
    ADD EDI,0x4                         ; 0052bebd
    MOV dword ptr [ESP + 0x6060],ECX    ; 0052bec0
    CMP EDI,0x48                        ; 0052bec7
    JNZ 0x0052be76                      ; 0052beca
        ;   XREF to: 0052be76 (CONDITIONAL_JUMP)  ; LAB_0052be76
    MOV EDX,dword ptr [ESP + 0x6064]    ; 0052becc
    MOV ECX,dword ptr [ESP + 0x6068]    ; 0052bed3
    MOV ESI,dword ptr [ESP + 0x606c]    ; 0052beda
    MOV EDI,dword ptr [ESP + 0x6070]    ; 0052bee1
    MOV EAX,dword ptr [ESP + 0x6090]    ; 0052bee8
    ADD EDX,0xa0                        ; 0052beef
    ADD ECX,0x900                       ; 0052bef5
    ADD ESI,0xa0                        ; 0052befb
    ADD EDI,0x480                       ; 0052bf01
    INC EAX                             ; 0052bf07
    MOV dword ptr [ESP + 0x6064],EDX    ; 0052bf08
    MOV dword ptr [ESP + 0x6068],ECX    ; 0052bf0f
    MOV dword ptr [ESP + 0x606c],ESI    ; 0052bf16
    MOV dword ptr [ESP + 0x6070],EDI    ; 0052bf1d
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0052bf24
    MOV dword ptr [ESP + 0x6090],EAX    ; 0052bf2b
    CMP EAX,EDX                         ; 0052bf32
    JL 0x0052bd23                       ; 0052bf34
        ;   XREF to: 0052bd23 (CONDITIONAL_JUMP)  ; LAB_0052bd23
    XOR ECX,ECX                         ; 0052bf3a
        ;   Label: LAB_0052bf3a
    MOV dword ptr [ESP + 0x6098],ECX    ; 0052bf3c
    MOV EAX,dword ptr [ESP + 0x6098]    ; 0052bf43
        ;   Label: LAB_0052bf43
    XOR EDI,EDI                         ; 0052bf4a
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0052bf4c
        ;   Label: LAB_0052bf4c
    XOR ESI,ESI                         ; 0052bf53
    TEST EDX,EDX                        ; 0052bf55
    JLE 0x0052bf7d                      ; 0052bf57
        ;   XREF to: 0052bf7d (CONDITIONAL_JUMP)  ; LAB_0052bf7d
    LEA ECX,[EDI + EAX*0x1]             ; 0052bf59
    ADD EBX,0x2                         ; 0052bf5c
        ;   Label: LAB_0052bf5c
    MOV DX,word ptr [ESP + ECX*0x1 + 0x2408] ; 0052bf5f
    INC ESI                             ; 0052bf67
    MOV word ptr [EBX + -0x2],DX        ; 0052bf68
    MOV EDX,dword ptr [ESP + 0x6018]    ; 0052bf6c
    ADD ECX,0x480                       ; 0052bf73
    CMP ESI,EDX                         ; 0052bf79
    JL 0x0052bf5c                       ; 0052bf7b
        ;   XREF to: 0052bf5c (CONDITIONAL_JUMP)  ; LAB_0052bf5c
    ADD EDI,0x2                         ; 0052bf7d
        ;   Label: LAB_0052bf7d
    CMP EDI,0x40                        ; 0052bf80
    JNZ 0x0052bf4c                      ; 0052bf83
        ;   XREF to: 0052bf4c (CONDITIONAL_JUMP)  ; LAB_0052bf4c
    MOV ECX,dword ptr [ESP + 0x6098]    ; 0052bf85
    ADD ECX,EDI                         ; 0052bf8c
    MOV dword ptr [ESP + 0x6098],ECX    ; 0052bf8e
    CMP ECX,0x480                       ; 0052bf95
    JNZ 0x0052bf43                      ; 0052bf9b
        ;   XREF to: 0052bf43 (CONDITIONAL_JUMP)  ; LAB_0052bf43
    MOV ESI,dword ptr [ESP + 0x6074]    ; 0052bf9d
    MOV EDI,dword ptr [ESP + 0x6078]    ; 0052bfa4
    MOV EAX,dword ptr [ESP + 0x6034]    ; 0052bfab
    MOV EDX,dword ptr [ESP + 0x6020]    ; 0052bfb2
    ADD ESI,0x48                        ; 0052bfb9
    ADD EDI,0x48                        ; 0052bfbc
    INC EAX                             ; 0052bfbf
    MOV dword ptr [ESP + 0x6074],ESI    ; 0052bfc0
    MOV dword ptr [ESP + 0x6078],EDI    ; 0052bfc7
    MOV dword ptr [ESP + 0x6034],EAX    ; 0052bfce
    CMP EAX,EDX                         ; 0052bfd5
    JGE 0x0052b663                      ; 0052bfd7
        ;   XREF to: 0052b663 (CONDITIONAL_JUMP)  ; LAB_0052b663
    JMP 0x0052bb99                      ; 0052bfdd
        ;   XREF to: 0052bb99 (UNCONDITIONAL_JUMP)  ; LAB_0052bb99
    LEA EAX,[ESP + 0x5ff0]              ; 0052bfe2
        ;   Label: LAB_0052bfe2
    PUSH EAX                            ; 0052bfe9
    PUSH ESI                            ; 0052bfea
    MOV EAX,dword ptr [ESP + 0x603c]    ; 0052bfeb
    PUSH EAX                            ; 0052bff2
    LEA EAX,[ESP + 0x5c04]              ; 0052bff3
    PUSH EAX                            ; 0052bffa
    LEA EAX,[ESP + 0x5a18]              ; 0052bffb
    PUSH EAX                            ; 0052c002
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052c003
    PUSH EDX                            ; 0052c006
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00528210 ; 0052c007
        ;   XREF to: 00528210 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00528210(CMP3Decoder * this_ptr, int * scalefactor_dest, SMpegLayer3SideInfo * side_info, int channel, ...)
    JMP 0x0052bc15                      ; 0052c00c
        ;   XREF to: 0052bc15 (UNCONDITIONAL_JUMP)  ; LAB_0052bc15
    MOV EAX,dword ptr [ESI + 0xc]       ; 0052c011
        ;   Label: LAB_0052c011
    MOV dword ptr [ESP + 0x608c],EAX    ; 0052c014
    LEA EAX,[ESP + 0x5ff0]              ; 0052c01b
    PUSH EAX                            ; 0052c022
    PUSH ESI                            ; 0052c023
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340 ; 0052c024
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_00526340(CFileBitStream * this_ptr, SMpegFrameHeader * * header_out)
    ADD ESP,0x8                         ; 0052c029
    LEA EAX,[ESP + 0x5ff0]              ; 0052c02c
    PUSH EAX                            ; 0052c033
    CALL sound_mp3.cpp_FUN_00525840     ; 0052c034
        ;   XREF to: 00525840 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_FUN_00525840(SMpegFrame * frame)
    ADD ESP,0x4                         ; 0052c039
    MOV EAX,dword ptr [ESP + 0x6000]    ; 0052c03c
    MOV dword ptr [ESP + 0x6018],EAX    ; 0052c043
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 0052c04a
    CMP dword ptr [EAX],0x0             ; 0052c051
    SETNZ AL                            ; 0052c054
    AND EAX,0xff                        ; 0052c057
    INC EAX                             ; 0052c05c
    MOV dword ptr [ESP + 0x6020],EAX    ; 0052c05d
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 0052c064
    CMP EAX,0x2                         ; 0052c06b
    JNC 0x0052c07e                      ; 0052c06e
        ;   XREF to: 0052c07e (CONDITIONAL_JUMP)  ; LAB_0052c07e
    CMP EAX,0x1                         ; 0052c070
    JZ 0x0052b4ca                       ; 0052c073
        ;   XREF to: 0052b4ca (CONDITIONAL_JUMP)  ; LAB_0052b4ca
    JMP 0x0052b663                      ; 0052c079
        ;   XREF to: 0052b663 (UNCONDITIONAL_JUMP)  ; LAB_0052b663
    CMP EAX,0x2                         ; 0052c07e
        ;   Label: LAB_0052c07e
    JBE 0x0052b79c                      ; 0052c081
        ;   XREF to: 0052b79c (CONDITIONAL_JUMP)  ; LAB_0052b79c
    CMP EAX,0x3                         ; 0052c087
    JZ 0x0052b9bb                       ; 0052c08a
        ;   XREF to: 0052b9bb (CONDITIONAL_JUMP)  ; LAB_0052b9bb
    JMP 0x0052b663                      ; 0052c090
        ;   XREF to: 0052b663 (UNCONDITIONAL_JUMP)  ; LAB_0052b663

