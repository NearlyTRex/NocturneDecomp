; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_exportVertexListFile_FUN_0045a610(void)
;
; Local Variables:
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_handleEditorHotkeys_FUN_0045b990 at 0045ba44
;
; Referenced Globals:
;   TerminatedCString s_wt_0061aed2
;   TerminatedCString s_input_lst_0061aed5
;   TerminatedCString s_models_0061aedf
;   TerminatedCString s_shape_design_c_0061aee6
;   TerminatedCString s_Unable_to_open_input_lst_0061aef8
;   TerminatedCString s_d_0061af11
;   TerminatedCString s_f_f_f_0061af15
;   TerminatedCString s_d_0061af1f
;   TerminatedCString s_d_0061af23
;   TerminatedCString s_d_0061af26
;   TerminatedCString s_anon_0061af2a
;   TerminatedCString s_shape_design_c_0061af2c
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a610
        ;   Label: shape_design.c_exportVertexListFile_FUN_0045a610
    PUSH ESI                            ; 0045a611
    PUSH EDI                            ; 0045a612
    PUSH EBP                            ; 0045a613
    MOV EBP,ESP                         ; 0045a614
    SUB ESP,0xc                         ; 0045a616
    MOV EAX,0x61aed2                    ; 0045a61c | = "wt"
    PUSH EAX                            ; 0045a621 | = "wt"
    MOV EAX,0x61aed5                    ; 0045a622 | = "input.lst"
    PUSH EAX                            ; 0045a627 | = "input.lst"
    MOV EAX,0x61aedf                    ; 0045a628 | = "models"
    PUSH EAX                            ; 0045a62d | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0045a62e
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0045a633
    MOV dword ptr [EBP + -0x4],EAX      ; 0045a636
    CMP dword ptr [EBP + -0x4],0x0      ; 0045a639
    JNZ 0x0045a661                      ; 0045a63d
        ;   XREF to: 0045a661 (CONDITIONAL_JUMP)  ; LAB_0045a661
    MOV dword ptr [0x02f0ca48],0x61aee6 ; 0045a63f | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x6ca    ; 0045a649 | g_CurrentLineNumber
    MOV EAX,0x61aef8                    ; 0045a653 | = "Unable to open input.lst"
    PUSH EAX                            ; 0045a658 | = "Unable to open input.lst"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0045a659
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0045a65e
    PUSH dword ptr [0x01626408]         ; 0045a661 | g_VertexCount
        ;   Label: LAB_0045a661
    MOV EAX,0x61af11                    ; 0045a667 | = "%d\n"
    PUSH EAX                            ; 0045a66c | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a66d
    PUSH EAX                            ; 0045a670
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a671
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a676
    MOV dword ptr [EBP + -0xc],0x0      ; 0045a679
    JMP 0x0045a688                      ; 0045a680
        ;   XREF to: 0045a688 (UNCONDITIONAL_JUMP)  ; LAB_0045a688
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a682
        ;   Label: LAB_0045a682
    INC dword ptr [EBP + -0xc]          ; 0045a685
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a688
        ;   Label: LAB_0045a688
    CMP EAX,dword ptr [0x01626408]      ; 0045a68b | g_VertexCount
    JGE 0x0045a6d7                      ; 0045a691
        ;   XREF to: 0045a6d7 (CONDITIONAL_JUMP)  ; LAB_0045a6d7
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045a693
    FLD float ptr [EAX + 0x1626414]     ; 0045a697 | g_LoadedVertices[0].vertex.z
    SUB ESP,0x8                         ; 0045a69d
    FSTP double ptr [ESP]               ; 0045a6a0
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045a6a3
    FLD float ptr [EAX + 0x1626410]     ; 0045a6a7 | DAT_01626410
    SUB ESP,0x8                         ; 0045a6ad
    FSTP double ptr [ESP]               ; 0045a6b0
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0045a6b3
    FLD float ptr [EAX + 0x162640c]     ; 0045a6b7 | g_LoadedVertices
    SUB ESP,0x8                         ; 0045a6bd
    FSTP double ptr [ESP]               ; 0045a6c0
    MOV EAX,0x61af15                    ; 0045a6c3 | = "%f,%f,%f\n"
    PUSH EAX                            ; 0045a6c8 | = "%f,%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a6c9
    PUSH EAX                            ; 0045a6cc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a6cd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0045a6d2
    JMP 0x0045a682                      ; 0045a6d5
        ;   XREF to: 0045a682 (UNCONDITIONAL_JUMP)  ; LAB_0045a682
    PUSH dword ptr [0x016e990c]         ; 0045a6d7 | g_PolygonCount
        ;   Label: LAB_0045a6d7
    MOV EAX,0x61af1f                    ; 0045a6dd | = "%d\n"
    PUSH EAX                            ; 0045a6e2 | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a6e3
    PUSH EAX                            ; 0045a6e6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a6e7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a6ec
    MOV dword ptr [EBP + -0xc],0x0      ; 0045a6ef
    JMP 0x0045a6fe                      ; 0045a6f6
        ;   XREF to: 0045a6fe (UNCONDITIONAL_JUMP)  ; LAB_0045a6fe
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a6f8
        ;   Label: LAB_0045a6f8
    INC dword ptr [EBP + -0xc]          ; 0045a6fb
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045a6fe
        ;   Label: LAB_0045a6fe
    CMP EAX,dword ptr [0x016e990c]      ; 0045a701 | g_PolygonCount
    JGE 0x0045a78d                      ; 0045a707
        ;   XREF to: 0045a78d (CONDITIONAL_JUMP)  ; LAB_0045a78d
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 0045a70d
    PUSH dword ptr [EAX + 0x16e99b4]    ; 0045a714 | DAT_016e99b4
    MOV EAX,0x61af23                    ; 0045a71a | = "%d"
    PUSH EAX                            ; 0045a71f | = "%d"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a720
    PUSH EAX                            ; 0045a723
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a724
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a729
    MOV dword ptr [EBP + -0x8],0x0      ; 0045a72c
    JMP 0x0045a73b                      ; 0045a733
        ;   XREF to: 0045a73b (UNCONDITIONAL_JUMP)  ; LAB_0045a73b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a735
        ;   Label: LAB_0045a735
    INC dword ptr [EBP + -0x8]          ; 0045a738
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045a73b
        ;   Label: LAB_0045a73b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a742
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045a745 | DAT_016e99b4
    JGE 0x0045a776                      ; 0045a74b
        ;   XREF to: 0045a776 (CONDITIONAL_JUMP)  ; LAB_0045a776
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 0045a74d
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045a754
    SHL EAX,0x2                         ; 0045a757
    ADD EAX,EDX                         ; 0045a75a
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045a75c | DAT_016e99c8
    MOV EAX,0x61af26                    ; 0045a762 | = ",%d"
    PUSH EAX                            ; 0045a767 | = ",%d"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a768
    PUSH EAX                            ; 0045a76b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a76c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045a771
    JMP 0x0045a735                      ; 0045a774
        ;   XREF to: 0045a735 (UNCONDITIONAL_JUMP)  ; LAB_0045a735
    MOV EAX,0x61af2a                    ; 0045a776 | = "\n"
        ;   Label: LAB_0045a776
    PUSH EAX                            ; 0045a77b | = "\n"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a77c
    PUSH EAX                            ; 0045a77f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0045a780
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 0045a785
    JMP 0x0045a6f8                      ; 0045a788
        ;   XREF to: 0045a6f8 (UNCONDITIONAL_JUMP)  ; LAB_0045a6f8
    PUSH 0x6d8                          ; 0045a78d
        ;   Label: LAB_0045a78d
    MOV EAX,0x61af2c                    ; 0045a792 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0045a797 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045a798
    PUSH EAX                            ; 0045a79b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0045a79c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0045a7a1
    MOV ESP,EBP                         ; 0045a7a4
    POP EBP                             ; 0045a7a6
    POP EDI                             ; 0045a7a7
    POP ESI                             ; 0045a7a8
    POP EBX                             ; 0045a7a9
    RET                                 ; 0045a7aa

