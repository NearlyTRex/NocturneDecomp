; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_mp3_cpp_FUN_004fd5e0(CFileBitStream *this_ptr,int num_bits)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   num_bits
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004fde40 at 004fde84
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004fdd10 at 004fdd68
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004fdc50 at 004fdc6a
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0 at 004fe4e2
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004fe1f0 at 004fe2c4
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80 at 004fe147
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004fdef0 at 004fdf57
;   sound_mp3.cpp_CFileBitStream_syncToPattern_FUN_004fd780 at 004fd7a4
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503345
;   sound_mp3.cpp_FUN_004fee40 at 004fee64
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005c9f78
;   TerminatedCString s_Cannot_read_or_write_mor_005c9f89
;   undefined4 DAT_00601580
;   undefined4 DAT_006015a0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d94b98
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fread_FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd5e0
        ;   Label: sound_mp3.cpp_FUN_004fd5e0
    PUSH ESI                            ; 004fd5e1
    PUSH EDI                            ; 004fd5e2
    PUSH EBP                            ; 004fd5e3
    SUB ESP,0x4                         ; 004fd5e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004fd5e7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004fd5eb
    XOR EDX,EDX                         ; 004fd5ef
    MOV EBP,EBX                         ; 004fd5f1
    MOV dword ptr [ESP],EDX             ; 004fd5f3
    CMP EBX,0x20                        ; 004fd5f6
    JG 0x004fd659                       ; 004fd5f9
        ;   XREF to: 004fd659 (CONDITIONAL_JUMP)  ; LAB_004fd659
    ADD dword ptr [EDI + 0xc],EBX       ; 004fd5fb
        ;   Label: LAB_004fd5fb
    TEST EBP,EBP                        ; 004fd5fe
    JLE 0x004fd64e                      ; 004fd600
        ;   XREF to: 004fd64e (CONDITIONAL_JUMP)  ; LAB_004fd64e
    CMP dword ptr [EDI + 0x14],0x0      ; 004fd602
        ;   Label: LAB_004fd602
    JZ 0x004fd688                       ; 004fd606
        ;   XREF to: 004fd688 (CONDITIONAL_JUMP)  ; LAB_004fd688
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fd60c
        ;   Label: LAB_004fd60c
    CMP EBP,ECX                         ; 004fd60f
    JGE 0x004fd74c                      ; 004fd611
        ;   XREF to: 004fd74c (CONDITIONAL_JUMP)  ; LAB_004fd74c
    MOV EAX,EBP                         ; 004fd617
    MOV EDX,dword ptr [EDI + 0x4]       ; 004fd619
        ;   Label: LAB_004fd619
    ADD EDX,dword ptr [EDI + 0x10]      ; 004fd61c
    XOR EBX,EBX                         ; 004fd61f
    MOV BL,byte ptr [EDX]               ; 004fd621
    MOV EDX,dword ptr [EDI + 0x14]      ; 004fd623
    SUB EBP,EAX                         ; 004fd626
    MOV ESI,dword ptr [EDX*0x4 + 0x601580] ; 004fd628 | DAT_00601580 | DAT_006015a0
    SUB EDX,EAX                         ; 004fd62f
    AND EBX,ESI                         ; 004fd631
    MOV CL,DL                           ; 004fd633
    MOV EAX,EBP                         ; 004fd635
    SAR EBX,CL                          ; 004fd637
    MOV CL,AL                           ; 004fd639
    MOV EBP,dword ptr [ESP]             ; 004fd63b
    SHL EBX,CL                          ; 004fd63e
    OR EBP,EBX                          ; 004fd640
    MOV dword ptr [EDI + 0x14],EDX      ; 004fd642
    MOV dword ptr [ESP],EBP             ; 004fd645
    MOV EBP,EAX                         ; 004fd648
    TEST EAX,EAX                        ; 004fd64a
    JG 0x004fd602                       ; 004fd64c
        ;   XREF to: 004fd602 (CONDITIONAL_JUMP)  ; LAB_004fd602
    MOV EAX,dword ptr [ESP]             ; 004fd64e
        ;   Label: LAB_004fd64e
    ADD ESP,0x4                         ; 004fd651
    POP EBP                             ; 004fd654
    POP EDI                             ; 004fd655
    POP ESI                             ; 004fd656
    POP EBX                             ; 004fd657
    RET                                 ; 004fd658
    PUSH 0x1d94b98                      ; 004fd659 | DAT_01d94b98
        ;   Label: LAB_004fd659
    PUSH 0x20                           ; 004fd65e
    MOV ECX,0x5c9f78                    ; 004fd660 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x2ab                       ; 004fd665
    PUSH 0x5c9f89                       ; 004fd66a | = "Cannot read or write more than %d bit..."
    MOV dword ptr [0x01d71de0],ECX      ; 004fd66f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004fd675 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fd67b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004fd680
    JMP 0x004fd5fb                      ; 004fd683
        ;   XREF to: 004fd5fb (UNCONDITIONAL_JUMP)  ; LAB_004fd5fb
    MOV EDX,dword ptr [EDI + 0x10]      ; 004fd688
        ;   Label: LAB_004fd688
    MOV dword ptr [EDI + 0x14],0x8      ; 004fd68b
    DEC EDX                             ; 004fd692
    MOV dword ptr [EDI + 0x10],EDX      ; 004fd693
    CMP EDX,0x4                         ; 004fd696
    JGE 0x004fd6ad                      ; 004fd699
        ;   XREF to: 004fd6ad (CONDITIONAL_JUMP)  ; LAB_004fd6ad
    CMP dword ptr [EDI + 0x18],0x0      ; 004fd69b
        ;   Label: LAB_004fd69b
    JZ 0x004fd6b7                       ; 004fd69f
        ;   XREF to: 004fd6b7 (CONDITIONAL_JUMP)  ; LAB_004fd6b7
    MOV dword ptr [EDI + 0x1c],0x1      ; 004fd6a1
    JMP 0x004fd60c                      ; 004fd6a8
        ;   XREF to: 004fd60c (UNCONDITIONAL_JUMP)  ; LAB_004fd60c
    CMP EDX,dword ptr [EDI + 0x18]      ; 004fd6ad
        ;   Label: LAB_004fd6ad
    JL 0x004fd69b                       ; 004fd6b0
        ;   XREF to: 004fd69b (CONDITIONAL_JUMP)  ; LAB_004fd69b
    JMP 0x004fd60c                      ; 004fd6b2
        ;   XREF to: 004fd60c (UNCONDITIONAL_JUMP)  ; LAB_004fd60c
    MOV EBX,dword ptr [EDI + 0x10]      ; 004fd6b7
        ;   Label: LAB_004fd6b7
    TEST EBX,EBX                        ; 004fd6ba
    JL 0x004fd6da                       ; 004fd6bc
        ;   XREF to: 004fd6da (CONDITIONAL_JUMP)  ; LAB_004fd6da
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fd6be
        ;   Label: LAB_004fd6be
    MOV ECX,dword ptr [EDI + 0x10]      ; 004fd6c1
    DEC EAX                             ; 004fd6c4
    MOV ESI,dword ptr [EDI + 0x4]       ; 004fd6c5
    SUB EAX,ECX                         ; 004fd6c8
    LEA EDX,[ESI + EBX*0x1]             ; 004fd6ca
    ADD EAX,EBX                         ; 004fd6cd
    ADD ESI,EAX                         ; 004fd6cf
    MOV AL,byte ptr [EDX]               ; 004fd6d1
    DEC EBX                             ; 004fd6d3
    MOV byte ptr [ESI],AL               ; 004fd6d4
    TEST EBX,EBX                        ; 004fd6d6
    JGE 0x004fd6be                      ; 004fd6d8
        ;   XREF to: 004fd6be (CONDITIONAL_JUMP)  ; LAB_004fd6be
    MOV ESI,dword ptr [EDI + 0x8]       ; 004fd6da
        ;   Label: LAB_004fd6da
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fd6dd
    SUB ESI,0x2                         ; 004fd6e0
    SUB ESI,EAX                         ; 004fd6e3
    MOV EBX,EDI                         ; 004fd6e5
    TEST ESI,ESI                        ; 004fd6e7
    JL 0x004fd6f1                       ; 004fd6e9
        ;   XREF to: 004fd6f1 (CONDITIONAL_JUMP)  ; LAB_004fd6f1
    CMP dword ptr [EBX + 0x18],0x0      ; 004fd6eb
        ;   Label: LAB_004fd6eb
    JZ 0x004fd6fd                       ; 004fd6ef
        ;   XREF to: 004fd6fd (CONDITIONAL_JUMP)  ; LAB_004fd6fd
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fd6f1
        ;   Label: LAB_004fd6f1
    DEC EAX                             ; 004fd6f4
    MOV dword ptr [EDI + 0x10],EAX      ; 004fd6f5
    JMP 0x004fd60c                      ; 004fd6f8
        ;   XREF to: 004fd60c (UNCONDITIONAL_JUMP)  ; LAB_004fd60c
    MOV ECX,dword ptr [EBX + 0x28]      ; 004fd6fd
        ;   Label: LAB_004fd6fd
    XOR EAX,EAX                         ; 004fd700
    TEST ECX,ECX                        ; 004fd702
    JLE 0x004fd71e                      ; 004fd704
        ;   XREF to: 004fd71e (CONDITIONAL_JUMP)  ; LAB_004fd71e
    MOV EAX,dword ptr [EBX]             ; 004fd706
    PUSH EAX                            ; 004fd708
    PUSH 0x1                            ; 004fd709
    MOV EDX,dword ptr [EBX + 0x4]       ; 004fd70b
    MOV EAX,ESI                         ; 004fd70e
    PUSH 0x1                            ; 004fd710
    ADD EAX,EDX                         ; 004fd712
    PUSH EAX                            ; 004fd714
    DEC ESI                             ; 004fd715
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004fd716
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004fd71b
    CMP EAX,0x1                         ; 004fd71e
        ;   Label: LAB_004fd71e
    JNZ 0x004fd736                      ; 004fd721
        ;   XREF to: 004fd736 (CONDITIONAL_JUMP)  ; LAB_004fd736
    SUB dword ptr [EBX + 0x28],EAX      ; 004fd723
    TEST ESI,ESI                        ; 004fd726
    JGE 0x004fd6eb                      ; 004fd728
        ;   XREF to: 004fd6eb (CONDITIONAL_JUMP)  ; LAB_004fd6eb
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fd72a
    DEC EAX                             ; 004fd72d
    MOV dword ptr [EDI + 0x10],EAX      ; 004fd72e
    JMP 0x004fd60c                      ; 004fd731
        ;   XREF to: 004fd60c (UNCONDITIONAL_JUMP)  ; LAB_004fd60c
    LEA EAX,[ESI + 0x1]                 ; 004fd736
        ;   Label: LAB_004fd736
    MOV dword ptr [EBX + 0x18],EAX      ; 004fd739
    TEST ESI,ESI                        ; 004fd73c
    JGE 0x004fd6eb                      ; 004fd73e
        ;   XREF to: 004fd6eb (CONDITIONAL_JUMP)  ; LAB_004fd6eb
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fd740
    DEC EAX                             ; 004fd743
    MOV dword ptr [EDI + 0x10],EAX      ; 004fd744
    JMP 0x004fd60c                      ; 004fd747
        ;   XREF to: 004fd60c (UNCONDITIONAL_JUMP)  ; LAB_004fd60c
    MOV EAX,ECX                         ; 004fd74c
        ;   Label: LAB_004fd74c
    JMP 0x004fd619                      ; 004fd74e
        ;   XREF to: 004fd619 (UNCONDITIONAL_JUMP)  ; LAB_004fd619

