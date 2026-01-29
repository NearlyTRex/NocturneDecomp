; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_0058b660(void)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Importing_deformable_mod_0064a78e
;   TerminatedCString s_core_skeledit_cpp_0064a7b4
;   TerminatedCString s_rt_0064a7c9
;   TerminatedCString s_core_skeledit_cpp_0064a7cc
;   TerminatedCString s_Can_t_open_s_0064a7e1
;   TerminatedCString s_d_0064a7ef
;   TerminatedCString s_core_skeledit_cpp_0064a7f3
;   TerminatedCString s_s_has_incorrect_S3D_vers_0064a808
;   TerminatedCString s_d_d_d_d_d_d_d_0064a84f
;   TerminatedCString s_core_skeledit_cpp_0064a865
;   TerminatedCString s_s_is_corrupt_0064a87a
;   TerminatedCString s_core_skeledit_cpp_0064a889
;   TerminatedCString s_Imported_deformable_mode_0064a89e
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_FUN_0058b8e0
;   core_skeledit.cpp_FUN_0058b9b0
;   core_skeledit.cpp_FUN_0058bc40
;   core_skeledit.cpp_FUN_0058e240
;   core_skeledit.cpp_FUN_0058f790
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
;   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH 0x6c                           ; 0058b660
        ;   Label: core_skeledit.cpp_FUN_0058b660
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058b665
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058b66a
    PUSH ESI                            ; 0058b66b
    PUSH EDI                            ; 0058b66c
    PUSH EBP                            ; 0058b66d
    SUB ESP,0x34                        ; 0058b66e
    MOV ESI,dword ptr [ESP + 0x48]      ; 0058b671
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0058b675
    PUSH EDI                            ; 0058b679
    PUSH 0x64a78e                       ; 0058b67a | = "Importing deformable model from %s..."
    MOV EDX,dword ptr [0x00678a60]      ; 0058b67f | g_CEditorToolsPtr
    PUSH EDX                            ; 0058b685 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058b686
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0058b68b
    PUSH ESI                            ; 0058b68e
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 ; 0058b68f
        ;   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0058b694
    PUSH 0x4ba                          ; 0058b697
    PUSH 0x64a7b4                       ; 0058b69c | = "..\\core\\skeledit.cpp"
    PUSH 0x64a7c9                       ; 0058b6a1 | = "rt"
    PUSH 0x0                            ; 0058b6a6
    PUSH EDI                            ; 0058b6a8
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0058b6a9
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0058b6ae
    MOV EBX,EAX                         ; 0058b6b1
    TEST EAX,EAX                        ; 0058b6b3
    JZ 0x0058b829                       ; 0058b6b5
        ;   XREF to: 0058b829 (CONDITIONAL_JUMP)  ; LAB_0058b829
    MOV EBP,0x1                         ; 0058b6bb
        ;   Label: LAB_0058b6bb
    MOV dword ptr [ESP + 0x28],EBX      ; 0058b6c0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058b6c4
        ;   Label: LAB_0058b6c4
    PUSH EAX                            ; 0058b6c8
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058b6c9
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058b6ce
    TEST EAX,EAX                        ; 0058b6d1
    JL 0x0058b6df                       ; 0058b6d3
        ;   XREF to: 0058b6df (CONDITIONAL_JUMP)  ; LAB_0058b6df
    CMP EAX,0xa                         ; 0058b6d5
    JNZ 0x0058b6c4                      ; 0058b6d8
        ;   XREF to: 0058b6c4 (CONDITIONAL_JUMP)  ; LAB_0058b6c4
    DEC EBP                             ; 0058b6da
    TEST EBP,EBP                        ; 0058b6db
    JG 0x0058b6c4                       ; 0058b6dd
        ;   XREF to: 0058b6c4 (CONDITIONAL_JUMP)  ; LAB_0058b6c4
    MOV EAX,ESP                         ; 0058b6df
        ;   Label: LAB_0058b6df
    PUSH EAX                            ; 0058b6e1
    PUSH 0x64a7ef                       ; 0058b6e2 | = "%d\n"
    PUSH EBX                            ; 0058b6e7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058b6e8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058b6ed
    MOV EDX,dword ptr [ESP]             ; 0058b6f0
    CMP EDX,0x65                        ; 0058b6f3
    JGE 0x0058b852                      ; 0058b6f6
        ;   XREF to: 0058b852 (CONDITIONAL_JUMP)  ; LAB_0058b852
    MOV EDX,dword ptr [ESP]             ; 0058b6fc
        ;   Label: LAB_0058b6fc
    PUSH EDX                            ; 0058b6ff
    PUSH EDI                            ; 0058b700
    MOV EBP,0x64a7f3                    ; 0058b701 | = "..\\core\\skeledit.cpp"
    MOV EAX,0x4c2                       ; 0058b706
    PUSH 0x64a808                       ; 0058b70b | = "%s has incorrect S3D version %d in CD..."
    MOV dword ptr [0x02f0ca48],EBP      ; 0058b710 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0058b716 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058b71b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0058b720
    MOV EBP,0x1                         ; 0058b723
        ;   Label: LAB_0058b723
    MOV dword ptr [ESP + 0x24],EBX      ; 0058b728
    MOV ECX,dword ptr [ESP + 0x24]      ; 0058b72c
        ;   Label: LAB_0058b72c
    PUSH ECX                            ; 0058b730
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058b731
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058b736
    TEST EAX,EAX                        ; 0058b739
    JL 0x0058b747                       ; 0058b73b
        ;   XREF to: 0058b747 (CONDITIONAL_JUMP)  ; LAB_0058b747
    CMP EAX,0xa                         ; 0058b73d
    JNZ 0x0058b72c                      ; 0058b740
        ;   XREF to: 0058b72c (CONDITIONAL_JUMP)  ; LAB_0058b72c
    DEC EBP                             ; 0058b742
    TEST EBP,EBP                        ; 0058b743
    JG 0x0058b72c                       ; 0058b745
        ;   XREF to: 0058b72c (CONDITIONAL_JUMP)  ; LAB_0058b72c
    LEA EAX,[ESP + 0x1c]                ; 0058b747
        ;   Label: LAB_0058b747
    PUSH EAX                            ; 0058b74b
    LEA EAX,[ESP + 0x1c]                ; 0058b74c
    PUSH EAX                            ; 0058b750
    LEA EAX,[ESP + 0x1c]                ; 0058b751
    PUSH EAX                            ; 0058b755
    LEA EAX,[ESP + 0x1c]                ; 0058b756
    PUSH EAX                            ; 0058b75a
    LEA EAX,[ESP + 0x1c]                ; 0058b75b
    PUSH EAX                            ; 0058b75f
    LEA EAX,[ESP + 0x1c]                ; 0058b760
    PUSH EAX                            ; 0058b764
    LEA EAX,[ESP + 0x1c]                ; 0058b765
    PUSH EAX                            ; 0058b769
    PUSH 0x64a84f                       ; 0058b76a | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH EBX                            ; 0058b76f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058b770
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 0058b775
    CMP EAX,0x7                         ; 0058b778
    JZ 0x0058b7a0                       ; 0058b77b
        ;   XREF to: 0058b7a0 (CONDITIONAL_JUMP)  ; LAB_0058b7a0
    PUSH EDI                            ; 0058b77d
        ;   Label: LAB_0058b77d
    MOV EBP,0x64a865                    ; 0058b77e | = "..\\core\\skeledit.cpp"
    MOV EAX,0x4ca                       ; 0058b783
    PUSH 0x64a87a                       ; 0058b788 | = "%s is corrupt!"
    MOV dword ptr [0x02f0ca48],EBP      ; 0058b78d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0058b793 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058b798
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058b79d
    PUSH 0x1                            ; 0058b7a0
        ;   Label: LAB_0058b7a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058b7a2
    PUSH EDX                            ; 0058b7a6
    PUSH 0x1                            ; 0058b7a7
    PUSH 0x1                            ; 0058b7a9
    PUSH ESI                            ; 0058b7ab
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 ; 0058b7ac
        ;   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 0058b7b1
    PUSH 0x0                            ; 0058b7b4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0058b7b6
    PUSH ECX                            ; 0058b7ba
    MOV EBP,dword ptr [ESP + 0x14]      ; 0058b7bb
    PUSH EBP                            ; 0058b7bf
    PUSH 0x0                            ; 0058b7c0
    PUSH ESI                            ; 0058b7c2
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 ; 0058b7c3
        ;   XREF to: 0059a510 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510(CDeformableModel * this_ptr, int lod_index, int vertex_count, int tri_count, ...)
    ADD ESP,0x14                        ; 0058b7c8
    MOV EBP,0x1                         ; 0058b7cb
    MOV dword ptr [ESP + 0x2c],EBX      ; 0058b7d0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0058b7d4
        ;   Label: LAB_0058b7d4
    PUSH EAX                            ; 0058b7d8
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058b7d9
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058b7de
    TEST EAX,EAX                        ; 0058b7e1
    JL 0x0058b7ef                       ; 0058b7e3
        ;   XREF to: 0058b7ef (CONDITIONAL_JUMP)  ; LAB_0058b7ef
    CMP EAX,0xa                         ; 0058b7e5
    JNZ 0x0058b7d4                      ; 0058b7e8
        ;   XREF to: 0058b7d4 (CONDITIONAL_JUMP)  ; LAB_0058b7d4
    DEC EBP                             ; 0058b7ea
    TEST EBP,EBP                        ; 0058b7eb
    JG 0x0058b7d4                       ; 0058b7ed
        ;   XREF to: 0058b7d4 (CONDITIONAL_JUMP)  ; LAB_0058b7d4
    XOR EDX,EDX                         ; 0058b7ef
        ;   Label: LAB_0058b7ef
    MOV dword ptr [ESP + 0x30],EDX      ; 0058b7f1
    MOV EAX,dword ptr [ESP + 0x30]      ; 0058b7f5
        ;   Label: LAB_0058b7f5
    CMP EAX,dword ptr [ESP + 0x10]      ; 0058b7f9
    JGE 0x0058b860                      ; 0058b7fd
        ;   XREF to: 0058b860 (CONDITIONAL_JUMP)  ; LAB_0058b860
    MOV EBP,0x1                         ; 0058b7ff
    MOV dword ptr [ESP + 0x20],EBX      ; 0058b804
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058b808
        ;   Label: LAB_0058b808
    PUSH EAX                            ; 0058b80c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058b80d
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058b812
    TEST EAX,EAX                        ; 0058b815
    JL 0x0058b823                       ; 0058b817
        ;   XREF to: 0058b823 (CONDITIONAL_JUMP)  ; LAB_0058b823
    CMP EAX,0xa                         ; 0058b819
    JNZ 0x0058b808                      ; 0058b81c
        ;   XREF to: 0058b808 (CONDITIONAL_JUMP)  ; LAB_0058b808
    DEC EBP                             ; 0058b81e
    TEST EBP,EBP                        ; 0058b81f
    JG 0x0058b808                       ; 0058b821
        ;   XREF to: 0058b808 (CONDITIONAL_JUMP)  ; LAB_0058b808
    INC dword ptr [ESP + 0x30]          ; 0058b823
        ;   Label: LAB_0058b823
    JMP 0x0058b7f5                      ; 0058b827
        ;   XREF to: 0058b7f5 (UNCONDITIONAL_JUMP)  ; LAB_0058b7f5
    PUSH EDI                            ; 0058b829
        ;   Label: LAB_0058b829
    MOV ECX,0x64a7cc                    ; 0058b82a | = "..\\core\\skeledit.cpp"
    MOV EBP,0x4bb                       ; 0058b82f
    PUSH 0x64a7e1                       ; 0058b834 | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 0058b839 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0058b83f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058b845
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058b84a
    JMP 0x0058b6bb                      ; 0058b84d
        ;   XREF to: 0058b6bb (UNCONDITIONAL_JUMP)  ; LAB_0058b6bb
    CMP EDX,0x67                        ; 0058b852
        ;   Label: LAB_0058b852
    JG 0x0058b6fc                       ; 0058b855
        ;   XREF to: 0058b6fc (CONDITIONAL_JUMP)  ; LAB_0058b6fc
    JMP 0x0058b723                      ; 0058b85b
        ;   XREF to: 0058b723 (UNCONDITIONAL_JUMP)  ; LAB_0058b723
    PUSH EBX                            ; 0058b860
        ;   Label: LAB_0058b860
    PUSH ESI                            ; 0058b861
    CALL core_skeledit.cpp_FUN_0058b8e0 ; 0058b862
        ;   XREF to: 0058b8e0 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_FUN_0058b8e0()
    ADD ESP,0x8                         ; 0058b867
    TEST EAX,EAX                        ; 0058b86a
    JZ 0x0058b77d                       ; 0058b86c
        ;   XREF to: 0058b77d (CONDITIONAL_JUMP)  ; LAB_0058b77d
    PUSH EBX                            ; 0058b872
    PUSH ESI                            ; 0058b873
    CALL core_skeledit.cpp_FUN_0058b9b0 ; 0058b874
        ;   XREF to: 0058b9b0 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_FUN_0058b9b0()
    ADD ESP,0x8                         ; 0058b879
    TEST EAX,EAX                        ; 0058b87c
    JZ 0x0058b77d                       ; 0058b87e
        ;   XREF to: 0058b77d (CONDITIONAL_JUMP)  ; LAB_0058b77d
    PUSH EBX                            ; 0058b884
    PUSH ESI                            ; 0058b885
    CALL core_skeledit.cpp_FUN_0058bc40 ; 0058b886
        ;   XREF to: 0058bc40 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_FUN_0058bc40()
    ADD ESP,0x8                         ; 0058b88b
    TEST EAX,EAX                        ; 0058b88e
    JZ 0x0058b77d                       ; 0058b890
        ;   XREF to: 0058b77d (CONDITIONAL_JUMP)  ; LAB_0058b77d
    PUSH 0x4e7                          ; 0058b896
    PUSH 0x64a889                       ; 0058b89b | = "..\\core\\skeledit.cpp"
    PUSH EBX                            ; 0058b8a0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058b8a1
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058b8a6
    PUSH ESI                            ; 0058b8a9
    CALL core_skeledit.cpp_FUN_0058f790 ; 0058b8aa
        ;   XREF to: 0058f790 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_FUN_0058f790()
    ADD ESP,0x4                         ; 0058b8af
    PUSH ESI                            ; 0058b8b2
    CALL core_skeledit.cpp_FUN_0058e240 ; 0058b8b3
        ;   XREF to: 0058e240 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_FUN_0058e240()
    ADD ESP,0x4                         ; 0058b8b8
    PUSH EDI                            ; 0058b8bb
    PUSH 0x64a89e                       ; 0058b8bc | = "Imported deformable model from %s OK"
    MOV ECX,dword ptr [0x00678a60]      ; 0058b8c1 | g_CEditorToolsPtr
    PUSH ECX                            ; 0058b8c7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058b8c8
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 0058b8cd
    ADD ESP,0x34                        ; 0058b8d0
    POP EBP                             ; 0058b8d3
    POP EDI                             ; 0058b8d4
    POP ESI                             ; 0058b8d5
    POP EBX                             ; 0058b8d6
    RET                                 ; 0058b8d7

