; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_005054a0(CFileBitStream *this_ptr,SMpegSubbandSCFSI *scfsi_array,SMpegSubbandAllocation *allocation_array,SMpegSubbandScalefactors *scalefactor_array,SMpegFrame *frame)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a616
;
; Referenced Globals:
;   void* switchdataD_00505484 = 005055b7
;
; Called Functions:
;   sound_mp3.cpp_FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005054a0
        ;   Label: sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_005054a0
    PUSH ESI                            ; 005054a1
    PUSH EDI                            ; 005054a2
    PUSH EBP                            ; 005054a3
    SUB ESP,0x24                        ; 005054a4
    MOV ESI,dword ptr [ESP + 0x38]      ; 005054a7
    MOV EAX,dword ptr [ESP + 0x48]      ; 005054ab
    MOV EDI,dword ptr [EAX + 0x10]      ; 005054af
    MOV EAX,dword ptr [EAX + 0x18]      ; 005054b2
    MOV dword ptr [ESP],EAX             ; 005054b5
    TEST EAX,EAX                        ; 005054b8
    JLE 0x00505513                      ; 005054ba
        ;   XREF to: 00505513 (CONDITIONAL_JUMP)  ; LAB_00505513
    XOR EAX,EAX                         ; 005054bc
    MOV dword ptr [ESP + 0xc],EAX       ; 005054be
    MOV EAX,dword ptr [ESP]             ; 005054c2
    SHL EAX,0x2                         ; 005054c5
    MOV dword ptr [ESP + 0x4],EAX       ; 005054c8
    XOR EBX,EBX                         ; 005054cc
        ;   Label: LAB_005054cc
    TEST EDI,EDI                        ; 005054ce
    JLE 0x00505500                      ; 005054d0
        ;   XREF to: 00505500 (CONDITIONAL_JUMP)  ; LAB_00505500
    MOV EAX,dword ptr [ESP + 0xc]       ; 005054d2
    MOV EDX,dword ptr [ESP + 0x40]      ; 005054d6
    MOV dword ptr [ESP + 0x14],EAX      ; 005054da
    LEA EBP,[EAX + EDX*0x1]             ; 005054de
    MOV EAX,EBX                         ; 005054e1
        ;   Label: LAB_005054e1
    SHL EAX,0x7                         ; 005054e3
    MOV ECX,dword ptr [EBP]             ; 005054e6
    MOV dword ptr [ESP + 0x1c],EAX      ; 005054e9
    TEST ECX,ECX                        ; 005054ed
    JNZ 0x00505664                      ; 005054ef
        ;   XREF to: 00505664 (CONDITIONAL_JUMP)  ; LAB_00505664
    INC EBX                             ; 005054f5
        ;   Label: LAB_005054f5
    ADD EBP,0x80                        ; 005054f6
    CMP EBX,EDI                         ; 005054fc
    JL 0x005054e1                       ; 005054fe
        ;   XREF to: 005054e1 (CONDITIONAL_JUMP)  ; LAB_005054e1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00505500
        ;   Label: LAB_00505500
    ADD ECX,0x4                         ; 00505504
    MOV EBX,dword ptr [ESP + 0x4]       ; 00505507
    MOV dword ptr [ESP + 0xc],ECX       ; 0050550b
    CMP ECX,EBX                         ; 0050550f
    JL 0x005054cc                       ; 00505511
        ;   XREF to: 005054cc (CONDITIONAL_JUMP)  ; LAB_005054cc
    MOV EBP,dword ptr [ESP]             ; 00505513
        ;   Label: LAB_00505513
    CMP EBP,0x20                        ; 00505516
    JGE 0x0050554a                      ; 00505519
        ;   XREF to: 0050554a (CONDITIONAL_JUMP)  ; LAB_0050554a
    LEA EAX,[EBP*0x4 + 0x0]             ; 0050551b
    XOR EBX,EBX                         ; 00505522
        ;   Label: LAB_00505522
    TEST EDI,EDI                        ; 00505524
    JLE 0x00505540                      ; 00505526
        ;   XREF to: 00505540 (CONDITIONAL_JUMP)  ; LAB_00505540
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00505528
    ADD EBP,EAX                         ; 0050552c
    INC EBX                             ; 0050552e
        ;   Label: LAB_0050552e
    MOV dword ptr [EBP],0x0             ; 0050552f
    ADD EBP,0x80                        ; 00505536
    CMP EBX,EDI                         ; 0050553c
    JL 0x0050552e                       ; 0050553e
        ;   XREF to: 0050552e (CONDITIONAL_JUMP)  ; LAB_0050552e
    ADD EAX,0x4                         ; 00505540
        ;   Label: LAB_00505540
    CMP EAX,0x80                        ; 00505543
    JL 0x00505522                       ; 00505548
        ;   XREF to: 00505522 (CONDITIONAL_JUMP)  ; LAB_00505522
    CMP dword ptr [ESP],0x0             ; 0050554a
        ;   Label: LAB_0050554a
    JLE 0x00505615                      ; 0050554e
        ;   XREF to: 00505615 (CONDITIONAL_JUMP)  ; LAB_00505615
    MOV EAX,dword ptr [ESP]             ; 00505554
    XOR EBX,EBX                         ; 00505557
    SHL EAX,0x2                         ; 00505559
    MOV dword ptr [ESP + 0x10],EBX      ; 0050555c
    MOV dword ptr [ESP + 0x8],EAX       ; 00505560
    XOR EBP,EBP                         ; 00505564
        ;   Label: LAB_00505564
    TEST EDI,EDI                        ; 00505566
    JLE 0x005055fe                      ; 00505568
        ;   XREF to: 005055fe (CONDITIONAL_JUMP)  ; LAB_005055fe
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050556e
    MOV EDX,dword ptr [ESP + 0x40]      ; 00505572
    MOV EBX,dword ptr [ESP + 0x10]      ; 00505576
    MOV ECX,dword ptr [ESP + 0x44]      ; 0050557a
    MOV dword ptr [ESP + 0x18],EAX      ; 0050557e
    ADD EAX,EDX                         ; 00505582
    ADD EBX,ECX                         ; 00505584
    MOV dword ptr [ESP + 0x20],EAX      ; 00505586
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050558a
        ;   Label: LAB_0050558a
    MOV EAX,EBP                         ; 0050558e
    MOV ECX,dword ptr [EDX]             ; 00505590
    SHL EAX,0x7                         ; 00505592
    TEST ECX,ECX                        ; 00505595
    JZ 0x005056ea                       ; 00505597
        ;   XREF to: 005056ea (CONDITIONAL_JUMP)  ; LAB_005056ea
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050559d
    MOV ECX,dword ptr [ESP + 0x18]      ; 005055a1
    ADD EAX,EDX                         ; 005055a5
    ADD EAX,ECX                         ; 005055a7
    MOV EAX,dword ptr [EAX]             ; 005055a9
    CMP EAX,0x3                         ; 005055ab
    JA 0x005055e6                       ; 005055ae
        ;   XREF to: 005055e6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x505484]  ; 005055b0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x6                            ; 005055b7
        ;   Label: caseD_0
    PUSH ESI                            ; 005055b9
    CALL sound_mp3.cpp_FUN_00504b00     ; 005055ba
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005055bf
    PUSH 0x6                            ; 005055c2
    PUSH ESI                            ; 005055c4
    MOV dword ptr [EBX],EAX             ; 005055c5
    CALL sound_mp3.cpp_FUN_00504b00     ; 005055c7
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005055cc
    PUSH 0x6                            ; 005055cf
    PUSH ESI                            ; 005055d1
    MOV dword ptr [EBX + 0x80],EAX      ; 005055d2
    CALL sound_mp3.cpp_FUN_00504b00     ; 005055d8
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
        ;   Label: LAB_005055d8
    ADD ESP,0x8                         ; 005055dd
    MOV dword ptr [EBX + 0x100],EAX     ; 005055e0
    MOV EAX,dword ptr [ESP + 0x20]      ; 005055e6
        ;   Label: default
    ADD EBX,0x180                       ; 005055ea
    ADD EAX,0x80                        ; 005055f0
    INC EBP                             ; 005055f5
    MOV dword ptr [ESP + 0x20],EAX      ; 005055f6
    CMP EBP,EDI                         ; 005055fa
    JL 0x0050558a                       ; 005055fc
        ;   XREF to: 0050558a (CONDITIONAL_JUMP)  ; LAB_0050558a
    MOV EBP,dword ptr [ESP + 0x10]      ; 005055fe
        ;   Label: LAB_005055fe
    ADD EBP,0x4                         ; 00505602
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505605
    MOV dword ptr [ESP + 0x10],EBP      ; 00505609
    CMP EBP,EDX                         ; 0050560d
    JL 0x00505564                       ; 0050560f
        ;   XREF to: 00505564 (CONDITIONAL_JUMP)  ; LAB_00505564
    MOV ECX,dword ptr [ESP]             ; 00505615
        ;   Label: LAB_00505615
    CMP ECX,0x20                        ; 00505618
    JGE 0x0050565c                      ; 0050561b
        ;   XREF to: 0050565c (CONDITIONAL_JUMP)  ; LAB_0050565c
    LEA EDX,[ECX*0x4 + 0x0]             ; 0050561d
    XOR ESI,ESI                         ; 00505624
        ;   Label: LAB_00505624
    TEST EDI,EDI                        ; 00505626
    JLE 0x00505651                      ; 00505628
        ;   XREF to: 00505651 (CONDITIONAL_JUMP)  ; LAB_00505651
    MOV EBX,dword ptr [ESP + 0x44]      ; 0050562a
    ADD EBX,EDX                         ; 0050562e
    ADD EBX,0x180                       ; 00505630
        ;   Label: LAB_00505630
    MOV dword ptr [EBX + -0x80],0x3f    ; 00505636
    MOV EAX,dword ptr [EBX + -0x80]     ; 0050563d
    MOV dword ptr [EBX + 0xffffff00],EAX ; 00505640
    INC ESI                             ; 00505646
    MOV dword ptr [EBX + 0xfffffe80],EAX ; 00505647
    CMP ESI,EDI                         ; 0050564d
    JL 0x00505630                       ; 0050564f
        ;   XREF to: 00505630 (CONDITIONAL_JUMP)  ; LAB_00505630
    ADD EDX,0x4                         ; 00505651
        ;   Label: LAB_00505651
    CMP EDX,0x80                        ; 00505654
    JL 0x00505624                       ; 0050565a
        ;   XREF to: 00505624 (CONDITIONAL_JUMP)  ; LAB_00505624
    ADD ESP,0x24                        ; 0050565c
        ;   Label: LAB_0050565c
    POP EBP                             ; 0050565f
    POP EDI                             ; 00505660
    POP ESI                             ; 00505661
    POP EBX                             ; 00505662
    RET                                 ; 00505663
    PUSH 0x2                            ; 00505664
        ;   Label: LAB_00505664
    PUSH ESI                            ; 00505666
    CALL sound_mp3.cpp_FUN_00504b00     ; 00505667
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 0050566c
    XOR EDX,EDX                         ; 0050566f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00505671
    MOV DL,AL                           ; 00505675
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00505677
    ADD EAX,ECX                         ; 0050567b
    ADD EAX,dword ptr [ESP + 0x14]      ; 0050567d
    MOV dword ptr [EAX],EDX             ; 00505681
    JMP 0x005054f5                      ; 00505683
        ;   XREF to: 005054f5 (UNCONDITIONAL_JUMP)  ; LAB_005054f5
    PUSH 0x6                            ; 00505688
        ;   Label: caseD_1
    PUSH ESI                            ; 0050568a
    CALL sound_mp3.cpp_FUN_00504b00     ; 0050568b
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 00505690
    PUSH 0x6                            ; 00505693
    MOV dword ptr [EBX + 0x80],EAX      ; 00505695
    PUSH ESI                            ; 0050569b
    MOV dword ptr [EBX],EAX             ; 0050569c
    JMP 0x005055d8                      ; 0050569e
        ;   XREF to: 005055d8 (UNCONDITIONAL_JUMP)  ; LAB_005055d8
    PUSH 0x6                            ; 005056a3
        ;   Label: caseD_3
    PUSH ESI                            ; 005056a5
    CALL sound_mp3.cpp_FUN_00504b00     ; 005056a6
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    ADD ESP,0x8                         ; 005056ab
    PUSH 0x6                            ; 005056ae
    PUSH ESI                            ; 005056b0
    MOV dword ptr [EBX],EAX             ; 005056b1
    CALL sound_mp3.cpp_FUN_00504b00     ; 005056b3
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 005056b8
    ADD ESP,0x8                         ; 005056be
    MOV dword ptr [EBX + 0x80],EAX      ; 005056c1
    JMP 0x005055e6                      ; 005056c7
        ;   XREF to: 005055e6 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x6                            ; 005056cc
        ;   Label: caseD_2
    PUSH ESI                            ; 005056ce
    CALL sound_mp3.cpp_FUN_00504b00     ; 005056cf
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_FUN_00504b00(CFileBitStream * this_ptr, int num_bits)
    MOV dword ptr [EBX + 0x100],EAX     ; 005056d4
    MOV dword ptr [EBX + 0x80],EAX      ; 005056da
    ADD ESP,0x8                         ; 005056e0
    MOV dword ptr [EBX],EAX             ; 005056e3
    JMP 0x005055e6                      ; 005056e5
        ;   XREF to: 005055e6 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x100],0x3f    ; 005056ea
        ;   Label: LAB_005056ea
    MOV EAX,dword ptr [EBX + 0x100]     ; 005056f4
    MOV dword ptr [EBX + 0x80],EAX      ; 005056fa
    MOV dword ptr [EBX],EAX             ; 00505700
    JMP 0x005055e6                      ; 00505702
        ;   XREF to: 005055e6 (UNCONDITIONAL_JUMP)  ; default

