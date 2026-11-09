; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_FUN_00527530(CMP3Decoder *this_ptr,CFileBitStream *bit_stream,SMpegLayer3SideInfo *side_info_array,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; CFileBitStream * Stack[0x8]:4   bit_stream
; SMpegLayer3SideInfo * Stack[0xc]:4   side_info_array
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052ba00
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb2be
;   TerminatedCString s_Side_info_bad_block_type_005eb2cf
;   TerminatedCString s_sound_mp3_cpp_005eb308
;   TerminatedCString s_Side_info_bad_block_type_005eb319
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d404c8
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0
;   sound_mp3.cpp_FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527530
        ;   Label: sound_mp3.cpp_FUN_00527530
    PUSH ESI                            ; 00527531
    PUSH EDI                            ; 00527532
    PUSH EBP                            ; 00527533
    SUB ESP,0x4c                        ; 00527534
    MOV EBX,dword ptr [ESP + 0x64]      ; 00527537
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0052753b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0052753f
    MOV EAX,dword ptr [EAX]             ; 00527542
    MOV dword ptr [ESP + 0x10],EDX      ; 00527544
    CMP dword ptr [EAX],0x0             ; 00527548
    JZ 0x00527843                       ; 0052754b
        ;   XREF to: 00527843 (CONDITIONAL_JUMP)  ; LAB_00527843
    PUSH 0x9                            ; 00527551
    PUSH EBX                            ; 00527553
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527554
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527559
    MOV EDX,dword ptr [ESP + 0x68]      ; 0052755c
    MOV ESI,dword ptr [ESP + 0x10]      ; 00527560
    MOV dword ptr [EDX],EAX             ; 00527564
    CMP ESI,0x1                         ; 00527566
    JNZ 0x005277cc                      ; 00527569
        ;   XREF to: 005277cc (CONDITIONAL_JUMP)  ; LAB_005277cc
    PUSH 0x5                            ; 0052756f
    PUSH EBX                            ; 00527571
        ;   Label: LAB_00527571
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527572
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527577
    MOV EDX,dword ptr [ESP + 0x68]      ; 0052757a
    MOV dword ptr [EDX + 0x4],EAX       ; 0052757e
    MOV EDI,dword ptr [ESP + 0x10]      ; 00527581
    XOR EBP,EBP                         ; 00527585
    TEST EDI,EDI                        ; 00527587
    JLE 0x005275cb                      ; 00527589
        ;   XREF to: 005275cb (CONDITIONAL_JUMP)  ; LAB_005275cb
    MOV EAX,dword ptr [ESP + 0x68]      ; 0052758b
    ADD EAX,0x10                        ; 0052758f
    MOV dword ptr [ESP],EAX             ; 00527592
    IMUL EAX,EBP,0xa0                   ; 00527595
        ;   Label: LAB_00527595
    MOV ESI,dword ptr [ESP + 0x68]      ; 0052759b
    MOV EDI,dword ptr [ESP]             ; 0052759f
    ADD ESI,EAX                         ; 005275a2
    PUSH EBX                            ; 005275a4
        ;   Label: LAB_005275a4
    ADD ESI,0x4                         ; 005275a5
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 005275a8
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005275ad
    MOV dword ptr [ESI + 0x4],EAX       ; 005275b0
    CMP ESI,EDI                         ; 005275b3
    JNZ 0x005275a4                      ; 005275b5
        ;   XREF to: 005275a4 (CONDITIONAL_JUMP)  ; LAB_005275a4
    MOV EAX,dword ptr [ESP]             ; 005275b7
    MOV EDX,dword ptr [ESP + 0x10]      ; 005275ba
    ADD EAX,0xa0                        ; 005275be
    INC EBP                             ; 005275c3
    MOV dword ptr [ESP],EAX             ; 005275c4
    CMP EBP,EDX                         ; 005275c7
    JL 0x00527595                       ; 005275c9
        ;   XREF to: 00527595 (CONDITIONAL_JUMP)  ; LAB_00527595
    XOR ECX,ECX                         ; 005275cb
        ;   Label: LAB_005275cb
    MOV dword ptr [ESP + 0x4],ECX       ; 005275cd
    XOR ESI,ESI                         ; 005275d1
        ;   Label: LAB_005275d1
    MOV EDI,dword ptr [ESP + 0x10]      ; 005275d3
    MOV dword ptr [ESP + 0x28],ESI      ; 005275d7
    TEST EDI,EDI                        ; 005275db
    JLE 0x005277ad                      ; 005275dd
        ;   XREF to: 005277ad (CONDITIONAL_JUMP)  ; LAB_005277ad
    MOV EAX,dword ptr [ESP + 0x4]       ; 005275e3
    MOV EDX,dword ptr [ESP + 0x68]      ; 005275e7
    MOV dword ptr [ESP + 0xc],EAX       ; 005275eb
    MOV dword ptr [ESP + 0x40],EAX      ; 005275ef
    MOV dword ptr [ESP + 0x44],EAX      ; 005275f3
    ADD EAX,EDX                         ; 005275f7
    MOV dword ptr [ESP + 0x38],EAX      ; 005275f9
    MOV dword ptr [ESP + 0x18],EAX      ; 005275fd
    MOV dword ptr [ESP + 0x1c],EAX      ; 00527601
    MOV dword ptr [ESP + 0x30],EAX      ; 00527605
    PUSH 0xc                            ; 00527609
        ;   Label: LAB_00527609
    PUSH EBX                            ; 0052760b
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052760c
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527611
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 00527614
    PUSH 0x9                            ; 0052761c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0052761e
    PUSH EBX                            ; 00527622
    MOV ESI,dword ptr [ESP + 0x70]      ; 00527623
    MOV dword ptr [EDX + 0x18],EAX      ; 00527627
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052762a
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052762f
    PUSH 0x8                            ; 00527632
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00527634
    PUSH EBX                            ; 00527638
    MOV dword ptr [EDX + 0x1c],EAX      ; 00527639
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052763c
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527641
    PUSH 0x4                            ; 00527644
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00527646
    PUSH EBX                            ; 0052764a
    MOV dword ptr [EDX + 0x20],EAX      ; 0052764b
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052764e
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527653
    MOV EDX,dword ptr [ESP + 0x38]      ; 00527656
    PUSH EBX                            ; 0052765a
    MOV dword ptr [EDX + 0x24],EAX      ; 0052765b
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 0052765e
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00527663
    MOV EDX,dword ptr [ESP + 0x38]      ; 00527666
    ADD EBP,ESI                         ; 0052766a
    MOV dword ptr [EDX + 0x28],EAX      ; 0052766c
    TEST EAX,EAX                        ; 0052766f
    JZ 0x005277fa                       ; 00527671
        ;   XREF to: 005277fa (CONDITIONAL_JUMP)  ; LAB_005277fa
    PUSH 0x2                            ; 00527677
    PUSH EBX                            ; 00527679
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052767a
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052767f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00527682
    PUSH EBX                            ; 00527686
    MOV dword ptr [EDX + 0x2c],EAX      ; 00527687
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 0052768a
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052768f
    MOV EDI,dword ptr [ESP + 0xc]       ; 00527692
    MOV EDX,dword ptr [ESP + 0x38]      ; 00527696
    ADD EDI,EBP                         ; 0052769a
    MOV dword ptr [EDX + 0x30],EAX      ; 0052769c
    MOV ESI,EDI                         ; 0052769f
    ADD EDI,0x8                         ; 005276a1
    PUSH 0x5                            ; 005276a4
        ;   Label: LAB_005276a4
    PUSH EBX                            ; 005276a6
    ADD ESI,0x4                         ; 005276a7
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005276aa
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005276af
    MOV dword ptr [ESI + 0x30],EAX      ; 005276b2
    CMP ESI,EDI                         ; 005276b5
    JNZ 0x005276a4                      ; 005276b7
        ;   XREF to: 005276a4 (CONDITIONAL_JUMP)  ; LAB_005276a4
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 005276b9
    MOV EDX,dword ptr [ESP + 0x68]      ; 005276c1
    XOR ESI,EDI                         ; 005276c5
    ADD EBP,EDX                         ; 005276c7
    PUSH 0x3                            ; 005276c9
        ;   Label: LAB_005276c9
    PUSH EBX                            ; 005276cb
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005276cc
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005276d1
    MOV EDX,dword ptr [ESP + 0x44]      ; 005276d4
    ADD EDX,EBP                         ; 005276d8
    LEA EDI,[EDX + ESI*0x1]             ; 005276da
    ADD ESI,0x4                         ; 005276dd
    MOV dword ptr [EDI + 0x40],EAX      ; 005276e0
    CMP ESI,0xc                         ; 005276e3
    JNZ 0x005276c9                      ; 005276e6
        ;   XREF to: 005276c9 (CONDITIONAL_JUMP)  ; LAB_005276c9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 005276e8
    TEST ECX,ECX                        ; 005276eb
    JNZ 0x005277d3                      ; 005276ed
        ;   XREF to: 005277d3 (CONDITIONAL_JUMP)  ; LAB_005277d3
    PUSH 0x1d404c8                      ; 005276f3 | DAT_01d404c8
    MOV EBP,0x5eb2be                    ; 005276f8 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x6d5                       ; 005276fd
    PUSH 0x5eb2cf                       ; 00527702 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01d1d400],EBP      ; 00527707 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052770d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00527712
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00527717
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0052771a
        ;   Label: LAB_0052771a
    MOV EDX,0x14                        ; 0052771e
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00527723
    MOV EAX,EDX                         ; 00527726
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00527728
    SUB EAX,ECX                         ; 0052772c
    MOV dword ptr [EDX + 0x50],EAX      ; 0052772e
    PUSH EBX                            ; 00527731
        ;   Label: LAB_00527731
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 00527732
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00527737
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052773a
    PUSH EBX                            ; 0052773e
    MOV dword ptr [EDX + 0x54],EAX      ; 0052773f
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 00527742
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00527747
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052774a
    PUSH EBX                            ; 0052774e
    MOV dword ptr [EDX + 0x58],EAX      ; 0052774f
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 00527752
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 00527757
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052775a
    MOV EBP,dword ptr [ESP + 0x38]      ; 0052775e
    MOV ECX,dword ptr [ESP + 0x30]      ; 00527762
    MOV ESI,dword ptr [ESP + 0x28]      ; 00527766
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052776a
    ADD EBP,0xa0                        ; 0052776e
    ADD ECX,0xa0                        ; 00527774
    INC ESI                             ; 0052777a
    MOV dword ptr [EDX + 0x5c],EAX      ; 0052777b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052777e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00527782
    MOV dword ptr [ESP + 0x38],EBP      ; 00527786
    MOV dword ptr [ESP + 0x30],ECX      ; 0052778a
    MOV dword ptr [ESP + 0x28],ESI      ; 0052778e
    ADD EAX,0xa0                        ; 00527792
    ADD EDX,0xa0                        ; 00527797
    MOV dword ptr [ESP + 0x18],EAX      ; 0052779d
    MOV dword ptr [ESP + 0x1c],EDX      ; 005277a1
    CMP ESI,EDI                         ; 005277a5
    JL 0x00527609                       ; 005277a7
        ;   XREF to: 00527609 (CONDITIONAL_JUMP)  ; LAB_00527609
    MOV EBP,dword ptr [ESP + 0x4]       ; 005277ad
        ;   Label: LAB_005277ad
    ADD EBP,0x48                        ; 005277b1
    MOV dword ptr [ESP + 0x4],EBP       ; 005277b4
    CMP EBP,0x90                        ; 005277b8
    JNZ 0x005275d1                      ; 005277be
        ;   XREF to: 005275d1 (CONDITIONAL_JUMP)  ; LAB_005275d1
    ADD ESP,0x4c                        ; 005277c4
        ;   Label: LAB_005277c4
    POP EBP                             ; 005277c7
    POP EDI                             ; 005277c8
    POP ESI                             ; 005277c9
    POP EBX                             ; 005277ca
    RET                                 ; 005277cb
    PUSH 0x3                            ; 005277cc
        ;   Label: LAB_005277cc
    JMP 0x00527571                      ; 005277ce
        ;   XREF to: 00527571 (UNCONDITIONAL_JUMP)  ; LAB_00527571
    CMP ECX,0x2                         ; 005277d3
        ;   Label: LAB_005277d3
    JNZ 0x005277ea                      ; 005277d6
        ;   XREF to: 005277ea (CONDITIONAL_JUMP)  ; LAB_005277ea
    CMP dword ptr [EDX + 0x30],0x0      ; 005277d8
    JNZ 0x005277ea                      ; 005277dc
        ;   XREF to: 005277ea (CONDITIONAL_JUMP)  ; LAB_005277ea
    MOV dword ptr [EDX + 0x4c],0x8      ; 005277de
    JMP 0x0052771a                      ; 005277e5
        ;   XREF to: 0052771a (UNCONDITIONAL_JUMP)  ; LAB_0052771a
    MOV EAX,dword ptr [ESP + 0x18]      ; 005277ea
        ;   Label: LAB_005277ea
    MOV dword ptr [EAX + 0x4c],0x7      ; 005277ee
    JMP 0x0052771a                      ; 005277f5
        ;   XREF to: 0052771a (UNCONDITIONAL_JUMP)  ; LAB_0052771a
    XOR ESI,ESI                         ; 005277fa
        ;   Label: LAB_005277fa
    PUSH 0x5                            ; 005277fc
        ;   Label: LAB_005277fc
    PUSH EBX                            ; 005277fe
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005277ff
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527804
    MOV EDI,dword ptr [ESP + 0x40]      ; 00527807
    ADD EDI,EBP                         ; 0052780b
    LEA EDX,[EDI + ESI*0x1]             ; 0052780d
    ADD ESI,0x4                         ; 00527810
    MOV dword ptr [EDX + 0x34],EAX      ; 00527813
    CMP ESI,0xc                         ; 00527816
    JNZ 0x005277fc                      ; 00527819
        ;   XREF to: 005277fc (CONDITIONAL_JUMP)  ; LAB_005277fc
    PUSH 0x4                            ; 0052781b
    PUSH EBX                            ; 0052781d
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052781e
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527823
    PUSH 0x3                            ; 00527826
    PUSH EBX                            ; 00527828
    MOV dword ptr [EDI + 0x4c],EAX      ; 00527829
    CALL sound_mp3.cpp_FUN_00525cd0     ; 0052782c
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EDI + 0x2c],0x0      ; 00527831
    ADD ESP,0x8                         ; 00527838
    MOV dword ptr [EDI + 0x50],EAX      ; 0052783b
    JMP 0x00527731                      ; 0052783e
        ;   XREF to: 00527731 (UNCONDITIONAL_JUMP)  ; LAB_00527731
    PUSH 0x8                            ; 00527843
        ;   Label: LAB_00527843
    PUSH EBX                            ; 00527845
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527846
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052784b
    MOV EDX,dword ptr [ESP + 0x68]      ; 0052784e
    MOV ECX,dword ptr [ESP + 0x10]      ; 00527852
    MOV dword ptr [EDX],EAX             ; 00527856
    CMP ECX,0x1                         ; 00527858
    JNZ 0x005279c7                      ; 0052785b
        ;   XREF to: 005279c7 (CONDITIONAL_JUMP)  ; LAB_005279c7
    PUSH ECX                            ; 00527861
    PUSH EBX                            ; 00527862
        ;   Label: LAB_00527862
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527863
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527868
    MOV EDX,dword ptr [ESP + 0x68]      ; 0052786b
    MOV dword ptr [EDX + 0x4],EAX       ; 0052786f
    XOR ESI,ESI                         ; 00527872
    MOV EDI,dword ptr [ESP + 0x10]      ; 00527874
    MOV dword ptr [ESP + 0x2c],ESI      ; 00527878
    TEST EDI,EDI                        ; 0052787c
    JLE 0x005277c4                      ; 0052787e
        ;   XREF to: 005277c4 (CONDITIONAL_JUMP)  ; LAB_005277c4
    MOV EAX,dword ptr [ESP + 0x68]      ; 00527884
    MOV dword ptr [ESP + 0x8],ESI       ; 00527888
    MOV dword ptr [ESP + 0x48],ESI      ; 0052788c
    MOV dword ptr [ESP + 0x3c],ESI      ; 00527890
    MOV dword ptr [ESP + 0x34],EAX      ; 00527894
    MOV dword ptr [ESP + 0x14],EAX      ; 00527898
    MOV dword ptr [ESP + 0x20],EAX      ; 0052789c
    MOV dword ptr [ESP + 0x24],EAX      ; 005278a0
    PUSH 0xc                            ; 005278a4
        ;   Label: LAB_005278a4
    PUSH EBX                            ; 005278a6
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005278a7
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005278ac
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 005278af
    PUSH 0x9                            ; 005278b7
    MOV EDX,dword ptr [ESP + 0x38]      ; 005278b9
    PUSH EBX                            ; 005278bd
    MOV ESI,dword ptr [ESP + 0x70]      ; 005278be
    MOV dword ptr [EDX + 0x18],EAX      ; 005278c2
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005278c5
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005278ca
    PUSH 0x8                            ; 005278cd
    MOV EDX,dword ptr [ESP + 0x38]      ; 005278cf
    PUSH EBX                            ; 005278d3
    MOV dword ptr [EDX + 0x1c],EAX      ; 005278d4
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005278d7
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005278dc
    PUSH 0x9                            ; 005278df
    MOV EDX,dword ptr [ESP + 0x38]      ; 005278e1
    PUSH EBX                            ; 005278e5
    MOV dword ptr [EDX + 0x20],EAX      ; 005278e6
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005278e9
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005278ee
    MOV EDX,dword ptr [ESP + 0x34]      ; 005278f1
    PUSH EBX                            ; 005278f5
    MOV dword ptr [EDX + 0x24],EAX      ; 005278f6
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 005278f9
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005278fe
    MOV EDX,dword ptr [ESP + 0x34]      ; 00527901
    ADD EBP,ESI                         ; 00527905
    MOV dword ptr [EDX + 0x28],EAX      ; 00527907
    TEST EAX,EAX                        ; 0052790a
    JNZ 0x005279ce                      ; 0052790c
        ;   XREF to: 005279ce (CONDITIONAL_JUMP)  ; LAB_005279ce
    XOR ESI,ESI                         ; 00527912
    PUSH 0x5                            ; 00527914
        ;   Label: LAB_00527914
    PUSH EBX                            ; 00527916
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527917
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052791c
    MOV EDI,dword ptr [ESP + 0x48]      ; 0052791f
    ADD EDI,EBP                         ; 00527923
    LEA EDX,[EDI + ESI*0x1]             ; 00527925
    ADD ESI,0x4                         ; 00527928
    MOV dword ptr [EDX + 0x34],EAX      ; 0052792b
    CMP ESI,0xc                         ; 0052792e
    JNZ 0x00527914                      ; 00527931
        ;   XREF to: 00527914 (CONDITIONAL_JUMP)  ; LAB_00527914
    PUSH 0x4                            ; 00527933
    PUSH EBX                            ; 00527935
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527936
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052793b
    PUSH 0x3                            ; 0052793e
    PUSH EBX                            ; 00527940
    MOV dword ptr [EDI + 0x4c],EAX      ; 00527941
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527944
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EDI + 0x2c],0x0      ; 00527949
    ADD ESP,0x8                         ; 00527950
    MOV dword ptr [EDI + 0x50],EAX      ; 00527953
    PUSH EBX                            ; 00527956
        ;   Label: LAB_00527956
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 00527957
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052795c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0052795f
    PUSH EBX                            ; 00527963
    MOV dword ptr [EDX + 0x58],EAX      ; 00527964
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 00527967
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 0052796c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0052796f
    MOV EBP,dword ptr [ESP + 0x34]      ; 00527973
    MOV ECX,dword ptr [ESP + 0x24]      ; 00527977
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0052797b
    MOV EDI,dword ptr [ESP + 0x10]      ; 0052797f
    ADD EBP,0xa0                        ; 00527983
    ADD ECX,0xa0                        ; 00527989
    INC ESI                             ; 0052798f
    MOV dword ptr [EDX + 0x5c],EAX      ; 00527990
    MOV EAX,dword ptr [ESP + 0x14]      ; 00527993
    MOV EDX,dword ptr [ESP + 0x20]      ; 00527997
    MOV dword ptr [ESP + 0x34],EBP      ; 0052799b
    MOV dword ptr [ESP + 0x24],ECX      ; 0052799f
    MOV dword ptr [ESP + 0x2c],ESI      ; 005279a3
    ADD EAX,0xa0                        ; 005279a7
    ADD EDX,0xa0                        ; 005279ac
    MOV dword ptr [ESP + 0x14],EAX      ; 005279b2
    MOV dword ptr [ESP + 0x20],EDX      ; 005279b6
    CMP ESI,EDI                         ; 005279ba
    JGE 0x005277c4                      ; 005279bc
        ;   XREF to: 005277c4 (CONDITIONAL_JUMP)  ; LAB_005277c4
    JMP 0x005278a4                      ; 005279c2
        ;   XREF to: 005278a4 (UNCONDITIONAL_JUMP)  ; LAB_005278a4
    PUSH 0x2                            ; 005279c7
        ;   Label: LAB_005279c7
    JMP 0x00527862                      ; 005279c9
        ;   XREF to: 00527862 (UNCONDITIONAL_JUMP)  ; LAB_00527862
    PUSH 0x2                            ; 005279ce
        ;   Label: LAB_005279ce
    PUSH EBX                            ; 005279d0
    CALL sound_mp3.cpp_FUN_00525cd0     ; 005279d1
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005279d6
    MOV EDX,dword ptr [ESP + 0x34]      ; 005279d9
    PUSH EBX                            ; 005279dd
    MOV dword ptr [EDX + 0x2c],EAX      ; 005279de
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0 ; 005279e1
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream * this_ptr)
    ADD ESP,0x4                         ; 005279e6
    MOV EDI,dword ptr [ESP + 0x8]       ; 005279e9
    MOV EDX,dword ptr [ESP + 0x34]      ; 005279ed
    ADD EDI,EBP                         ; 005279f1
    MOV dword ptr [EDX + 0x30],EAX      ; 005279f3
    MOV ESI,EDI                         ; 005279f6
    ADD EDI,0x8                         ; 005279f8
    PUSH 0x5                            ; 005279fb
        ;   Label: LAB_005279fb
    PUSH EBX                            ; 005279fd
    ADD ESI,0x4                         ; 005279fe
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527a01
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527a06
    MOV dword ptr [ESI + 0x30],EAX      ; 00527a09
    CMP ESI,EDI                         ; 00527a0c
    JNZ 0x005279fb                      ; 00527a0e
        ;   XREF to: 005279fb (CONDITIONAL_JUMP)  ; LAB_005279fb
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 00527a10
    MOV EDX,dword ptr [ESP + 0x68]      ; 00527a18
    XOR ESI,EDI                         ; 00527a1c
    ADD EBP,EDX                         ; 00527a1e
    PUSH 0x3                            ; 00527a20
        ;   Label: LAB_00527a20
    PUSH EBX                            ; 00527a22
    CALL sound_mp3.cpp_FUN_00525cd0     ; 00527a23
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00527a28
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00527a2b
    ADD EDX,EBP                         ; 00527a2f
    LEA EDI,[EDX + ESI*0x1]             ; 00527a31
    ADD ESI,0x4                         ; 00527a34
    MOV dword ptr [EDI + 0x40],EAX      ; 00527a37
    CMP ESI,0xc                         ; 00527a3a
    JNZ 0x00527a20                      ; 00527a3d
        ;   XREF to: 00527a20 (CONDITIONAL_JUMP)  ; LAB_00527a20
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00527a3f
    TEST ECX,ECX                        ; 00527a42
    JNZ 0x00527a89                      ; 00527a44
        ;   XREF to: 00527a89 (CONDITIONAL_JUMP)  ; LAB_00527a89
    PUSH 0x1d404c8                      ; 00527a46 | DAT_01d404c8
    MOV EBP,0x5eb308                    ; 00527a4b | = "..\\sound\\mp3.cpp"
    MOV EAX,0x704                       ; 00527a50
    PUSH 0x5eb319                       ; 00527a55 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01d1d400],EBP      ; 00527a5a | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00527a60 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00527a65
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00527a6a
    MOV EAX,dword ptr [ESP + 0x20]      ; 00527a6d
        ;   Label: LAB_00527a6d
    MOV EDX,0x14                        ; 00527a71
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00527a76
    MOV EAX,EDX                         ; 00527a79
    MOV EDX,dword ptr [ESP + 0x20]      ; 00527a7b
    SUB EAX,ECX                         ; 00527a7f
    MOV dword ptr [EDX + 0x50],EAX      ; 00527a81
    JMP 0x00527956                      ; 00527a84
        ;   XREF to: 00527956 (UNCONDITIONAL_JUMP)  ; LAB_00527956
    CMP ECX,0x2                         ; 00527a89
        ;   Label: LAB_00527a89
    JNZ 0x00527a9d                      ; 00527a8c
        ;   XREF to: 00527a9d (CONDITIONAL_JUMP)  ; LAB_00527a9d
    CMP dword ptr [EDX + 0x30],0x0      ; 00527a8e
    JNZ 0x00527a9d                      ; 00527a92
        ;   XREF to: 00527a9d (CONDITIONAL_JUMP)  ; LAB_00527a9d
    MOV dword ptr [EDX + 0x4c],0x8      ; 00527a94
    JMP 0x00527a6d                      ; 00527a9b
        ;   XREF to: 00527a6d (UNCONDITIONAL_JUMP)  ; LAB_00527a6d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00527a9d
        ;   Label: LAB_00527a9d
    MOV dword ptr [EAX + 0x4c],0x7      ; 00527aa1
    JMP 0x00527a6d                      ; 00527aa8
        ;   XREF to: 00527a6d (UNCONDITIONAL_JUMP)  ; LAB_00527a6d

