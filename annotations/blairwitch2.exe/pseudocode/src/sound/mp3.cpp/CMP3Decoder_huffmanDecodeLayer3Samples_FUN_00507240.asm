; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; SMpegSubbandQuantizedSamples * Stack[0x8]:4   quantized_dest
; SMpegLayer3SideInfo * Stack[0xc]:4   side_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule
; int              Stack[0x18]:4   frame_bit_offset
; SMpegFrame *     Stack[0x1c]:4   frame
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050aa75
;
; Referenced Globals:
;   undefined4 DAT_005e00f7
;   undefined4 DAT_005e00fa
;   TerminatedCString s_sound_mp3_cpp_005e00fd
;   TerminatedCString s_wrong_table_number_u_Fil_005e010e
;   TerminatedCString s_sound_mp3_cpp_005e012f
;   TerminatedCString s_wrong_table_u_reference_005e0140
;   TerminatedCString s_sound_mp3_cpp_005e0164
;   TerminatedCString s_MP3_Huffman_tree_overflo_005e0175
;   TerminatedCString s_sound_mp3_cpp_005e019a
;   TerminatedCString s_huffman_decodertable_err_005e01ab
;   TerminatedCString s_sound_mp3_cpp_005e01dd
;   TerminatedCString s_decoder_table_read_error_005e01ee
;   undefined4 DAT_0061933c
;   undefined4 DAT_00619340
;   undefined4 DAT_0061ade0
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20
;   sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30
;   sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00504e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507240
        ;   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00507240
    PUSH ESI                            ; 00507241
    PUSH EDI                            ; 00507242
    PUSH EBP                            ; 00507243
    SUB ESP,0x38                        ; 00507244
    MOV ECX,dword ptr [ESP + 0x64]      ; 00507247
    MOV ECX,dword ptr [ECX]             ; 0050724b
    MOV EDX,dword ptr [ECX]             ; 0050724d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050724f
    SUB EAX,EDX                         ; 00507256
    MOV EDX,dword ptr [ECX + 0x10]      ; 00507258
    ADD EDX,EAX                         ; 0050725b
    MOV dword ptr [ESP + 0x14],EDX      ; 0050725d
    MOV EDX,dword ptr [0x01d1edd0]      ; 00507261 | DAT_01d1edd0
    TEST EDX,EDX                        ; 00507267
    JZ 0x005074a0                       ; 00507269
        ;   XREF to: 005074a0 (CONDITIONAL_JUMP)  ; LAB_005074a0
    MOV EDX,dword ptr [ESP + 0x58]      ; 0050726f
        ;   Label: LAB_0050726f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507273
    ADD EAX,EDX                         ; 0050727a
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050727c
    SHL EAX,0x5                         ; 00507280
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00507283
    ADD ECX,EAX                         ; 00507287
    LEA EAX,[EDX*0x8 + 0x0]             ; 00507289
    ADD EAX,EDX                         ; 00507290
    SHL EAX,0x3                         ; 00507292
    ADD EAX,ECX                         ; 00507295
    CMP dword ptr [EAX + 0x28],0x0      ; 00507297
    JZ 0x00507704                       ; 0050729b
        ;   XREF to: 00507704 (CONDITIONAL_JUMP)  ; LAB_00507704
    CMP dword ptr [EAX + 0x2c],0x2      ; 005072a1
    JNZ 0x00507704                      ; 005072a5
        ;   XREF to: 00507704 (CONDITIONAL_JUMP)  ; LAB_00507704
    MOV EBX,0x24                        ; 005072ab
    MOV EBP,0x240                       ; 005072b0
    MOV dword ptr [ESP + 0x28],EBX      ; 005072b5
    MOV EDX,dword ptr [ESP + 0x58]      ; 005072b9
        ;   Label: LAB_005072b9
    MOV EBX,dword ptr [ESP + 0x54]      ; 005072bd
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005072c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005072c5
    PUSH ESI                            ; 005072cc
    ADD EAX,EDX                         ; 005072cd
    XOR ESI,ESI                         ; 005072cf
    MOV EDX,dword ptr [ESP + 0x60]      ; 005072d1
    SHL EAX,0x5                         ; 005072d5
    LEA EDI,[EDX*0x8 + 0x0]             ; 005072d8
    ADD EBX,EAX                         ; 005072df
    ADD EDI,EDX                         ; 005072e1
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 005072e3
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005072e8
    SHL EDI,0x3                         ; 005072eb
    MOV dword ptr [ESP + 0x24],EBX      ; 005072ee
    MOV dword ptr [ESP + 0x18],EDI      ; 005072f2
    MOV EBX,0x1                         ; 005072f6
    MOV EDI,dword ptr [ESP + 0x24]      ; 005072fb
        ;   Label: LAB_005072fb
    ADD EDI,dword ptr [ESP + 0x18]      ; 005072ff
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00507303
    ADD EAX,EAX                         ; 00507306
    CMP ESI,EAX                         ; 00507308
    JC 0x00507760                       ; 0050730a
        ;   XREF to: 00507760 (CONDITIONAL_JUMP)  ; LAB_00507760
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00507310
    PUSH EDX                            ; 00507314
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 00507315
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    MOV EDX,dword ptr [EDI + 0x5c]      ; 0050731a
    ADD EDX,0x20                        ; 0050731d
    MOV EAX,EDX                         ; 00507320
    SHL EAX,0x6                         ; 00507322
    ADD EAX,EDX                         ; 00507325
    SHL EAX,0x2                         ; 00507327
    ADD EAX,EDX                         ; 0050732a
    MOV EDX,0x1d23658                   ; 0050732c
    SHL EAX,0x3                         ; 00507331
    ADD ESP,0x4                         ; 00507334
    ADD EDX,EAX                         ; 00507337
    MOV dword ptr [ESP + 0x20],EDX      ; 00507339
    MOV EDX,dword ptr [ESP + 0x58]      ; 0050733d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507341
    ADD EAX,EDX                         ; 00507348
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050734a
    SHL EAX,0x5                         ; 0050734e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00507351
    ADD ECX,EAX                         ; 00507355
    LEA EAX,[EDX*0x8 + 0x0]             ; 00507357
    ADD EAX,EDX                         ; 0050735e
    LEA EDI,[ESI + 0x3]                 ; 00507360
    SHL EAX,0x3                         ; 00507363
    LEA EBP,[ESI + 0x2]                 ; 00507366
    ADD ECX,EAX                         ; 00507369
    LEA EBX,[ESI + 0x1]                 ; 0050736b
    MOV dword ptr [ESP + 0x1c],ECX      ; 0050736e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00507372
        ;   Label: LAB_00507372
    MOV EAX,dword ptr [ESP + 0x60]      ; 00507376
    MOV ECX,dword ptr [EDX + 0x18]      ; 0050737a
    ADD EAX,ECX                         ; 0050737d
    MOV dword ptr [ESP + 0x34],EAX      ; 0050737f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00507383
    PUSH EAX                            ; 00507387
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 00507388
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0050738d
    CMP EAX,dword ptr [ESP + 0x34]      ; 00507390
    JNC 0x0050780c                      ; 00507394
        ;   XREF to: 0050780c (CONDITIONAL_JUMP)  ; LAB_0050780c
    CMP ESI,0x240                       ; 0050739a
    JGE 0x0050780c                      ; 005073a0
        ;   XREF to: 0050780c (CONDITIONAL_JUMP)  ; LAB_0050780c
    LEA EAX,[ESP + 0xc]                 ; 005073a6
    PUSH EAX                            ; 005073aa
    LEA EAX,[ESP + 0xc]                 ; 005073ab
    PUSH EAX                            ; 005073af
    LEA EAX,[ESP + 0xc]                 ; 005073b0
    PUSH EAX                            ; 005073b4
    LEA EAX,[ESP + 0xc]                 ; 005073b5
    PUSH EAX                            ; 005073b9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005073ba
    PUSH EAX                            ; 005073be
    MOV EDX,dword ptr [ESP + 0x60]      ; 005073bf
    PUSH EDX                            ; 005073c3
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10 ; 005073c4
        ;   XREF to: 00504f10 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10(CMP3Decoder * this_ptr, SHuffmanTable * huffman_table, int * x_out, int * y_out, ...)
    MOV ECX,0x12                        ; 005073c9
    MOV EDX,ESI                         ; 005073ce
    MOV EAX,ESI                         ; 005073d0
    SAR EDX,0x1f                        ; 005073d2
    IDIV ECX                            ; 005073d5
    IMUL EAX,EAX,0x48                   ; 005073d7
    ADD ESP,0x18                        ; 005073da
    MOV dword ptr [ESP + 0x34],0x12     ; 005073dd
    MOV EDX,ESI                         ; 005073e5
    MOV ECX,dword ptr [ESP + 0x50]      ; 005073e7
    SAR EDX,0x1f                        ; 005073eb
    ADD ECX,EAX                         ; 005073ee
    MOV EAX,ESI                         ; 005073f0
    IDIV dword ptr [ESP + 0x34]         ; 005073f2
    MOV EAX,dword ptr [ESP + 0x8]       ; 005073f6
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005073fa
    MOV ECX,0x12                        ; 005073fd
    MOV EDX,EBX                         ; 00507402
    MOV EAX,EBX                         ; 00507404
    SAR EDX,0x1f                        ; 00507406
    IDIV ECX                            ; 00507409
    IMUL EAX,EAX,0x48                   ; 0050740b
    MOV dword ptr [ESP + 0x34],0x12     ; 0050740e
    MOV EDX,EBX                         ; 00507416
    MOV ECX,dword ptr [ESP + 0x50]      ; 00507418
    SAR EDX,0x1f                        ; 0050741c
    ADD ECX,EAX                         ; 0050741f
    MOV EAX,EBX                         ; 00507421
    IDIV dword ptr [ESP + 0x34]         ; 00507423
    MOV EAX,dword ptr [ESP + 0xc]       ; 00507427
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 0050742b
    MOV ECX,0x12                        ; 0050742e
    MOV EDX,EBP                         ; 00507433
    MOV EAX,EBP                         ; 00507435
    SAR EDX,0x1f                        ; 00507437
    IDIV ECX                            ; 0050743a
    IMUL EAX,EAX,0x48                   ; 0050743c
    MOV dword ptr [ESP + 0x34],0x12     ; 0050743f
    MOV EDX,EBP                         ; 00507447
    MOV ECX,dword ptr [ESP + 0x50]      ; 00507449
    SAR EDX,0x1f                        ; 0050744d
    ADD ECX,EAX                         ; 00507450
    MOV EAX,EBP                         ; 00507452
    IDIV dword ptr [ESP + 0x34]         ; 00507454
    MOV EAX,dword ptr [ESP]             ; 00507458
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 0050745b
    MOV ECX,0x12                        ; 0050745e
    MOV EDX,EDI                         ; 00507463
    MOV EAX,EDI                         ; 00507465
    SAR EDX,0x1f                        ; 00507467
    IDIV ECX                            ; 0050746a
    IMUL EAX,EAX,0x48                   ; 0050746c
    MOV dword ptr [ESP + 0x34],0x12     ; 0050746f
    MOV EDX,EDI                         ; 00507477
    MOV ECX,dword ptr [ESP + 0x50]      ; 00507479
    SAR EDX,0x1f                        ; 0050747d
    ADD ECX,EAX                         ; 00507480
    MOV EAX,EDI                         ; 00507482
    IDIV dword ptr [ESP + 0x34]         ; 00507484
    ADD ESI,0x4                         ; 00507488
    ADD EBX,0x4                         ; 0050748b
    ADD EBP,0x4                         ; 0050748e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00507491
    ADD EDI,0x4                         ; 00507495
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 00507498
    JMP 0x00507372                      ; 0050749b
        ;   XREF to: 00507372 (UNCONDITIONAL_JUMP)  ; LAB_00507372
    MOV ECX,0x1d23658                   ; 005074a0
        ;   Label: LAB_005074a0
    MOV dword ptr [ESP + 0x30],EDX      ; 005074a5
    XOR EBX,EBX                         ; 005074a9
    XOR EBP,EBP                         ; 005074ab
    MOV dword ptr [ESP + 0x2c],ECX      ; 005074ad
    PUSH EBP                            ; 005074b1
        ;   Label: LAB_005074b1
    PUSH 0x5e00f7                       ; 005074b2 | DAT_005e00f7
    MOV EDI,dword ptr [ESP + 0x34]      ; 005074b7
    PUSH EDI                            ; 005074bb
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005074bc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 005074c1
    MOV EAX,dword ptr [ESP + 0x30]      ; 005074c4
    MOV EAX,dword ptr [EAX + 0x61ade0]  ; 005074c8 | DAT_0061ade0
    MOV dword ptr [EBX + 0x1d23e7c],EAX ; 005074ce | DAT_01d23e7c
    MOV EAX,dword ptr [ESP + 0x30]      ; 005074d4
    MOV EAX,dword ptr [EAX + 0x61ade4]  ; 005074d8 | DAT_0061ade4
    MOV dword ptr [EBX + 0x1d2365c],EAX ; 005074de
    MOV EAX,dword ptr [ESP + 0x30]      ; 005074e4
    MOV EAX,dword ptr [EAX + 0x61ade8]  ; 005074e8 | DAT_0061ade8
    MOV dword ptr [EBX + 0x1d23660],EAX ; 005074ee
    MOV EAX,dword ptr [ESP + 0x30]      ; 005074f4
    MOV EAX,dword ptr [EAX + 0x61adec]  ; 005074f8 | DAT_0061adec
    MOV dword ptr [EBX + 0x1d23664],EAX ; 005074fe
    MOV EAX,0x1                         ; 00507504
    MOV CL,byte ptr [EBX + 0x1d23664]   ; 00507509
    SHL EAX,CL                          ; 0050750f
    DEC EAX                             ; 00507511
    MOV dword ptr [EBX + 0x1d23668],EAX ; 00507512
    LEA EAX,[ESP + 0x10]                ; 00507518
    PUSH EAX                            ; 0050751c
    PUSH 0x5e00fa                       ; 0050751d | DAT_005e00fa
    PUSH EDI                            ; 00507522
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 00507523
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 00507528
    CMP EBP,dword ptr [ESP + 0x10]      ; 0050752b
    JZ 0x0050755a                       ; 0050752f
        ;   XREF to: 0050755a (CONDITIONAL_JUMP)  ; LAB_0050755a
    PUSH 0x1d23558                      ; 00507531 | DAT_01d23558
    PUSH EBP                            ; 00507536
    MOV ECX,0x5e00fd                    ; 00507537 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xdfb                       ; 0050753c
    PUSH 0x5e010e                       ; 00507541 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00507546 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050754c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00507552
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00507557
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050755a
        ;   Label: LAB_0050755a
    MOV EAX,dword ptr [EAX + 0x61adf0]  ; 0050755e | DAT_0061adf0
    TEST EAX,EAX                        ; 00507564
    JL 0x0050765d                       ; 00507566
        ;   XREF to: 0050765d (CONDITIONAL_JUMP)  ; LAB_0050765d
    MOV dword ptr [EBX + 0x1d2366c],EAX ; 0050756c
    IMUL EDX,EAX,0x828                  ; 00507572
    MOV ESI,0x1d23658                   ; 00507578
    MOV EDI,0x1d23658                   ; 0050757d
    MOV ECX,0x802                       ; 00507582
    ADD EDI,EBX                         ; 00507587
    ADD ESI,EDX                         ; 00507589
    ADD EDI,0x20                        ; 0050758b
    ADD ESI,0x20                        ; 0050758e
    PUSH EDI                            ; 00507591
    MOV EAX,ECX                         ; 00507592
    SHR ECX,0x2                         ; 00507594
    MOVSD.REP ES:EDI,ESI                ; 00507597
    MOV CL,AL                           ; 00507599
    AND CL,0x3                          ; 0050759b
    MOVSB.REP ES:EDI,ESI                ; 0050759e
    POP EDI                             ; 005075a0
    MOV EAX,dword ptr [EDX + 0x1d23e7c] ; 005075a1 | DAT_01d23e7c
    MOV dword ptr [EBX + 0x1d23e7c],EAX ; 005075a7 | DAT_01d23e7c
    MOV EAX,dword ptr [EBX + 0x1d2365c] ; 005075ad
    CMP EAX,dword ptr [EDX + 0x1d2365c] ; 005075b3
    JZ 0x00507649                       ; 005075b9
        ;   XREF to: 00507649 (CONDITIONAL_JUMP)  ; LAB_00507649
    PUSH 0x1d23558                      ; 005075bf | DAT_01d23558
        ;   Label: LAB_005075bf
    PUSH EBP                            ; 005075c4
    MOV EDI,0x5e012f                    ; 005075c5 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xe06                       ; 005075ca
    PUSH 0x5e0140                       ; 005075cf | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x01d046a0],EDI      ; 005075d4 | DAT_01d046a0
        ;   Label: LAB_005075d4
    MOV [0x01d046a4],EAX                ; 005075da | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005075df
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 005075e4
    MOV ESI,dword ptr [ESP + 0x30]      ; 005075e7
        ;   Label: LAB_005075e7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005075eb
    ADD EBX,0x828                       ; 005075ef
    INC EBP                             ; 005075f5
    ADD ESI,0x18                        ; 005075f6
    ADD ECX,0x828                       ; 005075f9
    MOV dword ptr [ESP + 0x30],ESI      ; 005075ff
    MOV dword ptr [ESP + 0x2c],ECX      ; 00507603
    CMP EBP,0x22                        ; 00507607
    JL 0x005074b1                       ; 0050760a
        ;   XREF to: 005074b1 (CONDITIONAL_JUMP)  ; LAB_005074b1
    JZ 0x0050763a                       ; 00507610
        ;   XREF to: 0050763a (CONDITIONAL_JUMP)  ; LAB_0050763a
    PUSH 0x1d23558                      ; 00507612 | DAT_01d23558
    MOV EDI,0x5e01dd                    ; 00507617 | = "..\\sound\\mp3.cpp"
    MOV EBP,0xe32                       ; 0050761c
    PUSH 0x5e01ee                       ; 00507621 | = "decoder table read error.  File: %s"
    MOV dword ptr [0x01d046a0],EDI      ; 00507626 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0050762c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00507632
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00507637
    MOV dword ptr [0x01d1edd0],0x1      ; 0050763a | DAT_01d1edd0
        ;   Label: LAB_0050763a
    JMP 0x0050726f                      ; 00507644
        ;   XREF to: 0050726f (UNCONDITIONAL_JUMP)  ; LAB_0050726f
    MOV ESI,dword ptr [EDX + 0x1d23660] ; 00507649
        ;   Label: LAB_00507649
    CMP ESI,dword ptr [EBX + 0x1d23660] ; 0050764f
    JNZ 0x005075bf                      ; 00507655
        ;   XREF to: 005075bf (CONDITIONAL_JUMP)  ; LAB_005075bf
    JMP 0x005075e7                      ; 0050765b
        ;   XREF to: 005075e7 (UNCONDITIONAL_JUMP)  ; LAB_005075e7
    CMP EAX,-0x1                        ; 0050765d
        ;   Label: LAB_0050765d
    JNZ 0x005076ea                      ; 00507660
        ;   XREF to: 005076ea (CONDITIONAL_JUMP)  ; LAB_005076ea
    MOV ECX,dword ptr [EBX + 0x1d23e7c] ; 00507666 | DAT_01d23e7c
    MOV dword ptr [EBX + 0x1d2366c],EAX ; 0050766c
    CMP ECX,0x401                       ; 00507672
    JC 0x005076a2                       ; 00507678
        ;   XREF to: 005076a2 (CONDITIONAL_JUMP)  ; LAB_005076a2
    PUSH 0x1d23558                      ; 0050767a | DAT_01d23558
    MOV ESI,0x5e0164                    ; 0050767f | = "..\\sound\\mp3.cpp"
    MOV EDI,0xe0e                       ; 00507684
    PUSH 0x5e0175                       ; 00507689 | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x01d046a0],ESI      ; 0050768e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00507694 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050769a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0050769f
    MOV EAX,dword ptr [ESP + 0x30]      ; 005076a2
        ;   Label: LAB_005076a2
    MOV EDI,EBX                         ; 005076a6
    MOV ECX,EBX                         ; 005076a8
    MOV EDX,dword ptr [EBX + 0x1d23e7c] ; 005076aa | DAT_01d23e7c
    XOR ESI,ESI                         ; 005076b0
    MOV EAX,dword ptr [EAX + 0x61adf4]  ; 005076b2 | DAT_0061adf4
    TEST EDX,EDX                        ; 005076b8
    JBE 0x005075e7                      ; 005076ba
        ;   XREF to: 005075e7 (CONDITIONAL_JUMP)  ; LAB_005075e7
    MOV EDX,EAX                         ; 005076c0
        ;   Label: LAB_005076c0
    MOV DL,byte ptr [EDX]               ; 005076c2
    INC EAX                             ; 005076c4
    MOV byte ptr [ECX + 0x1d23678],DL   ; 005076c5
    MOV EDX,EAX                         ; 005076cb
    ADD ECX,0x2                         ; 005076cd
    MOV DL,byte ptr [EDX]               ; 005076d0
    MOV byte ptr [ECX + 0x1d23677],DL   ; 005076d2
    INC ESI                             ; 005076d8
    MOV EDX,dword ptr [EDI + 0x1d23e7c] ; 005076d9 | DAT_01d23e7c
    INC EAX                             ; 005076df
    CMP ESI,EDX                         ; 005076e0
    JNC 0x005075e7                      ; 005076e2
        ;   XREF to: 005075e7 (CONDITIONAL_JUMP)  ; LAB_005075e7
    JMP 0x005076c0                      ; 005076e8
        ;   XREF to: 005076c0 (UNCONDITIONAL_JUMP)  ; LAB_005076c0
    PUSH 0x1d23558                      ; 005076ea | DAT_01d23558
        ;   Label: LAB_005076ea
    PUSH EBP                            ; 005076ef
    MOV EDI,0x5e019a                    ; 005076f0 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xe1d                       ; 005076f5
    PUSH 0x5e01ab                       ; 005076fa | = "huffman decodertable error at table %..."
    JMP 0x005075d4                      ; 005076ff
        ;   XREF to: 005075d4 (UNCONDITIONAL_JUMP)  ; LAB_005075d4
    MOV EDX,dword ptr [ESP + 0x58]      ; 00507704
        ;   Label: LAB_00507704
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507708
    ADD EAX,EDX                         ; 0050770f
    MOV ECX,dword ptr [ESP + 0x54]      ; 00507711
    SHL EAX,0x5                         ; 00507715
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00507718
    ADD ECX,EAX                         ; 0050771c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050771e
    ADD EAX,EDX                         ; 00507725
    SHL EAX,0x3                         ; 00507727
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050772a
    ADD ECX,EAX                         ; 0050772e
    LEA EAX,[EDX*0x8 + 0x0]             ; 00507730
    ADD EAX,EDX                         ; 00507737
    SHL EAX,0x2                         ; 00507739
    ADD EAX,EDX                         ; 0050773c
    MOV EBX,dword ptr [ECX + 0x4c]      ; 0050773e
    SHL EAX,0x2                         ; 00507741
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x61933c] ; 00507744 | DAT_0061933c
    MOV dword ptr [ESP + 0x28],EDX      ; 0050774b
    MOV EDX,dword ptr [ECX + 0x50]      ; 0050774f
    ADD EDX,EBX                         ; 00507752
    MOV EBP,dword ptr [EAX + EDX*0x4 + 0x619340] ; 00507754 | DAT_00619340
    JMP 0x005072b9                      ; 0050775b
        ;   XREF to: 005072b9 (UNCONDITIONAL_JUMP)  ; LAB_005072b9
    CMP ESI,dword ptr [ESP + 0x28]      ; 00507760
        ;   Label: LAB_00507760
    JGE 0x00507774                      ; 00507764
        ;   XREF to: 00507774 (CONDITIONAL_JUMP)  ; LAB_00507774
    IMUL EAX,dword ptr [EDI + 0x34],0x828 ; 00507766
    ADD EAX,0x1d23658                   ; 0050776d
    JMP 0x00507792                      ; 00507772
        ;   XREF to: 00507792 (UNCONDITIONAL_JUMP)  ; LAB_00507792
    CMP ESI,EBP                         ; 00507774
        ;   Label: LAB_00507774
    JGE 0x00507786                      ; 00507776
        ;   XREF to: 00507786 (CONDITIONAL_JUMP)  ; LAB_00507786
    IMUL EAX,dword ptr [EDI + 0x38],0x828 ; 00507778
    ADD EAX,0x1d23658                   ; 0050777f
    JMP 0x00507792                      ; 00507784
        ;   XREF to: 00507792 (UNCONDITIONAL_JUMP)  ; LAB_00507792
    IMUL EAX,dword ptr [EDI + 0x3c],0x828 ; 00507786
        ;   Label: LAB_00507786
    ADD EAX,0x1d23658                   ; 0050778d
    LEA EDX,[ESP + 0xc]                 ; 00507792
        ;   Label: LAB_00507792
    PUSH EDX                            ; 00507796
    LEA EDX,[ESP + 0xc]                 ; 00507797
    PUSH EDX                            ; 0050779b
    LEA EDX,[ESP + 0xc]                 ; 0050779c
    PUSH EDX                            ; 005077a0
    LEA EDX,[ESP + 0xc]                 ; 005077a1
    PUSH EDX                            ; 005077a5
    PUSH EAX                            ; 005077a6
    MOV ECX,dword ptr [ESP + 0x60]      ; 005077a7
    PUSH ECX                            ; 005077ab
    CALL sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10 ; 005077ac
        ;   XREF to: 00504f10 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_huffmanDecode_FUN_00504f10(CMP3Decoder * this_ptr, SHuffmanTable * huffman_table, int * x_out, int * y_out, ...)
    MOV ECX,0x12                        ; 005077b1
    MOV EDX,ESI                         ; 005077b6
    MOV EAX,ESI                         ; 005077b8
    SAR EDX,0x1f                        ; 005077ba
    IDIV ECX                            ; 005077bd
    IMUL EAX,EAX,0x48                   ; 005077bf
    MOV EDI,0x12                        ; 005077c2
    ADD ESP,0x18                        ; 005077c7
    MOV EDX,ESI                         ; 005077ca
    MOV ECX,dword ptr [ESP + 0x50]      ; 005077cc
    SAR EDX,0x1f                        ; 005077d0
    ADD ECX,EAX                         ; 005077d3
    MOV EAX,ESI                         ; 005077d5
    IDIV EDI                            ; 005077d7
    MOV EAX,dword ptr [ESP]             ; 005077d9
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005077dc
    MOV EDX,EBX                         ; 005077df
    MOV EAX,EBX                         ; 005077e1
    SAR EDX,0x1f                        ; 005077e3
    IDIV EDI                            ; 005077e6
    IMUL EAX,EAX,0x48                   ; 005077e8
    MOV EDX,EBX                         ; 005077eb
    MOV ECX,dword ptr [ESP + 0x50]      ; 005077ed
    SAR EDX,0x1f                        ; 005077f1
    ADD ECX,EAX                         ; 005077f4
    MOV EAX,EBX                         ; 005077f6
    IDIV EDI                            ; 005077f8
    ADD ESI,0x2                         ; 005077fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 005077fd
    ADD EBX,0x2                         ; 00507801
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 00507804
    JMP 0x005072fb                      ; 00507807
        ;   XREF to: 005072fb (UNCONDITIONAL_JUMP)  ; LAB_005072fb
    MOV EDX,dword ptr [ESP + 0x58]      ; 0050780c
        ;   Label: LAB_0050780c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507810
    ADD EAX,EDX                         ; 00507817
    MOV EBX,dword ptr [ESP + 0x54]      ; 00507819
    SHL EAX,0x5                         ; 0050781d
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00507820
    ADD EBX,EAX                         ; 00507824
    LEA EAX,[EDX*0x8 + 0x0]             ; 00507826
    ADD EAX,EDX                         ; 0050782d
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0050782f
    SHL EAX,0x3                         ; 00507833
    PUSH ECX                            ; 00507836
    ADD EBX,EAX                         ; 00507837
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 00507839
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0050783e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00507841
    PUSH EAX                            ; 00507845
    MOV EBP,dword ptr [EBX + 0x18]      ; 00507846
    MOV EDI,dword ptr [ESP + 0x64]      ; 00507849
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 0050784d
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD EDI,EBP                         ; 00507852
    ADD ESP,0x4                         ; 00507854
    CMP EAX,EDI                         ; 00507857
    JBE 0x00507884                      ; 00507859
        ;   XREF to: 00507884 (CONDITIONAL_JUMP)  ; LAB_00507884
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0050785b
    PUSH EDX                            ; 0050785f
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 00507860
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00507865
    MOV ECX,dword ptr [ESP + 0x60]      ; 00507868
    MOV EDI,dword ptr [EBX + 0x18]      ; 0050786c
    SUB EAX,ECX                         ; 0050786f
    SUB EAX,EDI                         ; 00507871
    PUSH EAX                            ; 00507873
    MOV EBP,dword ptr [ESP + 0x50]      ; 00507874
    PUSH EBP                            ; 00507878
    SUB ESI,0x4                         ; 00507879
    CALL sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00504e80 ; 0050787c
        ;   XREF to: 00504e80 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00504e80(CMP3Decoder * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00507881
    MOV EDX,dword ptr [ESP + 0x58]      ; 00507884
        ;   Label: LAB_00507884
    LEA EAX,[EDX*0x4 + 0x0]             ; 00507888
    ADD EAX,EDX                         ; 0050788f
    MOV ECX,dword ptr [ESP + 0x54]      ; 00507891
    SHL EAX,0x5                         ; 00507895
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00507898
    ADD ECX,EAX                         ; 0050789c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050789e
    ADD EAX,EDX                         ; 005078a5
    MOV EDX,dword ptr [ECX + EAX*0x8 + 0x18] ; 005078a7
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005078ab
    MOV EBX,dword ptr [ESP + 0x60]      ; 005078af
    PUSH ECX                            ; 005078b3
    ADD EBX,EDX                         ; 005078b4
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20 ; 005078b6
        ;   XREF to: 00504d20 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00504d20(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005078bb
    CMP EAX,EBX                         ; 005078be
    JL 0x005078f4                       ; 005078c0
        ;   XREF to: 005078f4 (CONDITIONAL_JUMP)  ; LAB_005078f4
    MOV EBX,0x12                        ; 005078c2
        ;   Label: LAB_005078c2
    CMP ESI,0x240                       ; 005078c7
        ;   Label: LAB_005078c7
    JGE 0x00507906                      ; 005078cd
        ;   XREF to: 00507906 (CONDITIONAL_JUMP)  ; LAB_00507906
    MOV EDX,ESI                         ; 005078cf
    MOV EAX,ESI                         ; 005078d1
    SAR EDX,0x1f                        ; 005078d3
    IDIV EBX                            ; 005078d6
    IMUL EAX,EAX,0x48                   ; 005078d8
    MOV EDX,ESI                         ; 005078db
    MOV ECX,dword ptr [ESP + 0x50]      ; 005078dd
    SAR EDX,0x1f                        ; 005078e1
    ADD ECX,EAX                         ; 005078e4
    MOV EAX,ESI                         ; 005078e6
    IDIV EBX                            ; 005078e8
    INC ESI                             ; 005078ea
    MOV dword ptr [ECX + EDX*0x4],0x0   ; 005078eb
    JMP 0x005078c7                      ; 005078f2
        ;   XREF to: 005078c7 (UNCONDITIONAL_JUMP)  ; LAB_005078c7
    SUB EBX,EAX                         ; 005078f4
        ;   Label: LAB_005078f4
    PUSH EBX                            ; 005078f6
    MOV EBX,dword ptr [ESP + 0x50]      ; 005078f7
    PUSH EBX                            ; 005078fb
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30 ; 005078fc
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00504d30(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00507901
    JMP 0x005078c2                      ; 00507904
        ;   XREF to: 005078c2 (UNCONDITIONAL_JUMP)  ; LAB_005078c2
    ADD ESP,0x38                        ; 00507906
        ;   Label: LAB_00507906
    POP EBP                             ; 00507909
    POP EDI                             ; 0050790a
    POP ESI                             ; 0050790b
    POP EBX                             ; 0050790c
    RET                                 ; 0050790d

