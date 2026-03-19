; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file
; int *            Stack[0xc]:4   frame_count_out
; Local Variables:
; int[100]         Stack[-0x248]:400  local_248
; undefined4[8]    Stack[-0xb8]:32  local_b8
; int              Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; float            Stack[-0x84]:4  local_84
; float            Stack[-0x80]:4  local_80
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; float            Stack[-0x70]:4  local_70
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; SBoneData *      Stack[-0x34]:4  local_34
; SBoneData *      Stack[-0x30]:4  local_30
; int *            Stack[-0x2c]:4  local_2c
; SBoneData *      Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; SBoneData *      Stack[-0x20]:4  local_20
; SBoneData *      Stack[-0x1c]:4  local_1c
; SBoneData *      Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 at 0058a43f
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c235
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 00592f26
;
; Referenced Globals:
;   TerminatedCString s_d_d_0064a2e7
;   TerminatedCString s_core_skeledit_cpp_0064a2ee
;   TerminatedCString s_Too_bony_0064a303
;   TerminatedCString s_d_0064a30d
;   TerminatedCString s_core_skeledit_cpp_0064a319
;   TerminatedCString s_CBoneStructure_readBONhe_0064a32e
;   TerminatedCString s_core_skeledit_cpp_0064a362
;   TerminatedCString s_Hell_froze_while_shuffli_0064a377
;   TerminatedCString s_core_skeledit_cpp_0064a39b
;   TerminatedCString s_Hell_froze_while_shuffli_0064a3b0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[100][30] g_BoneNameBuffer
;   undefined4 g_BoneNameBuffer[0][1]
;   undefined4 g_BoneNameBuffer[0][2]
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    NOP                                 ; 0058a4a0
        ;   Label: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
    NOP                                 ; 0058a4a1
    NOP                                 ; 0058a4a2
    NOP                                 ; 0058a4a3
    NOP                                 ; 0058a4a4
    NOP                                 ; 0058a4a5
    NOP                                 ; 0058a4a6
    NOP                                 ; 0058a4a7
    NOP                                 ; 0058a4a8
    NOP                                 ; 0058a4a9
    PUSH EBX                            ; 0058a4aa
    PUSH ESI                            ; 0058a4ab
    PUSH EDI                            ; 0058a4ac
    PUSH EBP                            ; 0058a4ad
    SUB ESP,0x238                       ; 0058a4ae
    MOV EBX,0x1                         ; 0058a4b4
    MOV ESI,dword ptr [ESP + 0x250]     ; 0058a4b9
    PUSH ESI                            ; 0058a4c0
        ;   Label: LAB_0058a4c0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058a4c1
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058a4c6
    TEST EAX,EAX                        ; 0058a4c9
    JL 0x0058a4d7                       ; 0058a4cb
        ;   XREF to: 0058a4d7 (CONDITIONAL_JUMP)  ; LAB_0058a4d7
    CMP EAX,0xa                         ; 0058a4cd
    JNZ 0x0058a4c0                      ; 0058a4d0
        ;   XREF to: 0058a4c0 (CONDITIONAL_JUMP)  ; LAB_0058a4c0
    DEC EBX                             ; 0058a4d2
    TEST EBX,EBX                        ; 0058a4d3
    JG 0x0058a4c0                       ; 0058a4d5
        ;   XREF to: 0058a4c0 (CONDITIONAL_JUMP)  ; LAB_0058a4c0
    MOV EDX,dword ptr [ESP + 0x254]     ; 0058a4d7
        ;   Label: LAB_0058a4d7
    PUSH EDX                            ; 0058a4de
    MOV ECX,dword ptr [ESP + 0x250]     ; 0058a4df
    PUSH ECX                            ; 0058a4e6
    PUSH 0x64a2e7                       ; 0058a4e7 | = "%d,%d\n"
    MOV EBX,dword ptr [ESP + 0x25c]     ; 0058a4ec
    PUSH EBX                            ; 0058a4f3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a4f4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0058a4f9
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a4fc
    CMP dword ptr [EAX],0x64            ; 0058a503
    JG 0x0058a98a                       ; 0058a506
        ;   XREF to: 0058a98a (CONDITIONAL_JUMP)  ; LAB_0058a98a
    MOV EBX,0x1                         ; 0058a50c
        ;   Label: LAB_0058a50c
    MOV ESI,dword ptr [ESP + 0x250]     ; 0058a511
    PUSH ESI                            ; 0058a518
        ;   Label: LAB_0058a518
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058a519
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058a51e
    TEST EAX,EAX                        ; 0058a521
    JL 0x0058a52f                       ; 0058a523
        ;   XREF to: 0058a52f (CONDITIONAL_JUMP)  ; LAB_0058a52f
    CMP EAX,0xa                         ; 0058a525
    JNZ 0x0058a518                      ; 0058a528
        ;   XREF to: 0058a518 (CONDITIONAL_JUMP)  ; LAB_0058a518
    DEC EBX                             ; 0058a52a
    TEST EBX,EBX                        ; 0058a52b
    JG 0x0058a518                       ; 0058a52d
        ;   XREF to: 0058a518 (CONDITIONAL_JUMP)  ; LAB_0058a518
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a52f
        ;   Label: LAB_0058a52f
    MOV EDX,dword ptr [EAX]             ; 0058a536
    XOR EBP,EBP                         ; 0058a538
    TEST EDX,EDX                        ; 0058a53a
    JLE 0x0058a5d0                      ; 0058a53c
        ;   XREF to: 0058a5d0 (CONDITIONAL_JUMP)  ; LAB_0058a5d0
    ADD EAX,0x4                         ; 0058a542
    MOV dword ptr [ESP + 0x214],EAX     ; 0058a545
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a54c
    ADD EAX,0x24                        ; 0058a553
    MOV EBX,0x3659830                   ; 0058a556 | g_BoneNameBuffer
    MOV dword ptr [ESP + 0x21c],EAX     ; 0058a55b
    IMUL ESI,EBP,0x84                   ; 0058a562
        ;   Label: LAB_0058a562
    MOV EDI,dword ptr [ESP + 0x21c]     ; 0058a568
    MOV ECX,dword ptr [ESP + 0x214]     ; 0058a56f
    PUSH EDI                            ; 0058a576
    ADD ESI,ECX                         ; 0058a577
    PUSH ESI                            ; 0058a579
    PUSH 0x64a30d                       ; 0058a57a | = "\"%[^\"]\",%d\n"
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0058a57f
    PUSH EAX                            ; 0058a586
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058a587
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0058a58c
    MOV EDI,EBX                         ; 0058a58f
    ADD EBX,0x1e                        ; 0058a591
    PUSH EDI                            ; 0058a594 | g_BoneNameBuffer
    MOV AL,byte ptr [ESI]               ; 0058a595
        ;   Label: LAB_0058a595
    MOV byte ptr [EDI],AL               ; 0058a597 | g_BoneNameBuffer | g_BoneNameBuffer[0][2]
    CMP AL,0x0                          ; 0058a599
    JZ 0x0058a5ad                       ; 0058a59b
        ;   XREF to: 0058a5ad (CONDITIONAL_JUMP)  ; LAB_0058a5ad
    MOV AL,byte ptr [ESI + 0x1]         ; 0058a59d
    ADD ESI,0x2                         ; 0058a5a0
    MOV byte ptr [EDI + 0x1],AL         ; 0058a5a3 | g_BoneNameBuffer[0][1] | g_BoneNameBuffer[0][3]
    ADD EDI,0x2                         ; 0058a5a6
    CMP AL,0x0                          ; 0058a5a9
    JNZ 0x0058a595                      ; 0058a5ab
        ;   XREF to: 0058a595 (CONDITIONAL_JUMP)  ; LAB_0058a595
    POP EDI                             ; 0058a5ad
        ;   Label: LAB_0058a5ad
    MOV EDX,dword ptr [ESP + 0x21c]     ; 0058a5ae
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a5b5
    INC EBP                             ; 0058a5bc
    ADD EDX,0x84                        ; 0058a5bd
    MOV ECX,dword ptr [EAX]             ; 0058a5c3
    MOV dword ptr [ESP + 0x21c],EDX     ; 0058a5c5
    CMP EBP,ECX                         ; 0058a5cc
    JL 0x0058a562                       ; 0058a5ce
        ;   XREF to: 0058a562 (CONDITIONAL_JUMP)  ; LAB_0058a562
    MOV EBX,0x1                         ; 0058a5d0
        ;   Label: LAB_0058a5d0
    MOV ESI,dword ptr [ESP + 0x250]     ; 0058a5d5
    PUSH ESI                            ; 0058a5dc
        ;   Label: LAB_0058a5dc
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058a5dd
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058a5e2
    TEST EAX,EAX                        ; 0058a5e5
    JL 0x0058a5f3                       ; 0058a5e7
        ;   XREF to: 0058a5f3 (CONDITIONAL_JUMP)  ; LAB_0058a5f3
    CMP EAX,0xa                         ; 0058a5e9
    JNZ 0x0058a5dc                      ; 0058a5ec
        ;   XREF to: 0058a5dc (CONDITIONAL_JUMP)  ; LAB_0058a5dc
    DEC EBX                             ; 0058a5ee
    TEST EBX,EBX                        ; 0058a5ef
    JG 0x0058a5dc                       ; 0058a5f1
        ;   XREF to: 0058a5dc (CONDITIONAL_JUMP)  ; LAB_0058a5dc
    MOV EAX,dword ptr [ESP + 0x250]     ; 0058a5f3
        ;   Label: LAB_0058a5f3
    TEST byte ptr [EAX + 0xc],0x20      ; 0058a5fa
    JZ 0x0058a623                       ; 0058a5fe
        ;   XREF to: 0058a623 (CONDITIONAL_JUMP)  ; LAB_0058a623
    MOV EBX,0x64a319                    ; 0058a600 | = "..\\core\\skeledit.cpp"
    MOV ESI,0x2bb                       ; 0058a605
    PUSH 0x64a32e                       ; 0058a60a | = "CBoneStructure::readBONheader - error..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0058a60f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0058a615 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058a61b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058a620
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a623
        ;   Label: LAB_0058a623
    MOV EDI,dword ptr [EAX]             ; 0058a62a
    XOR EBX,EBX                         ; 0058a62c
    TEST EDI,EDI                        ; 0058a62e
    JLE 0x0058a66f                      ; 0058a630
        ;   XREF to: 0058a66f (CONDITIONAL_JUMP)  ; LAB_0058a66f
    MOV ECX,dword ptr [ESP + 0x24c]     ; 0058a632
    XOR EBP,EBP                         ; 0058a639
    XOR ESI,ESI                         ; 0058a63b
        ;   Label: LAB_0058a63b
    MOV EAX,EBX                         ; 0058a63d
    MOV dword ptr [ESP + EBP*0x1],ESI   ; 0058a63f
    TEST EBX,EBX                        ; 0058a642
    JL 0x0058a65e                       ; 0058a644
        ;   XREF to: 0058a65e (CONDITIONAL_JUMP)  ; LAB_0058a65e
    MOV EDX,EBP                         ; 0058a646
    IMUL EAX,EAX,0x84                   ; 0058a648
        ;   Label: LAB_0058a648
    MOV EDI,dword ptr [ESP + EDX*0x1]   ; 0058a64e
    INC EDI                             ; 0058a651
    ADD EAX,ECX                         ; 0058a652
    MOV dword ptr [ESP + EDX*0x1],EDI   ; 0058a654
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058a657
    TEST EAX,EAX                        ; 0058a65a
    JGE 0x0058a648                      ; 0058a65c
        ;   XREF to: 0058a648 (CONDITIONAL_JUMP)  ; LAB_0058a648
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a65e
        ;   Label: LAB_0058a65e
    INC EBX                             ; 0058a665
    MOV EDX,dword ptr [EAX]             ; 0058a666
    ADD EBP,0x4                         ; 0058a668
    CMP EBX,EDX                         ; 0058a66b
    JL 0x0058a63b                       ; 0058a66d
        ;   XREF to: 0058a63b (CONDITIONAL_JUMP)  ; LAB_0058a63b
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a66f
        ;   Label: LAB_0058a66f
    MOV EAX,dword ptr [EAX]             ; 0058a676
    DEC EAX                             ; 0058a678
    MOV dword ptr [ESP + 0x224],EAX     ; 0058a679
    TEST EAX,EAX                        ; 0058a680
    JL 0x0058a8ed                       ; 0058a682
        ;   XREF to: 0058a8ed (CONDITIONAL_JUMP)  ; LAB_0058a8ed
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a688
    ADD EAX,0x4                         ; 0058a68f
    MOV dword ptr [ESP + 0x218],EAX     ; 0058a692
    MOV dword ptr [ESP + 0x220],EAX     ; 0058a699
    XOR EBP,EBP                         ; 0058a6a0
        ;   Label: LAB_0058a6a0
    MOV EAX,dword ptr [ESP + 0x224]     ; 0058a6a2
    MOV dword ptr [ESP + 0x234],EBP     ; 0058a6a9
    TEST EAX,EAX                        ; 0058a6b0
    JLE 0x0058a8d6                      ; 0058a6b2
        ;   XREF to: 0058a8d6 (CONDITIONAL_JUMP)  ; LAB_0058a8d6
    MOV EAX,dword ptr [ESP + 0x218]     ; 0058a6b8
    MOV EBP,ESP                         ; 0058a6bf
    MOV dword ptr [ESP + 0x228],EAX     ; 0058a6c1
    ADD EAX,0x84                        ; 0058a6c8
    MOV EBX,dword ptr [ESP + 0x220]     ; 0058a6cd
    MOV dword ptr [ESP + 0x22c],EAX     ; 0058a6d4
    MOV EAX,dword ptr [ESP + 0x220]     ; 0058a6db
    ADD EBP,0x4                         ; 0058a6e2
    ADD EAX,0x84                        ; 0058a6e5
    ADD EBX,0x24                        ; 0058a6ea
    MOV dword ptr [ESP + 0x230],EAX     ; 0058a6ed
    MOV EDX,dword ptr [ESP + 0x234]     ; 0058a6f4
        ;   Label: LAB_0058a6f4
    MOV EAX,dword ptr [ESP + EDX*0x4]   ; 0058a6fb
    SUB EAX,dword ptr [ESP + EDX*0x4 + 0x4] ; 0058a6fe
    JNZ 0x0058a71c                      ; 0058a702
        ;   XREF to: 0058a71c (CONDITIONAL_JUMP)  ; LAB_0058a71c
    MOV ESI,dword ptr [ESP + 0x22c]     ; 0058a704
    PUSH ESI                            ; 0058a70b
    MOV EDI,dword ptr [ESP + 0x22c]     ; 0058a70c
    PUSH EDI                            ; 0058a713
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0058a714
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0058a719
    TEST EAX,EAX                        ; 0058a71c
        ;   Label: LAB_0058a71c
    JLE 0x0058a874                      ; 0058a71e
        ;   XREF to: 0058a874 (CONDITIONAL_JUMP)  ; LAB_0058a874
    IMUL EDX,dword ptr [ESP + 0x234],0x84 ; 0058a724
    MOV ECX,dword ptr [ESP + 0x220]     ; 0058a72f
    LEA EDI,[ESP + 0x190]               ; 0058a736
    ADD EDX,ECX                         ; 0058a73d
    MOV ECX,0x7                         ; 0058a73f
    MOV ESI,EDX                         ; 0058a744
    MOVSD.REP ES:EDI,ESI                ; 0058a746
    MOVSW ES:EDI,ESI                    ; 0058a748
    MOV EAX,dword ptr [EDX + 0x20]      ; 0058a74a
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0058a74d
    MOV EAX,dword ptr [EBX]             ; 0058a754
    MOV dword ptr [ESP + 0x1b4],EAX     ; 0058a756
    MOV EAX,dword ptr [EBX + 0x4]       ; 0058a75d
    MOV dword ptr [ESP + 0x1b8],EAX     ; 0058a760
    MOV EAX,dword ptr [EBX + 0x8]       ; 0058a767
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0058a76a
    MOV EAX,dword ptr [EBX + 0xc]       ; 0058a771
    MOV dword ptr [ESP + 0x1c0],EAX     ; 0058a774
    MOV EAX,dword ptr [EBX + 0x10]      ; 0058a77b
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0058a77e
    MOV EAX,dword ptr [EBX + 0x14]      ; 0058a785
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0058a788
    MOV EAX,dword ptr [EBX + 0x18]      ; 0058a78f
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0058a792
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0058a799
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0058a79c
    MOV EAX,dword ptr [EBX + 0x20]      ; 0058a7a3
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0058a7a6
    MOV EAX,dword ptr [EBX + 0x24]      ; 0058a7ad
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0058a7b0
    MOV EAX,dword ptr [EBX + 0x28]      ; 0058a7b7
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0058a7ba
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0058a7c1
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0058a7c4
    MOV EAX,dword ptr [EBX + 0x30]      ; 0058a7cb
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0058a7ce
    MOV EAX,dword ptr [EBX + 0x34]      ; 0058a7d5
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0058a7d8
    MOV EAX,dword ptr [EBX + 0x38]      ; 0058a7df
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0058a7e2
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0058a7e9
    MOV dword ptr [ESP + 0x1f0],EAX     ; 0058a7ec
    MOV EAX,dword ptr [EBX + 0x40]      ; 0058a7f3
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0058a7f6
    MOV EAX,dword ptr [EBX + 0x44]      ; 0058a7fd
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0058a800
    MOV EAX,dword ptr [EBX + 0x48]      ; 0058a807
    MOV dword ptr [ESP + 0x1fc],EAX     ; 0058a80a
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0058a811
    MOV dword ptr [ESP + 0x200],EAX     ; 0058a814
    MOV EAX,dword ptr [EBX + 0x50]      ; 0058a81b
    MOV ECX,0x21                        ; 0058a81e
    MOV dword ptr [ESP + 0x204],EAX     ; 0058a823
    MOV EAX,dword ptr [EBX + 0x54]      ; 0058a82a
    MOV ESI,dword ptr [ESP + 0x230]     ; 0058a82d
    MOV dword ptr [ESP + 0x208],EAX     ; 0058a834
    MOV EAX,dword ptr [EBX + 0x58]      ; 0058a83b
    MOV EDI,EDX                         ; 0058a83e
    MOV dword ptr [ESP + 0x20c],EAX     ; 0058a840
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0058a847
    MOVSD.REP ES:EDI,ESI                ; 0058a84a
    MOV ECX,0x21                        ; 0058a84c
    MOV EDI,dword ptr [ESP + 0x230]     ; 0058a851
    LEA ESI,[ESP + 0x190]               ; 0058a858
    MOV dword ptr [ESP + 0x210],EAX     ; 0058a85f
    MOVSD.REP ES:EDI,ESI                ; 0058a866
    MOV EAX,dword ptr [EBP]             ; 0058a868
    MOV EDX,dword ptr [EBP + -0x4]      ; 0058a86b
    MOV dword ptr [EBP + -0x4],EAX      ; 0058a86e
    MOV dword ptr [EBP],EDX             ; 0058a871
    MOV EAX,dword ptr [ESP + 0x228]     ; 0058a874
        ;   Label: LAB_0058a874
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0058a87b
    MOV ECX,dword ptr [ESP + 0x230]     ; 0058a882
    MOV ESI,dword ptr [ESP + 0x234]     ; 0058a889
    MOV EDI,dword ptr [ESP + 0x224]     ; 0058a890
    ADD EBP,0x4                         ; 0058a897
    ADD EBX,0x84                        ; 0058a89a
    ADD EAX,0x84                        ; 0058a8a0
    ADD EDX,0x84                        ; 0058a8a5
    ADD ECX,0x84                        ; 0058a8ab
    INC ESI                             ; 0058a8b1
    MOV dword ptr [ESP + 0x228],EAX     ; 0058a8b2
    MOV dword ptr [ESP + 0x22c],EDX     ; 0058a8b9
    MOV dword ptr [ESP + 0x230],ECX     ; 0058a8c0
    MOV dword ptr [ESP + 0x234],ESI     ; 0058a8c7
    CMP ESI,EDI                         ; 0058a8ce
    JL 0x0058a6f4                       ; 0058a8d0
        ;   XREF to: 0058a6f4 (CONDITIONAL_JUMP)  ; LAB_0058a6f4
    MOV EBX,dword ptr [ESP + 0x224]     ; 0058a8d6
        ;   Label: LAB_0058a8d6
    DEC EBX                             ; 0058a8dd
    MOV dword ptr [ESP + 0x224],EBX     ; 0058a8de
    TEST EBX,EBX                        ; 0058a8e5
    JGE 0x0058a6a0                      ; 0058a8e7
        ;   XREF to: 0058a6a0 (CONDITIONAL_JUMP)  ; LAB_0058a6a0
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a8ed
        ;   Label: LAB_0058a8ed
    MOV EDI,dword ptr [EAX]             ; 0058a8f4
    XOR EBX,EBX                         ; 0058a8f6
    TEST EDI,EDI                        ; 0058a8f8
    JLE 0x0058a936                      ; 0058a8fa
        ;   XREF to: 0058a936 (CONDITIONAL_JUMP)  ; LAB_0058a936
    MOV ESI,0x3659830                   ; 0058a8fc | g_BoneNameBuffer
    MOV EDI,dword ptr [ESP + 0x24c]     ; 0058a901
    MOV EBP,EAX                         ; 0058a908
    PUSH ESI                            ; 0058a90a | g_BoneNameBuffer | g_BoneNameBuffer[1][0]
        ;   Label: LAB_0058a90a
    PUSH EDI                            ; 0058a90b
    CALL core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30 ; 0058a90c
        ;   XREF to: 0058ac30 (UNCONDITIONAL_CALL)  ; int core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30(CBoneStructure * this_ptr, char * bone_name)
    ADD ESP,0x8                         ; 0058a911
    MOV dword ptr [EBP + 0x3394],EAX    ; 0058a914
    TEST EAX,EAX                        ; 0058a91a
    JL 0x0058a9b2                       ; 0058a91c
        ;   XREF to: 0058a9b2 (CONDITIONAL_JUMP)  ; LAB_0058a9b2
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a922
        ;   Label: LAB_0058a922
    ADD EBP,0x4                         ; 0058a929
    INC EBX                             ; 0058a92c
    MOV EDX,dword ptr [EAX]             ; 0058a92d
    ADD ESI,0x1e                        ; 0058a92f
    CMP EBX,EDX                         ; 0058a932
    JL 0x0058a90a                       ; 0058a934
        ;   XREF to: 0058a90a (CONDITIONAL_JUMP)  ; LAB_0058a90a
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a936
        ;   Label: LAB_0058a936
    MOV ECX,dword ptr [EAX]             ; 0058a93d
    XOR EBP,EBP                         ; 0058a93f
    TEST ECX,ECX                        ; 0058a941
    JLE 0x0058a97f                      ; 0058a943
        ;   XREF to: 0058a97f (CONDITIONAL_JUMP)  ; LAB_0058a97f
    MOV EBX,EAX                         ; 0058a945
    MOV EDI,dword ptr [EBX + 0x24]      ; 0058a947
        ;   Label: LAB_0058a947
    TEST EDI,EDI                        ; 0058a94a
    JL 0x0058a96b                       ; 0058a94c
        ;   XREF to: 0058a96b (CONDITIONAL_JUMP)  ; LAB_0058a96b
    MOV EDX,dword ptr [ESP + 0x24c]     ; 0058a94e
    LEA EAX,[EDI*0x4 + 0x0]             ; 0058a955
    ADD EAX,EDX                         ; 0058a95c
    MOV EAX,dword ptr [EAX + 0x3394]    ; 0058a95e
    MOV dword ptr [EBX + 0x24],EAX      ; 0058a964
    CMP EBP,EAX                         ; 0058a967
    JLE 0x0058a9da                      ; 0058a969
        ;   XREF to: 0058a9da (CONDITIONAL_JUMP)  ; LAB_0058a9da
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058a96b
        ;   Label: LAB_0058a96b
    INC EBP                             ; 0058a972
    MOV ESI,dword ptr [EAX]             ; 0058a973
    ADD EBX,0x84                        ; 0058a975
    CMP EBP,ESI                         ; 0058a97b
    JL 0x0058a947                       ; 0058a97d
        ;   XREF to: 0058a947 (CONDITIONAL_JUMP)  ; LAB_0058a947
    ADD ESP,0x238                       ; 0058a97f
        ;   Label: LAB_0058a97f
    POP EBP                             ; 0058a985
    POP EDI                             ; 0058a986
    POP ESI                             ; 0058a987
    POP EBX                             ; 0058a988
    RET                                 ; 0058a989
    MOV EDI,0x64a2ee                    ; 0058a98a | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058a98a
    MOV EBP,0x2a6                       ; 0058a98f
    PUSH 0x64a303                       ; 0058a994 | = "Too bony!"
    MOV dword ptr [0x02f0ca48],EDI      ; 0058a999 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0058a99f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058a9a5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058a9aa
    JMP 0x0058a50c                      ; 0058a9ad
        ;   XREF to: 0058a50c (UNCONDITIONAL_JUMP)  ; LAB_0058a50c
    MOV EDX,0x64a362                    ; 0058a9b2 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058a9b2
    MOV ECX,0x2e8                       ; 0058a9b7
    PUSH 0x64a377                       ; 0058a9bc | = "Hell froze while shuffling bones..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0058a9c1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058a9c7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058a9cd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058a9d2
    JMP 0x0058a922                      ; 0058a9d5
        ;   XREF to: 0058a922 (UNCONDITIONAL_JUMP)  ; LAB_0058a922
    MOV ESI,0x64a39b                    ; 0058a9da | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058a9da
    MOV EDI,0x2f0                       ; 0058a9df
    PUSH 0x64a3b0                       ; 0058a9e4 | = "Hell froze while shuffling parent bon..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0058a9e9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0058a9ef | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058a9f5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058a9fa
    JMP 0x0058a96b                      ; 0058a9fd
        ;   XREF to: 0058a96b (UNCONDITIONAL_JUMP)  ; LAB_0058a96b

