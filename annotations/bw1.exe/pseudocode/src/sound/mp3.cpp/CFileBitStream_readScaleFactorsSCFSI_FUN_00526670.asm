; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; SMpegSubbandSCFSI * Stack[0x8]:4   scfsi_array
; SMpegSubbandAllocation * Stack[0xc]:4   allocation_array
; SMpegSubbandScalefactors * Stack[0x10]:4   scalefactor_array
; SMpegFrame *     Stack[0x14]:4   frame
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b7e6
;
; Referenced Globals:
;   void* switchdataD_00526654 = 00526787
;
; Called Functions:
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526670
        ;   Label: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_00526670
    PUSH ESI                            ; 00526671
    PUSH EDI                            ; 00526672
    PUSH EBP                            ; 00526673
    SUB ESP,0x24                        ; 00526674
    MOV ESI,dword ptr [ESP + 0x38]      ; 00526677
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052667b
    MOV EDI,dword ptr [EAX + 0x10]      ; 0052667f
    MOV EAX,dword ptr [EAX + 0x18]      ; 00526682
    MOV dword ptr [ESP],EAX             ; 00526685
    TEST EAX,EAX                        ; 00526688
    JLE 0x005266e3                      ; 0052668a
        ;   XREF to: 005266e3 (CONDITIONAL_JUMP)  ; LAB_005266e3
    XOR EAX,EAX                         ; 0052668c
    MOV dword ptr [ESP + 0xc],EAX       ; 0052668e
    MOV EAX,dword ptr [ESP]             ; 00526692
    SHL EAX,0x2                         ; 00526695
    MOV dword ptr [ESP + 0x4],EAX       ; 00526698
    XOR EBX,EBX                         ; 0052669c
        ;   Label: LAB_0052669c
    TEST EDI,EDI                        ; 0052669e
    JLE 0x005266d0                      ; 005266a0
        ;   XREF to: 005266d0 (CONDITIONAL_JUMP)  ; LAB_005266d0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005266a2
    MOV EDX,dword ptr [ESP + 0x40]      ; 005266a6
    MOV dword ptr [ESP + 0x14],EAX      ; 005266aa
    LEA EBP,[EAX + EDX*0x1]             ; 005266ae
    MOV EAX,EBX                         ; 005266b1
        ;   Label: LAB_005266b1
    SHL EAX,0x7                         ; 005266b3
    MOV ECX,dword ptr [EBP]             ; 005266b6
    MOV dword ptr [ESP + 0x1c],EAX      ; 005266b9
    TEST ECX,ECX                        ; 005266bd
    JNZ 0x00526834                      ; 005266bf
        ;   XREF to: 00526834 (CONDITIONAL_JUMP)  ; LAB_00526834
    INC EBX                             ; 005266c5
        ;   Label: LAB_005266c5
    ADD EBP,0x80                        ; 005266c6
    CMP EBX,EDI                         ; 005266cc
    JL 0x005266b1                       ; 005266ce
        ;   XREF to: 005266b1 (CONDITIONAL_JUMP)  ; LAB_005266b1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005266d0
        ;   Label: LAB_005266d0
    ADD ECX,0x4                         ; 005266d4
    MOV EBX,dword ptr [ESP + 0x4]       ; 005266d7
    MOV dword ptr [ESP + 0xc],ECX       ; 005266db
    CMP ECX,EBX                         ; 005266df
    JL 0x0052669c                       ; 005266e1
        ;   XREF to: 0052669c (CONDITIONAL_JUMP)  ; LAB_0052669c
    MOV EBP,dword ptr [ESP]             ; 005266e3
        ;   Label: LAB_005266e3
    CMP EBP,0x20                        ; 005266e6
    JGE 0x0052671a                      ; 005266e9
        ;   XREF to: 0052671a (CONDITIONAL_JUMP)  ; LAB_0052671a
    LEA EAX,[EBP*0x4 + 0x0]             ; 005266eb
    XOR EBX,EBX                         ; 005266f2
        ;   Label: LAB_005266f2
    TEST EDI,EDI                        ; 005266f4
    JLE 0x00526710                      ; 005266f6
        ;   XREF to: 00526710 (CONDITIONAL_JUMP)  ; LAB_00526710
    MOV EBP,dword ptr [ESP + 0x3c]      ; 005266f8
    ADD EBP,EAX                         ; 005266fc
    INC EBX                             ; 005266fe
        ;   Label: LAB_005266fe
    MOV dword ptr [EBP],0x0             ; 005266ff
    ADD EBP,0x80                        ; 00526706
    CMP EBX,EDI                         ; 0052670c
    JL 0x005266fe                       ; 0052670e
        ;   XREF to: 005266fe (CONDITIONAL_JUMP)  ; LAB_005266fe
    ADD EAX,0x4                         ; 00526710
        ;   Label: LAB_00526710
    CMP EAX,0x80                        ; 00526713
    JL 0x005266f2                       ; 00526718
        ;   XREF to: 005266f2 (CONDITIONAL_JUMP)  ; LAB_005266f2
    CMP dword ptr [ESP],0x0             ; 0052671a
        ;   Label: LAB_0052671a
    JLE 0x005267e5                      ; 0052671e
        ;   XREF to: 005267e5 (CONDITIONAL_JUMP)  ; LAB_005267e5
    MOV EAX,dword ptr [ESP]             ; 00526724
    XOR EBX,EBX                         ; 00526727
    SHL EAX,0x2                         ; 00526729
    MOV dword ptr [ESP + 0x10],EBX      ; 0052672c
    MOV dword ptr [ESP + 0x8],EAX       ; 00526730
    XOR EBP,EBP                         ; 00526734
        ;   Label: LAB_00526734
    TEST EDI,EDI                        ; 00526736
    JLE 0x005267ce                      ; 00526738
        ;   XREF to: 005267ce (CONDITIONAL_JUMP)  ; LAB_005267ce
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052673e
    MOV EDX,dword ptr [ESP + 0x40]      ; 00526742
    MOV EBX,dword ptr [ESP + 0x10]      ; 00526746
    MOV ECX,dword ptr [ESP + 0x44]      ; 0052674a
    MOV dword ptr [ESP + 0x18],EAX      ; 0052674e
    ADD EAX,EDX                         ; 00526752
    ADD EBX,ECX                         ; 00526754
    MOV dword ptr [ESP + 0x20],EAX      ; 00526756
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052675a
        ;   Label: LAB_0052675a
    MOV EAX,EBP                         ; 0052675e
    MOV ECX,dword ptr [EDX]             ; 00526760
    SHL EAX,0x7                         ; 00526762
    TEST ECX,ECX                        ; 00526765
    JZ 0x005268ba                       ; 00526767
        ;   XREF to: 005268ba (CONDITIONAL_JUMP)  ; LAB_005268ba
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0052676d
    MOV ECX,dword ptr [ESP + 0x18]      ; 00526771
    ADD EAX,EDX                         ; 00526775
    ADD EAX,ECX                         ; 00526777
    MOV EAX,dword ptr [EAX]             ; 00526779
    CMP EAX,0x3                         ; 0052677b
    JA 0x005267b6                       ; 0052677e
        ;   XREF to: 005267b6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x526654]  ; 00526780 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x6                            ; 00526787
        ;   Label: caseD_0
    PUSH ESI                            ; 00526789
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 0052678a
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052678f
    PUSH 0x6                            ; 00526792
    PUSH ESI                            ; 00526794
    MOV dword ptr [EBX],EAX             ; 00526795
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00526797
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052679c
    PUSH 0x6                            ; 0052679f
    PUSH ESI                            ; 005267a1
    MOV dword ptr [EBX + 0x80],EAX      ; 005267a2
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 005267a8
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
        ;   Label: LAB_005267a8
    ADD ESP,0x8                         ; 005267ad
    MOV dword ptr [EBX + 0x100],EAX     ; 005267b0
    MOV EAX,dword ptr [ESP + 0x20]      ; 005267b6
        ;   Label: default
    ADD EBX,0x180                       ; 005267ba
    ADD EAX,0x80                        ; 005267c0
    INC EBP                             ; 005267c5
    MOV dword ptr [ESP + 0x20],EAX      ; 005267c6
    CMP EBP,EDI                         ; 005267ca
    JL 0x0052675a                       ; 005267cc
        ;   XREF to: 0052675a (CONDITIONAL_JUMP)  ; LAB_0052675a
    MOV EBP,dword ptr [ESP + 0x10]      ; 005267ce
        ;   Label: LAB_005267ce
    ADD EBP,0x4                         ; 005267d2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005267d5
    MOV dword ptr [ESP + 0x10],EBP      ; 005267d9
    CMP EBP,EDX                         ; 005267dd
    JL 0x00526734                       ; 005267df
        ;   XREF to: 00526734 (CONDITIONAL_JUMP)  ; LAB_00526734
    MOV ECX,dword ptr [ESP]             ; 005267e5
        ;   Label: LAB_005267e5
    CMP ECX,0x20                        ; 005267e8
    JGE 0x0052682c                      ; 005267eb
        ;   XREF to: 0052682c (CONDITIONAL_JUMP)  ; LAB_0052682c
    LEA EDX,[ECX*0x4 + 0x0]             ; 005267ed
    XOR ESI,ESI                         ; 005267f4
        ;   Label: LAB_005267f4
    TEST EDI,EDI                        ; 005267f6
    JLE 0x00526821                      ; 005267f8
        ;   XREF to: 00526821 (CONDITIONAL_JUMP)  ; LAB_00526821
    MOV EBX,dword ptr [ESP + 0x44]      ; 005267fa
    ADD EBX,EDX                         ; 005267fe
    ADD EBX,0x180                       ; 00526800
        ;   Label: LAB_00526800
    MOV dword ptr [EBX + -0x80],0x3f    ; 00526806
    MOV EAX,dword ptr [EBX + -0x80]     ; 0052680d
    MOV dword ptr [EBX + 0xffffff00],EAX ; 00526810
    INC ESI                             ; 00526816
    MOV dword ptr [EBX + 0xfffffe80],EAX ; 00526817
    CMP ESI,EDI                         ; 0052681d
    JL 0x00526800                       ; 0052681f
        ;   XREF to: 00526800 (CONDITIONAL_JUMP)  ; LAB_00526800
    ADD EDX,0x4                         ; 00526821
        ;   Label: LAB_00526821
    CMP EDX,0x80                        ; 00526824
    JL 0x005267f4                       ; 0052682a
        ;   XREF to: 005267f4 (CONDITIONAL_JUMP)  ; LAB_005267f4
    ADD ESP,0x24                        ; 0052682c
        ;   Label: LAB_0052682c
    POP EBP                             ; 0052682f
    POP EDI                             ; 00526830
    POP ESI                             ; 00526831
    POP EBX                             ; 00526832
    RET                                 ; 00526833
    PUSH 0x2                            ; 00526834
        ;   Label: LAB_00526834
    PUSH ESI                            ; 00526836
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00526837
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052683c
    XOR EDX,EDX                         ; 0052683f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00526841
    MOV DL,AL                           ; 00526845
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00526847
    ADD EAX,ECX                         ; 0052684b
    ADD EAX,dword ptr [ESP + 0x14]      ; 0052684d
    MOV dword ptr [EAX],EDX             ; 00526851
    JMP 0x005266c5                      ; 00526853
        ;   XREF to: 005266c5 (UNCONDITIONAL_JUMP)  ; LAB_005266c5
    PUSH 0x6                            ; 00526858
        ;   Label: caseD_1
    PUSH ESI                            ; 0052685a
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 0052685b
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00526860
    PUSH 0x6                            ; 00526863
    MOV dword ptr [EBX + 0x80],EAX      ; 00526865
    PUSH ESI                            ; 0052686b
    MOV dword ptr [EBX],EAX             ; 0052686c
    JMP 0x005267a8                      ; 0052686e
        ;   XREF to: 005267a8 (UNCONDITIONAL_JUMP)  ; LAB_005267a8
    PUSH 0x6                            ; 00526873
        ;   Label: caseD_3
    PUSH ESI                            ; 00526875
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00526876
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0052687b
    PUSH 0x6                            ; 0052687e
    PUSH ESI                            ; 00526880
    MOV dword ptr [EBX],EAX             ; 00526881
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 00526883
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 00526888
    ADD ESP,0x8                         ; 0052688e
    MOV dword ptr [EBX + 0x80],EAX      ; 00526891
    JMP 0x005267b6                      ; 00526897
        ;   XREF to: 005267b6 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x6                            ; 0052689c
        ;   Label: caseD_2
    PUSH ESI                            ; 0052689e
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0 ; 0052689f
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CFileBitStream_readBits_FUN_00525cd0(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 005268a4
    MOV dword ptr [EBX + 0x80],EAX      ; 005268aa
    ADD ESP,0x8                         ; 005268b0
    MOV dword ptr [EBX],EAX             ; 005268b3
    JMP 0x005267b6                      ; 005268b5
        ;   XREF to: 005267b6 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x100],0x3f    ; 005268ba
        ;   Label: LAB_005268ba
    MOV EAX,dword ptr [EBX + 0x100]     ; 005268c4
    MOV dword ptr [EBX + 0x80],EAX      ; 005268ca
    MOV dword ptr [EBX],EAX             ; 005268d0
    JMP 0x005267b6                      ; 005268d2
        ;   XREF to: 005267b6 (UNCONDITIONAL_JUMP)  ; default

