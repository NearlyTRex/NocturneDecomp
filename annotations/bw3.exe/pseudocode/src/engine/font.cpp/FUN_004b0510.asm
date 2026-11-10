; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b0510(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x16c]:1  local_16c
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
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004af920 at 004afb62
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005c1fd7
;   TerminatedCString s_Out_of_memory_005c1fea
;   TerminatedCString s_No_character_markers_fou_005c1ff8
;   TerminatedCString s_engine_font_cpp_005c2026
;   TerminatedCString s_Too_many_chars_fontfile_005c2039
;   TerminatedCString s_engine_font_cpp_005c205f
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a40df
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0510
        ;   Label: engine_font.cpp_FUN_004b0510
    PUSH ESI                            ; 004b0511
    PUSH EDI                            ; 004b0512
    PUSH EBP                            ; 004b0513
    SUB ESP,0x15c                       ; 004b0514
    MOV ESI,dword ptr [ESP + 0x170]     ; 004b051a
    MOV EBX,dword ptr [ESP + 0x178]     ; 004b0521
    MOV EDX,dword ptr [ESP + 0x17c]     ; 004b0528
    IMUL EBX,EDX                        ; 004b052f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b0532
    PUSH EAX                            ; 004b0539
    CALL crt_unknown.c_FUN_005a40df     ; 004b053a
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a40df()
    ADD ESP,0x4                         ; 004b053f
    MOV dword ptr [ESP + 0x12c],EAX     ; 004b0542
    TEST EAX,EAX                        ; 004b0549
    JZ 0x004b0781                       ; 004b054b
        ;   XREF to: 004b0781 (CONDITIONAL_JUMP)  ; LAB_004b0781
    MOV EAX,dword ptr [ESI + 0x4208]    ; 004b0551
        ;   Label: LAB_004b0551
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b0557
    MOV EAX,dword ptr [ESP + 0x174]     ; 004b055e
    XOR EDX,EDX                         ; 004b0565
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x194] ; 004b0567
    TEST EBX,EBX                        ; 004b056e
    JLE 0x004b058b                      ; 004b0570
        ;   XREF to: 004b058b (CONDITIONAL_JUMP)  ; LAB_004b058b
    XOR ECX,ECX                         ; 004b0572
        ;   Label: LAB_004b0572
    MOV EBP,dword ptr [ESI + 0x4208]    ; 004b0574
    MOV CL,byte ptr [EAX]               ; 004b057a
    CMP ECX,EBP                         ; 004b057c
    JZ 0x004b07a9                       ; 004b057e
        ;   XREF to: 004b07a9 (CONDITIONAL_JUMP)  ; LAB_004b07a9
    MOV dword ptr [ESP + 0x14c],ECX     ; 004b0584
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b058b
        ;   Label: LAB_004b058b
    CMP EAX,dword ptr [ESI + 0x4208]    ; 004b0592
    JNZ 0x004b05e6                      ; 004b0598
        ;   XREF to: 004b05e6 (CONDITIONAL_JUMP)  ; LAB_004b05e6
    MOV EDX,dword ptr [ESP + 0x174]     ; 004b059a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b05a1
    ADD EAX,EDX                         ; 004b05a8
    SHL EAX,0x4                         ; 004b05aa
    LEA EDX,[ESI + 0x4]                 ; 004b05ad
    ADD EAX,EDX                         ; 004b05b0
    PUSH EAX                            ; 004b05b2
    PUSH 0x5c1ff8                       ; 004b05b3 | = "No character markers found in font fi..."
    LEA EAX,[ESP + 0x8]                 ; 004b05b8
    PUSH EAX                            ; 004b05bc
    MOV EBX,0x2e0                       ; 004b05bd
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b05c2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b05c7
    MOV EAX,ESP                         ; 004b05ca
    MOV ECX,0x5c2026                    ; 004b05cc | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004b05d1
    MOV dword ptr [0x01d71de4],EBX      ; 004b05d2 | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 004b05d8 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004b05de
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004b05e3
    MOV EAX,dword ptr [ESP + 0x174]     ; 004b05e6
        ;   Label: LAB_004b05e6
    XOR EDI,EDI                         ; 004b05ed
    XOR EBP,EBP                         ; 004b05ef
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x194] ; 004b05f1
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004b05f8
    MOV dword ptr [ESP + 0x138],EDI     ; 004b05ff
    TEST EAX,EAX                        ; 004b0606
    JLE 0x004b065b                      ; 004b0608
        ;   XREF to: 004b065b (CONDITIONAL_JUMP)  ; LAB_004b065b
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004b060a
    MOV EAX,dword ptr [ESP + 0x178]     ; 004b0611
        ;   Label: LAB_004b0611
    MOV EDI,EDX                         ; 004b0618
    XOR EBX,EBX                         ; 004b061a
    TEST EAX,EAX                        ; 004b061c
    JLE 0x004b0646                      ; 004b061e
        ;   XREF to: 004b0646 (CONDITIONAL_JUMP)  ; LAB_004b0646
    XOR EAX,EAX                         ; 004b0620
        ;   Label: LAB_004b0620
    MOV AL,byte ptr [EDI]               ; 004b0622
    CMP EAX,dword ptr [ESP + 0x14c]     ; 004b0624
    JNZ 0x004b07b8                      ; 004b062b
        ;   XREF to: 004b07b8 (CONDITIONAL_JUMP)  ; LAB_004b07b8
    MOV EBX,dword ptr [ESP + 0x138]     ; 004b0631
    ADD ECX,0x4                         ; 004b0638
    INC EBX                             ; 004b063b
    MOV dword ptr [ECX + -0x4],EBP      ; 004b063c
    MOV dword ptr [ESP + 0x138],EBX     ; 004b063f
    MOV EBX,dword ptr [ESP + 0x178]     ; 004b0646
        ;   Label: LAB_004b0646
    MOV EDI,dword ptr [ESP + 0x17c]     ; 004b064d
    INC EBP                             ; 004b0654
    ADD EDX,EBX                         ; 004b0655
    CMP EBP,EDI                         ; 004b0657
    JL 0x004b0611                       ; 004b0659
        ;   XREF to: 004b0611 (CONDITIONAL_JUMP)  ; LAB_004b0611
    MOV EDX,dword ptr [ESP + 0x138]     ; 004b065b
        ;   Label: LAB_004b065b
    MOV EBP,dword ptr [ESP + 0x180]     ; 004b0662
    XOR EAX,EAX                         ; 004b0669
    DEC EDX                             ; 004b066b
    MOV dword ptr [ESP + 0x134],EAX     ; 004b066c
    MOV dword ptr [ESP + 0x138],EDX     ; 004b0673
    TEST EDX,EDX                        ; 004b067a
    JLE 0x004b0967                      ; 004b067c
        ;   XREF to: 004b0967 (CONDITIONAL_JUMP)  ; LAB_004b0967
    MOV EDX,dword ptr [ESP + 0x174]     ; 004b0682
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b0689
    ADD EDX,EAX                         ; 004b0690
    SHL EDX,0x4                         ; 004b0692
    LEA EAX,[ESI + 0x4]                 ; 004b0695
    ADD EAX,EDX                         ; 004b0698
    MOV dword ptr [ESP + 0x140],EAX     ; 004b069a
    MOV EAX,dword ptr [ESP + 0x174]     ; 004b06a1
    SHL EAX,0x2                         ; 004b06a8
    LEA EDX,[ESI + EAX*0x1]             ; 004b06ab
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004b06ae
    MOV dword ptr [ESP + 0x130],EDX     ; 004b06b5
    MOV dword ptr [ESP + 0x13c],EAX     ; 004b06bc
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004b06c3
        ;   Label: LAB_004b06c3
    MOV EBX,dword ptr [ESP + 0x178]     ; 004b06ca
    MOV EAX,dword ptr [EAX]             ; 004b06d1
    IMUL EAX,EBX                        ; 004b06d3
    MOV EDX,dword ptr [ESP + 0x130]     ; 004b06d6
    XOR EDI,EDI                         ; 004b06dd
    MOV EDX,dword ptr [EDX + 0x194]     ; 004b06df
    MOV dword ptr [ESP + 0x154],EDI     ; 004b06e5
    ADD EDX,EAX                         ; 004b06ec
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004b06ee
    MOV dword ptr [ESP + 0x158],EDX     ; 004b06f5
    MOV dword ptr [ESP + 0x148],EAX     ; 004b06fc
    MOV EAX,EDX                         ; 004b0703
    MOV EDX,dword ptr [ESP + 0x178]     ; 004b0705
    LEA EBX,[EBP*0x4 + 0x0]             ; 004b070c
    ADD EAX,EDX                         ; 004b0713
    ADD EBX,ESI                         ; 004b0715
    MOV dword ptr [ESP + 0x150],EAX     ; 004b0717
    MOV ECX,dword ptr [ESP + 0x144]     ; 004b071e
        ;   Label: LAB_004b071e
    MOV EAX,EDI                         ; 004b0725
    MOV EDX,dword ptr [ESP + 0x178]     ; 004b0727
    SUB EAX,ECX                         ; 004b072e
    CMP EDI,EDX                         ; 004b0730
    JGE 0x004b08c4                      ; 004b0732
        ;   XREF to: 004b08c4 (CONDITIONAL_JUMP)  ; LAB_004b08c4
    CMP dword ptr [ESP + 0x154],0x0     ; 004b0738
    JNZ 0x004b0836                      ; 004b0740
        ;   XREF to: 004b0836 (CONDITIONAL_JUMP)  ; LAB_004b0836
    MOV EDX,dword ptr [ESP + 0x158]     ; 004b0746
    XOR EAX,EAX                         ; 004b074d
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004b074f
    MOV AL,byte ptr [EDX]               ; 004b0756
    CMP EAX,ECX                         ; 004b0758
    JZ 0x004b07ce                       ; 004b075a
        ;   XREF to: 004b07ce (CONDITIONAL_JUMP)  ; LAB_004b07ce
    MOV EDX,dword ptr [ESP + 0x150]     ; 004b0760
        ;   Label: LAB_004b0760
    MOV ECX,dword ptr [ESP + 0x158]     ; 004b0767
    INC EDI                             ; 004b076e
    INC EDX                             ; 004b076f
    INC ECX                             ; 004b0770
    MOV dword ptr [ESP + 0x150],EDX     ; 004b0771
    MOV dword ptr [ESP + 0x158],ECX     ; 004b0778
    JMP 0x004b071e                      ; 004b077f
        ;   XREF to: 004b071e (UNCONDITIONAL_JUMP)  ; LAB_004b071e
    MOV ECX,0x5c1fd7                    ; 004b0781 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004b0781
    MOV EDI,0x2cb                       ; 004b0786
    PUSH 0x5c1fea                       ; 004b078b | = "Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 004b0790 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004b0796 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004b079c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004b07a1
    JMP 0x004b0551                      ; 004b07a4
        ;   XREF to: 004b0551 (UNCONDITIONAL_JUMP)  ; LAB_004b0551
    INC EDX                             ; 004b07a9
        ;   Label: LAB_004b07a9
    INC EAX                             ; 004b07aa
    CMP EDX,EBX                         ; 004b07ab
    JL 0x004b0572                       ; 004b07ad
        ;   XREF to: 004b0572 (CONDITIONAL_JUMP)  ; LAB_004b0572
    JMP 0x004b058b                      ; 004b07b3
        ;   XREF to: 004b058b (UNCONDITIONAL_JUMP)  ; LAB_004b058b
    MOV EAX,dword ptr [ESP + 0x178]     ; 004b07b8
        ;   Label: LAB_004b07b8
    INC EBX                             ; 004b07bf
    INC EDI                             ; 004b07c0
    CMP EBX,EAX                         ; 004b07c1
    JL 0x004b0620                       ; 004b07c3
        ;   XREF to: 004b0620 (CONDITIONAL_JUMP)  ; LAB_004b0620
    JMP 0x004b0646                      ; 004b07c9
        ;   XREF to: 004b0646 (UNCONDITIONAL_JUMP)  ; LAB_004b0646
    MOV EAX,0x1                         ; 004b07ce
        ;   Label: LAB_004b07ce
    MOV dword ptr [ESP + 0x144],EDI     ; 004b07d3
    MOV dword ptr [ESP + 0x154],EAX     ; 004b07da
    CMP EBP,0x100                       ; 004b07e1
    JL 0x004b0824                       ; 004b07e7
        ;   XREF to: 004b0824 (CONDITIONAL_JUMP)  ; LAB_004b0824
    PUSH EBP                            ; 004b07e9
    MOV EDX,dword ptr [ESP + 0x144]     ; 004b07ea
    PUSH EDX                            ; 004b07f1
    PUSH 0x5c2039                       ; 004b07f2 | = "Too many chars: fontfile %s, chars %d"
    LEA EAX,[ESP + 0xc]                 ; 004b07f7
    PUSH EAX                            ; 004b07fb
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004b07fc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x314                       ; 004b0801
    ADD ESP,0x10                        ; 004b0806
    MOV [0x01d71de4],EAX                ; 004b0809 | DAT_01d71de4
    MOV EAX,ESP                         ; 004b080e
    MOV ECX,0x5c205f                    ; 004b0810 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004b0815
    MOV dword ptr [0x01d71de0],ECX      ; 004b0816 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004b081c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004b0821
    MOV EAX,dword ptr [ESP + 0x150]     ; 004b0824
        ;   Label: LAB_004b0824
    MOV dword ptr [EBX + 0x1de8],EAX    ; 004b082b
    JMP 0x004b0760                      ; 004b0831
        ;   XREF to: 004b0760 (UNCONDITIONAL_JUMP)  ; LAB_004b0760
    MOV ECX,dword ptr [ESP + 0x158]     ; 004b0836
        ;   Label: LAB_004b0836
    XOR EDX,EDX                         ; 004b083d
    MOV DL,byte ptr [ECX]               ; 004b083f
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004b0841
    CMP EDX,ECX                         ; 004b0848
    JZ 0x004b0760                       ; 004b084a
        ;   XREF to: 004b0760 (CONDITIONAL_JUMP)  ; LAB_004b0760
    MOV dword ptr [EBX + 0x35e8],EAX    ; 004b0850
    XOR EDX,EDX                         ; 004b0856
    MOV ECX,dword ptr [ESI + 0x41e8]    ; 004b0858
    MOV dword ptr [ESP + 0x154],EDX     ; 004b085e
    CMP EAX,ECX                         ; 004b0865
    JLE 0x004b086f                      ; 004b0867
        ;   XREF to: 004b086f (CONDITIONAL_JUMP)  ; LAB_004b086f
    MOV dword ptr [ESI + 0x41e8],EAX    ; 004b0869
    MOV EAX,dword ptr [ESP + 0x178]     ; 004b086f
        ;   Label: LAB_004b086f
    PUSH EAX                            ; 004b0876
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004b0877
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004b087e
    MOV EAX,dword ptr [EAX]             ; 004b0885
    MOV EDX,dword ptr [EDX + 0x4]       ; 004b0887
    INC EAX                             ; 004b088a
    SUB EDX,EAX                         ; 004b088b
    PUSH EDX                            ; 004b088d
    MOV EDX,dword ptr [EBX + 0x35e8]    ; 004b088e
    PUSH EDX                            ; 004b0894
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004b0895
    PUSH ECX                            ; 004b089b
    PUSH ESI                            ; 004b089c
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0 ; 004b089d
        ;   XREF to: 004b09c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x39e8],EAX    ; 004b08a2
    MOV EDX,dword ptr [ESI + 0x41ec]    ; 004b08a8
    ADD ESP,0x14                        ; 004b08ae
    CMP EAX,EDX                         ; 004b08b1
    JLE 0x004b08bb                      ; 004b08b3
        ;   XREF to: 004b08bb (CONDITIONAL_JUMP)  ; LAB_004b08bb
    MOV dword ptr [ESI + 0x41ec],EAX    ; 004b08b5
    INC EBP                             ; 004b08bb
        ;   Label: LAB_004b08bb
    ADD EBX,0x4                         ; 004b08bc
    JMP 0x004b0760                      ; 004b08bf
        ;   XREF to: 004b0760 (UNCONDITIONAL_JUMP)  ; LAB_004b0760
    CMP dword ptr [ESP + 0x154],0x1     ; 004b08c4
        ;   Label: LAB_004b08c4
    JNZ 0x004b0938                      ; 004b08cc
        ;   XREF to: 004b0938 (CONDITIONAL_JUMP)  ; LAB_004b0938
    MOV dword ptr [EBX + 0x35e8],EAX    ; 004b08ce
    CMP EAX,dword ptr [ESI + 0x41e8]    ; 004b08d4
    JLE 0x004b08e2                      ; 004b08da
        ;   XREF to: 004b08e2 (CONDITIONAL_JUMP)  ; LAB_004b08e2
    MOV dword ptr [ESI + 0x41e8],EAX    ; 004b08dc
    MOV EAX,dword ptr [ESP + 0x178]     ; 004b08e2
        ;   Label: LAB_004b08e2
    PUSH EAX                            ; 004b08e9
    MOV EAX,dword ptr [ESP + 0x140]     ; 004b08ea
    MOV EDX,dword ptr [ESP + 0x140]     ; 004b08f1
    MOV EAX,dword ptr [EAX]             ; 004b08f8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004b08fa
    INC EAX                             ; 004b08fd
    LEA EBX,[EBP*0x4 + 0x0]             ; 004b08fe
    SUB EDX,EAX                         ; 004b0905
    ADD EBX,ESI                         ; 004b0907
    PUSH EDX                            ; 004b0909
    MOV EDX,dword ptr [EBX + 0x35e8]    ; 004b090a
    PUSH EDX                            ; 004b0910
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004b0911
    PUSH ECX                            ; 004b0917
    PUSH ESI                            ; 004b0918
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0 ; 004b0919
        ;   XREF to: 004b09c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004b09c0(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x39e8],EAX    ; 004b091e
    MOV EDI,dword ptr [ESI + 0x41ec]    ; 004b0924
    ADD ESP,0x14                        ; 004b092a
    CMP EAX,EDI                         ; 004b092d
    JLE 0x004b0937                      ; 004b092f
        ;   XREF to: 004b0937 (CONDITIONAL_JUMP)  ; LAB_004b0937
    MOV dword ptr [ESI + 0x41ec],EAX    ; 004b0931
    INC EBP                             ; 004b0937
        ;   Label: LAB_004b0937
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004b0938
        ;   Label: LAB_004b0938
    MOV EAX,dword ptr [ESP + 0x134]     ; 004b093f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004b0946
    ADD EDI,0x4                         ; 004b094d
    INC EAX                             ; 004b0950
    MOV dword ptr [ESP + 0x13c],EDI     ; 004b0951
    MOV dword ptr [ESP + 0x134],EAX     ; 004b0958
    CMP EAX,EDX                         ; 004b095f
    JL 0x004b06c3                       ; 004b0961
        ;   XREF to: 004b06c3 (CONDITIONAL_JUMP)  ; LAB_004b06c3
    MOV EBX,dword ptr [ESP + 0x180]     ; 004b0967
        ;   Label: LAB_004b0967
    CMP EBP,EBX                         ; 004b096e
    JLE 0x004b0990                      ; 004b0970
        ;   XREF to: 004b0990 (CONDITIONAL_JUMP)  ; LAB_004b0990
    LEA EAX,[EBX*0x4 + 0x0]             ; 004b0972
    MOV EDX,dword ptr [ESP + 0x174]     ; 004b0979
    ADD EAX,ESI                         ; 004b0980
    ADD EAX,0x4                         ; 004b0982
        ;   Label: LAB_004b0982
    INC EBX                             ; 004b0985
    MOV dword ptr [EAX + 0x21e4],EDX    ; 004b0986
    CMP EBX,EBP                         ; 004b098c
    JL 0x004b0982                       ; 004b098e
        ;   XREF to: 004b0982 (CONDITIONAL_JUMP)  ; LAB_004b0982
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004b0990
        ;   Label: LAB_004b0990
    MOV EAX,dword ptr [ESI + 0x41ec]    ; 004b0997
    PUSH EBX                            ; 004b099d
    MOV dword ptr [ESI + 0x41f0],EAX    ; 004b099e
    CALL crt_unknown.c_FUN_005a30b6     ; 004b09a4
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004b09a9
    ADD ESP,0x15c                       ; 004b09ac
    POP EBP                             ; 004b09b2
    POP EDI                             ; 004b09b3
    POP ESI                             ; 004b09b4
    POP EBX                             ; 004b09b5
    RET                                 ; 004b09b6

