; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(int **param_1,undefined2 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x60d0]:4  local_60d0
; undefined4       Stack[-0x60cc]:4  local_60cc
; undefined        Stack[-0x60c8]:1  local_60c8
; undefined        Stack[-0x4ec8]:1  local_4ec8
; undefined        Stack[-0x3cc8]:1  local_3cc8
; undefined        Stack[-0x33c8]:1  local_33c8
; undefined        Stack[-0x2ac8]:1  local_2ac8
; undefined        Stack[-0x21c8]:1  local_21c8
; undefined        Stack[-0x18c8]:1  local_18c8
; undefined        Stack[-0xfc8]:1  local_fc8
; undefined        Stack[-0xcc8]:1  local_cc8
; undefined        Stack[-0x9c8]:1  local_9c8
; undefined        Stack[-0x6c8]:1  local_6c8
; undefined4       Stack[-0x4d8]:4  local_4d8
; undefined        Stack[-0x4d0]:1  local_4d0
; undefined        Stack[-0x4c0]:1  local_4c0
; undefined        Stack[-0x390]:1  local_390
; undefined        Stack[-0x290]:1  local_290
; undefined        Stack[-0x190]:1  local_190
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined8       Stack[-0xc4]:8  local_c4
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
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
;   sound_mp3.cpp_CMP3Decoder_read_FUN_004e82d0 at 004e83b4
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_004e8410 at 004e84ed
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b4e0
;   TerminatedCString s_MPEG_Layer_2_pick_table_0058b4f1
;   TerminatedCString s_sound_mp3_cpp_0058b52a
;   TerminatedCString s_js_bound_bad_layer_modex_0058b53b
;   TerminatedCString s_sound_mp3_cpp_0058b9c0
;   TerminatedCString s_Not_enough_main_data_to_0058b9d1
;   undefined4 s_CMotionController_005bb246+0xa
;   undefined4 DAT_005bbc48
;   undefined4 DAT_005bbc88
;   undefined4 DAT_005bbdf0
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01cd8b28
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   sound_mp3.cpp_antiAliasingButterfly_FUN_004e7030
;   sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004e3e70
;   sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0
;   sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004e3320
;   sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
;   sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0
;   sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0
;   sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0
;   sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
;   sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0
;   sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460
;   sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e85b0
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
    PUSH ESI                            ; 004e85b1
    PUSH EDI                            ; 004e85b2
    PUSH EBP                            ; 004e85b3
    MOV EBP,ESP                         ; 004e85b4
    SUB ESP,0x60c0                      ; 004e85b6
    AND ESP,0xfffffff8                  ; 004e85bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004e85bf
    LEA EAX,[ESP + 0x5fc0]              ; 004e85c2
    XOR EDX,EDX                         ; 004e85c9
    MOV ESI,0xffffffff                  ; 004e85cb
    MOV dword ptr [ESP + 0x6020],EDX    ; 004e85d0
    MOV dword ptr [ESP + 0x5ff0],EAX    ; 004e85d7
    MOV dword ptr [ESP + 0x5ffc],ESI    ; 004e85de
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e85e5
    MOV dword ptr [ESP + 0x5ff8],EDX    ; 004e85e8
    MOV dword ptr [ESP + 0x601c],EDX    ; 004e85ef
    MOV EDX,dword ptr [EAX + 0x533c]    ; 004e85f6
    ADD EAX,0x5320                      ; 004e85fc
    TEST EDX,EDX                        ; 004e8601
    JNZ 0x004e8665                      ; 004e8603
        ;   XREF to: 004e8665 (CONDITIONAL_JUMP)  ; LAB_004e8665
    MOV EDX,0xfff                       ; 004e8605
    MOV ESI,0xc                         ; 004e860a
    MOV ECX,0x1fff                      ; 004e860f
    MOV EDI,EAX                         ; 004e8614
    MOV dword ptr [ESP + 0x6028],EDX    ; 004e8616
    MOV EDX,dword ptr [EAX + 0xc]       ; 004e861d
    MOV dword ptr [ESP + 0x602c],ECX    ; 004e8620
    AND EDX,0x7                         ; 004e8627
    JNZ 0x004e8670                      ; 004e862a
        ;   XREF to: 004e8670 (CONDITIONAL_JUMP)  ; LAB_004e8670
    PUSH ESI                            ; 004e862c
        ;   Label: LAB_004e862c
    PUSH EDI                            ; 004e862d
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e862e
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e8633
    MOV ESI,EAX                         ; 004e8636
    MOV EAX,dword ptr [ESP + 0x602c]    ; 004e8638
        ;   Label: LAB_004e8638
    MOV EDX,dword ptr [ESP + 0x6028]    ; 004e863f
    AND EAX,ESI                         ; 004e8646
    CMP EAX,EDX                         ; 004e8648
    JZ 0x004e8683                       ; 004e864a
        ;   XREF to: 004e8683 (CONDITIONAL_JUMP)  ; LAB_004e8683
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004e864c
    TEST EAX,EAX                        ; 004e864f
    JNZ 0x004e8683                      ; 004e8651
        ;   XREF to: 004e8683 (CONDITIONAL_JUMP)  ; LAB_004e8683
    PUSH 0x8                            ; 004e8653
    PUSH EDI                            ; 004e8655
    SHL ESI,0x8                         ; 004e8656
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e8659
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e865e
    OR ESI,EAX                          ; 004e8661
    JMP 0x004e8638                      ; 004e8663
        ;   XREF to: 004e8638 (UNCONDITIONAL_JUMP)  ; LAB_004e8638
    XOR ESI,ESI                         ; 004e8665
        ;   Label: LAB_004e8665
    MOV EAX,ESI                         ; 004e8667
    MOV ESP,EBP                         ; 004e8669
    POP EBP                             ; 004e866b
    POP EDI                             ; 004e866c
    POP ESI                             ; 004e866d
    POP EBX                             ; 004e866e
    RET                                 ; 004e866f
    MOV ECX,0x8                         ; 004e8670
        ;   Label: LAB_004e8670
    SUB ECX,EDX                         ; 004e8675
    PUSH ECX                            ; 004e8677
    PUSH EAX                            ; 004e8678
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e8679
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e867e
    JMP 0x004e862c                      ; 004e8681
        ;   XREF to: 004e862c (UNCONDITIONAL_JUMP)  ; LAB_004e862c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004e8683
        ;   Label: LAB_004e8683
    TEST EAX,EAX                        ; 004e8686
    JNZ 0x004e8665                      ; 004e8688
        ;   XREF to: 004e8665 (CONDITIONAL_JUMP)  ; LAB_004e8665
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e868a
    MOV ECX,dword ptr [ESP + 0x6020]    ; 004e868d
    MOV EDX,dword ptr [EAX + 0x532c]    ; 004e8694
    SUB EDX,ECX                         ; 004e869a
    LEA ESI,[ECX + EDX*0x1]             ; 004e869c
    LEA EDX,[ESP + 0x5ff0]              ; 004e869f
    PUSH EDX                            ; 004e86a6
    ADD EAX,0x5320                      ; 004e86a7
    PUSH EAX                            ; 004e86ac
    MOV dword ptr [ESP + 0x6028],ESI    ; 004e86ad
    CALL sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130 ; 004e86b4
        ;   XREF to: 004e3130 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readFrameHeader_FUN_004e3130()
    ADD ESP,0x8                         ; 004e86b9
    MOV EDI,dword ptr [ESP + 0x5ff0]    ; 004e86bc
    LEA ESI,[ESP + 0x5ff0]              ; 004e86c3
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004e86ca
    XOR ECX,ECX                         ; 004e86cd
    MOV dword ptr [ESP + 0x5ff4],EAX    ; 004e86cf
    CMP EAX,0x3                         ; 004e86d6
    SETNZ AL                            ; 004e86d9
    MOV CL,AL                           ; 004e86dc
    INC ECX                             ; 004e86de
    MOV dword ptr [ESP + 0x6000],ECX    ; 004e86df
    MOV EDX,dword ptr [EDI + 0x4]       ; 004e86e6
    CMP EDX,0x2                         ; 004e86e9
    JNZ 0x004e8be0                      ; 004e86ec
        ;   XREF to: 004e8be0 (CONDITIONAL_JUMP)  ; LAB_004e8be0
    MOV EAX,dword ptr [ESP + 0x6008]    ; 004e86f2
    MOV dword ptr [ESP + 0x6034],EAX    ; 004e86f9
    MOV EAX,dword ptr [EDI]             ; 004e8700
    MOV dword ptr [ESP + 0x6044],EAX    ; 004e8702
    LEA EAX,[EDX + -0x1]                ; 004e8709
    MOV dword ptr [ESP + 0x6038],EAX    ; 004e870c
    MOV EAX,dword ptr [EDI + 0xc]       ; 004e8713
    MOV EDX,dword ptr [ESP + 0x6044]    ; 004e8716
    MOV dword ptr [ESP + 0x603c],EAX    ; 004e871d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e8724
    SUB EAX,EDX                         ; 004e872b
    SHL EAX,0x2                         ; 004e872d
    MOV EDX,EAX                         ; 004e8730
    SHL EAX,0x4                         ; 004e8732
    SUB EAX,EDX                         ; 004e8735
    MOV dword ptr [ESP + 0x60bc],EAX    ; 004e8737
    MOV EAX,dword ptr [ESP + 0x6038]    ; 004e873e
    SHL EAX,0x2                         ; 004e8745
    MOV EDX,EAX                         ; 004e8748
    SHL EAX,0x4                         ; 004e874a
    SUB EAX,EDX                         ; 004e874d
    MOV EDX,dword ptr [ESP + 0x60bc]    ; 004e874f
    ADD EDX,EAX                         ; 004e8756
    MOV dword ptr [ESP + 0x60bc],EDX    ; 004e8758
    MOV EDX,dword ptr [ESP + 0x603c]    ; 004e875f
    MOV EAX,dword ptr [ESP + 0x60bc]    ; 004e8766
    SHL EDX,0x2                         ; 004e876d
    ADD EDX,EAX                         ; 004e8770
    MOV EAX,dword ptr [EDX + 0x5bbc88]  ; 004e8772 | DAT_005bbc88
    MOV EDX,EAX                         ; 004e8778
    SAR EDX,0x1f                        ; 004e877a
    IDIV ECX                            ; 004e877d
    MOV ECX,dword ptr [ESP + 0x6044]    ; 004e877f
    MOV EDX,dword ptr [EDI + 0x10]      ; 004e8786
    SHL ECX,0x5                         ; 004e8789
    SHL EDX,0x3                         ; 004e878c
    ADD EDX,ECX                         ; 004e878f
    MOV dword ptr [ESP + 0x6030],ESI    ; 004e8791
    FLD double ptr [EDX + 0x5bbc48]     ; 004e8798 | DAT_005bbc48
    CALL crt_math.c_round_FUN_00563a30  ; 004e879e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV EDX,dword ptr [ESP + 0x6044]    ; 004e87a3
    FISTP dword ptr [ESP + 0x6040]      ; 004e87aa
    CMP EDX,0x1                         ; 004e87b1
    JNZ 0x004e8bd6                      ; 004e87b4
        ;   XREF to: 004e8bd6 (CONDITIONAL_JUMP)  ; LAB_004e8bd6
    CMP dword ptr [ESP + 0x6040],0x30   ; 004e87ba
    JNZ 0x004e8b8c                      ; 004e87c2
        ;   XREF to: 004e8b8c (CONDITIONAL_JUMP)  ; LAB_004e8b8c
    CMP EAX,0x38                        ; 004e87c8
    JL 0x004e8b8c                       ; 004e87cb
        ;   XREF to: 004e8b8c (CONDITIONAL_JUMP)  ; LAB_004e8b8c
    XOR EAX,EAX                         ; 004e87d1
        ;   Label: LAB_004e87d1
    MOV EDX,dword ptr [ESP + 0x6030]    ; 004e87d3
        ;   Label: LAB_004e87d3
    CMP EAX,dword ptr [EDX + 0xc]       ; 004e87da
    JZ 0x004e8806                       ; 004e87dd
        ;   XREF to: 004e8806 (CONDITIONAL_JUMP)  ; LAB_004e8806
    PUSH 0x1cd8b28                      ; 004e87df | DAT_01cd8b28
    MOV EAX,0x58b4e0                    ; 004e87e4 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x1a1                       ; 004e87e9
    PUSH 0x58b4f1                       ; 004e87ee | = "MPEG Layer 2 - pick_table - can't loa..."
    MOV [0x01cc4800],EAX                ; 004e87f3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e87f8 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e87fe
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e8803
    MOV EAX,dword ptr [ESP + 0x6034]    ; 004e8806
        ;   Label: LAB_004e8806
    MOV dword ptr [ESI + 0x18],EAX      ; 004e880d
    MOV ECX,dword ptr [EDI + 0x1c]      ; 004e8810
        ;   Label: LAB_004e8810
    CMP ECX,0x1                         ; 004e8813
    JNZ 0x004e8c0f                      ; 004e8816
        ;   XREF to: 004e8c0f (CONDITIONAL_JUMP)  ; LAB_004e8c0f
    MOV EAX,dword ptr [EDI + 0x4]       ; 004e881c
    MOV dword ptr [ESP + 0x6048],EAX    ; 004e881f
    MOV EDI,dword ptr [EDI + 0x20]      ; 004e8826
    CMP EAX,ECX                         ; 004e8829
    JGE 0x004e8bf0                      ; 004e882b
        ;   XREF to: 004e8bf0 (CONDITIONAL_JUMP)  ; LAB_004e8bf0
    PUSH 0x1cd8b28                      ; 004e8831 | DAT_01cd8b28
        ;   Label: LAB_004e8831
    PUSH EDI                            ; 004e8836
    MOV EDX,dword ptr [ESP + 0x6050]    ; 004e8837
    PUSH EDX                            ; 004e883e
    MOV ECX,0x58b52a                    ; 004e883f | = "..\\sound\\mp3.cpp"
    MOV EAX,0x1b1                       ; 004e8844
    PUSH 0x58b53b                       ; 004e8849 | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01cc4800],ECX      ; 004e884e | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004e8854 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e8859
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x10                        ; 004e885e
    MOV EAX,dword ptr [ESP + 0x6048]    ; 004e8861
        ;   Label: LAB_004e8861
    SHL EAX,0x4                         ; 004e8868
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0x5bb250] ; 004e886b | s_CMotionController_005bb246+0xa
    MOV dword ptr [ESI + 0x14],EAX      ; 004e8872
        ;   Label: LAB_004e8872
    MOV EAX,dword ptr [ESP + 0x6000]    ; 004e8875
    MOV dword ptr [ESP + 0x6018],EAX    ; 004e887c
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 004e8883
    CMP dword ptr [EAX],0x0             ; 004e888a
    SETNZ AL                            ; 004e888d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e8890
    AND EAX,0xff                        ; 004e8893
    MOV EDI,dword ptr [ESP + 0x5fc4]    ; 004e8898
    INC EAX                             ; 004e889f
    ADD ESI,0x5320                      ; 004e88a0
    MOV dword ptr [ESP + 0x6024],EAX    ; 004e88a6
    CMP EDI,0x2                         ; 004e88ad
    JNC 0x004e947a                      ; 004e88b0
        ;   XREF to: 004e947a (CONDITIONAL_JUMP)  ; LAB_004e947a
    CMP EDI,0x1                         ; 004e88b6
    JNZ 0x004e8a52                      ; 004e88b9
        ;   XREF to: 004e8a52 (CONDITIONAL_JUMP)  ; LAB_004e8a52
    LEA EAX,[ESP + 0x5ff0]              ; 004e88bf
    PUSH EAX                            ; 004e88c6
    LEA EAX,[ESP + 0x5e44]              ; 004e88c7
    PUSH EAX                            ; 004e88ce
    MOV EBX,0x20                        ; 004e88cf
    MOV EDI,0x180                       ; 004e88d4
    PUSH ESI                            ; 004e88d9
    MOV dword ptr [ESP + 0xc],EBX       ; 004e88da
    MOV dword ptr [ESP + 0x10],EDI      ; 004e88de
    CALL sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004e3320 ; 004e88e2
        ;   XREF to: 004e3320 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_004e3320()
    ADD ESP,0xc                         ; 004e88e7
    LEA EAX,[ESP + 0x5ff0]              ; 004e88ea
    PUSH EAX                            ; 004e88f1
    LEA EAX,[ESP + 0x510c]              ; 004e88f2
    PUSH EAX                            ; 004e88f9
    LEA EAX,[ESP + 0x5e48]              ; 004e88fa
    PUSH EAX                            ; 004e8901
    PUSH ESI                            ; 004e8902
    CALL sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0 ; 004e8903
        ;   XREF to: 004e33d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_004e33d0()
    ADD ESP,0x10                        ; 004e8908
    XOR EAX,EAX                         ; 004e890b
    MOV dword ptr [ESP + 0x60b0],EAX    ; 004e890d
    MOV dword ptr [ESP + 0x604c],ESI    ; 004e8914
    LEA EAX,[ESP + 0x5ff0]              ; 004e891b
        ;   Label: LAB_004e891b
    PUSH EAX                            ; 004e8922
    LEA EAX,[ESP + 0x5e44]              ; 004e8923
    PUSH EAX                            ; 004e892a
    LEA EAX,[ESP + 0x5410]              ; 004e892b
    PUSH EAX                            ; 004e8932
    MOV EBX,dword ptr [ESP + 0x6058]    ; 004e8933
    PUSH EBX                            ; 004e893a
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0 ; 004e893b
        ;   XREF to: 004e36d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0()
    ADD ESP,0x10                        ; 004e8940
    LEA EAX,[ESP + 0x5ff0]              ; 004e8943
    PUSH EAX                            ; 004e894a
    LEA EAX,[ESP + 0x5e44]              ; 004e894b
    PUSH EAX                            ; 004e8952
    LEA EAX,[ESP + 0x5710]              ; 004e8953
    PUSH EAX                            ; 004e895a
    LEA EAX,[ESP + 0x5414]              ; 004e895b
    PUSH EAX                            ; 004e8962
    XOR EDI,EDI                         ; 004e8963
    CALL sound_mp3.cpp_requantizeSamples_FUN_004e3d30 ; 004e8965
        ;   XREF to: 004e3d30 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeSamples_FUN_004e3d30()
    ADD ESP,0x10                        ; 004e896a
    LEA EAX,[ESP + 0x5708]              ; 004e896d
    MOV ESI,dword ptr [ESP + 0x6000]    ; 004e8974
    MOV dword ptr [ESP + 0x6050],EAX    ; 004e897b
    LEA EAX,[ESP + 0x5108]              ; 004e8982
    MOV dword ptr [ESP + 0x6074],EDI    ; 004e8989
    MOV dword ptr [ESP + 0x6054],EAX    ; 004e8990
    MOV ECX,EDI                         ; 004e8997
        ;   Label: LAB_004e8997
    TEST ESI,ESI                        ; 004e8999
    JLE 0x004e89e0                      ; 004e899b
        ;   XREF to: 004e89e0 (CONDITIONAL_JUMP)  ; LAB_004e89e0
    MOV EDX,dword ptr [ESP + 0x6074]    ; 004e899d
    MOV EBX,dword ptr [ESP + 0x6054]    ; 004e89a4
    MOV EAX,dword ptr [ESP + 0x6074]    ; 004e89ab
    ADD EDX,EBX                         ; 004e89b2
    ADD EAX,dword ptr [ESP + 0x6050]    ; 004e89b4
    FLD float ptr [EAX]                 ; 004e89bb
        ;   Label: LAB_004e89bb
    MOV EBX,dword ptr [EDX]             ; 004e89bd
    FLD ST0                             ; 004e89bf
    FMUL double ptr [EBX*0x8 + 0x5bbdf0] ; 004e89c1 | DAT_005bbdf0
    ADD EDX,0x180                       ; 004e89c8
    ADD EAX,0x180                       ; 004e89ce
    INC ECX                             ; 004e89d3
    FSTP ST1                            ; 004e89d4
    FSTP float ptr [EAX + 0xfffffe80]   ; 004e89d6
    CMP ECX,ESI                         ; 004e89dc
    JL 0x004e89bb                       ; 004e89de
        ;   XREF to: 004e89bb (CONDITIONAL_JUMP)  ; LAB_004e89bb
    MOV EAX,dword ptr [ESP + 0x6074]    ; 004e89e0
        ;   Label: LAB_004e89e0
    ADD EAX,0x4                         ; 004e89e7
    MOV dword ptr [ESP + 0x6074],EAX    ; 004e89ea
    CMP EAX,0x80                        ; 004e89f1
    JNZ 0x004e8997                      ; 004e89f6
        ;   XREF to: 004e8997 (CONDITIONAL_JUMP)  ; LAB_004e8997
    MOV ECX,dword ptr [ESP + 0x6018]    ; 004e89f8
    XOR EBX,EBX                         ; 004e89ff
    TEST ECX,ECX                        ; 004e8a01
    JLE 0x004e8a3a                      ; 004e8a03
        ;   XREF to: 004e8a3a (CONDITIONAL_JUMP)  ; LAB_004e8a3a
    LEA EDI,[ESP + 0x2d08]              ; 004e8a05
    LEA ESI,[ESP + 0x5708]              ; 004e8a0c
    PUSH EDI                            ; 004e8a13
        ;   Label: LAB_004e8a13
    PUSH EBX                            ; 004e8a14
    PUSH ESI                            ; 004e8a15
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e8a16
    PUSH EAX                            ; 004e8a19
    ADD EDI,0x480                       ; 004e8a1a
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070 ; 004e8a20
        ;   XREF to: 004e4070 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070()
    ADD ESP,0x10                        ; 004e8a25
    INC EBX                             ; 004e8a28
    MOV EDX,dword ptr [ESP + 0x6018]    ; 004e8a29
    ADD ESI,0x180                       ; 004e8a30
    CMP EBX,EDX                         ; 004e8a36
    JL 0x004e8a13                       ; 004e8a38
        ;   XREF to: 004e8a13 (CONDITIONAL_JUMP)  ; LAB_004e8a13
    MOV ECX,dword ptr [ESP + 0x60b0]    ; 004e8a3a
        ;   Label: LAB_004e8a3a
    INC ECX                             ; 004e8a41
    MOV dword ptr [ESP + 0x60b0],ECX    ; 004e8a42
    CMP ECX,0xc                         ; 004e8a49
    JL 0x004e891b                       ; 004e8a4c
        ;   XREF to: 004e891b (CONDITIONAL_JUMP)  ; LAB_004e891b
    CMP dword ptr [ESP + 0x5fcc],0x0    ; 004e8a52
        ;   Label: LAB_004e8a52
    JLE 0x004e8b70                      ; 004e8a5a
        ;   XREF to: 004e8b70 (CONDITIONAL_JUMP)  ; LAB_004e8b70
    MOV EAX,dword ptr [ESP + 0x5fc4]    ; 004e8a60
    DEC EAX                             ; 004e8a67
    SHL EAX,0x2                         ; 004e8a68
    MOV ECX,EAX                         ; 004e8a6b
    SHL ECX,0x4                         ; 004e8a6d
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 004e8a70
    SUB ECX,EAX                         ; 004e8a77
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e8a79
    SUB EAX,EDX                         ; 004e8a80
    SHL EAX,0x2                         ; 004e8a82
    MOV EDX,EAX                         ; 004e8a85
    SHL EAX,0x4                         ; 004e8a87
    SUB EAX,EDX                         ; 004e8a8a
    ADD ECX,EAX                         ; 004e8a8c
    MOV EAX,dword ptr [ESP + 0x5fcc]    ; 004e8a8e
    MOV EDX,dword ptr [ESP + 0x5fc0]    ; 004e8a95
    FILD dword ptr [ECX + EAX*0x4 + 0x5bbc88] ; 004e8a9c | DAT_005bbc88
    MOV EAX,dword ptr [ESP + 0x5fd0]    ; 004e8aa3
    SHL EDX,0x5                         ; 004e8aaa
    SHL EAX,0x3                         ; 004e8aad
    XOR ECX,ECX                         ; 004e8ab0
    ADD EAX,EDX                         ; 004e8ab2
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e8ab4
    MOV dword ptr [ESP + 0x6010],ECX    ; 004e8ab8
    MOV dword ptr [ESP + 0x600c],EDX    ; 004e8abf
    FILD qword ptr [ESP + 0x600c]       ; 004e8ac6
    FDIV double ptr [EAX + 0x5bbc48]    ; 004e8acd | DAT_005bbc48
    FMULP                               ; 004e8ad3
    MOV EAX,dword ptr [ESP]             ; 004e8ad5
    MOV dword ptr [ESP + 0x6010],ECX    ; 004e8ad8
    MOV dword ptr [ESP + 0x600c],EAX    ; 004e8adf
    FILD qword ptr [ESP + 0x600c]       ; 004e8ae6
    FDIVP                               ; 004e8aed
    MOV ESI,dword ptr [ESP + 0x5fd4]    ; 004e8aef
    CALL crt_math.c_round_FUN_00563a30  ; 004e8af6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x6070]      ; 004e8afb
    TEST ESI,ESI                        ; 004e8b02
    JZ 0x004e8b0d                       ; 004e8b04
        ;   XREF to: 004e8b0d (CONDITIONAL_JUMP)  ; LAB_004e8b0d
    INC dword ptr [ESP + 0x6070]        ; 004e8b06
    MOV EAX,dword ptr [ESP + 0x6070]    ; 004e8b0d
        ;   Label: LAB_004e8b0d
    IMUL EAX,dword ptr [ESP]            ; 004e8b14
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e8b18
    MOV ECX,dword ptr [ESP + 0x6020]    ; 004e8b1b
    MOV dword ptr [ESP + 0x6070],EAX    ; 004e8b22
    MOV EAX,dword ptr [ESI + 0x532c]    ; 004e8b29
    SUB EAX,ECX                         ; 004e8b2f
    MOV EBX,dword ptr [ESP + 0x6070]    ; 004e8b31
    ADD EAX,0xc                         ; 004e8b38
    SUB EBX,EAX                         ; 004e8b3b
    MOV dword ptr [ESP + 0x6070],EBX    ; 004e8b3d
    ADD ESI,0x5320                      ; 004e8b44
    MOV EDI,dword ptr [ESP + 0x6070]    ; 004e8b4a
    XOR EBX,EBX                         ; 004e8b51
    TEST EDI,EDI                        ; 004e8b53
    JLE 0x004e8b70                      ; 004e8b55
        ;   XREF to: 004e8b70 (CONDITIONAL_JUMP)  ; LAB_004e8b70
    PUSH ESI                            ; 004e8b57
        ;   Label: LAB_004e8b57
    CALL sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0 ; 004e8b58
        ;   XREF to: 004e29d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBit_FUN_004e29d0()
    ADD ESP,0x4                         ; 004e8b5d
    INC EBX                             ; 004e8b60
    CMP EBX,dword ptr [ESP + 0x6070]    ; 004e8b61
    JL 0x004e8b57                       ; 004e8b68
        ;   XREF to: 004e8b57 (CONDITIONAL_JUMP)  ; LAB_004e8b57
    LEA EAX,[EAX]                       ; 004e8b6a
    MOV EDX,dword ptr [ESP + 0x6024]    ; 004e8b70
        ;   Label: LAB_004e8b70
    LEA ESI,[EDX*0x8 + 0x0]             ; 004e8b77
    ADD ESI,EDX                         ; 004e8b7e
    SHL ESI,0x6                         ; 004e8b80
    MOV EAX,ESI                         ; 004e8b83
    MOV ESP,EBP                         ; 004e8b85
    POP EBP                             ; 004e8b87
    POP EDI                             ; 004e8b88
    POP ESI                             ; 004e8b89
    POP EBX                             ; 004e8b8a
    RET                                 ; 004e8b8b
    CMP EAX,0x38                        ; 004e8b8c
        ;   Label: LAB_004e8b8c
    JL 0x004e8b9a                       ; 004e8b8f
        ;   XREF to: 004e8b9a (CONDITIONAL_JUMP)  ; LAB_004e8b9a
    CMP EAX,0x50                        ; 004e8b91
    JLE 0x004e87d1                      ; 004e8b94
        ;   XREF to: 004e87d1 (CONDITIONAL_JUMP)  ; LAB_004e87d1
    CMP dword ptr [ESP + 0x6040],0x30   ; 004e8b9a
        ;   Label: LAB_004e8b9a
    JZ 0x004e8bb3                       ; 004e8ba2
        ;   XREF to: 004e8bb3 (CONDITIONAL_JUMP)  ; LAB_004e8bb3
    CMP EAX,0x60                        ; 004e8ba4
    JL 0x004e8bb3                       ; 004e8ba7
        ;   XREF to: 004e8bb3 (CONDITIONAL_JUMP)  ; LAB_004e8bb3
    MOV EAX,0x1                         ; 004e8ba9
    JMP 0x004e87d3                      ; 004e8bae
        ;   XREF to: 004e87d3 (UNCONDITIONAL_JUMP)  ; LAB_004e87d3
    CMP dword ptr [ESP + 0x6040],0x20   ; 004e8bb3
        ;   Label: LAB_004e8bb3
    JZ 0x004e8bcc                       ; 004e8bbb
        ;   XREF to: 004e8bcc (CONDITIONAL_JUMP)  ; LAB_004e8bcc
    CMP EAX,0x30                        ; 004e8bbd
    JG 0x004e8bcc                       ; 004e8bc0
        ;   XREF to: 004e8bcc (CONDITIONAL_JUMP)  ; LAB_004e8bcc
    MOV EAX,0x2                         ; 004e8bc2
    JMP 0x004e87d3                      ; 004e8bc7
        ;   XREF to: 004e87d3 (UNCONDITIONAL_JUMP)  ; LAB_004e87d3
    MOV EAX,0x3                         ; 004e8bcc
        ;   Label: LAB_004e8bcc
    JMP 0x004e87d3                      ; 004e8bd1
        ;   XREF to: 004e87d3 (UNCONDITIONAL_JUMP)  ; LAB_004e87d3
    MOV EAX,0x4                         ; 004e8bd6
        ;   Label: LAB_004e8bd6
    JMP 0x004e87d3                      ; 004e8bdb
        ;   XREF to: 004e87d3 (UNCONDITIONAL_JUMP)  ; LAB_004e87d3
    MOV dword ptr [ESP + 0x6008],0x20   ; 004e8be0
        ;   Label: LAB_004e8be0
    JMP 0x004e8810                      ; 004e8beb
        ;   XREF to: 004e8810 (UNCONDITIONAL_JUMP)  ; LAB_004e8810
    CMP EAX,0x3                         ; 004e8bf0
        ;   Label: LAB_004e8bf0
    JG 0x004e8831                       ; 004e8bf3
        ;   XREF to: 004e8831 (CONDITIONAL_JUMP)  ; LAB_004e8831
    TEST EDI,EDI                        ; 004e8bf9
    JL 0x004e8831                       ; 004e8bfb
        ;   XREF to: 004e8831 (CONDITIONAL_JUMP)  ; LAB_004e8831
    CMP EDI,0x3                         ; 004e8c01
    JG 0x004e8831                       ; 004e8c04
        ;   XREF to: 004e8831 (CONDITIONAL_JUMP)  ; LAB_004e8831
    JMP 0x004e8861                      ; 004e8c0a
        ;   XREF to: 004e8861 (UNCONDITIONAL_JUMP)  ; LAB_004e8861
    MOV EAX,dword ptr [ESI + 0x18]      ; 004e8c0f
        ;   Label: LAB_004e8c0f
    JMP 0x004e8872                      ; 004e8c12
        ;   XREF to: 004e8872 (UNCONDITIONAL_JUMP)  ; LAB_004e8872
    MOV dword ptr [ESP + 0x4],0x480     ; 004e8c17
        ;   Label: LAB_004e8c17
    LEA EAX,[ESP + 0x5ff0]              ; 004e8c1f
    PUSH EAX                            ; 004e8c26
    LEA EAX,[ESP + 0x5e44]              ; 004e8c27
    PUSH EAX                            ; 004e8c2e
    MOV EDI,0x8                         ; 004e8c2f
    PUSH ESI                            ; 004e8c34
    MOV dword ptr [ESP + 0xc],EDI       ; 004e8c35
    CALL sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0 ; 004e8c39
        ;   XREF to: 004e31f0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0()
    ADD ESP,0xc                         ; 004e8c3e
    LEA EAX,[ESP + 0x5ff0]              ; 004e8c41
    PUSH EAX                            ; 004e8c48
    LEA EAX,[ESP + 0x510c]              ; 004e8c49
    PUSH EAX                            ; 004e8c50
    LEA EAX,[ESP + 0x5e48]              ; 004e8c51
    PUSH EAX                            ; 004e8c58
    LEA EAX,[ESP + 0x5d4c]              ; 004e8c59
    PUSH EAX                            ; 004e8c60
    PUSH ESI                            ; 004e8c61
    CALL sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460 ; 004e8c62
        ;   XREF to: 004e3460 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460()
    ADD ESP,0x14                        ; 004e8c67
    XOR EDX,EDX                         ; 004e8c6a
    MOV dword ptr [ESP + 0x6014],EDX    ; 004e8c6c
    MOV dword ptr [ESP + 0x6058],ESI    ; 004e8c73
    LEA EAX,[ESP + 0x5ff0]              ; 004e8c7a
        ;   Label: LAB_004e8c7a
    PUSH EAX                            ; 004e8c81
    LEA EAX,[ESP + 0x5e44]              ; 004e8c82
    PUSH EAX                            ; 004e8c89
    LEA EAX,[ESP + 0x5410]              ; 004e8c8a
    PUSH EAX                            ; 004e8c91
    MOV EDI,dword ptr [ESP + 0x6064]    ; 004e8c92
    PUSH EDI                            ; 004e8c99
    CALL sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0 ; 004e8c9a
        ;   XREF to: 004e37d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0()
    ADD ESP,0x10                        ; 004e8c9f
    LEA EAX,[ESP + 0x5ff0]              ; 004e8ca2
    PUSH EAX                            ; 004e8ca9
    LEA EAX,[ESP + 0x570c]              ; 004e8caa
    PUSH EAX                            ; 004e8cb1
    LEA EAX,[ESP + 0x5e48]              ; 004e8cb2
    PUSH EAX                            ; 004e8cb9
    LEA EAX,[ESP + 0x5414]              ; 004e8cba
    PUSH EAX                            ; 004e8cc1
    CALL sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004e3a60 ; 004e8cc2
        ;   XREF to: 004e3a60 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeLayer3SamplesSimple_FUN_004e3a60()
    ADD ESP,0x10                        ; 004e8cc7
    MOV EAX,dword ptr [ESP + 0x6014]    ; 004e8cca
    SAR EAX,0x2                         ; 004e8cd1
    PUSH EAX                            ; 004e8cd4
    LEA EAX,[ESP + 0x5ff4]              ; 004e8cd5
    PUSH EAX                            ; 004e8cdc
    LEA EAX,[ESP + 0x5110]              ; 004e8cdd
    PUSH EAX                            ; 004e8ce4
    LEA EAX,[ESP + 0x5714]              ; 004e8ce5
    PUSH EAX                            ; 004e8cec
    CALL sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004e3e70 ; 004e8ced
        ;   XREF to: 004e3e70 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004e3e70()
    ADD ESP,0x10                        ; 004e8cf2
    TEST EBX,EBX                        ; 004e8cf5
    JNZ 0x004e8d16                      ; 004e8cf7
        ;   XREF to: 004e8d16 (CONDITIONAL_JUMP)  ; LAB_004e8d16
    MOV EDI,dword ptr [ESP + 0x6014]    ; 004e8cf9
        ;   Label: LAB_004e8cf9
    INC EDI                             ; 004e8d00
    MOV dword ptr [ESP + 0x6014],EDI    ; 004e8d01
    CMP EDI,0xc                         ; 004e8d08
    JL 0x004e8c7a                       ; 004e8d0b
        ;   XREF to: 004e8c7a (CONDITIONAL_JUMP)  ; LAB_004e8c7a
    JMP 0x004e8a52                      ; 004e8d11
        ;   XREF to: 004e8a52 (UNCONDITIONAL_JUMP)  ; LAB_004e8a52
    XOR EAX,EAX                         ; 004e8d16
        ;   Label: LAB_004e8d16
    MOV dword ptr [ESP + 0x60a8],EAX    ; 004e8d18
    MOV dword ptr [ESP + 0x60a4],EAX    ; 004e8d1f
    MOV ECX,dword ptr [ESP + 0x6018]    ; 004e8d26
        ;   Label: LAB_004e8d26
    XOR ESI,ESI                         ; 004e8d2d
    TEST ECX,ECX                        ; 004e8d2f
    JLE 0x004e8d96                      ; 004e8d31
        ;   XREF to: 004e8d96 (CONDITIONAL_JUMP)  ; LAB_004e8d96
    MOV EDI,dword ptr [ESP + 0x60a4]    ; 004e8d33
    LEA EAX,[ESP + 0x5708]              ; 004e8d3a
    MOV EDX,dword ptr [ESP + 0x60a8]    ; 004e8d41
    ADD EDI,EAX                         ; 004e8d48
    LEA EAX,[ESP + 0x2d08]              ; 004e8d4a
    ADD EAX,EDX                         ; 004e8d51
    MOV dword ptr [ESP + 0x60a0],EAX    ; 004e8d53
    MOV EAX,dword ptr [ESP + 0x60a0]    ; 004e8d5a
        ;   Label: LAB_004e8d5a
    PUSH EAX                            ; 004e8d61
    PUSH ESI                            ; 004e8d62
    PUSH EDI                            ; 004e8d63
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e8d64
    PUSH EDX                            ; 004e8d67
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070 ; 004e8d68
        ;   XREF to: 004e4070 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070()
    ADD ESP,0x10                        ; 004e8d6d
    INC ESI                             ; 004e8d70
    MOV ECX,dword ptr [ESP + 0x60a0]    ; 004e8d71
    ADD EDI,0x180                       ; 004e8d78
    ADD ECX,0x480                       ; 004e8d7e
    MOV EAX,dword ptr [ESP + 0x6018]    ; 004e8d84
    MOV dword ptr [ESP + 0x60a0],ECX    ; 004e8d8b
    CMP ESI,EAX                         ; 004e8d92
    JL 0x004e8d5a                       ; 004e8d94
        ;   XREF to: 004e8d5a (CONDITIONAL_JUMP)  ; LAB_004e8d5a
    MOV ECX,dword ptr [ESP + 0x60a8]    ; 004e8d96
        ;   Label: LAB_004e8d96
    MOV EDX,dword ptr [ESP + 0x60a4]    ; 004e8d9d
    ADD ECX,0x40                        ; 004e8da4
    ADD EDX,0x80                        ; 004e8da7
    MOV dword ptr [ESP + 0x60a8],ECX    ; 004e8dad
    MOV dword ptr [ESP + 0x60a4],EDX    ; 004e8db4
    CMP ECX,0xc0                        ; 004e8dbb
    JNZ 0x004e8d26                      ; 004e8dc1
        ;   XREF to: 004e8d26 (CONDITIONAL_JUMP)  ; LAB_004e8d26
    XOR EDI,EDI                         ; 004e8dc7
    MOV dword ptr [ESP + 0x60ac],EDI    ; 004e8dc9
    MOV dword ptr [ESP + 0x6014],EDI    ; 004e8dd0
    MOV EDI,dword ptr [ESP + 0x60ac]    ; 004e8dd7
        ;   Label: LAB_004e8dd7
    XOR ESI,ESI                         ; 004e8dde
    MOV ECX,dword ptr [ESP + 0x6018]    ; 004e8de0
        ;   Label: LAB_004e8de0
    XOR EAX,EAX                         ; 004e8de7
    TEST ECX,ECX                        ; 004e8de9
    JLE 0x004e8e11                      ; 004e8deb
        ;   XREF to: 004e8e11 (CONDITIONAL_JUMP)  ; LAB_004e8e11
    LEA ECX,[ESI + EDI*0x1]             ; 004e8ded
    ADD EBX,0x2                         ; 004e8df0
        ;   Label: LAB_004e8df0
    MOV DX,word ptr [ESP + ECX*0x1 + 0x2d08] ; 004e8df3
    INC EAX                             ; 004e8dfb
    MOV word ptr [EBX + -0x2],DX        ; 004e8dfc
    MOV EDX,dword ptr [ESP + 0x6018]    ; 004e8e00
    ADD ECX,0x480                       ; 004e8e07
    CMP EAX,EDX                         ; 004e8e0d
    JL 0x004e8df0                       ; 004e8e0f
        ;   XREF to: 004e8df0 (CONDITIONAL_JUMP)  ; LAB_004e8df0
    ADD ESI,0x2                         ; 004e8e11
        ;   Label: LAB_004e8e11
    CMP ESI,0x40                        ; 004e8e14
    JNZ 0x004e8de0                      ; 004e8e17
        ;   XREF to: 004e8de0 (CONDITIONAL_JUMP)  ; LAB_004e8de0
    MOV ECX,dword ptr [ESP + 0x60ac]    ; 004e8e19
    ADD ECX,ESI                         ; 004e8e20
    MOV dword ptr [ESP + 0x60ac],ECX    ; 004e8e22
    CMP ECX,0xc0                        ; 004e8e29
    JZ 0x004e8cf9                       ; 004e8e2f
        ;   XREF to: 004e8cf9 (CONDITIONAL_JUMP)  ; LAB_004e8cf9
    JMP 0x004e8dd7                      ; 004e8e35
        ;   XREF to: 004e8dd7 (UNCONDITIONAL_JUMP)  ; LAB_004e8dd7
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 004e8e37
        ;   Label: LAB_004e8e37
    MOV ECX,0x8                         ; 004e8e3e
    MOV ESI,dword ptr [EAX]             ; 004e8e43
    MOV dword ptr [ESP],ECX             ; 004e8e45
    TEST ESI,ESI                        ; 004e8e48
    JZ 0x004e8fa9                       ; 004e8e4a
        ;   XREF to: 004e8fa9 (CONDITIONAL_JUMP)  ; LAB_004e8fa9
    MOV dword ptr [ESP + 0x4],0x480     ; 004e8e50
    LEA EAX,[ESP + 0x5ff0]              ; 004e8e58
        ;   Label: LAB_004e8e58
    PUSH EAX                            ; 004e8e5f
    LEA EAX,[ESP + 0x5bfc]              ; 004e8e60
    PUSH EAX                            ; 004e8e67
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e8e68
    ADD EAX,0x5320                      ; 004e8e6b
    PUSH EAX                            ; 004e8e70
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e8e71
    PUSH ECX                            ; 004e8e74
    MOV dword ptr [ESP + 0x6074],EAX    ; 004e8e75
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320 ; 004e8e7c
        ;   XREF to: 004e4320 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320()
    ADD ESP,0x10                        ; 004e8e81
    LEA ESI,[ESP + 0x5ff0]              ; 004e8e84
    SUB ESP,0x1c                        ; 004e8e8b
    MOV ECX,0x7                         ; 004e8e8e
    MOV EDI,ESP                         ; 004e8e93
    MOVSD.REP ES:EDI,ESI                ; 004e8e95
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0 ; 004e8e97
        ;   XREF to: 004e77d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0()
    ADD ESP,0x1c                        ; 004e8e9c
    MOV ESI,EAX                         ; 004e8e9f
    TEST EAX,EAX                        ; 004e8ea1
    JLE 0x004e8ed0                      ; 004e8ea3
        ;   XREF to: 004e8ed0 (CONDITIONAL_JUMP)  ; LAB_004e8ed0
    MOV EDI,dword ptr [ESP + 0x6064]    ; 004e8ea5
    PUSH 0x8                            ; 004e8eac
        ;   Label: LAB_004e8eac
    PUSH 0x8                            ; 004e8eae
    PUSH EDI                            ; 004e8eb0
    CALL sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0 ; 004e8eb1
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CFileBitStream_readBits_FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e8eb6
    PUSH EAX                            ; 004e8eb9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e8eba
    PUSH EDX                            ; 004e8ebd
    DEC ESI                             ; 004e8ebe
    CALL sound_mp3.cpp_CMP3Decoder_putByte_FUN_004e2de0 ; 004e8ebf
        ;   XREF to: 004e2de0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_putByte_FUN_004e2de0()
    ADD ESP,0xc                         ; 004e8ec4
    TEST ESI,ESI                        ; 004e8ec7
    JG 0x004e8eac                       ; 004e8ec9
        ;   XREF to: 004e8eac (CONDITIONAL_JUMP)  ; LAB_004e8eac
    LEA EAX,[EAX]                       ; 004e8ecb
    MOV ECX,ECX                         ; 004e8ece
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e8ed0
        ;   Label: LAB_004e8ed0
    PUSH ECX                            ; 004e8ed3
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e8ed4
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e8ed9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e8edc
    PUSH EDI                            ; 004e8edf
    MOV ESI,EAX                         ; 004e8ee0
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e8ee2
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e8ee7
    XOR EDX,EDX                         ; 004e8eea
    MOV ECX,dword ptr [ESP]             ; 004e8eec
    DIV ECX                             ; 004e8eef
    SHR ESI,0x3                         ; 004e8ef1
    TEST EDX,EDX                        ; 004e8ef4
    JZ 0x004e8f07                       ; 004e8ef6
        ;   XREF to: 004e8f07 (CONDITIONAL_JUMP)  ; LAB_004e8f07
    MOV EAX,ECX                         ; 004e8ef8
    SUB EAX,EDX                         ; 004e8efa
    PUSH EAX                            ; 004e8efc
    PUSH EDI                            ; 004e8efd
    INC ESI                             ; 004e8efe
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e8eff
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e8f04
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e8f07
        ;   Label: LAB_004e8f07
    MOV EAX,dword ptr [EAX + 0x534c]    ; 004e8f0a
    MOV EDX,dword ptr [ESP + 0x5bf8]    ; 004e8f10
    SUB EAX,ESI                         ; 004e8f17
    SUB EAX,EDX                         ; 004e8f19
    MOV dword ptr [ESP + 0x6060],EAX    ; 004e8f1b
    CMP ESI,0x1000                      ; 004e8f22
    JLE 0x004e8f4d                      ; 004e8f28
        ;   XREF to: 004e8f4d (CONDITIONAL_JUMP)  ; LAB_004e8f4d
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e8f2a
    MOV ESI,dword ptr [ECX + 0x534c]    ; 004e8f2d
    PUSH 0x1000                         ; 004e8f33
    SUB ESI,0x1000                      ; 004e8f38
    PUSH ECX                            ; 004e8f3e
    MOV dword ptr [ECX + 0x534c],ESI    ; 004e8f3f
    CALL sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0 ; 004e8f45
        ;   XREF to: 004e2ea0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0()
    ADD ESP,0x8                         ; 004e8f4a
    MOV ECX,0x7                         ; 004e8f4d
        ;   Label: LAB_004e8f4d
    SUB ESP,0x1c                        ; 004e8f52
    LEA ESI,[ESP + 0x600c]              ; 004e8f55
    MOV EDI,ESP                         ; 004e8f5c
    MOVSD.REP ES:EDI,ESI                ; 004e8f5e
    CALL sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0 ; 004e8f60
        ;   XREF to: 004e77d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_calculateMainDataSize_FUN_004e77d0()
    ADD ESP,0x1c                        ; 004e8f65
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e8f68
    MOV EDI,dword ptr [EDX + 0x534c]    ; 004e8f6b
    ADD EDI,EAX                         ; 004e8f71
    MOV EAX,dword ptr [ESP + 0x6060]    ; 004e8f73
    MOV dword ptr [EDX + 0x534c],EDI    ; 004e8f7a
    TEST EAX,EAX                        ; 004e8f80
    JL 0x004e8fb6                       ; 004e8f82
        ;   XREF to: 004e8fb6 (CONDITIONAL_JUMP)  ; LAB_004e8fb6
    MOV ESI,dword ptr [ESP + 0x6060]    ; 004e8f84
        ;   Label: LAB_004e8f84
    TEST ESI,ESI                        ; 004e8f8b
    JLE 0x004e8fe4                      ; 004e8f8d
        ;   XREF to: 004e8fe4 (CONDITIONAL_JUMP)  ; LAB_004e8fe4
    PUSH 0x8                            ; 004e8f8f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e8f91
    PUSH EDX                            ; 004e8f94
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0 ; 004e8f95
        ;   XREF to: 004e2cf0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readBits_FUN_004e2cf0()
    ADD ESP,0x8                         ; 004e8f9a
    LEA ECX,[ESI + -0x1]                ; 004e8f9d
    MOV dword ptr [ESP + 0x6060],ECX    ; 004e8fa0
    JMP 0x004e8f84                      ; 004e8fa7
        ;   XREF to: 004e8f84 (UNCONDITIONAL_JUMP)  ; LAB_004e8f84
    MOV dword ptr [ESP + 0x4],0x240     ; 004e8fa9
        ;   Label: LAB_004e8fa9
    JMP 0x004e8e58                      ; 004e8fb1
        ;   XREF to: 004e8e58 (UNCONDITIONAL_JUMP)  ; LAB_004e8e58
    MOV EAX,dword ptr [ESP + 0x601c]    ; 004e8fb6
        ;   Label: LAB_004e8fb6
    DEC EAX                             ; 004e8fbd
    PUSH EAX                            ; 004e8fbe
    MOV EDX,0x58b9c0                    ; 004e8fbf | = "..\\sound\\mp3.cpp"
    MOV ECX,0xf90                       ; 004e8fc4
    PUSH 0x58b9d1                       ; 004e8fc9 | = "Not enough main data to decode frame %d."
    MOV dword ptr [0x01cc4800],EDX      ; 004e8fce | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e8fd4 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e8fda
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e8fdf
    JMP 0x004e8f84                      ; 004e8fe2
        ;   XREF to: 004e8f84 (UNCONDITIONAL_JUMP)  ; LAB_004e8f84
    TEST EBX,EBX                        ; 004e8fe4
        ;   Label: LAB_004e8fe4
    JZ 0x004e8a52                       ; 004e8fe6
        ;   XREF to: 004e8a52 (CONDITIONAL_JUMP)  ; LAB_004e8a52
    XOR EDI,EDI                         ; 004e8fec
    MOV EAX,dword ptr [ESP + 0x6024]    ; 004e8fee
    MOV dword ptr [ESP + 0x605c],EDI    ; 004e8ff5
    TEST EAX,EAX                        ; 004e8ffc
    JLE 0x004e8a52                      ; 004e8ffe
        ;   XREF to: 004e8a52 (CONDITIONAL_JUMP)  ; LAB_004e8a52
    LEA EAX,[ESP + 0x5c10]              ; 004e9004
    MOV dword ptr [ESP + 0x609c],EDI    ; 004e900b
    MOV dword ptr [ESP + 0x6098],EAX    ; 004e9012
    MOV EDI,dword ptr [ESP + 0x6018]    ; 004e9019
        ;   Label: LAB_004e9019
    XOR ESI,ESI                         ; 004e9020
    TEST EDI,EDI                        ; 004e9022
    JLE 0x004e9124                      ; 004e9024
        ;   XREF to: 004e9124 (CONDITIONAL_JUMP)  ; LAB_004e9124
    LEA EAX,[ESP + 0x1208]              ; 004e902a
    MOV EDI,dword ptr [ESP + 0x609c]    ; 004e9031
    MOV dword ptr [ESP + 0x6078],EAX    ; 004e9038
    ADD EDI,0x10                        ; 004e903f
    LEA EAX,[ESP + 0x5c00]              ; 004e9042
    ADD EDI,EAX                         ; 004e9049
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e904b
        ;   Label: LAB_004e904b
    PUSH EDX                            ; 004e904e
    CALL sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0 ; 004e904f
        ;   XREF to: 004e2ce0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0()
    ADD ESP,0x4                         ; 004e9054
    MOV dword ptr [ESP + 0x6068],EAX    ; 004e9057
    MOV EAX,dword ptr [ESP + 0x5ff0]    ; 004e905e
    CMP dword ptr [EAX],0x0             ; 004e9065
    JZ 0x004e944b                       ; 004e9068
        ;   XREF to: 004e944b (CONDITIONAL_JUMP)  ; LAB_004e944b
    LEA EAX,[ESP + 0x5ff0]              ; 004e906e
    PUSH EAX                            ; 004e9075
    PUSH ESI                            ; 004e9076
    MOV ECX,dword ptr [ESP + 0x6064]    ; 004e9077
    PUSH ECX                            ; 004e907e
    LEA EAX,[ESP + 0x5c04]              ; 004e907f
    PUSH EAX                            ; 004e9086
    LEA EAX,[ESP + 0x5a18]              ; 004e9087
    PUSH EAX                            ; 004e908e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e908f
    PUSH EAX                            ; 004e9092
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0 ; 004e9093
        ;   XREF to: 004e48a0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0()
    ADD ESP,0x18                        ; 004e9098
        ;   Label: LAB_004e9098
    LEA EAX,[ESP + 0x5ff0]              ; 004e909b
    PUSH EAX                            ; 004e90a2
    MOV EAX,dword ptr [ESP + 0x606c]    ; 004e90a3
    PUSH EAX                            ; 004e90aa
    MOV EDX,dword ptr [ESP + 0x6064]    ; 004e90ab
    PUSH EDX                            ; 004e90b2
    PUSH ESI                            ; 004e90b3
    LEA EAX,[ESP + 0x5c08]              ; 004e90b4
    PUSH EAX                            ; 004e90bb
    LEA EAX,[ESP + 0x241c]              ; 004e90bc
    PUSH EAX                            ; 004e90c3
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e90c4
    PUSH ECX                            ; 004e90c7
    CALL sound_mp3.cpp_FUN_004e5200     ; 004e90c8
        ;   XREF to: 004e5200 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_004e5200()
    ADD ESP,0x1c                        ; 004e90cd
    LEA EAX,[ESP + 0x5ff0]              ; 004e90d0
    PUSH EAX                            ; 004e90d7
    PUSH ESI                            ; 004e90d8
    PUSH EDI                            ; 004e90d9
    LEA EAX,[ESP + 0x5a14]              ; 004e90da
    PUSH EAX                            ; 004e90e1
    MOV EAX,dword ptr [ESP + 0x6088]    ; 004e90e2
    PUSH EAX                            ; 004e90e9
    LEA EAX,[ESP + 0x241c]              ; 004e90ea
    PUSH EAX                            ; 004e90f1
    CALL sound_mp3.cpp_requantizeLayer3Samples_FUN_004e58d0 ; 004e90f2
        ;   XREF to: 004e58d0 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_requantizeLayer3Samples_FUN_004e58d0()
    ADD ESP,0x18                        ; 004e90f7
    INC ESI                             ; 004e90fa
    MOV EDX,dword ptr [ESP + 0x6078]    ; 004e90fb
    ADD EDI,0xa0                        ; 004e9102
    ADD EDX,0x900                       ; 004e9108
    MOV ECX,dword ptr [ESP + 0x6018]    ; 004e910e
    MOV dword ptr [ESP + 0x6078],EDX    ; 004e9115
    CMP ESI,ECX                         ; 004e911c
    JL 0x004e904b                       ; 004e911e
        ;   XREF to: 004e904b (CONDITIONAL_JUMP)  ; LAB_004e904b
    LEA EAX,[ESP + 0x5ff0]              ; 004e9124
        ;   Label: LAB_004e9124
    PUSH EAX                            ; 004e912b
    MOV ESI,dword ptr [ESP + 0x609c]    ; 004e912c
    PUSH ESI                            ; 004e9133
    LEA EAX,[ESP + 0x5a10]              ; 004e9134
    PUSH EAX                            ; 004e913b
    LEA EAX,[ESP + 0x14]                ; 004e913c
    PUSH EAX                            ; 004e9140
    LEA EAX,[ESP + 0x1218]              ; 004e9141
    PUSH EAX                            ; 004e9148
    CALL sound_mp3.cpp_FUN_004e6160     ; 004e9149
        ;   XREF to: 004e6160 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_FUN_004e6160()
    ADD ESP,0x14                        ; 004e914e
    XOR EDI,EDI                         ; 004e9151
    MOV EAX,dword ptr [ESP + 0x6018]    ; 004e9153
    MOV dword ptr [ESP + 0x60b4],EDI    ; 004e915a
    TEST EAX,EAX                        ; 004e9161
    JLE 0x004e93a4                      ; 004e9163
        ;   XREF to: 004e93a4 (CONDITIONAL_JUMP)  ; LAB_004e93a4
    MOV EAX,dword ptr [ESP + 0x609c]    ; 004e9169
    LEA EDX,[ESP + 0x5c00]              ; 004e9170
    ADD EAX,0x10                        ; 004e9177
    ADD EAX,EDX                         ; 004e917a
    LEA EDX,[ESP + 0x8]                 ; 004e917c
    MOV dword ptr [ESP + 0x6084],EAX    ; 004e9180
    MOV dword ptr [ESP + 0x608c],EAX    ; 004e9187
    LEA EAX,[ESP + 0x2d08]              ; 004e918e
    MOV dword ptr [ESP + 0x6088],EDX    ; 004e9195
    MOV dword ptr [ESP + 0x6090],EAX    ; 004e919c
    LEA EAX,[ESP + 0x5ff0]              ; 004e91a3
        ;   Label: LAB_004e91a3
    PUSH EAX                            ; 004e91aa
    MOV ESI,dword ptr [ESP + 0x6090]    ; 004e91ab
    PUSH ESI                            ; 004e91b2
    LEA EAX,[ESP + 0x3f10]              ; 004e91b3
    PUSH EAX                            ; 004e91ba
    MOV EDI,dword ptr [ESP + 0x6094]    ; 004e91bb
    PUSH EDI                            ; 004e91c2
    CALL sound_mp3.cpp_reorderShortBlockSamples_FUN_004e5d80 ; 004e91c3
        ;   XREF to: 004e5d80 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_reorderShortBlockSamples_FUN_004e5d80()
    ADD ESP,0x10                        ; 004e91c8
    LEA EAX,[ESP + 0x5ff0]              ; 004e91cb
    PUSH EAX                            ; 004e91d2
    PUSH ESI                            ; 004e91d3
    LEA EAX,[ESP + 0x3610]              ; 004e91d4
    PUSH EAX                            ; 004e91db
    LEA EAX,[ESP + 0x3f14]              ; 004e91dc
    PUSH EAX                            ; 004e91e3
    CALL sound_mp3.cpp_antiAliasingButterfly_FUN_004e7030 ; 004e91e4
        ;   XREF to: 004e7030 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_antiAliasingButterfly_FUN_004e7030()
    ADD ESP,0x10                        ; 004e91e9
    MOV EAX,dword ptr [ESP + 0x6084]    ; 004e91ec
    LEA EDI,[ESP + 0x4808]              ; 004e91f3
    MOV dword ptr [ESP + 0x606c],EAX    ; 004e91fa
    LEA EAX,[ESP + 0x3608]              ; 004e9201
    XOR ESI,ESI                         ; 004e9208
    MOV dword ptr [ESP + 0x607c],EAX    ; 004e920a
    LEA EAX,[ESP + 0x5ff0]              ; 004e9211
        ;   Label: LAB_004e9211
    PUSH EAX                            ; 004e9218
    MOV EDX,dword ptr [ESP + 0x6070]    ; 004e9219
    PUSH EDX                            ; 004e9220
    MOV ECX,dword ptr [ESP + 0x60bc]    ; 004e9221
    PUSH ECX                            ; 004e9228
    PUSH ESI                            ; 004e9229
    PUSH EDI                            ; 004e922a
    MOV EAX,dword ptr [ESP + 0x6090]    ; 004e922b
    PUSH EAX                            ; 004e9232
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e9233
    PUSH EDX                            ; 004e9236
    CALL sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720 ; 004e9237
        ;   XREF to: 004e7720 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720()
    ADD ESP,0x1c                        ; 004e923c
    MOV ECX,dword ptr [ESP + 0x607c]    ; 004e923f
    INC ESI                             ; 004e9246
    ADD ECX,0x48                        ; 004e9247
    ADD EDI,0x48                        ; 004e924a
    MOV dword ptr [ESP + 0x607c],ECX    ; 004e924d
    CMP ESI,0x20                        ; 004e9254
    JL 0x004e9211                       ; 004e9257
        ;   XREF to: 004e9211 (CONDITIONAL_JUMP)  ; LAB_004e9211
    XOR ESI,ESI                         ; 004e9259
    MOV dword ptr [ESP + 0x6080],ESI    ; 004e925b
    MOV dword ptr [ESP + 0x60b8],ESI    ; 004e9262
    MOV EAX,dword ptr [ESP + 0x60b8]    ; 004e9269
        ;   Label: LAB_004e9269
    MOV EDX,EAX                         ; 004e9270
    MOV ESI,0x2                         ; 004e9272
    SAR EDX,0x1f                        ; 004e9277
    IDIV ESI                            ; 004e927a
    XOR ECX,ECX                         ; 004e927c
    MOV ESI,dword ptr [ESP + 0x6080]    ; 004e927e
    MOV EDI,EDX                         ; 004e9285
    TEST EDI,EDI                        ; 004e9287
        ;   Label: LAB_004e9287
    JZ 0x004e92b8                       ; 004e9289
        ;   XREF to: 004e92b8 (CONDITIONAL_JUMP)  ; LAB_004e92b8
    MOV dword ptr [ESP + 0x60bc],0x2    ; 004e928b
    MOV EDX,ECX                         ; 004e9296
    MOV EAX,ECX                         ; 004e9298
    SAR EDX,0x1f                        ; 004e929a
    IDIV dword ptr [ESP + 0x60bc]       ; 004e929d
    TEST EDX,EDX                        ; 004e92a4
    JZ 0x004e92b8                       ; 004e92a6
        ;   XREF to: 004e92b8 (CONDITIONAL_JUMP)  ; LAB_004e92b8
    FLD float ptr [ESP + ESI*0x1 + 0x4808] ; 004e92a8
    FCHS                                ; 004e92af
    FSTP float ptr [ESP + ESI*0x1 + 0x4808] ; 004e92b1
    INC ECX                             ; 004e92b8
        ;   Label: LAB_004e92b8
    ADD ESI,0x48                        ; 004e92b9
    CMP ECX,0x20                        ; 004e92bc
    JL 0x004e9287                       ; 004e92bf
        ;   XREF to: 004e9287 (CONDITIONAL_JUMP)  ; LAB_004e9287
    MOV EDX,dword ptr [ESP + 0x60b8]    ; 004e92c1
    MOV EAX,dword ptr [ESP + 0x6080]    ; 004e92c8
    INC EDX                             ; 004e92cf
    ADD EAX,0x4                         ; 004e92d0
    MOV dword ptr [ESP + 0x60b8],EDX    ; 004e92d3
    MOV dword ptr [ESP + 0x6080],EAX    ; 004e92da
    CMP EDX,0x12                        ; 004e92e1
    JL 0x004e9269                       ; 004e92e4
        ;   XREF to: 004e9269 (CONDITIONAL_JUMP)  ; LAB_004e9269
    MOV EDI,dword ptr [ESP + 0x6090]    ; 004e92e6
    XOR ESI,ESI                         ; 004e92ed
    MOV ECX,ESI                         ; 004e92ef
        ;   Label: LAB_004e92ef
    XOR EAX,EAX                         ; 004e92f1
    ADD EAX,0x4                         ; 004e92f3
        ;   Label: LAB_004e92f3
    FLD float ptr [ESP + ECX*0x1 + 0x4808] ; 004e92f6
    ADD ECX,0x48                        ; 004e92fd
    FSTP float ptr [ESP + EAX*0x1 + 0x5f3c] ; 004e9300
    CMP EAX,0x80                        ; 004e9307
    JNZ 0x004e92f3                      ; 004e930c
        ;   XREF to: 004e92f3 (CONDITIONAL_JUMP)  ; LAB_004e92f3
    PUSH EDI                            ; 004e930e
    MOV EAX,dword ptr [ESP + 0x60b8]    ; 004e930f
    PUSH EAX                            ; 004e9316
    LEA EAX,[ESP + 0x5f48]              ; 004e9317
    PUSH EAX                            ; 004e931e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e931f
    PUSH EDX                            ; 004e9322
    ADD ESI,0x4                         ; 004e9323
    ADD EDI,0x40                        ; 004e9326
    CALL sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070 ; 004e9329
        ;   XREF to: 004e4070 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070()
    ADD ESP,0x10                        ; 004e932e
    CMP ESI,0x48                        ; 004e9331
    JNZ 0x004e92ef                      ; 004e9334
        ;   XREF to: 004e92ef (CONDITIONAL_JUMP)  ; LAB_004e92ef
    MOV EDX,dword ptr [ESP + 0x6084]    ; 004e9336
    MOV ECX,dword ptr [ESP + 0x6088]    ; 004e933d
    MOV ESI,dword ptr [ESP + 0x608c]    ; 004e9344
    MOV EDI,dword ptr [ESP + 0x6090]    ; 004e934b
    MOV EAX,dword ptr [ESP + 0x60b4]    ; 004e9352
    ADD EDX,0xa0                        ; 004e9359
    ADD ECX,0x900                       ; 004e935f
    ADD ESI,0xa0                        ; 004e9365
    ADD EDI,0x480                       ; 004e936b
    INC EAX                             ; 004e9371
    MOV dword ptr [ESP + 0x6084],EDX    ; 004e9372
    MOV dword ptr [ESP + 0x6088],ECX    ; 004e9379
    MOV dword ptr [ESP + 0x608c],ESI    ; 004e9380
    MOV dword ptr [ESP + 0x6090],EDI    ; 004e9387
    MOV EDX,dword ptr [ESP + 0x6018]    ; 004e938e
    MOV dword ptr [ESP + 0x60b4],EAX    ; 004e9395
    CMP EAX,EDX                         ; 004e939c
    JL 0x004e91a3                       ; 004e939e
        ;   XREF to: 004e91a3 (CONDITIONAL_JUMP)  ; LAB_004e91a3
    XOR ECX,ECX                         ; 004e93a4
        ;   Label: LAB_004e93a4
    MOV dword ptr [ESP + 0x6094],ECX    ; 004e93a6
    MOV EDI,dword ptr [ESP + 0x6094]    ; 004e93ad
        ;   Label: LAB_004e93ad
    XOR ESI,ESI                         ; 004e93b4
    MOV EAX,dword ptr [ESP + 0x6018]    ; 004e93b6
        ;   Label: LAB_004e93b6
    XOR ECX,ECX                         ; 004e93bd
    TEST EAX,EAX                        ; 004e93bf
    JLE 0x004e93e6                      ; 004e93c1
        ;   XREF to: 004e93e6 (CONDITIONAL_JUMP)  ; LAB_004e93e6
    LEA EAX,[ESI + EDI*0x1]             ; 004e93c3
    ADD EBX,0x2                         ; 004e93c6
        ;   Label: LAB_004e93c6
    MOV DX,word ptr [ESP + EAX*0x1 + 0x2d08] ; 004e93c9
    INC ECX                             ; 004e93d1
    MOV word ptr [EBX + -0x2],DX        ; 004e93d2
    MOV EDX,dword ptr [ESP + 0x6018]    ; 004e93d6
    ADD EAX,0x480                       ; 004e93dd
    CMP ECX,EDX                         ; 004e93e2
    JL 0x004e93c6                       ; 004e93e4
        ;   XREF to: 004e93c6 (CONDITIONAL_JUMP)  ; LAB_004e93c6
    ADD ESI,0x2                         ; 004e93e6
        ;   Label: LAB_004e93e6
    CMP ESI,0x40                        ; 004e93e9
    JNZ 0x004e93b6                      ; 004e93ec
        ;   XREF to: 004e93b6 (CONDITIONAL_JUMP)  ; LAB_004e93b6
    MOV ECX,dword ptr [ESP + 0x6094]    ; 004e93ee
    ADD ECX,ESI                         ; 004e93f5
    MOV dword ptr [ESP + 0x6094],ECX    ; 004e93f7
    CMP ECX,0x480                       ; 004e93fe
    JNZ 0x004e93ad                      ; 004e9404
        ;   XREF to: 004e93ad (CONDITIONAL_JUMP)  ; LAB_004e93ad
    MOV ESI,dword ptr [ESP + 0x6098]    ; 004e9406
    MOV EDI,dword ptr [ESP + 0x609c]    ; 004e940d
    MOV EAX,dword ptr [ESP + 0x605c]    ; 004e9414
    MOV EDX,dword ptr [ESP + 0x6024]    ; 004e941b
    ADD ESI,0x48                        ; 004e9422
    ADD EDI,0x48                        ; 004e9425
    INC EAX                             ; 004e9428
    MOV dword ptr [ESP + 0x6098],ESI    ; 004e9429
    MOV dword ptr [ESP + 0x609c],EDI    ; 004e9430
    MOV dword ptr [ESP + 0x605c],EAX    ; 004e9437
    CMP EAX,EDX                         ; 004e943e
    JGE 0x004e8a52                      ; 004e9440
        ;   XREF to: 004e8a52 (CONDITIONAL_JUMP)  ; LAB_004e8a52
    JMP 0x004e9019                      ; 004e9446
        ;   XREF to: 004e9019 (UNCONDITIONAL_JUMP)  ; LAB_004e9019
    LEA EAX,[ESP + 0x5ff0]              ; 004e944b
        ;   Label: LAB_004e944b
    PUSH EAX                            ; 004e9452
    PUSH ESI                            ; 004e9453
    MOV EAX,dword ptr [ESP + 0x6064]    ; 004e9454
    PUSH EAX                            ; 004e945b
    LEA EAX,[ESP + 0x5c04]              ; 004e945c
    PUSH EAX                            ; 004e9463
    LEA EAX,[ESP + 0x5a18]              ; 004e9464
    PUSH EAX                            ; 004e946b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e946c
    PUSH EDX                            ; 004e946f
    CALL sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000 ; 004e9470
        ;   XREF to: 004e5000 (UNCONDITIONAL_CALL)  ; undefined sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000()
    JMP 0x004e9098                      ; 004e9475
        ;   XREF to: 004e9098 (UNCONDITIONAL_JUMP)  ; LAB_004e9098
    CMP EDI,0x2                         ; 004e947a
        ;   Label: LAB_004e947a
    JBE 0x004e8c17                      ; 004e947d
        ;   XREF to: 004e8c17 (CONDITIONAL_JUMP)  ; LAB_004e8c17
    CMP EDI,0x3                         ; 004e9483
    JZ 0x004e8e37                       ; 004e9486
        ;   XREF to: 004e8e37 (CONDITIONAL_JUMP)  ; LAB_004e8e37
    JMP 0x004e8a52                      ; 004e948c
        ;   XREF to: 004e8a52 (UNCONDITIONAL_JUMP)  ; LAB_004e8a52

