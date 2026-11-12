; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_004fe580(int *scalefactor_indices,uint *quantized_samples,float *dequantized_output,SMpegFrame *frame)
;
; Parameters:
; int *            Stack[0x4]:4   scalefactor_indices
; uint *           Stack[0x8]:4   quantized_samples
; float *          Stack[0xc]:4   dequantized_output
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503156
;
; Referenced Globals:
;   undefined4 DAT_00600800
;   undefined4 DAT_00600888
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe580
        ;   Label: sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004fe580
    PUSH ESI                            ; 004fe581
    PUSH EDI                            ; 004fe582
    PUSH EBP                            ; 004fe583
    SUB ESP,0x58                        ; 004fe584
    MOV EAX,dword ptr [ESP + 0x78]      ; 004fe587
    MOV EDX,dword ptr [EAX + 0x10]      ; 004fe58b
    MOV dword ptr [ESP + 0x30],EDX      ; 004fe58e
    MOV EDX,dword ptr [EAX + 0x18]      ; 004fe592
    MOV dword ptr [ESP + 0x8],EDX       ; 004fe595
    MOV EAX,dword ptr [EAX + 0x8]       ; 004fe599
    TEST EDX,EDX                        ; 004fe59c
    JLE 0x004fe6a8                      ; 004fe59e
        ;   XREF to: 004fe6a8 (CONDITIONAL_JUMP)  ; LAB_004fe6a8
    MOV dword ptr [ESP + 0x10],EAX      ; 004fe5a4
    XOR EBP,EBP                         ; 004fe5a8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fe5aa
    MOV dword ptr [ESP + 0x14],EBP      ; 004fe5b1
    MOV dword ptr [ESP + 0xc],EAX       ; 004fe5b5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fe5b9
        ;   Label: LAB_004fe5b9
    MOV dword ptr [ESP + 0x20],EAX      ; 004fe5bd
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fe5c1
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fe5c5
    MOV dword ptr [ESP + 0x2c],EAX      ; 004fe5c9
    MOV EDI,EAX                         ; 004fe5cd
    MOV EAX,ESI                         ; 004fe5cf
    MOV EDX,dword ptr [ESP + 0x70]      ; 004fe5d1
    XOR EAX,ESI                         ; 004fe5d5
    MOV dword ptr [ESP + 0x1c],ESI      ; 004fe5d7
    MOV dword ptr [ESP + 0x28],EAX      ; 004fe5db
    LEA EAX,[ESI + EDX*0x1]             ; 004fe5df
    MOV dword ptr [ESP + 0x24],EAX      ; 004fe5e2
    MOV dword ptr [ESP + 0x18],EAX      ; 004fe5e6
    XOR EBP,EBP                         ; 004fe5ea
        ;   Label: LAB_004fe5ea
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fe5ec
    MOV dword ptr [ESP + 0x4c],EBP      ; 004fe5f0
    TEST EAX,EAX                        ; 004fe5f4
    JLE 0x004fe704                      ; 004fe5f6
        ;   XREF to: 004fe704 (CONDITIONAL_JUMP)  ; LAB_004fe704
    MOV EAX,dword ptr [ESP + 0x24]      ; 004fe5fc
    MOV ECX,dword ptr [ESP + 0x28]      ; 004fe600
    MOV dword ptr [ESP + 0x40],EAX      ; 004fe604
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fe608
    MOV EBX,dword ptr [ESP + 0x74]      ; 004fe60c
    ADD EAX,ECX                         ; 004fe610
    ADD EAX,EBX                         ; 004fe612
    MOV dword ptr [ESP + 0x34],EAX      ; 004fe614
    LEA EAX,[ECX + ESI*0x1]             ; 004fe618
    MOV EBP,dword ptr [ESP + 0x6c]      ; 004fe61b
    LEA EDX,[EBX + EAX*0x1]             ; 004fe61f
    ADD EAX,EBP                         ; 004fe622
    MOV dword ptr [ESP + 0x3c],EAX      ; 004fe624
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fe628
    MOV dword ptr [ESP + 0x48],EAX      ; 004fe62c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fe630
    ADD EAX,ECX                         ; 004fe634
    MOV dword ptr [ESP + 0x44],EDX      ; 004fe636
    LEA EDX,[EAX + EBP*0x1]             ; 004fe63a
    ADD EAX,EBX                         ; 004fe63d
    MOV dword ptr [ESP + 0x38],EDX      ; 004fe63f
    MOV dword ptr [ESP + 0x50],EAX      ; 004fe643
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004fe647
        ;   Label: LAB_004fe647
    MOV EBX,dword ptr [ESP + 0x70]      ; 004fe64b
    SHL EAX,0x7                         ; 004fe64f
    ADD EBX,EAX                         ; 004fe652
    MOV EAX,dword ptr [ESP + 0x40]      ; 004fe654
    MOV EBP,dword ptr [EAX]             ; 004fe658
    TEST EBP,EBP                        ; 004fe65a
    JZ 0x004fe7cc                       ; 004fe65c
        ;   XREF to: 004fe7cc (CONDITIONAL_JUMP)  ; LAB_004fe7cc
    XOR EAX,EAX                         ; 004fe662
    LEA EDX,[EBX + ESI*0x1]             ; 004fe664
        ;   Label: LAB_004fe664
    MOV EBP,0x1                         ; 004fe667
    MOV CL,AL                           ; 004fe66c
    MOV EDX,dword ptr [EDX]             ; 004fe66e
    SHL EBP,CL                          ; 004fe670
    SHL EDX,0x4                         ; 004fe672
    MOV ECX,EBP                         ; 004fe675
    CMP ECX,dword ptr [EDX + EDI*0x1]   ; 004fe677
    JNC 0x004fe721                      ; 004fe67a
        ;   XREF to: 004fe721 (CONDITIONAL_JUMP)  ; LAB_004fe721
    INC EAX                             ; 004fe680
    JMP 0x004fe664                      ; 004fe681
        ;   XREF to: 004fe664 (UNCONDITIONAL_JUMP)  ; LAB_004fe664
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fe683
        ;   Label: LAB_004fe683
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fe687
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fe68b
    ADD ECX,0x4                         ; 004fe68f
    ADD EBX,0x100                       ; 004fe692
    MOV dword ptr [ESP + 0x14],ECX      ; 004fe698
    MOV dword ptr [ESP + 0x10],EBX      ; 004fe69c
    CMP ECX,ESI                         ; 004fe6a0
    JL 0x004fe5b9                       ; 004fe6a2
        ;   XREF to: 004fe5b9 (CONDITIONAL_JUMP)  ; LAB_004fe5b9
    MOV EDI,dword ptr [ESP + 0x8]       ; 004fe6a8
        ;   Label: LAB_004fe6a8
    CMP EDI,0x20                        ; 004fe6ac
    JGE 0x004fe6fc                      ; 004fe6af
        ;   XREF to: 004fe6fc (CONDITIONAL_JUMP)  ; LAB_004fe6fc
    MOV EBP,dword ptr [ESP + 0x30]      ; 004fe6b1
    LEA ESI,[EDI*0x4 + 0x0]             ; 004fe6b5
    MOV EBX,ESI                         ; 004fe6bc
        ;   Label: LAB_004fe6bc
    XOR ECX,ECX                         ; 004fe6be
    MOV EDI,dword ptr [ESP + 0x30]      ; 004fe6c0
        ;   Label: LAB_004fe6c0
    XOR EDX,EDX                         ; 004fe6c4
    TEST EDI,EDI                        ; 004fe6c6
    JLE 0x004fe6e3                      ; 004fe6c8
        ;   XREF to: 004fe6e3 (CONDITIONAL_JUMP)  ; LAB_004fe6e3
    MOV EDI,dword ptr [ESP + 0x74]      ; 004fe6ca
    LEA EAX,[EBX + ECX*0x1]             ; 004fe6ce
    ADD EAX,EDI                         ; 004fe6d1
    INC EDX                             ; 004fe6d3
        ;   Label: LAB_004fe6d3
    MOV dword ptr [EAX],0x0             ; 004fe6d4
    ADD EAX,0x180                       ; 004fe6da
    CMP EDX,EBP                         ; 004fe6df
    JL 0x004fe6d3                       ; 004fe6e1
        ;   XREF to: 004fe6d3 (CONDITIONAL_JUMP)  ; LAB_004fe6d3
    ADD ECX,0x80                        ; 004fe6e3
        ;   Label: LAB_004fe6e3
    CMP ECX,0x180                       ; 004fe6e9
    JNZ 0x004fe6c0                      ; 004fe6ef
        ;   XREF to: 004fe6c0 (CONDITIONAL_JUMP)  ; LAB_004fe6c0
    ADD ESI,0x4                         ; 004fe6f1
    CMP ESI,0x80                        ; 004fe6f4
    JL 0x004fe6bc                       ; 004fe6fa
        ;   XREF to: 004fe6bc (CONDITIONAL_JUMP)  ; LAB_004fe6bc
    ADD ESP,0x58                        ; 004fe6fc
        ;   Label: LAB_004fe6fc
    POP EBP                             ; 004fe6ff
    POP EDI                             ; 004fe700
    POP ESI                             ; 004fe701
    POP EBX                             ; 004fe702
    RET                                 ; 004fe703
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fe704
        ;   Label: LAB_004fe704
    ADD EAX,0x80                        ; 004fe708
    MOV dword ptr [ESP + 0x28],EAX      ; 004fe70d
    CMP EAX,0x180                       ; 004fe711
    JZ 0x004fe683                       ; 004fe716
        ;   XREF to: 004fe683 (CONDITIONAL_JUMP)  ; LAB_004fe683
    JMP 0x004fe5ea                      ; 004fe71c
        ;   XREF to: 004fe5ea (UNCONDITIONAL_JUMP)  ; LAB_004fe5ea
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004fe721
        ;   Label: LAB_004fe721
    LEA ECX,[EAX + -0x1]                ; 004fe725
    MOV EDX,dword ptr [EDX]             ; 004fe728
    SHR EDX,CL                          ; 004fe72a
    AND EDX,0x1                         ; 004fe72c
    CMP EDX,0x1                         ; 004fe72f
    JNZ 0x004fe7bd                      ; 004fe732
        ;   XREF to: 004fe7bd (CONDITIONAL_JUMP)  ; LAB_004fe7bd
    MOV EDX,dword ptr [ESP + 0x44]      ; 004fe738
    MOV dword ptr [EDX],0x0             ; 004fe73c
    DEC EAX                             ; 004fe742
        ;   Label: LAB_004fe742
    MOV CL,AL                           ; 004fe743
    MOV EAX,0x1                         ; 004fe745
    SHL EAX,CL                          ; 004fe74a
    MOV ECX,dword ptr [ESP + 0x38]      ; 004fe74c
    LEA EDX,[EAX + -0x1]                ; 004fe750
    MOV EBX,dword ptr [ECX]             ; 004fe753
    XOR EBP,EBP                         ; 004fe755
    AND EDX,EBX                         ; 004fe757
    MOV dword ptr [ESP + 0x4],EBP       ; 004fe759
    MOV dword ptr [ESP],EDX             ; 004fe75d
    MOV dword ptr [ESP + 0x54],EAX      ; 004fe760
    FILD qword ptr [ESP]                ; 004fe764
    FILD dword ptr [ESP + 0x54]         ; 004fe767
    FDIVP                               ; 004fe76b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004fe76d
    FADD float ptr [EAX]                ; 004fe771
    FSTP float ptr [EAX]                ; 004fe773
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fe775
    MOV EAX,dword ptr [EAX]             ; 004fe779
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fe77b
    SHL EAX,0x4                         ; 004fe77f
    ADD EAX,EDX                         ; 004fe782
    MOV EDX,dword ptr [ESP + 0x50]      ; 004fe784
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fe788
    FLD float ptr [EDX]                 ; 004fe78b
    FLD ST0                             ; 004fe78d
    FADD double ptr [EAX*0x8 + 0x600888] ; 004fe78f | DAT_00600888
    FSTP ST1                            ; 004fe796
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fe798
    FSTP float ptr [EDX]                ; 004fe79c
    MOV EAX,dword ptr [EAX]             ; 004fe79e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004fe7a0
    SHL EAX,0x4                         ; 004fe7a4
    ADD EAX,ECX                         ; 004fe7a7
    FLD float ptr [EDX]                 ; 004fe7a9
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fe7ab
    FLD ST0                             ; 004fe7ae
    FMUL double ptr [EAX*0x8 + 0x600800] ; 004fe7b0 | DAT_00600800
    FSTP ST1                            ; 004fe7b7
    FSTP float ptr [EDX]                ; 004fe7b9
    JMP 0x004fe7d2                      ; 004fe7bb
        ;   XREF to: 004fe7d2 (UNCONDITIONAL_JUMP)  ; LAB_004fe7d2
    MOV EDX,dword ptr [ESP + 0x44]      ; 004fe7bd
        ;   Label: LAB_004fe7bd
    MOV dword ptr [EDX],0xbf800000      ; 004fe7c1
    JMP 0x004fe742                      ; 004fe7c7
        ;   XREF to: 004fe742 (UNCONDITIONAL_JUMP)  ; LAB_004fe742
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fe7cc
        ;   Label: LAB_004fe7cc
    MOV dword ptr [EAX],EBP             ; 004fe7d0
    MOV EDX,dword ptr [ESP + 0x40]      ; 004fe7d2
        ;   Label: LAB_004fe7d2
    MOV ECX,dword ptr [ESP + 0x34]      ; 004fe7d6
    MOV EBX,dword ptr [ESP + 0x44]      ; 004fe7da
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004fe7de
    MOV EAX,dword ptr [ESP + 0x48]      ; 004fe7e2
    ADD EDX,0x80                        ; 004fe7e6
    ADD ECX,0x180                       ; 004fe7ec
    ADD EBX,0x180                       ; 004fe7f2
    ADD EBP,0x180                       ; 004fe7f8
    ADD EAX,0x80                        ; 004fe7fe
    MOV dword ptr [ESP + 0x40],EDX      ; 004fe803
    MOV dword ptr [ESP + 0x34],ECX      ; 004fe807
    MOV dword ptr [ESP + 0x44],EBX      ; 004fe80b
    MOV dword ptr [ESP + 0x3c],EBP      ; 004fe80f
    MOV dword ptr [ESP + 0x48],EAX      ; 004fe813
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fe817
    MOV ECX,dword ptr [ESP + 0x50]      ; 004fe81b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004fe81f
    MOV EBP,dword ptr [ESP + 0x30]      ; 004fe823
    ADD EDX,0x180                       ; 004fe827
    ADD ECX,0x180                       ; 004fe82d
    INC EBX                             ; 004fe833
    MOV dword ptr [ESP + 0x38],EDX      ; 004fe834
    MOV dword ptr [ESP + 0x50],ECX      ; 004fe838
    MOV dword ptr [ESP + 0x4c],EBX      ; 004fe83c
    CMP EBX,EBP                         ; 004fe840
    JGE 0x004fe704                      ; 004fe842
        ;   XREF to: 004fe704 (CONDITIONAL_JUMP)  ; LAB_004fe704
    JMP 0x004fe647                      ; 004fe848
        ;   XREF to: 004fe647 (UNCONDITIONAL_JUMP)  ; LAB_004fe647

