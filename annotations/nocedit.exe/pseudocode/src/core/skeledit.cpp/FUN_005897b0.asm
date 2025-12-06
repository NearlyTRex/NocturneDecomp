; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_005897b0()
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
;   CEditorTools g_CEditorToolsPtr
;   undefined1 DAT_03670848
;   undefined1 DAT_03670849
;   undefined1 DAT_03670950
;   undefined1 DAT_03670951
;   undefined1 DAT_03670a58
;   undefined1 DAT_03670a59
;
; Called Functions:
;   crt_io.c_deleteFile_FUN_005ff9d0
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH 0x28                           ; 005897b0
        ;   Label: core_skeledit.cpp_FUN_005897b0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 005897b5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005897ba
    PUSH ESI                            ; 005897bb
    PUSH EDI                            ; 005897bc
    SUB ESP,0x4                         ; 005897bd
    PUSH 0x124                          ; 005897c0
    PUSH 0x649d0a                       ; 005897c5 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_00649d0a = ..\core\skeledit.cpp
    PUSH 0x649d1f                       ; 005897ca | = "rt" | s_rt_00649d1f = rt
    PUSH 0x0                            ; 005897cf
    PUSH 0x681868                       ; 005897d1 | = "skeledit.ini" | s_skeledit_ini_00681868 = skeledit.ini
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005897d6 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005897db
    MOV EDI,EAX                         ; 005897de
    TEST EAX,EAX                        ; 005897e0
    JZ 0x00589936                       ; 005897e2 | LAB_00589936
        ;   XREF to: 00589936 (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 005897e8
    MOV ESI,EAX                         ; 005897ed
    PUSH ESI                            ; 005897ef
        ;   Label: LAB_005897ef
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005897f0 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005897f5
    TEST EAX,EAX                        ; 005897f8
    JL 0x00589806                       ; 005897fa | LAB_00589806
        ;   XREF to: 00589806 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005897fc
    JNZ 0x005897ef                      ; 005897ff | LAB_005897ef
        ;   XREF to: 005897ef (CONDITIONAL_JUMP)
    DEC EBX                             ; 00589801
    TEST EBX,EBX                        ; 00589802
    JG 0x005897ef                       ; 00589804 | LAB_005897ef
        ;   XREF to: 005897ef (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00589806
        ;   Label: LAB_00589806
    PUSH EAX                            ; 00589808
    PUSH 0x649d22                       ; 00589809 | = "%d\n" | s_d_00649d22 = %d

    PUSH EDI                            ; 0058980e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058980f | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00589814
    MOV EDX,dword ptr [ESP]             ; 00589817
    CMP EDX,0x1                         ; 0058981a
    JNZ 0x0058993d                      ; 0058981d | LAB_0058993d
        ;   XREF to: 0058993d (CONDITIONAL_JUMP)
    MOV EBX,EDX                         ; 00589823
    MOV ESI,EDI                         ; 00589825
    PUSH ESI                            ; 00589827
        ;   Label: LAB_00589827
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589828 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058982d
    TEST EAX,EAX                        ; 00589830
    JL 0x0058983e                       ; 00589832 | LAB_0058983e
        ;   XREF to: 0058983e (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00589834
    JNZ 0x00589827                      ; 00589837 | LAB_00589827
        ;   XREF to: 00589827 (CONDITIONAL_JUMP)
    DEC EBX                             ; 00589839
    TEST EBX,EBX                        ; 0058983a
    JG 0x00589827                       ; 0058983c | LAB_00589827
        ;   XREF to: 00589827 (CONDITIONAL_JUMP)
    MOV EBX,0x3670848                   ; 0058983e | undefined1 DAT_03670848
        ;   Label: LAB_0058983e
    XOR AH,AH                           ; 00589843
    MOV ESI,EDI                         ; 00589845
    MOV byte ptr [0x03670848],AH        ; 00589847 | undefined1 DAT_03670848
    PUSH ESI                            ; 0058984d
        ;   Label: LAB_0058984d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058984e | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589853
    TEST EAX,EAX                        ; 00589856
    JL 0x00589863                       ; 00589858 | LAB_00589863
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0058985a
    JNZ 0x0058997d                      ; 0058985d | LAB_0058997d
        ;   XREF to: 0058997d (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 00589863
        ;   Label: LAB_00589863
    MOV ESI,EDI                         ; 00589868
    PUSH ESI                            ; 0058986a
        ;   Label: LAB_0058986a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058986b | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589870
    TEST EAX,EAX                        ; 00589873
    JL 0x00589881                       ; 00589875 | LAB_00589881
        ;   XREF to: 00589881 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00589877
    JNZ 0x0058986a                      ; 0058987a | LAB_0058986a
        ;   XREF to: 0058986a (CONDITIONAL_JUMP)
    DEC EBX                             ; 0058987c
    TEST EBX,EBX                        ; 0058987d
    JG 0x0058986a                       ; 0058987f | LAB_0058986a
        ;   XREF to: 0058986a (CONDITIONAL_JUMP)
    MOV EBX,0x3670950                   ; 00589881 | undefined1 DAT_03670950
        ;   Label: LAB_00589881
    XOR DL,DL                           ; 00589886
    MOV ESI,EDI                         ; 00589888
    MOV byte ptr [0x03670950],DL        ; 0058988a | undefined1 DAT_03670950
    PUSH ESI                            ; 00589890
        ;   Label: LAB_00589890
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589891 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589896
    TEST EAX,EAX                        ; 00589899
    JL 0x005898a6                       ; 0058989b | LAB_005898a6
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0058989d
    JNZ 0x005899d5                      ; 005898a0 | LAB_005899d5
        ;   XREF to: 005899d5 (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 005898a6
        ;   Label: LAB_005898a6
    MOV ESI,EDI                         ; 005898ab
    PUSH ESI                            ; 005898ad
        ;   Label: LAB_005898ad
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005898ae | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005898b3
    TEST EAX,EAX                        ; 005898b6
    JL 0x005898c4                       ; 005898b8 | LAB_005898c4
        ;   XREF to: 005898c4 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005898ba
    JNZ 0x005898ad                      ; 005898bd | LAB_005898ad
        ;   XREF to: 005898ad (CONDITIONAL_JUMP)
    DEC EBX                             ; 005898bf
    TEST EBX,EBX                        ; 005898c0
    JG 0x005898ad                       ; 005898c2 | LAB_005898ad
        ;   XREF to: 005898ad (CONDITIONAL_JUMP)
    MOV EBX,0x3670a58                   ; 005898c4 | undefined1 DAT_03670a58
        ;   Label: LAB_005898c4
    XOR DH,DH                           ; 005898c9
    MOV ESI,EDI                         ; 005898cb
    MOV byte ptr [0x03670a58],DH        ; 005898cd | undefined1 DAT_03670a58
    PUSH ESI                            ; 005898d3
        ;   Label: LAB_005898d3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005898d4 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005898d9
    TEST EAX,EAX                        ; 005898dc
    JL 0x00589923                       ; 005898de | LAB_00589923
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005898e0
    JZ 0x00589923                       ; 005898e3 | LAB_00589923
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)
    CMP EAX,0x22                        ; 005898e5
    JNZ 0x005898d3                      ; 005898e8 | LAB_005898d3
        ;   XREF to: 005898d3 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005898ea
        ;   Label: LAB_005898ea
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005898eb | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005898f0
    MOV EDX,EAX                         ; 005898f3
    TEST EAX,EAX                        ; 005898f5
    JL 0x00589923                       ; 005898f7 | LAB_00589923
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005898f9
    JZ 0x00589923                       ; 005898fc | LAB_00589923
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)
    CMP EAX,0x22                        ; 005898fe
    JNZ 0x00589a2d                      ; 00589901 | LAB_00589a2d
        ;   XREF to: 00589a2d (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 00589907
    PUSH ESI                            ; 0058990c
        ;   Label: LAB_0058990c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058990d | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589912
    TEST EAX,EAX                        ; 00589915
    JL 0x00589923                       ; 00589917 | LAB_00589923
        ;   XREF to: 00589923 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00589919
    JNZ 0x0058990c                      ; 0058991c | LAB_0058990c
        ;   XREF to: 0058990c (CONDITIONAL_JUMP)
    DEC EBX                             ; 0058991e
    TEST EBX,EBX                        ; 0058991f
    JG 0x0058990c                       ; 00589921 | LAB_0058990c
        ;   XREF to: 0058990c (CONDITIONAL_JUMP)
    PUSH 0x13f                          ; 00589923
        ;   Label: LAB_00589923
    PUSH 0x649d51                       ; 00589928 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_00649d51 = ..\core\skeledit.cpp
    PUSH EDI                            ; 0058992d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058992e | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00589933
    ADD ESP,0x4                         ; 00589936
        ;   Label: LAB_00589936
    POP EDI                             ; 00589939
    POP ESI                             ; 0058993a
    POP EBX                             ; 0058993b
    RET                                 ; 0058993c
    PUSH 0x12d                          ; 0058993d
        ;   Label: LAB_0058993d
    PUSH 0x649d26                       ; 00589942 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_00649d26 = ..\core\skeledit.cpp
    PUSH EDI                            ; 00589947
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00589948 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058994d
    PUSH 0x681868                       ; 00589950 | = "skeledit.ini" | s_skeledit_ini_00681868 = skeledit.ini
    PUSH 0x649d3b                       ; 00589955 | = "Deleting old %s file." | s_Deleting_old_s_file_00649d3b = Deleting old %s file.
    MOV ECX,dword ptr [0x00678a60]      ; 0058995a | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00589960 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589961 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00589966
    PUSH 0x681868                       ; 00589969 | = "skeledit.ini" | s_skeledit_ini_00681868 = skeledit.ini
    CALL crt_io.c_deleteFile_FUN_005ff9d0 ; 0058996e | int crt_io.c_deleteFile_FUN_005ff9d0(char * filename)
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589973
    ADD ESP,0x4                         ; 00589976
    POP EDI                             ; 00589979
    POP ESI                             ; 0058997a
    POP EBX                             ; 0058997b
    RET                                 ; 0058997c
    CMP EAX,0x22                        ; 0058997d
        ;   Label: LAB_0058997d
    JNZ 0x0058984d                      ; 00589980 | LAB_0058984d
        ;   XREF to: 0058984d (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00589986
        ;   Label: LAB_00589986
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589987 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058998c
    MOV EDX,EAX                         ; 0058998f
    TEST EAX,EAX                        ; 00589991
    JL 0x00589863                       ; 00589993 | LAB_00589863
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00589999
    JZ 0x00589863                       ; 0058999c | LAB_00589863
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)
    CMP EAX,0x22                        ; 005899a2
    JNZ 0x005899cc                      ; 005899a5 | LAB_005899cc
        ;   XREF to: 005899cc (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 005899a7
    PUSH ESI                            ; 005899ac
        ;   Label: LAB_005899ac
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005899ad | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005899b2
    TEST EAX,EAX                        ; 005899b5
    JL 0x00589863                       ; 005899b7 | LAB_00589863
        ;   XREF to: 00589863 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005899bd
    JNZ 0x005899ac                      ; 005899c0 | LAB_005899ac
        ;   XREF to: 005899ac (CONDITIONAL_JUMP)
    DEC EBX                             ; 005899c2
    TEST EBX,EBX                        ; 005899c3
    JG 0x005899ac                       ; 005899c5 | LAB_005899ac
        ;   XREF to: 005899ac (CONDITIONAL_JUMP)
    JMP 0x00589863                      ; 005899c7 | LAB_00589863
        ;   XREF to: 00589863 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 005899cc
        ;   Label: LAB_005899cc
    MOV byte ptr [EBX + -0x1],DL        ; 005899cd | undefined1 DAT_03670848
    MOV byte ptr [EBX],0x0              ; 005899d0 | undefined1 DAT_03670849
    JMP 0x00589986                      ; 005899d3 | LAB_00589986
        ;   XREF to: 00589986 (UNCONDITIONAL_JUMP)
    CMP EAX,0x22                        ; 005899d5
        ;   Label: LAB_005899d5
    JNZ 0x00589890                      ; 005899d8 | LAB_00589890
        ;   XREF to: 00589890 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005899de
        ;   Label: LAB_005899de
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005899df | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005899e4
    MOV EDX,EAX                         ; 005899e7
    TEST EAX,EAX                        ; 005899e9
    JL 0x005898a6                       ; 005899eb | LAB_005898a6
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 005899f1
    JZ 0x005898a6                       ; 005899f4 | LAB_005898a6
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)
    CMP EAX,0x22                        ; 005899fa
    JNZ 0x00589a24                      ; 005899fd | LAB_00589a24
        ;   XREF to: 00589a24 (CONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 005899ff
    PUSH ESI                            ; 00589a04
        ;   Label: LAB_00589a04
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589a05 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589a0a
    TEST EAX,EAX                        ; 00589a0d
    JL 0x005898a6                       ; 00589a0f | LAB_005898a6
        ;   XREF to: 005898a6 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00589a15
    JNZ 0x00589a04                      ; 00589a18 | LAB_00589a04
        ;   XREF to: 00589a04 (CONDITIONAL_JUMP)
    DEC EBX                             ; 00589a1a
    TEST EBX,EBX                        ; 00589a1b
    JG 0x00589a04                       ; 00589a1d | LAB_00589a04
        ;   XREF to: 00589a04 (CONDITIONAL_JUMP)
    JMP 0x005898a6                      ; 00589a1f | LAB_005898a6
        ;   XREF to: 005898a6 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 00589a24
        ;   Label: LAB_00589a24
    MOV byte ptr [EBX + -0x1],DL        ; 00589a25 | undefined1 DAT_03670950
    MOV byte ptr [EBX],0x0              ; 00589a28 | undefined1 DAT_03670951
    JMP 0x005899de                      ; 00589a2b | LAB_005899de
        ;   XREF to: 005899de (UNCONDITIONAL_JUMP)
    INC EBX                             ; 00589a2d
        ;   Label: LAB_00589a2d
    MOV byte ptr [EBX + -0x1],DL        ; 00589a2e | undefined1 DAT_03670a58
    MOV byte ptr [EBX],0x0              ; 00589a31 | undefined1 DAT_03670a59

