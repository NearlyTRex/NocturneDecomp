; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_loadIni_FUN_005897b0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_00649d0a
;   TerminatedCString s_rt_00649d1f
;   TerminatedCString s_d_00649d22
;   TerminatedCString s_core_skeledit_cpp_00649d26
;   TerminatedCString s_Deleting_old_s_file_00649d3b
;   TerminatedCString s_core_skeledit_cpp_00649d51
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   TerminatedCString s_skeledit_ini_00681868
;   CEditorTools g_CEditorToolsInstance
;   char[264] g_SkeleditLastPOSImported
;   undefined4 DAT_03670849
;   char[264] g_SkeleditLastMOTImported
;   undefined4 DAT_03670951
;   char[260] g_SkeleditLastTestSkeletonDir
;   undefined4 DAT_03670a59
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_remove_FUN_005ff9d0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH 0x28                           ; 005897b0
        ;   Label: core_skeledit.cpp_loadIni_FUN_005897b0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 005897b5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 005897ba
    PUSH ESI                            ; 005897bb
    PUSH EDI                            ; 005897bc
    SUB ESP,0x4                         ; 005897bd
    PUSH 0x124                          ; 005897c0
    PUSH 0x649d0a                       ; 005897c5 | = "..\\core\\skeledit.cpp"
    PUSH 0x649d1f                       ; 005897ca | = "rt"
    PUSH 0x0                            ; 005897cf
    PUSH 0x681868                       ; 005897d1 | = "skeledit.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005897d6
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005897db
    MOV EDI,EAX                         ; 005897de
    TEST EAX,EAX                        ; 005897e0
    JZ 0x00589936                       ; 005897e2
        ;   XREF to: 00589936 (CONDITIONAL_JUMP)  ; LAB_00589936
    MOV EBX,0x1                         ; 005897e8
    MOV ESI,EAX                         ; 005897ed
    PUSH ESI                            ; 005897ef
        ;   Label: LAB_005897ef
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005897f0
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005897f5
    TEST EAX,EAX                        ; 005897f8
    JL 0x00589806                       ; 005897fa
        ;   XREF to: 00589806 (CONDITIONAL_JUMP)  ; LAB_00589806
    CMP EAX,0xa                         ; 005897fc
    JNZ 0x005897ef                      ; 005897ff
        ;   XREF to: 005897ef (CONDITIONAL_JUMP)  ; LAB_005897ef
    DEC EBX                             ; 00589801
    TEST EBX,EBX                        ; 00589802
    JG 0x005897ef                       ; 00589804
        ;   XREF to: 005897ef (CONDITIONAL_JUMP)  ; LAB_005897ef
    MOV EAX,ESP                         ; 00589806
        ;   Label: LAB_00589806
    PUSH EAX                            ; 00589808
    PUSH 0x649d22                       ; 00589809 | = "%d\n"
    PUSH EDI                            ; 0058980e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058980f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00589814
    MOV EDX,dword ptr [ESP]             ; 00589817
    CMP EDX,0x1                         ; 0058981a
    JNZ 0x0058993d                      ; 0058981d
        ;   XREF to: 0058993d (CONDITIONAL_JUMP)  ; LAB_0058993d
    MOV EBX,EDX                         ; 00589823
    MOV ESI,EDI                         ; 00589825
    PUSH ESI                            ; 00589827
        ;   Label: LAB_00589827
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589828
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058982d
    TEST EAX,EAX                        ; 00589830
    JL 0x0058983e                       ; 00589832
        ;   XREF to: 0058983e (CONDITIONAL_JUMP)  ; LAB_0058983e
    CMP EAX,0xa                         ; 00589834
    JNZ 0x00589827                      ; 00589837
        ;   XREF to: 00589827 (CONDITIONAL_JUMP)  ; LAB_00589827
    DEC EBX                             ; 00589839
    TEST EBX,EBX                        ; 0058983a
    JG 0x00589827                       ; 0058983c
        ;   XREF to: 00589827 (CONDITIONAL_JUMP)  ; LAB_00589827
    MOV EBX,0x3670848                   ; 0058983e | g_SkeleditLastPOSImported
        ;   Label: LAB_0058983e
    XOR AH,AH                           ; 00589843
    MOV ESI,EDI                         ; 00589845
    MOV byte ptr [0x03670848],AH        ; 00589847 | g_SkeleditLastPOSImported
    PUSH ESI                            ; 0058984d
        ;   Label: LAB_0058984d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058984e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589853
    TEST EAX,EAX                        ; 00589856
    JL 0x00589863                       ; 00589858
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)  ; LAB_00589863
    CMP EAX,0xa                         ; 0058985a
    JNZ 0x0058997d                      ; 0058985d
        ;   XREF to: 0058997d (CONDITIONAL_JUMP)  ; LAB_0058997d
    MOV EBX,0x1                         ; 00589863
        ;   Label: LAB_00589863
    MOV ESI,EDI                         ; 00589868
    PUSH ESI                            ; 0058986a
        ;   Label: LAB_0058986a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058986b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589870
    TEST EAX,EAX                        ; 00589873
    JL 0x00589881                       ; 00589875
        ;   XREF to: 00589881 (CONDITIONAL_JUMP)  ; LAB_00589881
    CMP EAX,0xa                         ; 00589877
    JNZ 0x0058986a                      ; 0058987a
        ;   XREF to: 0058986a (CONDITIONAL_JUMP)  ; LAB_0058986a
    DEC EBX                             ; 0058987c
    TEST EBX,EBX                        ; 0058987d
    JG 0x0058986a                       ; 0058987f
        ;   XREF to: 0058986a (CONDITIONAL_JUMP)  ; LAB_0058986a
    MOV EBX,0x3670950                   ; 00589881 | g_SkeleditLastMOTImported
        ;   Label: LAB_00589881
    XOR DL,DL                           ; 00589886
    MOV ESI,EDI                         ; 00589888
    MOV byte ptr [0x03670950],DL        ; 0058988a | g_SkeleditLastMOTImported
    PUSH ESI                            ; 00589890
        ;   Label: LAB_00589890
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589891
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589896
    TEST EAX,EAX                        ; 00589899
    JL 0x005898a6                       ; 0058989b
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)  ; LAB_005898a6
    CMP EAX,0xa                         ; 0058989d
    JNZ 0x005899d5                      ; 005898a0
        ;   XREF to: 005899d5 (CONDITIONAL_JUMP)  ; LAB_005899d5
    MOV EBX,0x1                         ; 005898a6
        ;   Label: LAB_005898a6
    MOV ESI,EDI                         ; 005898ab
    PUSH ESI                            ; 005898ad
        ;   Label: LAB_005898ad
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005898ae
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005898b3
    TEST EAX,EAX                        ; 005898b6
    JL 0x005898c4                       ; 005898b8
        ;   XREF to: 005898c4 (CONDITIONAL_JUMP)  ; LAB_005898c4
    CMP EAX,0xa                         ; 005898ba
    JNZ 0x005898ad                      ; 005898bd
        ;   XREF to: 005898ad (CONDITIONAL_JUMP)  ; LAB_005898ad
    DEC EBX                             ; 005898bf
    TEST EBX,EBX                        ; 005898c0
    JG 0x005898ad                       ; 005898c2
        ;   XREF to: 005898ad (CONDITIONAL_JUMP)  ; LAB_005898ad
    MOV EBX,0x3670a58                   ; 005898c4 | g_SkeleditLastTestSkeletonDir
        ;   Label: LAB_005898c4
    XOR DH,DH                           ; 005898c9
    MOV ESI,EDI                         ; 005898cb
    MOV byte ptr [0x03670a58],DH        ; 005898cd | g_SkeleditLastTestSkeletonDir
    PUSH ESI                            ; 005898d3
        ;   Label: LAB_005898d3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005898d4
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005898d9
    TEST EAX,EAX                        ; 005898dc
    JL 0x00589923                       ; 005898de
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)  ; LAB_00589923
    CMP EAX,0xa                         ; 005898e0
    JZ 0x00589923                       ; 005898e3
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)  ; LAB_00589923
    CMP EAX,0x22                        ; 005898e5
    JNZ 0x005898d3                      ; 005898e8
        ;   XREF to: 005898d3 (CONDITIONAL_JUMP)  ; LAB_005898d3
    PUSH ESI                            ; 005898ea
        ;   Label: LAB_005898ea
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005898eb
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005898f0
    MOV EDX,EAX                         ; 005898f3
    TEST EAX,EAX                        ; 005898f5
    JL 0x00589923                       ; 005898f7
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)  ; LAB_00589923
    CMP EAX,0xa                         ; 005898f9
    JZ 0x00589923                       ; 005898fc
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)  ; LAB_00589923
    CMP EAX,0x22                        ; 005898fe
    JNZ 0x00589a2d                      ; 00589901
        ;   XREF to: 00589a2d (CONDITIONAL_JUMP)  ; LAB_00589a2d
    MOV EBX,0x1                         ; 00589907
    PUSH ESI                            ; 0058990c
        ;   Label: LAB_0058990c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058990d
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589912
    TEST EAX,EAX                        ; 00589915
    JL 0x00589923                       ; 00589917
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)  ; LAB_00589923
    CMP EAX,0xa                         ; 00589919
    JNZ 0x0058990c                      ; 0058991c
        ;   XREF to: 0058990c (CONDITIONAL_JUMP)  ; LAB_0058990c
    DEC EBX                             ; 0058991e
    TEST EBX,EBX                        ; 0058991f
    JG 0x0058990c                       ; 00589921
        ;   XREF to: 0058990c (CONDITIONAL_JUMP)  ; LAB_0058990c
    PUSH 0x13f                          ; 00589923
        ;   Label: LAB_00589923
    PUSH 0x649d51                       ; 00589928 | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 0058992d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058992e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00589933
    ADD ESP,0x4                         ; 00589936
        ;   Label: LAB_00589936
    POP EDI                             ; 00589939
    POP ESI                             ; 0058993a
    POP EBX                             ; 0058993b
    RET                                 ; 0058993c
    PUSH 0x12d                          ; 0058993d
        ;   Label: LAB_0058993d
    PUSH 0x649d26                       ; 00589942 | = "..\\core\\skeledit.cpp"
    PUSH EDI                            ; 00589947
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00589948
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058994d
    PUSH 0x681868                       ; 00589950 | = "skeledit.ini"
    PUSH 0x649d3b                       ; 00589955 | = "Deleting old %s file."
    MOV ECX,dword ptr [0x00678a60]      ; 0058995a | g_CEditorToolsPtr
    PUSH ECX                            ; 00589960 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589961
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00589966
    PUSH 0x681868                       ; 00589969 | = "skeledit.ini"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0058996e
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00589973
    ADD ESP,0x4                         ; 00589976
    POP EDI                             ; 00589979
    POP ESI                             ; 0058997a
    POP EBX                             ; 0058997b
    RET                                 ; 0058997c
    CMP EAX,0x22                        ; 0058997d
        ;   Label: LAB_0058997d
    JNZ 0x0058984d                      ; 00589980
        ;   XREF to: 0058984d (CONDITIONAL_JUMP)  ; LAB_0058984d
    PUSH ESI                            ; 00589986
        ;   Label: LAB_00589986
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589987
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058998c
    MOV EDX,EAX                         ; 0058998f
    TEST EAX,EAX                        ; 00589991
    JL 0x00589863                       ; 00589993
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)  ; LAB_00589863
    CMP EAX,0xa                         ; 00589999
    JZ 0x00589863                       ; 0058999c
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)  ; LAB_00589863
    CMP EAX,0x22                        ; 005899a2
    JNZ 0x005899cc                      ; 005899a5
        ;   XREF to: 005899cc (CONDITIONAL_JUMP)  ; LAB_005899cc
    MOV EBX,0x1                         ; 005899a7
    PUSH ESI                            ; 005899ac
        ;   Label: LAB_005899ac
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005899ad
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005899b2
    TEST EAX,EAX                        ; 005899b5
    JL 0x00589863                       ; 005899b7
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)  ; LAB_00589863
    CMP EAX,0xa                         ; 005899bd
    JNZ 0x005899ac                      ; 005899c0
        ;   XREF to: 005899ac (CONDITIONAL_JUMP)  ; LAB_005899ac
    DEC EBX                             ; 005899c2
    TEST EBX,EBX                        ; 005899c3
    JG 0x005899ac                       ; 005899c5
        ;   XREF to: 005899ac (CONDITIONAL_JUMP)  ; LAB_005899ac
    JMP 0x00589863                      ; 005899c7
        ;   XREF to: 00589863 (UNCONDITIONAL_JUMP)  ; LAB_00589863
    INC EBX                             ; 005899cc
        ;   Label: LAB_005899cc
    MOV byte ptr [EBX + -0x1],DL        ; 005899cd | g_SkeleditLastPOSImported
    MOV byte ptr [EBX],0x0              ; 005899d0 | DAT_03670849
    JMP 0x00589986                      ; 005899d3
        ;   XREF to: 00589986 (UNCONDITIONAL_JUMP)  ; LAB_00589986
    CMP EAX,0x22                        ; 005899d5
        ;   Label: LAB_005899d5
    JNZ 0x00589890                      ; 005899d8
        ;   XREF to: 00589890 (CONDITIONAL_JUMP)  ; LAB_00589890
    PUSH ESI                            ; 005899de
        ;   Label: LAB_005899de
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005899df
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005899e4
    MOV EDX,EAX                         ; 005899e7
    TEST EAX,EAX                        ; 005899e9
    JL 0x005898a6                       ; 005899eb
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)  ; LAB_005898a6
    CMP EAX,0xa                         ; 005899f1
    JZ 0x005898a6                       ; 005899f4
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)  ; LAB_005898a6
    CMP EAX,0x22                        ; 005899fa
    JNZ 0x00589a24                      ; 005899fd
        ;   XREF to: 00589a24 (CONDITIONAL_JUMP)  ; LAB_00589a24
    MOV EBX,0x1                         ; 005899ff
    PUSH ESI                            ; 00589a04
        ;   Label: LAB_00589a04
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589a05
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589a0a
    TEST EAX,EAX                        ; 00589a0d
    JL 0x005898a6                       ; 00589a0f
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)  ; LAB_005898a6
    CMP EAX,0xa                         ; 00589a15
    JNZ 0x00589a04                      ; 00589a18
        ;   XREF to: 00589a04 (CONDITIONAL_JUMP)  ; LAB_00589a04
    DEC EBX                             ; 00589a1a
    TEST EBX,EBX                        ; 00589a1b
    JG 0x00589a04                       ; 00589a1d
        ;   XREF to: 00589a04 (CONDITIONAL_JUMP)  ; LAB_00589a04
    JMP 0x005898a6                      ; 00589a1f
        ;   XREF to: 005898a6 (UNCONDITIONAL_JUMP)  ; LAB_005898a6
    INC EBX                             ; 00589a24
        ;   Label: LAB_00589a24
    MOV byte ptr [EBX + -0x1],DL        ; 00589a25 | g_SkeleditLastMOTImported
    MOV byte ptr [EBX],0x0              ; 00589a28 | DAT_03670951
    JMP 0x005899de                      ; 00589a2b
        ;   XREF to: 005899de (UNCONDITIONAL_JUMP)  ; LAB_005899de
    INC EBX                             ; 00589a2d
        ;   Label: LAB_00589a2d
    MOV byte ptr [EBX + -0x1],DL        ; 00589a2e | g_SkeleditLastTestSkeletonDir
    MOV byte ptr [EBX],0x0              ; 00589a31 | DAT_03670a59

