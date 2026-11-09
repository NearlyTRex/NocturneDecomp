; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004ff3c0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3SideInfo *side_info,int channel,int granule_index,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3SideInfo * Stack[0xc]:4   side_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule_index
; SMpegFrame *     Stack[0x18]:4   frame
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
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503520
;
; Referenced Globals:
;   undefined4 DAT_006015c8
;   undefined4 DAT_006015cc
;   undefined4 DAT_006015d0
;   undefined4 DAT_006015dc
;   undefined4 DAT_006015e0
;   undefined4 DAT_006015e4
;   undefined4 DAT_006015e8
;   undefined4 DAT_00601628
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff3c0
        ;   Label: sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004ff3c0
    PUSH ESI                            ; 004ff3c1
    PUSH EDI                            ; 004ff3c2
    PUSH EBP                            ; 004ff3c3
    SUB ESP,0x58                        ; 004ff3c4
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004ff3c7
    MOV EBP,dword ptr [ESP + 0x74]      ; 004ff3cb
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004ff3cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ff3d3
    ADD EAX,EDX                         ; 004ff3da
    LEA EBX,[EBP + 0x8]                 ; 004ff3dc
    SHL EAX,0x5                         ; 004ff3df
    MOV EDX,dword ptr [ESP + 0x78]      ; 004ff3e2
    ADD EBX,EAX                         ; 004ff3e6
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ff3e8
    ADD EAX,EDX                         ; 004ff3ef
    ADD EBX,0x10                        ; 004ff3f1
    SHL EAX,0x3                         ; 004ff3f4
    LEA ESI,[EBX + EAX*0x1]             ; 004ff3f7
    CMP dword ptr [ESI + 0x10],0x0      ; 004ff3fa
    JZ 0x004ff40a                       ; 004ff3fe
        ;   XREF to: 004ff40a (CONDITIONAL_JUMP)  ; LAB_004ff40a
    CMP dword ptr [ESI + 0x14],0x2      ; 004ff400
    JZ 0x004ff502                       ; 004ff404
        ;   XREF to: 004ff502 (CONDITIONAL_JUMP)  ; LAB_004ff502
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff40a
        ;   Label: LAB_004ff40a
    SHL EAX,0x3                         ; 004ff40e
    MOV EDX,EAX                         ; 004ff411
    SHL EAX,0x5                         ; 004ff413
    SUB EAX,EDX                         ; 004ff416
    MOV EDX,dword ptr [ESP + 0x70]      ; 004ff418
    ADD EDX,EAX                         ; 004ff41c
    MOV dword ptr [ESP + 0x4],EDX       ; 004ff41e
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004ff422
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ff426
    ADD EAX,EDX                         ; 004ff42d
    XOR EBX,EBX                         ; 004ff42f
    SHL EAX,0x5                         ; 004ff431
    MOV dword ptr [ESP + 0x30],EBX      ; 004ff434
    ADD EAX,EBP                         ; 004ff438
    MOV dword ptr [ESP + 0x24],EBX      ; 004ff43a
    MOV dword ptr [ESP + 0x18],EAX      ; 004ff43e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ff442
        ;   Label: LAB_004ff442
    CMP dword ptr [EAX + 0x8],0x0       ; 004ff446
    JNZ 0x004ff77b                      ; 004ff44a
        ;   XREF to: 004ff77b (CONDITIONAL_JUMP)  ; LAB_004ff77b
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ff450
        ;   Label: LAB_004ff450
    MOV EBX,dword ptr [ESP + 0x30]      ; 004ff454
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ff458
    MOV ECX,dword ptr [ESP + 0x4]       ; 004ff45c
    MOV dword ptr [ESP + 0x38],EAX      ; 004ff460
    MOV EBX,dword ptr [EBX + 0x6015c8]  ; 004ff464 | DAT_006015c8 | DAT_006015cc
    CMP EDX,0x2                         ; 004ff46a
    SETGE byte ptr [ESP + 0x54]         ; 004ff46d
    LEA EBP,[EBX*0x4 + 0x0]             ; 004ff472
    MOV EDX,dword ptr [EAX + 0x6015cc]  ; 004ff479 | DAT_006015cc | DAT_006015d0
    ADD EBP,ECX                         ; 004ff47f
    CMP EBX,EDX                         ; 004ff481
    JGE 0x004ff4b9                      ; 004ff483
        ;   XREF to: 004ff4b9 (CONDITIONAL_JUMP)  ; LAB_004ff4b9
    XOR EAX,EAX                         ; 004ff485
        ;   Label: LAB_004ff485
    MOV AL,byte ptr [ESP + 0x54]        ; 004ff487
    MOV EDX,EAX                         ; 004ff48b
    SHL EDX,0x6                         ; 004ff48d
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ff490
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x6015e8] ; 004ff493 | DAT_006015e8
    PUSH ECX                            ; 004ff49a
    PUSH EDI                            ; 004ff49b
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004ff49c
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004ff4a1
    MOV dword ptr [EBP],EAX             ; 004ff4a4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ff4a7
    INC EBX                             ; 004ff4ab
    MOV EDX,dword ptr [EAX + 0x6015cc]  ; 004ff4ac | DAT_006015cc
    ADD EBP,0x4                         ; 004ff4b2
    CMP EBX,EDX                         ; 004ff4b5
    JL 0x004ff485                       ; 004ff4b7
        ;   XREF to: 004ff485 (CONDITIONAL_JUMP)  ; LAB_004ff485
    MOV EBX,dword ptr [ESP + 0x30]      ; 004ff4b9
        ;   Label: LAB_004ff4b9
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ff4bd
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ff4c1
    ADD EBX,0x4                         ; 004ff4c5
    INC EBP                             ; 004ff4c8
    ADD ECX,0x4                         ; 004ff4c9
    MOV dword ptr [ESP + 0x30],EBX      ; 004ff4cc
    MOV dword ptr [ESP + 0x24],EBP      ; 004ff4d0
    MOV dword ptr [ESP + 0x18],ECX      ; 004ff4d4
    CMP EBP,0x4                         ; 004ff4d8
    JL 0x004ff442                       ; 004ff4db
        ;   XREF to: 004ff442 (CONDITIONAL_JUMP)  ; LAB_004ff442
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff4e1
    SHL EAX,0x3                         ; 004ff4e5
    MOV EDX,EAX                         ; 004ff4e8
    SHL EAX,0x5                         ; 004ff4ea
    SUB EAX,EDX                         ; 004ff4ed
    ADD EAX,dword ptr [ESP + 0x70]      ; 004ff4ef
    MOV dword ptr [EAX + 0x58],0x0      ; 004ff4f3
    ADD ESP,0x58                        ; 004ff4fa
    POP EBP                             ; 004ff4fd
    POP EDI                             ; 004ff4fe
    POP ESI                             ; 004ff4ff
    POP EBX                             ; 004ff500
    RET                                 ; 004ff501
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff502
        ;   Label: LAB_004ff502
    SHL EAX,0x3                         ; 004ff506
    MOV EDX,EAX                         ; 004ff509
    SHL EAX,0x5                         ; 004ff50b
    MOV EBP,dword ptr [ESP + 0x70]      ; 004ff50e
    SUB EAX,EDX                         ; 004ff512
    ADD EBP,EAX                         ; 004ff514
    MOV EAX,dword ptr [ESI + 0x18]      ; 004ff516
    TEST EAX,EAX                        ; 004ff519
    JZ 0x004ff670                       ; 004ff51b
        ;   XREF to: 004ff670 (CONDITIONAL_JUMP)  ; LAB_004ff670
    MOV EBX,EBP                         ; 004ff521
    ADD EBP,0x20                        ; 004ff523
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ff526
        ;   Label: LAB_004ff526
    MOV EDX,dword ptr [EAX*0x4 + 0x6015e8] ; 004ff529 | DAT_006015e8
    PUSH EDX                            ; 004ff530
    PUSH EDI                            ; 004ff531
    ADD EBX,0x4                         ; 004ff532
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004ff535
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004ff53a
    MOV dword ptr [EBX + -0x4],EAX      ; 004ff53d
    CMP EBX,EBP                         ; 004ff540
    JNZ 0x004ff526                      ; 004ff542
        ;   XREF to: 004ff526 (CONDITIONAL_JUMP)  ; LAB_004ff526
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff544
    SHL EAX,0x3                         ; 004ff548
    MOV EBX,0xa8                        ; 004ff54b
    MOV EDX,EAX                         ; 004ff550
    SHL EAX,0x5                         ; 004ff552
    MOV ECX,0x3                         ; 004ff555
    SUB EAX,EDX                         ; 004ff55a
    MOV EDX,dword ptr [ESP + 0x70]      ; 004ff55c
    MOV dword ptr [ESP + 0x14],EBX      ; 004ff560
    ADD EDX,EAX                         ; 004ff564
    MOV dword ptr [ESP + 0x2c],ECX      ; 004ff566
    MOV dword ptr [ESP + 0xc],EDX       ; 004ff56a
    MOV dword ptr [ESP + 0x8],EDX       ; 004ff56e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ff572
        ;   Label: LAB_004ff572
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ff576
    MOV EBP,dword ptr [ESP + 0x8]       ; 004ff57a
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ff57e
    SHL EAX,0x2                         ; 004ff582
    ADD EBP,ECX                         ; 004ff585
    ADD EBX,EAX                         ; 004ff587
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ff589
        ;   Label: LAB_004ff589
    MOV EDX,dword ptr [EAX*0x4 + 0x6015e8] ; 004ff58c | DAT_006015e8
    PUSH EDX                            ; 004ff593
    PUSH EDI                            ; 004ff594
    ADD EBX,0x34                        ; 004ff595
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004ff598
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004ff59d
    MOV dword ptr [EBX + 0x28],EAX      ; 004ff5a0
    CMP EBX,EBP                         ; 004ff5a3
    JNZ 0x004ff589                      ; 004ff5a5
        ;   XREF to: 004ff589 (CONDITIONAL_JUMP)  ; LAB_004ff589
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004ff5a7
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ff5ab
    INC EBX                             ; 004ff5af
    ADD ECX,0x4                         ; 004ff5b0
    MOV dword ptr [ESP + 0x2c],EBX      ; 004ff5b3
    MOV dword ptr [ESP + 0x14],ECX      ; 004ff5b7
    CMP EBX,0x6                         ; 004ff5bb
    JL 0x004ff572                       ; 004ff5be
        ;   XREF to: 004ff572 (CONDITIONAL_JUMP)  ; LAB_004ff572
    MOV dword ptr [ESP + 0x28],0x6      ; 004ff5c0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff5c8
    SHL EAX,0x3                         ; 004ff5cc
    MOV EDX,EAX                         ; 004ff5cf
    SHL EAX,0x5                         ; 004ff5d1
    SUB EAX,EDX                         ; 004ff5d4
    MOV EDX,dword ptr [ESP + 0x70]      ; 004ff5d6
    ADD EDX,EAX                         ; 004ff5da
    MOV dword ptr [ESP + 0x10],EDX      ; 004ff5dc
    MOV EDX,0xb4                        ; 004ff5e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ff5e5
    MOV dword ptr [ESP + 0x1c],EDX      ; 004ff5e9
    MOV dword ptr [ESP],EAX             ; 004ff5ed
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ff5f0
        ;   Label: LAB_004ff5f0
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ff5f4
    MOV EBP,dword ptr [ESP]             ; 004ff5f8
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ff5fb
    SHL EBX,0x2                         ; 004ff5ff
    ADD EBP,EAX                         ; 004ff602
    ADD EBX,ECX                         ; 004ff604
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ff606
        ;   Label: LAB_004ff606
    MOV EDX,dword ptr [EAX*0x4 + 0x601628] ; 004ff609 | DAT_00601628
    PUSH EDX                            ; 004ff610
    PUSH EDI                            ; 004ff611
    ADD EBX,0x34                        ; 004ff612
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004ff615
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004ff61a
    MOV dword ptr [EBX + 0x28],EAX      ; 004ff61d
    CMP EBX,EBP                         ; 004ff620
    JNZ 0x004ff606                      ; 004ff622
        ;   XREF to: 004ff606 (CONDITIONAL_JUMP)  ; LAB_004ff606
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ff624
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004ff628
    INC EBX                             ; 004ff62c
    ADD ECX,0x4                         ; 004ff62d
    MOV dword ptr [ESP + 0x28],EBX      ; 004ff630
    MOV dword ptr [ESP + 0x1c],ECX      ; 004ff634
    CMP EBX,0xc                         ; 004ff638
    JL 0x004ff5f0                       ; 004ff63b
        ;   XREF to: 004ff5f0 (CONDITIONAL_JUMP)  ; LAB_004ff5f0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff63d
    SHL EAX,0x3                         ; 004ff641
    MOV EDX,EAX                         ; 004ff644
    SHL EAX,0x5                         ; 004ff646
    SUB EAX,EDX                         ; 004ff649
    MOV EDX,dword ptr [ESP + 0x70]      ; 004ff64b
    ADD EDX,EAX                         ; 004ff64f
    LEA EAX,[EDX + 0x30]                ; 004ff651
    ADD EDX,0xcc                        ; 004ff654
    ADD EAX,0x34                        ; 004ff65a
        ;   Label: LAB_004ff65a
    MOV dword ptr [EAX + 0x28],0x0      ; 004ff65d
    CMP EAX,EDX                         ; 004ff664
    JNZ 0x004ff65a                      ; 004ff666
        ;   XREF to: 004ff65a (CONDITIONAL_JUMP)  ; LAB_004ff65a
    ADD ESP,0x58                        ; 004ff668
    POP EBP                             ; 004ff66b
    POP EDI                             ; 004ff66c
    POP ESI                             ; 004ff66d
    POP EBX                             ; 004ff66e
    RET                                 ; 004ff66f
    MOV dword ptr [ESP + 0x34],EAX      ; 004ff670
        ;   Label: LAB_004ff670
    MOV dword ptr [ESP + 0x20],EAX      ; 004ff674
    MOV dword ptr [ESP + 0x40],EBP      ; 004ff678
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ff67c
        ;   Label: LAB_004ff67c
    MOV EBP,dword ptr [ESP + 0x34]      ; 004ff680
    MOV EAX,dword ptr [EAX + 0x6015dc]  ; 004ff684 | DAT_006015dc | DAT_006015e0
    MOV ECX,dword ptr [EBP + 0x6015e0]  ; 004ff68a | DAT_006015e0 | DAT_006015e4
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ff690
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ff694
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004ff698
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004ff69c
    MOV dword ptr [ESP + 0x50],EAX      ; 004ff6a0
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ff6a4
    SHL EBX,0x2                         ; 004ff6a8
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ff6ab
    LEA EAX,[EBX + 0x9c]                ; 004ff6af
    CMP EDX,ECX                         ; 004ff6b5
    JGE 0x004ff726                      ; 004ff6b7
        ;   XREF to: 004ff726 (CONDITIONAL_JUMP)  ; LAB_004ff726
    ADD EAX,dword ptr [ESP + 0x40]      ; 004ff6b9
    MOV dword ptr [ESP + 0x48],EBX      ; 004ff6bd
    MOV dword ptr [ESP + 0x44],EAX      ; 004ff6c1
    MOV EBX,dword ptr [ESP + 0x48]      ; 004ff6c5
        ;   Label: LAB_004ff6c5
    MOV ECX,dword ptr [ESP + 0x40]      ; 004ff6c9
    MOV EBP,dword ptr [ESP + 0x44]      ; 004ff6cd
    ADD EBX,ECX                         ; 004ff6d1
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ff6d3
        ;   Label: LAB_004ff6d3
    MOV EDX,dword ptr [ESP + 0x50]      ; 004ff6d6
    SHL EAX,0x2                         ; 004ff6da
    ADD EAX,EDX                         ; 004ff6dd
    MOV ECX,dword ptr [EAX + 0x6015e8]  ; 004ff6df | DAT_006015e8
    PUSH ECX                            ; 004ff6e5
    PUSH EDI                            ; 004ff6e6
    ADD EBX,0x34                        ; 004ff6e7
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810 ; 004ff6ea
        ;   XREF to: 004fd810 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_004fd810(CMP3Decoder * this_ptr, uint num_bits)
    ADD ESP,0x8                         ; 004ff6ef
    MOV dword ptr [EBX + 0x28],EAX      ; 004ff6f2
    CMP EBX,EBP                         ; 004ff6f5
    JNZ 0x004ff6d3                      ; 004ff6f7
        ;   XREF to: 004ff6d3 (CONDITIONAL_JUMP)  ; LAB_004ff6d3
    MOV EBX,dword ptr [ESP + 0x44]      ; 004ff6f9
    MOV EBP,dword ptr [ESP + 0x48]      ; 004ff6fd
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004ff701
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ff705
    ADD EBX,0x4                         ; 004ff709
    ADD EBP,0x4                         ; 004ff70c
    INC EAX                             ; 004ff70f
    MOV ECX,dword ptr [EDX + 0x6015e0]  ; 004ff710 | DAT_006015e0
    MOV dword ptr [ESP + 0x44],EBX      ; 004ff716
    MOV dword ptr [ESP + 0x48],EBP      ; 004ff71a
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ff71e
    CMP EAX,ECX                         ; 004ff722
    JL 0x004ff6c5                       ; 004ff724
        ;   XREF to: 004ff6c5 (CONDITIONAL_JUMP)  ; LAB_004ff6c5
    MOV EBP,dword ptr [ESP + 0x20]      ; 004ff726
        ;   Label: LAB_004ff726
    MOV EBX,dword ptr [ESP + 0x34]      ; 004ff72a
    ADD EBP,0x40                        ; 004ff72e
    ADD EBX,0x4                         ; 004ff731
    MOV dword ptr [ESP + 0x20],EBP      ; 004ff734
    MOV dword ptr [ESP + 0x34],EBX      ; 004ff738
    CMP EBP,0x80                        ; 004ff73c
    JNZ 0x004ff67c                      ; 004ff742
        ;   XREF to: 004ff67c (CONDITIONAL_JUMP)  ; LAB_004ff67c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ff748
    SHL EAX,0x3                         ; 004ff74c
    MOV EDX,EAX                         ; 004ff74f
    SHL EAX,0x5                         ; 004ff751
    MOV EBP,dword ptr [ESP + 0x70]      ; 004ff754
    SUB EAX,EDX                         ; 004ff758
    ADD EBP,EAX                         ; 004ff75a
    LEA EBX,[EBP + 0x30]                ; 004ff75c
    ADD EBP,0xcc                        ; 004ff75f
    ADD EBX,0x34                        ; 004ff765
        ;   Label: LAB_004ff765
    MOV dword ptr [EBX + 0x28],0x0      ; 004ff768
    CMP EBX,EBP                         ; 004ff76f
    JNZ 0x004ff765                      ; 004ff771
        ;   XREF to: 004ff765 (CONDITIONAL_JUMP)  ; LAB_004ff765
    ADD ESP,0x58                        ; 004ff773
    POP EBP                             ; 004ff776
    POP EDI                             ; 004ff777
    POP ESI                             ; 004ff778
    POP EBX                             ; 004ff779
    RET                                 ; 004ff77a
    CMP dword ptr [ESP + 0x78],0x0      ; 004ff77b
        ;   Label: LAB_004ff77b
    JZ 0x004ff450                       ; 004ff780
        ;   XREF to: 004ff450 (CONDITIONAL_JUMP)  ; LAB_004ff450
    JMP 0x004ff4b9                      ; 004ff786
        ;   XREF to: 004ff4b9 (UNCONDITIONAL_JUMP)  ; LAB_004ff4b9

