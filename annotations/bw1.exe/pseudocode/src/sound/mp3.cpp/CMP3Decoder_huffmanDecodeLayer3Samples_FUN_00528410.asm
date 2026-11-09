; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410(CMP3Decoder *this_ptr,SMpegSubbandQuantizedSamples *quantized_dest,SMpegLayer3SideInfo *side_info,int channel,int granule,int frame_bit_offset,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052bc45
;
; Referenced Globals:
;   TerminatedCString s_d_005eb352
;   TerminatedCString s_u_005eb355
;   TerminatedCString s_sound_mp3_cpp_005eb358
;   TerminatedCString s_wrong_table_number_u_Fil_005eb369
;   TerminatedCString s_sound_mp3_cpp_005eb38a
;   TerminatedCString s_wrong_table_u_reference_005eb39b
;   TerminatedCString s_sound_mp3_cpp_005eb3bf
;   TerminatedCString s_MP3_Huffman_tree_overflo_005eb3d0
;   TerminatedCString s_sound_mp3_cpp_005eb3f5
;   TerminatedCString s_huffman_decodertable_err_005eb406
;   TerminatedCString s_sound_mp3_cpp_005eb438
;   TerminatedCString s_decoder_table_read_error_005eb449
;   undefined4 DAT_0062079c
;   undefined4 DAT_006207a0
;   undefined4 DAT_00622240
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_FUN_005bfb40
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00
;   sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00526050
;   sound_mp3.cpp_FUN_005260e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528410
        ;   Label: sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00528410
    PUSH ESI                            ; 00528411
    PUSH EDI                            ; 00528412
    PUSH EBP                            ; 00528413
    SUB ESP,0x38                        ; 00528414
    MOV ECX,dword ptr [ESP + 0x64]      ; 00528417
    MOV ECX,dword ptr [ECX]             ; 0052841b
    MOV EDX,dword ptr [ECX]             ; 0052841d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052841f
    SUB EAX,EDX                         ; 00528426
    MOV EDX,dword ptr [ECX + 0x10]      ; 00528428
    ADD EDX,EAX                         ; 0052842b
    MOV dword ptr [ESP + 0x14],EDX      ; 0052842d
    MOV EDX,dword ptr [0x01d3bd40]      ; 00528431 | DAT_01d3bd40
    TEST EDX,EDX                        ; 00528437
    JZ 0x00528670                       ; 00528439
        ;   XREF to: 00528670 (CONDITIONAL_JUMP)  ; LAB_00528670
    MOV EDX,dword ptr [ESP + 0x58]      ; 0052843f
        ;   Label: LAB_0052843f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528443
    ADD EAX,EDX                         ; 0052844a
    MOV ECX,dword ptr [ESP + 0x54]      ; 0052844c
    SHL EAX,0x5                         ; 00528450
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00528453
    ADD ECX,EAX                         ; 00528457
    LEA EAX,[EDX*0x8 + 0x0]             ; 00528459
    ADD EAX,EDX                         ; 00528460
    SHL EAX,0x3                         ; 00528462
    ADD EAX,ECX                         ; 00528465
    CMP dword ptr [EAX + 0x28],0x0      ; 00528467
    JZ 0x005288d4                       ; 0052846b
        ;   XREF to: 005288d4 (CONDITIONAL_JUMP)  ; LAB_005288d4
    CMP dword ptr [EAX + 0x2c],0x2      ; 00528471
    JNZ 0x005288d4                      ; 00528475
        ;   XREF to: 005288d4 (CONDITIONAL_JUMP)  ; LAB_005288d4
    MOV EBX,0x24                        ; 0052847b
    MOV EBP,0x240                       ; 00528480
    MOV dword ptr [ESP + 0x28],EBX      ; 00528485
    MOV EDX,dword ptr [ESP + 0x58]      ; 00528489
        ;   Label: LAB_00528489
    MOV EBX,dword ptr [ESP + 0x54]      ; 0052848d
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00528491
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528495
    PUSH ESI                            ; 0052849c
    ADD EAX,EDX                         ; 0052849d
    XOR ESI,ESI                         ; 0052849f
    MOV EDX,dword ptr [ESP + 0x60]      ; 005284a1
    SHL EAX,0x5                         ; 005284a5
    LEA EDI,[EDX*0x8 + 0x0]             ; 005284a8
    ADD EBX,EAX                         ; 005284af
    ADD EDI,EDX                         ; 005284b1
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 005284b3
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 005284b8
    SHL EDI,0x3                         ; 005284bb
    MOV dword ptr [ESP + 0x24],EBX      ; 005284be
    MOV dword ptr [ESP + 0x18],EDI      ; 005284c2
    MOV EBX,0x1                         ; 005284c6
    MOV EDI,dword ptr [ESP + 0x24]      ; 005284cb
        ;   Label: LAB_005284cb
    ADD EDI,dword ptr [ESP + 0x18]      ; 005284cf
    MOV EAX,dword ptr [EDI + 0x1c]      ; 005284d3
    ADD EAX,EAX                         ; 005284d6
    CMP ESI,EAX                         ; 005284d8
    JC 0x00528930                       ; 005284da
        ;   XREF to: 00528930 (CONDITIONAL_JUMP)  ; LAB_00528930
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005284e0
    PUSH EDX                            ; 005284e4
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 005284e5
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    MOV EDX,dword ptr [EDI + 0x5c]      ; 005284ea
    ADD EDX,0x20                        ; 005284ed
    MOV EAX,EDX                         ; 005284f0
    SHL EAX,0x6                         ; 005284f2
    ADD EAX,EDX                         ; 005284f5
    SHL EAX,0x2                         ; 005284f7
    ADD EAX,EDX                         ; 005284fa
    MOV EDX,0x1d405c8                   ; 005284fc
    SHL EAX,0x3                         ; 00528501
    ADD ESP,0x4                         ; 00528504
    ADD EDX,EAX                         ; 00528507
    MOV dword ptr [ESP + 0x20],EDX      ; 00528509
    MOV EDX,dword ptr [ESP + 0x58]      ; 0052850d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528511
    ADD EAX,EDX                         ; 00528518
    MOV ECX,dword ptr [ESP + 0x54]      ; 0052851a
    SHL EAX,0x5                         ; 0052851e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00528521
    ADD ECX,EAX                         ; 00528525
    LEA EAX,[EDX*0x8 + 0x0]             ; 00528527
    ADD EAX,EDX                         ; 0052852e
    LEA EDI,[ESI + 0x3]                 ; 00528530
    SHL EAX,0x3                         ; 00528533
    LEA EBP,[ESI + 0x2]                 ; 00528536
    ADD ECX,EAX                         ; 00528539
    LEA EBX,[ESI + 0x1]                 ; 0052853b
    MOV dword ptr [ESP + 0x1c],ECX      ; 0052853e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00528542
        ;   Label: LAB_00528542
    MOV EAX,dword ptr [ESP + 0x60]      ; 00528546
    MOV ECX,dword ptr [EDX + 0x18]      ; 0052854a
    ADD EAX,ECX                         ; 0052854d
    MOV dword ptr [ESP + 0x34],EAX      ; 0052854f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00528553
    PUSH EAX                            ; 00528557
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 00528558
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 0052855d
    CMP EAX,dword ptr [ESP + 0x34]      ; 00528560
    JNC 0x005289dc                      ; 00528564
        ;   XREF to: 005289dc (CONDITIONAL_JUMP)  ; LAB_005289dc
    CMP ESI,0x240                       ; 0052856a
    JGE 0x005289dc                      ; 00528570
        ;   XREF to: 005289dc (CONDITIONAL_JUMP)  ; LAB_005289dc
    LEA EAX,[ESP + 0xc]                 ; 00528576
    PUSH EAX                            ; 0052857a
    LEA EAX,[ESP + 0xc]                 ; 0052857b
    PUSH EAX                            ; 0052857f
    LEA EAX,[ESP + 0xc]                 ; 00528580
    PUSH EAX                            ; 00528584
    LEA EAX,[ESP + 0xc]                 ; 00528585
    PUSH EAX                            ; 00528589
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052858a
    PUSH EAX                            ; 0052858e
    MOV EDX,dword ptr [ESP + 0x60]      ; 0052858f
    PUSH EDX                            ; 00528593
    CALL sound_mp3.cpp_FUN_005260e0     ; 00528594
        ;   XREF to: 005260e0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_005260e0()
    MOV ECX,0x12                        ; 00528599
    MOV EDX,ESI                         ; 0052859e
    MOV EAX,ESI                         ; 005285a0
    SAR EDX,0x1f                        ; 005285a2
    IDIV ECX                            ; 005285a5
    IMUL EAX,EAX,0x48                   ; 005285a7
    ADD ESP,0x18                        ; 005285aa
    MOV dword ptr [ESP + 0x34],0x12     ; 005285ad
    MOV EDX,ESI                         ; 005285b5
    MOV ECX,dword ptr [ESP + 0x50]      ; 005285b7
    SAR EDX,0x1f                        ; 005285bb
    ADD ECX,EAX                         ; 005285be
    MOV EAX,ESI                         ; 005285c0
    IDIV dword ptr [ESP + 0x34]         ; 005285c2
    MOV EAX,dword ptr [ESP + 0x8]       ; 005285c6
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005285ca
    MOV ECX,0x12                        ; 005285cd
    MOV EDX,EBX                         ; 005285d2
    MOV EAX,EBX                         ; 005285d4
    SAR EDX,0x1f                        ; 005285d6
    IDIV ECX                            ; 005285d9
    IMUL EAX,EAX,0x48                   ; 005285db
    MOV dword ptr [ESP + 0x34],0x12     ; 005285de
    MOV EDX,EBX                         ; 005285e6
    MOV ECX,dword ptr [ESP + 0x50]      ; 005285e8
    SAR EDX,0x1f                        ; 005285ec
    ADD ECX,EAX                         ; 005285ef
    MOV EAX,EBX                         ; 005285f1
    IDIV dword ptr [ESP + 0x34]         ; 005285f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 005285f7
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005285fb
    MOV ECX,0x12                        ; 005285fe
    MOV EDX,EBP                         ; 00528603
    MOV EAX,EBP                         ; 00528605
    SAR EDX,0x1f                        ; 00528607
    IDIV ECX                            ; 0052860a
    IMUL EAX,EAX,0x48                   ; 0052860c
    MOV dword ptr [ESP + 0x34],0x12     ; 0052860f
    MOV EDX,EBP                         ; 00528617
    MOV ECX,dword ptr [ESP + 0x50]      ; 00528619
    SAR EDX,0x1f                        ; 0052861d
    ADD ECX,EAX                         ; 00528620
    MOV EAX,EBP                         ; 00528622
    IDIV dword ptr [ESP + 0x34]         ; 00528624
    MOV EAX,dword ptr [ESP]             ; 00528628
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 0052862b
    MOV ECX,0x12                        ; 0052862e
    MOV EDX,EDI                         ; 00528633
    MOV EAX,EDI                         ; 00528635
    SAR EDX,0x1f                        ; 00528637
    IDIV ECX                            ; 0052863a
    IMUL EAX,EAX,0x48                   ; 0052863c
    MOV dword ptr [ESP + 0x34],0x12     ; 0052863f
    MOV EDX,EDI                         ; 00528647
    MOV ECX,dword ptr [ESP + 0x50]      ; 00528649
    SAR EDX,0x1f                        ; 0052864d
    ADD ECX,EAX                         ; 00528650
    MOV EAX,EDI                         ; 00528652
    IDIV dword ptr [ESP + 0x34]         ; 00528654
    ADD ESI,0x4                         ; 00528658
    ADD EBX,0x4                         ; 0052865b
    ADD EBP,0x4                         ; 0052865e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00528661
    ADD EDI,0x4                         ; 00528665
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 00528668
    JMP 0x00528542                      ; 0052866b
        ;   XREF to: 00528542 (UNCONDITIONAL_JUMP)  ; LAB_00528542
    MOV ECX,0x1d405c8                   ; 00528670
        ;   Label: LAB_00528670
    MOV dword ptr [ESP + 0x30],EDX      ; 00528675
    XOR EBX,EBX                         ; 00528679
    XOR EBP,EBP                         ; 0052867b
    MOV dword ptr [ESP + 0x2c],ECX      ; 0052867d
    PUSH EBP                            ; 00528681
        ;   Label: LAB_00528681
    PUSH 0x5eb352                       ; 00528682 | = "%d"
    MOV EDI,dword ptr [ESP + 0x34]      ; 00528687
    PUSH EDI                            ; 0052868b
    CALL crt_unknown.c_FUN_005bfb40     ; 0052868c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00528691
    MOV EAX,dword ptr [ESP + 0x30]      ; 00528694
    MOV EAX,dword ptr [EAX + 0x622240]  ; 00528698 | DAT_00622240
    MOV dword ptr [EBX + 0x1d40dec],EAX ; 0052869e | DAT_01d40dec
    MOV EAX,dword ptr [ESP + 0x30]      ; 005286a4
    MOV EAX,dword ptr [EAX + 0x622244]  ; 005286a8 | DAT_00622244
    MOV dword ptr [EBX + 0x1d405cc],EAX ; 005286ae
    MOV EAX,dword ptr [ESP + 0x30]      ; 005286b4
    MOV EAX,dword ptr [EAX + 0x622248]  ; 005286b8 | DAT_00622248
    MOV dword ptr [EBX + 0x1d405d0],EAX ; 005286be
    MOV EAX,dword ptr [ESP + 0x30]      ; 005286c4
    MOV EAX,dword ptr [EAX + 0x62224c]  ; 005286c8 | DAT_0062224c
    MOV dword ptr [EBX + 0x1d405d4],EAX ; 005286ce
    MOV EAX,0x1                         ; 005286d4
    MOV CL,byte ptr [EBX + 0x1d405d4]   ; 005286d9
    SHL EAX,CL                          ; 005286df
    DEC EAX                             ; 005286e1
    MOV dword ptr [EBX + 0x1d405d8],EAX ; 005286e2
    LEA EAX,[ESP + 0x10]                ; 005286e8
    PUSH EAX                            ; 005286ec
    PUSH 0x5eb355                       ; 005286ed | = "%u"
    PUSH EDI                            ; 005286f2
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 005286f3
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 005286f8
    CMP EBP,dword ptr [ESP + 0x10]      ; 005286fb
    JZ 0x0052872a                       ; 005286ff
        ;   XREF to: 0052872a (CONDITIONAL_JUMP)  ; LAB_0052872a
    PUSH 0x1d404c8                      ; 00528701 | DAT_01d404c8
    PUSH EBP                            ; 00528706
    MOV ECX,0x5eb358                    ; 00528707 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xdfb                       ; 0052870c
    PUSH 0x5eb369                       ; 00528711 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x01d1d400],ECX      ; 00528716 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0052871c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00528722
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00528727
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052872a
        ;   Label: LAB_0052872a
    MOV EAX,dword ptr [EAX + 0x622250]  ; 0052872e | DAT_00622250
    TEST EAX,EAX                        ; 00528734
    JL 0x0052882d                       ; 00528736
        ;   XREF to: 0052882d (CONDITIONAL_JUMP)  ; LAB_0052882d
    MOV dword ptr [EBX + 0x1d405dc],EAX ; 0052873c
    IMUL EDX,EAX,0x828                  ; 00528742
    MOV ESI,0x1d405c8                   ; 00528748
    MOV EDI,0x1d405c8                   ; 0052874d
    MOV ECX,0x802                       ; 00528752
    ADD EDI,EBX                         ; 00528757
    ADD ESI,EDX                         ; 00528759
    ADD EDI,0x20                        ; 0052875b
    ADD ESI,0x20                        ; 0052875e
    PUSH EDI                            ; 00528761
    MOV EAX,ECX                         ; 00528762
    SHR ECX,0x2                         ; 00528764
    MOVSD.REP ES:EDI,ESI                ; 00528767
    MOV CL,AL                           ; 00528769
    AND CL,0x3                          ; 0052876b
    MOVSB.REP ES:EDI,ESI                ; 0052876e
    POP EDI                             ; 00528770
    MOV EAX,dword ptr [EDX + 0x1d40dec] ; 00528771 | DAT_01d40dec
    MOV dword ptr [EBX + 0x1d40dec],EAX ; 00528777 | DAT_01d40dec
    MOV EAX,dword ptr [EBX + 0x1d405cc] ; 0052877d
    CMP EAX,dword ptr [EDX + 0x1d405cc] ; 00528783
    JZ 0x00528819                       ; 00528789
        ;   XREF to: 00528819 (CONDITIONAL_JUMP)  ; LAB_00528819
    PUSH 0x1d404c8                      ; 0052878f | DAT_01d404c8
        ;   Label: LAB_0052878f
    PUSH EBP                            ; 00528794
    MOV EDI,0x5eb38a                    ; 00528795 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xe06                       ; 0052879a
    PUSH 0x5eb39b                       ; 0052879f | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x01d1d400],EDI      ; 005287a4 | DAT_01d1d400
        ;   Label: LAB_005287a4
    MOV [0x01d1d404],EAX                ; 005287aa | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005287af
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 005287b4
    MOV ESI,dword ptr [ESP + 0x30]      ; 005287b7
        ;   Label: LAB_005287b7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005287bb
    ADD EBX,0x828                       ; 005287bf
    INC EBP                             ; 005287c5
    ADD ESI,0x18                        ; 005287c6
    ADD ECX,0x828                       ; 005287c9
    MOV dword ptr [ESP + 0x30],ESI      ; 005287cf
    MOV dword ptr [ESP + 0x2c],ECX      ; 005287d3
    CMP EBP,0x22                        ; 005287d7
    JL 0x00528681                       ; 005287da
        ;   XREF to: 00528681 (CONDITIONAL_JUMP)  ; LAB_00528681
    JZ 0x0052880a                       ; 005287e0
        ;   XREF to: 0052880a (CONDITIONAL_JUMP)  ; LAB_0052880a
    PUSH 0x1d404c8                      ; 005287e2 | DAT_01d404c8
    MOV EDI,0x5eb438                    ; 005287e7 | = "..\\sound\\mp3.cpp"
    MOV EBP,0xe32                       ; 005287ec
    PUSH 0x5eb449                       ; 005287f1 | = "decoder table read error.  File: %s"
    MOV dword ptr [0x01d1d400],EDI      ; 005287f6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005287fc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00528802
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00528807
    MOV dword ptr [0x01d3bd40],0x1      ; 0052880a | DAT_01d3bd40
        ;   Label: LAB_0052880a
    JMP 0x0052843f                      ; 00528814
        ;   XREF to: 0052843f (UNCONDITIONAL_JUMP)  ; LAB_0052843f
    MOV ESI,dword ptr [EDX + 0x1d405d0] ; 00528819
        ;   Label: LAB_00528819
    CMP ESI,dword ptr [EBX + 0x1d405d0] ; 0052881f
    JNZ 0x0052878f                      ; 00528825
        ;   XREF to: 0052878f (CONDITIONAL_JUMP)  ; LAB_0052878f
    JMP 0x005287b7                      ; 0052882b
        ;   XREF to: 005287b7 (UNCONDITIONAL_JUMP)  ; LAB_005287b7
    CMP EAX,-0x1                        ; 0052882d
        ;   Label: LAB_0052882d
    JNZ 0x005288ba                      ; 00528830
        ;   XREF to: 005288ba (CONDITIONAL_JUMP)  ; LAB_005288ba
    MOV ECX,dword ptr [EBX + 0x1d40dec] ; 00528836 | DAT_01d40dec
    MOV dword ptr [EBX + 0x1d405dc],EAX ; 0052883c
    CMP ECX,0x401                       ; 00528842
    JC 0x00528872                       ; 00528848
        ;   XREF to: 00528872 (CONDITIONAL_JUMP)  ; LAB_00528872
    PUSH 0x1d404c8                      ; 0052884a | DAT_01d404c8
    MOV ESI,0x5eb3bf                    ; 0052884f | = "..\\sound\\mp3.cpp"
    MOV EDI,0xe0e                       ; 00528854
    PUSH 0x5eb3d0                       ; 00528859 | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x01d1d400],ESI      ; 0052885e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00528864 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052886a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0052886f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00528872
        ;   Label: LAB_00528872
    MOV EDI,EBX                         ; 00528876
    MOV ECX,EBX                         ; 00528878
    MOV EDX,dword ptr [EBX + 0x1d40dec] ; 0052887a | DAT_01d40dec
    XOR ESI,ESI                         ; 00528880
    MOV EAX,dword ptr [EAX + 0x622254]  ; 00528882 | DAT_00622254
    TEST EDX,EDX                        ; 00528888
    JBE 0x005287b7                      ; 0052888a
        ;   XREF to: 005287b7 (CONDITIONAL_JUMP)  ; LAB_005287b7
    MOV EDX,EAX                         ; 00528890
        ;   Label: LAB_00528890
    MOV DL,byte ptr [EDX]               ; 00528892
    INC EAX                             ; 00528894
    MOV byte ptr [ECX + 0x1d405e8],DL   ; 00528895
    MOV EDX,EAX                         ; 0052889b
    ADD ECX,0x2                         ; 0052889d
    MOV DL,byte ptr [EDX]               ; 005288a0
    MOV byte ptr [ECX + 0x1d405e7],DL   ; 005288a2
    INC ESI                             ; 005288a8
    MOV EDX,dword ptr [EDI + 0x1d40dec] ; 005288a9 | DAT_01d40dec
    INC EAX                             ; 005288af
    CMP ESI,EDX                         ; 005288b0
    JNC 0x005287b7                      ; 005288b2
        ;   XREF to: 005287b7 (CONDITIONAL_JUMP)  ; LAB_005287b7
    JMP 0x00528890                      ; 005288b8
        ;   XREF to: 00528890 (UNCONDITIONAL_JUMP)  ; LAB_00528890
    PUSH 0x1d404c8                      ; 005288ba | DAT_01d404c8
        ;   Label: LAB_005288ba
    PUSH EBP                            ; 005288bf
    MOV EDI,0x5eb3f5                    ; 005288c0 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xe1d                       ; 005288c5
    PUSH 0x5eb406                       ; 005288ca | = "huffman decodertable error at table %..."
    JMP 0x005287a4                      ; 005288cf
        ;   XREF to: 005287a4 (UNCONDITIONAL_JUMP)  ; LAB_005287a4
    MOV EDX,dword ptr [ESP + 0x58]      ; 005288d4
        ;   Label: LAB_005288d4
    LEA EAX,[EDX*0x4 + 0x0]             ; 005288d8
    ADD EAX,EDX                         ; 005288df
    MOV ECX,dword ptr [ESP + 0x54]      ; 005288e1
    SHL EAX,0x5                         ; 005288e5
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005288e8
    ADD ECX,EAX                         ; 005288ec
    LEA EAX,[EDX*0x8 + 0x0]             ; 005288ee
    ADD EAX,EDX                         ; 005288f5
    SHL EAX,0x3                         ; 005288f7
    MOV EDX,dword ptr [ESP + 0x14]      ; 005288fa
    ADD ECX,EAX                         ; 005288fe
    LEA EAX,[EDX*0x8 + 0x0]             ; 00528900
    ADD EAX,EDX                         ; 00528907
    SHL EAX,0x2                         ; 00528909
    ADD EAX,EDX                         ; 0052890c
    MOV EBX,dword ptr [ECX + 0x4c]      ; 0052890e
    SHL EAX,0x2                         ; 00528911
    MOV EDX,dword ptr [EAX + EBX*0x4 + 0x62079c] ; 00528914 | DAT_0062079c
    MOV dword ptr [ESP + 0x28],EDX      ; 0052891b
    MOV EDX,dword ptr [ECX + 0x50]      ; 0052891f
    ADD EDX,EBX                         ; 00528922
    MOV EBP,dword ptr [EAX + EDX*0x4 + 0x6207a0] ; 00528924 | DAT_006207a0
    JMP 0x00528489                      ; 0052892b
        ;   XREF to: 00528489 (UNCONDITIONAL_JUMP)  ; LAB_00528489
    CMP ESI,dword ptr [ESP + 0x28]      ; 00528930
        ;   Label: LAB_00528930
    JGE 0x00528944                      ; 00528934
        ;   XREF to: 00528944 (CONDITIONAL_JUMP)  ; LAB_00528944
    IMUL EAX,dword ptr [EDI + 0x34],0x828 ; 00528936
    ADD EAX,0x1d405c8                   ; 0052893d
    JMP 0x00528962                      ; 00528942
        ;   XREF to: 00528962 (UNCONDITIONAL_JUMP)  ; LAB_00528962
    CMP ESI,EBP                         ; 00528944
        ;   Label: LAB_00528944
    JGE 0x00528956                      ; 00528946
        ;   XREF to: 00528956 (CONDITIONAL_JUMP)  ; LAB_00528956
    IMUL EAX,dword ptr [EDI + 0x38],0x828 ; 00528948
    ADD EAX,0x1d405c8                   ; 0052894f
    JMP 0x00528962                      ; 00528954
        ;   XREF to: 00528962 (UNCONDITIONAL_JUMP)  ; LAB_00528962
    IMUL EAX,dword ptr [EDI + 0x3c],0x828 ; 00528956
        ;   Label: LAB_00528956
    ADD EAX,0x1d405c8                   ; 0052895d
    LEA EDX,[ESP + 0xc]                 ; 00528962
        ;   Label: LAB_00528962
    PUSH EDX                            ; 00528966
    LEA EDX,[ESP + 0xc]                 ; 00528967
    PUSH EDX                            ; 0052896b
    LEA EDX,[ESP + 0xc]                 ; 0052896c
    PUSH EDX                            ; 00528970
    LEA EDX,[ESP + 0xc]                 ; 00528971
    PUSH EDX                            ; 00528975
    PUSH EAX                            ; 00528976
    MOV ECX,dword ptr [ESP + 0x60]      ; 00528977
    PUSH ECX                            ; 0052897b
    CALL sound_mp3.cpp_FUN_005260e0     ; 0052897c
        ;   XREF to: 005260e0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_005260e0()
    MOV ECX,0x12                        ; 00528981
    MOV EDX,ESI                         ; 00528986
    MOV EAX,ESI                         ; 00528988
    SAR EDX,0x1f                        ; 0052898a
    IDIV ECX                            ; 0052898d
    IMUL EAX,EAX,0x48                   ; 0052898f
    MOV EDI,0x12                        ; 00528992
    ADD ESP,0x18                        ; 00528997
    MOV EDX,ESI                         ; 0052899a
    MOV ECX,dword ptr [ESP + 0x50]      ; 0052899c
    SAR EDX,0x1f                        ; 005289a0
    ADD ECX,EAX                         ; 005289a3
    MOV EAX,ESI                         ; 005289a5
    IDIV EDI                            ; 005289a7
    MOV EAX,dword ptr [ESP]             ; 005289a9
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005289ac
    MOV EDX,EBX                         ; 005289af
    MOV EAX,EBX                         ; 005289b1
    SAR EDX,0x1f                        ; 005289b3
    IDIV EDI                            ; 005289b6
    IMUL EAX,EAX,0x48                   ; 005289b8
    MOV EDX,EBX                         ; 005289bb
    MOV ECX,dword ptr [ESP + 0x50]      ; 005289bd
    SAR EDX,0x1f                        ; 005289c1
    ADD ECX,EAX                         ; 005289c4
    MOV EAX,EBX                         ; 005289c6
    IDIV EDI                            ; 005289c8
    ADD ESI,0x2                         ; 005289ca
    MOV EAX,dword ptr [ESP + 0x4]       ; 005289cd
    ADD EBX,0x2                         ; 005289d1
    MOV dword ptr [ECX + EDX*0x4],EAX   ; 005289d4
    JMP 0x005284cb                      ; 005289d7
        ;   XREF to: 005284cb (UNCONDITIONAL_JUMP)  ; LAB_005284cb
    MOV EDX,dword ptr [ESP + 0x58]      ; 005289dc
        ;   Label: LAB_005289dc
    LEA EAX,[EDX*0x4 + 0x0]             ; 005289e0
    ADD EAX,EDX                         ; 005289e7
    MOV EBX,dword ptr [ESP + 0x54]      ; 005289e9
    SHL EAX,0x5                         ; 005289ed
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005289f0
    ADD EBX,EAX                         ; 005289f4
    LEA EAX,[EDX*0x8 + 0x0]             ; 005289f6
    ADD EAX,EDX                         ; 005289fd
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005289ff
    SHL EAX,0x3                         ; 00528a03
    PUSH ECX                            ; 00528a06
    ADD EBX,EAX                         ; 00528a07
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 00528a09
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00528a0e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00528a11
    PUSH EAX                            ; 00528a15
    MOV EBP,dword ptr [EBX + 0x18]      ; 00528a16
    MOV EDI,dword ptr [ESP + 0x64]      ; 00528a19
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 00528a1d
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD EDI,EBP                         ; 00528a22
    ADD ESP,0x4                         ; 00528a24
    CMP EAX,EDI                         ; 00528a27
    JBE 0x00528a54                      ; 00528a29
        ;   XREF to: 00528a54 (CONDITIONAL_JUMP)  ; LAB_00528a54
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00528a2b
    PUSH EDX                            ; 00528a2f
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 00528a30
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00528a35
    MOV ECX,dword ptr [ESP + 0x60]      ; 00528a38
    MOV EDI,dword ptr [EBX + 0x18]      ; 00528a3c
    SUB EAX,ECX                         ; 00528a3f
    SUB EAX,EDI                         ; 00528a41
    PUSH EAX                            ; 00528a43
    MOV EBP,dword ptr [ESP + 0x50]      ; 00528a44
    PUSH EBP                            ; 00528a48
    SUB ESI,0x4                         ; 00528a49
    CALL sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00526050 ; 00528a4c
        ;   XREF to: 00526050 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_CMP3Decoder_unreadBits_FUN_00526050(CMP3Decoder * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00528a51
    MOV EDX,dword ptr [ESP + 0x58]      ; 00528a54
        ;   Label: LAB_00528a54
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528a58
    ADD EAX,EDX                         ; 00528a5f
    MOV ECX,dword ptr [ESP + 0x54]      ; 00528a61
    SHL EAX,0x5                         ; 00528a65
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00528a68
    ADD ECX,EAX                         ; 00528a6c
    LEA EAX,[EDX*0x8 + 0x0]             ; 00528a6e
    ADD EAX,EDX                         ; 00528a75
    MOV EDX,dword ptr [ECX + EAX*0x8 + 0x18] ; 00528a77
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00528a7b
    MOV EBX,dword ptr [ESP + 0x60]      ; 00528a7f
    PUSH ECX                            ; 00528a83
    ADD EBX,EDX                         ; 00528a84
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0 ; 00528a86
        ;   XREF to: 00525ef0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_00525ef0(CMP3Decoder * this_ptr)
    ADD ESP,0x4                         ; 00528a8b
    CMP EAX,EBX                         ; 00528a8e
    JL 0x00528ac4                       ; 00528a90
        ;   XREF to: 00528ac4 (CONDITIONAL_JUMP)  ; LAB_00528ac4
    MOV EBX,0x12                        ; 00528a92
        ;   Label: LAB_00528a92
    CMP ESI,0x240                       ; 00528a97
        ;   Label: LAB_00528a97
    JGE 0x00528ad6                      ; 00528a9d
        ;   XREF to: 00528ad6 (CONDITIONAL_JUMP)  ; LAB_00528ad6
    MOV EDX,ESI                         ; 00528a9f
    MOV EAX,ESI                         ; 00528aa1
    SAR EDX,0x1f                        ; 00528aa3
    IDIV EBX                            ; 00528aa6
    IMUL EAX,EAX,0x48                   ; 00528aa8
    MOV EDX,ESI                         ; 00528aab
    MOV ECX,dword ptr [ESP + 0x50]      ; 00528aad
    SAR EDX,0x1f                        ; 00528ab1
    ADD ECX,EAX                         ; 00528ab4
    MOV EAX,ESI                         ; 00528ab6
    IDIV EBX                            ; 00528ab8
    INC ESI                             ; 00528aba
    MOV dword ptr [ECX + EDX*0x4],0x0   ; 00528abb
    JMP 0x00528a97                      ; 00528ac2
        ;   XREF to: 00528a97 (UNCONDITIONAL_JUMP)  ; LAB_00528a97
    SUB EBX,EAX                         ; 00528ac4
        ;   Label: LAB_00528ac4
    PUSH EBX                            ; 00528ac6
    MOV EBX,dword ptr [ESP + 0x50]      ; 00528ac7
    PUSH EBX                            ; 00528acb
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00 ; 00528acc
        ;   XREF to: 00525f00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 00528ad1
    JMP 0x00528a92                      ; 00528ad4
        ;   XREF to: 00528a92 (UNCONDITIONAL_JUMP)  ; LAB_00528a92
    ADD ESP,0x38                        ; 00528ad6
        ;   Label: LAB_00528ad6
    POP EBP                             ; 00528ad9
    POP EDI                             ; 00528ada
    POP ESI                             ; 00528adb
    POP EBX                             ; 00528adc
    RET                                 ; 00528add

