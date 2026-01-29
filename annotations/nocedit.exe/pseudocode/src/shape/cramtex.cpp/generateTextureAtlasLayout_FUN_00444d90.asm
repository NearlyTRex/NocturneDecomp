; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_cramtex_cpp_generateTextureAtlasLayout_FUN_00444d90 (uint texture_count,STextureAtlasEntry *texture_entries,int atlas_width,int atlas_height, int acceptable_coverage_threshold,int acceptable_size,int *output_atlas_width, int *output_atlas_height,int padding_size,int fill_gaps,int visualize,int max_iterations)
;
; Parameters:
; uint             Stack[0x4]:4   texture_count
; STextureAtlasEntry * Stack[0x8]:4   texture_entries
; int              Stack[0xc]:4   atlas_width
; int              Stack[0x10]:4   atlas_height
; int              Stack[0x14]:4   acceptable_coverage_threshold
; int              Stack[0x18]:4   acceptable_size
; int *            Stack[0x1c]:4   output_atlas_width
; int *            Stack[0x20]:4   output_atlas_height
; int              Stack[0x24]:4   padding_size
; int              Stack[0x28]:4   fill_gaps
; int              Stack[0x2c]:4   visualize
; int              Stack[0x30]:4   max_iterations
; Local Variables:
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
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046c6ee
;
; Referenced Globals:
;   TerminatedCString s_shape_cramlog_txt_006195c2
;   TerminatedCString s_shape_cramtex_cpp_006195d7
;   TerminatedCString s_at_006195ec
;   TerminatedCString s_shape_cramlog_txt_006195ef
;   TerminatedCString s_initial_pad_guess_d_00619604
;   TerminatedCString s_shape_cramtex_cpp_0061961c
;   TerminatedCString s_shape_cramtex_cpp_00619631
;   TerminatedCString s_at_00619646
;   TerminatedCString s_shape_cramlog_txt_00619649
;   TerminatedCString s_Guess_d_0061965e
;   TerminatedCString s_acceptableSize_d_00619669
;   TerminatedCString s_estimated_pad_d_00619680
;   TerminatedCString s_shape_cramtex_cpp_00619696
;   TerminatedCString s_shape_cramtex_cpp_006196ab
;   TerminatedCString s_at_006196c0
;   ... and 85 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdlib.c_qsort_FUN_005fdf38
;   crt_stdlib.c_rand_FUN_005feb5c
;   crt_stdlib.c_srand_FUN_005feb80
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
;   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444d90
        ;   Label: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
    PUSH ESI                            ; 00444d91
    PUSH EDI                            ; 00444d92
    PUSH EBP                            ; 00444d93
    SUB ESP,0x30                        ; 00444d94
    MOV EAX,dword ptr [ESP + 0x44]      ; 00444d97
    MOV [0x0084a854],EAX                ; 00444d9b | g_CramTextureCount
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00444da0
    MOV [0x0084a878],EAX                ; 00444da4 | g_CramAtlasWidth
    MOV EAX,dword ptr [ESP + 0x50]      ; 00444da9
    MOV [0x0084a87c],EAX                ; 00444dad | g_CramAtlasHeight
    MOV EAX,dword ptr [ESP + 0x58]      ; 00444db2
    MOV [0x0084a874],EAX                ; 00444db6 | g_CramAcceptableSize
    MOV EAX,dword ptr [ESP + 0x64]      ; 00444dbb
    MOV [0x0084a858],EAX                ; 00444dbf | g_CramTotalMaps
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00444dc4
    MOV [0x0084a894],EAX                ; 00444dc8 | g_CramVisualizationFlag
    MOV EAX,dword ptr [ESP + 0x68]      ; 00444dcd
    XOR EDX,EDX                         ; 00444dd1
    MOV [0x0084a898],EAX                ; 00444dd3 | g_CramFillGaps
    MOV EAX,dword ptr [ESP + 0x70]      ; 00444dd8
    MOV dword ptr [0x0084a8ac],EDX      ; 00444ddc | g_CramIterationCount
    MOV [0x0084a8a4],EAX                ; 00444de2 | g_CramMaxIterationsLimit
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00444de7
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV ECX,dword ptr [ESP + 0x44]      ; 00444dec
    MOV [0x0084a8a8],EAX                ; 00444df0 | g_CramStartTime
    TEST ECX,ECX                        ; 00444df5
    JLE 0x00444e40                      ; 00444df7
        ;   XREF to: 00444e40 (CONDITIONAL_JUMP)  ; LAB_00444e40
    LEA EBX,[ECX*0x4 + 0x0]             ; 00444df9
    ADD EBX,ECX                         ; 00444e00
    SHL EBX,0x2                         ; 00444e02
    MOV EDX,dword ptr [ESP + 0x48]      ; 00444e05
    SUB EBX,ECX                         ; 00444e09
    XOR EAX,EAX                         ; 00444e0b
    SHL EBX,0x2                         ; 00444e0d
    MOV dword ptr [EAX + 0x83c224],EDX  ; 00444e10 | DAT_0083c224 | DAT_0083c270
        ;   Label: LAB_00444e10
    MOV ECX,dword ptr [EDX + 0x208]     ; 00444e16
    MOV dword ptr [EAX + 0x83c1dc],ECX  ; 00444e1c | g_CramSortedTextureEntries | DAT_0083c228
    ADD EAX,0x4c                        ; 00444e22
    MOV ECX,dword ptr [EDX + 0x20c]     ; 00444e25
    ADD EDX,0x250                       ; 00444e2b
    MOV dword ptr [EAX + 0x83c194],ECX  ; 00444e31 | DAT_0083c1e0 | DAT_0083c22c
    CMP EAX,EBX                         ; 00444e37
    JL 0x00444e10                       ; 00444e39
        ;   XREF to: 00444e10 (CONDITIONAL_JUMP)  ; LAB_00444e10
    LEA EAX,[EAX]                       ; 00444e3b
    MOV ECX,ECX                         ; 00444e3e
    PUSH 0x6195c2                       ; 00444e40 | = "..\\shape\\cramlog.txt"
        ;   Label: LAB_00444e40
    MOV EBX,dword ptr [ESP + 0x58]      ; 00444e45
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00444e49
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00444e4e
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00444e51
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    PUSH 0x16                           ; 00444e56
    MOV dword ptr [ESP + 0x4],EAX       ; 00444e58
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 00444e5c
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005feb80(uint seed)
    ADD ESP,0x4                         ; 00444e61
    PUSH 0x4457f0                       ; 00444e64
    PUSH 0x4c                           ; 00444e69
    MOV ESI,dword ptr [0x0084a854]      ; 00444e6b | g_CramTextureCount
    PUSH ESI                            ; 00444e71
    PUSH 0x83c1dc                       ; 00444e72 | g_CramSortedTextureEntries
    XOR EDI,EDI                         ; 00444e77
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 00444e79
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    MOV EBP,dword ptr [0x0084a854]      ; 00444e7e | g_CramTextureCount
    ADD ESP,0x10                        ; 00444e84
    MOV dword ptr [0x0084a864],EDI      ; 00444e87 | g_CramTotalPixelArea
    XOR ECX,ECX                         ; 00444e8d
    TEST EBP,EBP                        ; 00444e8f
    JLE 0x00444ec0                      ; 00444e91
        ;   XREF to: 00444ec0 (CONDITIONAL_JUMP)  ; LAB_00444ec0
    MOV EAX,0x83c1dc                    ; 00444e93 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [0x0084a854]      ; 00444e98 | g_CramTextureCount
    MOV EDX,dword ptr [EAX]             ; 00444e9e | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_00444e9e
    IMUL EDX,dword ptr [EAX + 0x4]      ; 00444ea0 | DAT_0083c1e0 | DAT_0083c22c
    MOV EDI,dword ptr [0x0084a864]      ; 00444ea4 | g_CramTotalPixelArea
    ADD EAX,0x4c                        ; 00444eaa
    ADD EDI,EDX                         ; 00444ead
    INC ECX                             ; 00444eaf
    MOV dword ptr [0x0084a864],EDI      ; 00444eb0 | g_CramTotalPixelArea
    CMP ECX,EBP                         ; 00444eb6
    JL 0x00444e9e                       ; 00444eb8
        ;   XREF to: 00444e9e (CONDITIONAL_JUMP)  ; LAB_00444e9e
    LEA EAX,[EAX]                       ; 00444eba | DAT_0083c228
    MOV EDX,dword ptr [0x0084a864]      ; 00444ec0 | g_CramTotalPixelArea
        ;   Label: LAB_00444ec0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00444ec6
    SUB EAX,EDX                         ; 00444ecd
    SHL EAX,0x3                         ; 00444ecf
    ADD EDX,EAX                         ; 00444ed2
    SHL EDX,0x2                         ; 00444ed4
    MOV EAX,EDX                         ; 00444ed7
    SAR EDX,0x1f                        ; 00444ed9
    IDIV EBX                            ; 00444edc
    MOV EBX,dword ptr [0x0084a858]      ; 00444ede | g_CramTotalMaps
    MOV EDX,EAX                         ; 00444ee4
    MOV EAX,[0x0084a874]                ; 00444ee6 | g_CramAcceptableSize
        ;   Label: LAB_00444ee6
    IMUL EAX,EAX                        ; 00444eeb
    IMUL EAX,EBX                        ; 00444eee
    CMP EAX,EDX                         ; 00444ef1
    JG 0x00444efd                       ; 00444ef3
        ;   XREF to: 00444efd (CONDITIONAL_JUMP)  ; LAB_00444efd
    INC dword ptr [0x0084a874]          ; 00444ef5 | g_CramAcceptableSize
    JMP 0x00444ee6                      ; 00444efb
        ;   XREF to: 00444ee6 (UNCONDITIONAL_JUMP)  ; LAB_00444ee6
    MOV EAX,[0x0084a87c]                ; 00444efd | g_CramAtlasHeight
        ;   Label: LAB_00444efd
    IMUL EAX,dword ptr [0x0084a874]     ; 00444f02 | g_CramAcceptableSize
    MOV EDX,dword ptr [0x0084a878]      ; 00444f09 | g_CramAtlasWidth
    DEC EDX                             ; 00444f0f
    ADD EDX,EAX                         ; 00444f10
    MOV ECX,dword ptr [0x0084a878]      ; 00444f12 | g_CramAtlasWidth
    MOV EAX,EDX                         ; 00444f18
    SAR EDX,0x1f                        ; 00444f1a
    IDIV ECX                            ; 00444f1d
    PUSH 0x1e3                          ; 00444f1f
    PUSH 0x6195d7                       ; 00444f24 | = "..\\shape\\cramtex.cpp"
    PUSH 0x6195ec                       ; 00444f29 | = "at"
    PUSH 0x0                            ; 00444f2e
    PUSH 0x6195ef                       ; 00444f30 | = "..\\shape\\cramlog.txt"
    MOV [0x0084a880],EAX                ; 00444f35 | g_CramPaddingCalculation
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00444f3a
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 00444f3f
    ADD ESP,0x14                        ; 00444f41
    TEST EAX,EAX                        ; 00444f44
    JNZ 0x00445462                      ; 00444f46
        ;   XREF to: 00445462 (CONDITIONAL_JUMP)  ; LAB_00445462
    MOV dword ptr [ESP + 0x4],0xffffffff ; 00444f4c
        ;   Label: LAB_00444f4c
    MOV EBP,dword ptr [ESP + 0x4]       ; 00444f54
        ;   Label: LAB_00444f54
    MOV EDX,0x84a8b0                    ; 00444f58 | DAT_0084a8b0
    XOR EDI,EDI                         ; 00444f5d
    INC EBP                             ; 00444f5f
    MOV dword ptr [0x00887940],EDX      ; 00444f60 | g_CramAlgorithmState
    MOV EBX,dword ptr [0x0084a854]      ; 00444f66 | g_CramTextureCount
        ;   Label: LAB_00444f66
    INC EDI                             ; 00444f6c
    XOR ECX,ECX                         ; 00444f6d
    TEST EBX,EBX                        ; 00444f6f
    JLE 0x00444fbd                      ; 00444f71
        ;   XREF to: 00444fbd (CONDITIONAL_JUMP)  ; LAB_00444fbd
    MOV EAX,0x83c1dc                    ; 00444f73 | g_CramSortedTextureEntries
    MOV ESI,dword ptr [0x0084a880]      ; 00444f78 | g_CramPaddingCalculation
        ;   Label: LAB_00444f78
    MOV EDX,dword ptr [EAX]             ; 00444f7e | g_CramSortedTextureEntries | DAT_0083c228
    ADD EDX,ESI                         ; 00444f80
    MOV ESI,dword ptr [0x0084a874]      ; 00444f82 | g_CramAcceptableSize
    MOV EBX,EAX                         ; 00444f88
    CMP EDX,ESI                         ; 00444f8a
    JLE 0x00444f94                      ; 00444f8c
        ;   XREF to: 00444f94 (CONDITIONAL_JUMP)  ; LAB_00444f94
    MOV dword ptr [0x0084a874],EDX      ; 00444f8e | g_CramAcceptableSize
    MOV EDX,dword ptr [EBX + 0x4]       ; 00444f94 | DAT_0083c1e0 | DAT_0083c22c
        ;   Label: LAB_00444f94
    MOV EBX,dword ptr [0x0084a880]      ; 00444f97 | g_CramPaddingCalculation
    MOV ESI,dword ptr [0x0084a874]      ; 00444f9d | g_CramAcceptableSize
    ADD EDX,EBX                         ; 00444fa3
    CMP EDX,ESI                         ; 00444fa5
    JLE 0x00444faf                      ; 00444fa7
        ;   XREF to: 00444faf (CONDITIONAL_JUMP)  ; LAB_00444faf
    MOV dword ptr [0x0084a874],EDX      ; 00444fa9 | g_CramAcceptableSize
    MOV ESI,dword ptr [0x0084a854]      ; 00444faf | g_CramTextureCount
        ;   Label: LAB_00444faf
    INC ECX                             ; 00444fb5
    ADD EAX,0x4c                        ; 00444fb6
    CMP ECX,ESI                         ; 00444fb9
    JL 0x00444f78                       ; 00444fbb
        ;   XREF to: 00444f78 (CONDITIONAL_JUMP)  ; LAB_00444f78
    MOV EDX,dword ptr [0x0084a874]      ; 00444fbd | g_CramAcceptableSize
        ;   Label: LAB_00444fbd
    LEA EDX,[EDX + EDX*0x4]             ; 00444fc3
    MOV EAX,EDX                         ; 00444fc6
    SAR EDX,0x1f                        ; 00444fc8
    SHL EDX,0x2                         ; 00444fcb
    SBB EAX,EDX                         ; 00444fce
    SAR EAX,0x2                         ; 00444fd0
    IMUL EAX,dword ptr [0x0084a87c]     ; 00444fd3 | g_CramAtlasHeight
    MOV EDX,dword ptr [0x0084a878]      ; 00444fda | g_CramAtlasWidth
    DEC EDX                             ; 00444fe0
    ADD EDX,EAX                         ; 00444fe1
    MOV ECX,dword ptr [0x0084a878]      ; 00444fe3 | g_CramAtlasWidth
    MOV EAX,EDX                         ; 00444fe9
    SAR EDX,0x1f                        ; 00444feb
    IDIV ECX                            ; 00444fee
    MOV ESI,dword ptr [ESP + 0x4]       ; 00444ff0
    MOV EBX,EAX                         ; 00444ff4
    CMP EAX,ESI                         ; 00444ff6
    JG 0x00444ffc                       ; 00444ff8
        ;   XREF to: 00444ffc (CONDITIONAL_JUMP)  ; LAB_00444ffc
    MOV EBX,EBP                         ; 00444ffa
    PUSH 0x206                          ; 00444ffc
        ;   Label: LAB_00444ffc
    PUSH 0x619631                       ; 00445001 | = "..\\shape\\cramtex.cpp"
    PUSH 0x619646                       ; 00445006 | = "at"
    PUSH 0x0                            ; 0044500b
    PUSH 0x619649                       ; 0044500d | = "..\\shape\\cramlog.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00445012
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 00445017
    ADD ESP,0x14                        ; 00445019
    TEST EAX,EAX                        ; 0044501c
    JZ 0x00445065                       ; 0044501e
        ;   XREF to: 00445065 (CONDITIONAL_JUMP)  ; LAB_00445065
    PUSH EDI                            ; 00445020
    PUSH 0x61965e                       ; 00445021 | = "Guess #%d\n"
    PUSH EAX                            ; 00445026
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445027
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044502c
    MOV EAX,[0x0084a874]                ; 0044502f | g_CramAcceptableSize
    PUSH EAX                            ; 00445034
    PUSH 0x619669                       ; 00445035 | = "  acceptableSize = %d\n"
    PUSH ESI                            ; 0044503a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044503b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00445040
    PUSH EBX                            ; 00445043
    PUSH 0x619680                       ; 00445044 | = "  estimated pad = %d\n"
    PUSH ESI                            ; 00445049
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044504a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044504f
    PUSH 0x20b                          ; 00445052
    PUSH 0x619696                       ; 00445057 | = "..\\shape\\cramtex.cpp"
    PUSH ESI                            ; 0044505c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0044505d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00445062
    CMP EBX,dword ptr [0x0084a880]      ; 00445065 | g_CramPaddingCalculation
        ;   Label: LAB_00445065
    JNZ 0x0044548f                      ; 0044506b
        ;   XREF to: 0044548f (CONDITIONAL_JUMP)  ; LAB_0044548f
    MOV EBX,0xf423f                     ; 00445071
        ;   Label: LAB_00445071
    MOV EAX,[0x0084a880]                ; 00445076 | g_CramPaddingCalculation
    XOR ECX,ECX                         ; 0044507b
    XOR EDX,EDX                         ; 0044507d
    MOV dword ptr [ESP + 0x4],EAX       ; 0044507f
    MOV dword ptr [0x0084a860],ECX      ; 00445083 | g_CramRectangleCount
    MOV dword ptr [0x0084a88c],EBX      ; 00445089 | g_CramBestSolutionMetric2
    MOV dword ptr [0x0084a888],EBX      ; 0044508f | g_CramBestSolutionMetric1
    MOV EAX,[0x0084a874]                ; 00445095 | g_CramAcceptableSize
    MOV dword ptr [0x0084a868],EBX      ; 0044509a | g_CramMinPlacementX
    MOV [0x0084a884],EAX                ; 004450a0 | g_CramCurrentAcceptableSize
    MOV EAX,[0x0084a854]                ; 004450a5 | g_CramTextureCount
    MOV dword ptr [0x0084a86c],EBX      ; 004450aa | g_CramMinPlacementY
    TEST EAX,EAX                        ; 004450b0
    JLE 0x00445102                      ; 004450b2
        ;   XREF to: 00445102 (CONDITIONAL_JUMP)  ; LAB_00445102
    MOV ECX,0x83c1dc                    ; 004450b4 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [0x0084a880]      ; 004450b9 | g_CramPaddingCalculation
        ;   Label: LAB_004450b9
    MOV EAX,dword ptr [ECX]             ; 004450bf | g_CramSortedTextureEntries | DAT_0083c228
    ADD EAX,EBP                         ; 004450c1
    MOV dword ptr [ECX + 0x8],EAX       ; 004450c3 | g_CramSortedTextureEntries[0].padded_width | DAT_0083c230
    MOV EAX,dword ptr [ECX + 0x4]       ; 004450c6 | DAT_0083c1e0 | DAT_0083c22c
    ADD EAX,EBP                         ; 004450c9
    MOV dword ptr [ECX + 0xc],EAX       ; 004450cb | g_CramSortedTextureEntries[0].padded_height | DAT_0083c234
    MOV EDI,dword ptr [0x0084a868]      ; 004450ce | g_CramMinPlacementX
    MOV EAX,dword ptr [ECX + 0x8]       ; 004450d4 | g_CramSortedTextureEntries[0].padded_width | DAT_0083c230
    MOV EBX,ECX                         ; 004450d7
    CMP EAX,EDI                         ; 004450d9
    JGE 0x004450e2                      ; 004450db
        ;   XREF to: 004450e2 (CONDITIONAL_JUMP)  ; LAB_004450e2
    MOV [0x0084a868],EAX                ; 004450dd | g_CramMinPlacementX
    MOV EBP,dword ptr [0x0084a86c]      ; 004450e2 | g_CramMinPlacementY
        ;   Label: LAB_004450e2
    MOV EAX,dword ptr [EBX + 0xc]       ; 004450e8 | g_CramSortedTextureEntries[0].padded_height | DAT_0083c234
    CMP EAX,EBP                         ; 004450eb
    JGE 0x004450f4                      ; 004450ed
        ;   XREF to: 004450f4 (CONDITIONAL_JUMP)  ; LAB_004450f4
    MOV [0x0084a86c],EAX                ; 004450ef | g_CramMinPlacementY
    MOV EDI,dword ptr [0x0084a854]      ; 004450f4 | g_CramTextureCount
        ;   Label: LAB_004450f4
    INC EDX                             ; 004450fa
    ADD ECX,0x4c                        ; 004450fb | DAT_0083c228
    CMP EDX,EDI                         ; 004450fe
    JL 0x004450b9                       ; 00445100
        ;   XREF to: 004450b9 (CONDITIONAL_JUMP)  ; LAB_004450b9
    MOV EDX,dword ptr [0x0084a86c]      ; 00445102 | g_CramMinPlacementY
        ;   Label: LAB_00445102
    MOV EAX,[0x0084a868]                ; 00445108 | g_CramMinPlacementX
    CMP EAX,EDX                         ; 0044510d
    JGE 0x004454a3                      ; 0044510f
        ;   XREF to: 004454a3 (CONDITIONAL_JUMP)  ; LAB_004454a3
    MOV EBX,0x1                         ; 00445115
        ;   Label: LAB_00445115
    MOV EDI,dword ptr [0x0084a860]      ; 0044511a | g_CramRectangleCount
    MOV [0x0084a870],EAX                ; 00445120 | g_CramOptimalPlacement
    XOR EBP,EBP                         ; 00445125
    MOV EAX,[0x0083c1e4]                ; 00445127 | g_CramSortedTextureEntries[0].padded_width
    MOV dword ptr [0x0083c21c],EBP      ; 0044512c | g_CramSortedTextureEntries[0].placement_flags
    MOV dword ptr [0x0083c1ec],EBP      ; 00445132 | g_CramSortedTextureEntries[0].assigned_map_number
    MOV dword ptr [0x0083c1f8],EBP      ; 00445138 | g_CramSortedTextureEntries[0].placement_bottom
    MOV dword ptr [0x0083c1fc],EBP      ; 0044513e | g_CramSortedTextureEntries[0].working_right
    MOV [0x0083c1f0],EAX                ; 00445144 | g_CramSortedTextureEntries[0].effective_width
    MOV EAX,[0x0083c1e8]                ; 00445149 | g_CramSortedTextureEntries[0].padded_height
    MOV dword ptr [0x0084a85c],EBX      ; 0044514e | g_CramPlacedTextureCount
    MOV [0x0083c1f4],EAX                ; 00445154 | g_CramSortedTextureEntries[0].effective_height
    MOV EAX,[0x0083c1f0]                ; 00445159 | g_CramSortedTextureEntries[0].effective_width
    MOV dword ptr [ESP + 0x8],EBP       ; 0044515e
    MOV [0x0083c200],EAX                ; 00445162 | g_CramSortedTextureEntries[0].working_top
    MOV EAX,[0x0083c1f4]                ; 00445167 | g_CramSortedTextureEntries[0].effective_height
    XOR EBX,EBX                         ; 0044516c
    MOV [0x0083c204],EAX                ; 0044516e | g_CramSortedTextureEntries[0].working_width
    MOV ECX,EAX                         ; 00445173
    TEST EDI,EDI                        ; 00445175
    JLE 0x004454b5                      ; 00445177
        ;   XREF to: 004454b5 (CONDITIONAL_JUMP)  ; LAB_004454b5
    XOR EAX,EAX                         ; 0044517d
    IMUL EDX,EDI,0x28                   ; 0044517f
    CMP dword ptr [EAX + 0x840c14],0x0  ; 00445182 | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_00445182
    JNZ 0x004454aa                      ; 00445189
        ;   XREF to: 004454aa (CONDITIONAL_JUMP)  ; LAB_004454aa
    CMP dword ptr [EAX + 0x840c18],0x0  ; 0044518f | DAT_00840c18 | DAT_00840c40
    JNZ 0x004454aa                      ; 00445196
        ;   XREF to: 004454aa (CONDITIONAL_JUMP)  ; LAB_004454aa
    CMP ECX,dword ptr [EAX + 0x840c1c]  ; 0044519c | DAT_00840c1c | DAT_00840c44
    JNZ 0x004454aa                      ; 004451a2
        ;   XREF to: 004454aa (CONDITIONAL_JUMP)  ; LAB_004454aa
    MOV ECX,dword ptr [0x0083c200]      ; 004451a8 | g_CramSortedTextureEntries[0].working_top
        ;   Label: LAB_004451a8
    MOV EBX,dword ptr [0x0083c1fc]      ; 004451ae | g_CramSortedTextureEntries[0].working_right
    XOR EBP,EBP                         ; 004451b4
    MOV EAX,[0x0084a860]                ; 004451b6 | g_CramRectangleCount
    MOV dword ptr [ESP + 0x10],EBP      ; 004451bb
    TEST EAX,EAX                        ; 004451bf
    JLE 0x00445590                      ; 004451c1
        ;   XREF to: 00445590 (CONDITIONAL_JUMP)  ; LAB_00445590
    MOV EDI,dword ptr [0x0084a860]      ; 004451c7 | g_CramRectangleCount
    XOR EAX,EAX                         ; 004451cd
    IMUL EDX,EDI,0x28                   ; 004451cf
    CMP dword ptr [EAX + 0x840c14],0x0  ; 004451d2 | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_004451d2
    JNZ 0x00445585                      ; 004451d9
        ;   XREF to: 00445585 (CONDITIONAL_JUMP)  ; LAB_00445585
    CMP ECX,dword ptr [EAX + 0x840c18]  ; 004451df | DAT_00840c18 | DAT_00840c40
    JNZ 0x00445585                      ; 004451e5
        ;   XREF to: 00445585 (CONDITIONAL_JUMP)  ; LAB_00445585
    CMP EBX,dword ptr [EAX + 0x840c1c]  ; 004451eb | DAT_00840c1c | DAT_00840c44
    JNZ 0x00445585                      ; 004451f1
        ;   XREF to: 00445585 (CONDITIONAL_JUMP)  ; LAB_00445585
    MOV EBP,0x1                         ; 004451f7
        ;   Label: LAB_004451f7
    MOV EAX,[0x0084a858]                ; 004451fc | g_CramTotalMaps
    MOV dword ptr [ESP + 0x2c],EBP      ; 00445201
    CMP EAX,EBP                         ; 00445205
    JLE 0x00445265                      ; 00445207
        ;   XREF to: 00445265 (CONDITIONAL_JUMP)  ; LAB_00445265
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00445209
        ;   Label: LAB_00445209
    MOV EBP,dword ptr [0x0084a860]      ; 0044520d | g_CramRectangleCount
    XOR EBX,EBX                         ; 00445213
    XOR ECX,ECX                         ; 00445215
    MOV dword ptr [ESP + 0x18],EAX      ; 00445217
    TEST EBP,EBP                        ; 0044521b
    JLE 0x00445669                      ; 0044521d
        ;   XREF to: 00445669 (CONDITIONAL_JUMP)  ; LAB_00445669
    MOV EDI,dword ptr [ESP + 0x18]      ; 00445223
    XOR EAX,EAX                         ; 00445227
    IMUL EDX,EBP,0x28                   ; 00445229
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 0044522c | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_0044522c
    JNZ 0x0044565e                      ; 00445232
        ;   XREF to: 0044565e (CONDITIONAL_JUMP)  ; LAB_0044565e
    CMP dword ptr [EAX + 0x840c18],0x0  ; 00445238 | DAT_00840c18 | DAT_00840c40
    JNZ 0x0044565e                      ; 0044523f
        ;   XREF to: 0044565e (CONDITIONAL_JUMP)  ; LAB_0044565e
    CMP dword ptr [EAX + 0x840c1c],0x0  ; 00445245 | DAT_00840c1c | DAT_00840c44
    JNZ 0x0044565e                      ; 0044524c
        ;   XREF to: 0044565e (CONDITIONAL_JUMP)  ; LAB_0044565e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00445252
        ;   Label: LAB_00445252
    INC EDX                             ; 00445256
    MOV ECX,dword ptr [0x0084a858]      ; 00445257 | g_CramTotalMaps
    MOV dword ptr [ESP + 0x2c],EDX      ; 0044525d
    CMP EDX,ECX                         ; 00445261
    JL 0x00445209                       ; 00445263
        ;   XREF to: 00445209 (CONDITIONAL_JUMP)  ; LAB_00445209
    IMUL EAX,dword ptr [0x0084a85c],0x4c ; 00445265 | g_CramPlacedTextureCount
        ;   Label: LAB_00445265
    ADD EAX,0x83c1dc                    ; 0044526c | DAT_0083c228 | g_CramSortedTextureEntries
    PUSH EAX                            ; 00445271 | DAT_0083c228
    CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 ; 00445272
        ;   XREF to: 00446160 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry)
    MOV EAX,[0x0084a87c]                ; 00445277 | g_CramAtlasHeight
    MOV ESI,dword ptr [0x0084a884]      ; 0044527c | g_CramCurrentAcceptableSize
    IMUL EAX,ESI                        ; 00445282
    MOV EDX,dword ptr [0x0084a878]      ; 00445285 | g_CramAtlasWidth
    DEC EDX                             ; 0044528b
    ADD EDX,EAX                         ; 0044528c
    MOV EDI,dword ptr [0x0084a878]      ; 0044528e | g_CramAtlasWidth
    MOV EAX,EDX                         ; 00445294
    SAR EDX,0x1f                        ; 00445296
    IDIV EDI                            ; 00445299
    MOV EBP,dword ptr [0x0084a880]      ; 0044529b | g_CramPaddingCalculation
    ADD ESP,0x4                         ; 004452a1
    CMP EAX,EBP                         ; 004452a4
    JG 0x00445737                       ; 004452a6
        ;   XREF to: 00445737 (CONDITIONAL_JUMP)  ; LAB_00445737
    PUSH 0x0                            ; 004452ac
    PUSH 0x1                            ; 004452ae
    PUSH 0x1                            ; 004452b0
    XOR EBX,EBX                         ; 004452b2
    CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 ; 004452b4
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)
    MOV EDI,dword ptr [0x0084a854]      ; 004452b9 | g_CramTextureCount
    ADD ESP,0xc                         ; 004452bf
    TEST EDI,EDI                        ; 004452c2
    JLE 0x00445310                      ; 004452c4
        ;   XREF to: 00445310 (CONDITIONAL_JUMP)  ; LAB_00445310
    MOV ECX,0x83c1dc                    ; 004452c6 | g_CramSortedTextureEntries
    MOV EAX,[0x0084a880]                ; 004452cb | g_CramPaddingCalculation
        ;   Label: LAB_004452cb
    MOV EDX,EAX                         ; 004452d0
    SAR EDX,0x1f                        ; 004452d2
    SUB EAX,EDX                         ; 004452d5
    SAR EAX,0x1                         ; 004452d7
    ADD ECX,0x4c                        ; 004452d9 | DAT_0083c228
    INC EBX                             ; 004452dc
    MOV ESI,dword ptr [ECX + -0x18]     ; 004452dd | DAT_0083c210 | DAT_0083c25c
    MOV EDI,dword ptr [ECX + -0x14]     ; 004452e0 | DAT_0083c214 | DAT_0083c260
    MOV EBP,dword ptr [ECX + -0x10]     ; 004452e3 | DAT_0083c218 | DAT_0083c264
    MOV EDX,dword ptr [ECX + -0x1c]     ; 004452e6 | DAT_0083c20c | DAT_0083c258
    ADD ESI,EAX                         ; 004452e9
    ADD EDI,EAX                         ; 004452eb
    MOV dword ptr [ECX + -0x18],ESI     ; 004452ed | DAT_0083c210 | DAT_0083c25c
    ADD EBP,EAX                         ; 004452f0
    MOV dword ptr [ECX + -0x14],EDI     ; 004452f2 | DAT_0083c214 | DAT_0083c260
    ADD EDX,EAX                         ; 004452f5
    MOV dword ptr [ECX + -0x10],EBP     ; 004452f7 | DAT_0083c218 | DAT_0083c264
    MOV EAX,[0x0084a854]                ; 004452fa | g_CramTextureCount
    MOV dword ptr [ECX + -0x1c],EDX     ; 004452ff | DAT_0083c20c | DAT_0083c258
    CMP EBX,EAX                         ; 00445302
    JL 0x004452cb                       ; 00445304
        ;   XREF to: 004452cb (CONDITIONAL_JUMP)  ; LAB_004452cb
    LEA EAX,[EAX]                       ; 00445306
    LEA EDX,[EDX]                       ; 0044530c
    PUSH 0x271                          ; 00445310
        ;   Label: LAB_00445310
    PUSH 0x619726                       ; 00445315 | = "..\\shape\\cramtex.cpp"
    PUSH 0x61973b                       ; 0044531a | = "wt"
    PUSH 0x0                            ; 0044531f
    PUSH 0x61973e                       ; 00445321 | = "..\\shape\\CramTex.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00445326
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0044532b
    MOV EBP,EAX                         ; 0044532e
    TEST EAX,EAX                        ; 00445330
    JZ 0x004453c0                       ; 00445332
        ;   XREF to: 004453c0 (CONDITIONAL_JUMP)  ; LAB_004453c0
    MOV EDX,dword ptr [0x0084a854]      ; 00445338 | g_CramTextureCount
    MOV EDI,EAX                         ; 0044533e
    XOR ESI,ESI                         ; 00445340
    TEST EDX,EDX                        ; 00445342
    JLE 0x00445390                      ; 00445344
        ;   XREF to: 00445390 (CONDITIONAL_JUMP)  ; LAB_00445390
    MOV EBX,0x83c1dc                    ; 00445346 | g_CramSortedTextureEntries
    MOV ECX,dword ptr [EBX + 0x44]      ; 0044534b | DAT_0083c220 | DAT_0083c26c
        ;   Label: LAB_0044534b
    PUSH ECX                            ; 0044534e
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0044534f | DAT_0083c218 | DAT_0083c264
    PUSH EAX                            ; 00445352
    MOV EDX,dword ptr [EBX + 0x38]      ; 00445353 | DAT_0083c214 | DAT_0083c260
    PUSH EDX                            ; 00445356
    MOV ECX,dword ptr [EBX + 0x34]      ; 00445357 | DAT_0083c210 | DAT_0083c25c
    PUSH ECX                            ; 0044535a
    MOV EAX,dword ptr [EBX + 0x30]      ; 0044535b | DAT_0083c20c | DAT_0083c258
    PUSH EAX                            ; 0044535e
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0044535f | DAT_0083c208 | DAT_0083c254
    PUSH EDX                            ; 00445362
    MOV ECX,dword ptr [EBX + 0x4]       ; 00445363 | DAT_0083c1e0 | DAT_0083c22c
    PUSH ECX                            ; 00445366
    MOV EAX,dword ptr [EBX]             ; 00445367 | g_CramSortedTextureEntries | DAT_0083c228
    PUSH EAX                            ; 00445369
    PUSH ESI                            ; 0044536a
    PUSH 0x619753                       ; 0044536b | = "%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5..."
    PUSH EDI                            ; 00445370
    ADD EBX,0x4c                        ; 00445371 | DAT_0083c228 | DAT_0083c274
    INC ESI                             ; 00445374
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445375
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [0x0084a854]      ; 0044537a | g_CramTextureCount
    ADD ESP,0x2c                        ; 00445380
    CMP ESI,EDX                         ; 00445383
    JL 0x0044534b                       ; 00445385
        ;   XREF to: 0044534b (CONDITIONAL_JUMP)  ; LAB_0044534b
    LEA EAX,[EAX]                       ; 00445387
    LEA EDX,[EDX]                       ; 0044538d
    MOV ECX,dword ptr [0x0084a880]      ; 00445390 | g_CramPaddingCalculation
        ;   Label: LAB_00445390
    PUSH ECX                            ; 00445396
    MOV EBX,dword ptr [0x0084a884]      ; 00445397 | g_CramCurrentAcceptableSize
    PUSH EBX                            ; 0044539d
    PUSH EBX                            ; 0044539e
    PUSH 0x619790                       ; 0044539f | = "%ux%u square found using %u padding.\n"
    PUSH EDI                            ; 004453a4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004453a5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004453aa
    PUSH 0x274                          ; 004453ad
    PUSH 0x6197b6                       ; 004453b2 | = "..\\shape\\cramtex.cpp"
    PUSH EBP                            ; 004453b7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004453b8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004453bd
    MOV EDI,dword ptr [ESP]             ; 004453c0
        ;   Label: LAB_004453c0
    PUSH EDI                            ; 004453c3
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 004453c4
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005feb80(uint seed)
    ADD ESP,0x4                         ; 004453c9
    MOV EBP,dword ptr [ESP + 0x44]      ; 004453cc
    XOR EBX,EBX                         ; 004453d0
    TEST EBP,EBP                        ; 004453d2
    JLE 0x00445447                      ; 004453d4
        ;   XREF to: 00445447 (CONDITIONAL_JUMP)  ; LAB_00445447
    MOV EAX,0x83c1dc                    ; 004453d6 | g_CramSortedTextureEntries
    MOV EDX,dword ptr [EAX + 0x48]      ; 004453db | DAT_0083c224 | DAT_0083c270
        ;   Label: LAB_004453db
    MOV ECX,dword ptr [EAX + 0x2c]      ; 004453de | DAT_0083c208 | DAT_0083c254
    MOV dword ptr [EDX + 0x210],ECX     ; 004453e1
    MOV ECX,dword ptr [EAX + 0x44]      ; 004453e7 | DAT_0083c220 | DAT_0083c26c
    MOV dword ptr [EDX + 0x214],ECX     ; 004453ea
    MOV ECX,dword ptr [EAX + 0x30]      ; 004453f0 | DAT_0083c20c | DAT_0083c258
    MOV dword ptr [EDX + 0x218],ECX     ; 004453f3
    MOV ECX,dword ptr [EAX + 0x34]      ; 004453f9 | DAT_0083c210 | DAT_0083c25c
    MOV dword ptr [EDX + 0x21c],ECX     ; 004453fc
    CMP dword ptr [EDX + 0x214],0x0     ; 00445402
    JNZ 0x004457b5                      ; 00445409
        ;   XREF to: 004457b5 (CONDITIONAL_JUMP)  ; LAB_004457b5
    MOV ESI,dword ptr [EAX + 0x30]      ; 0044540f | DAT_0083c20c | DAT_0083c258
    MOV ECX,dword ptr [EAX + 0x38]      ; 00445412 | DAT_0083c214 | DAT_0083c260
    SUB ECX,ESI                         ; 00445415
    MOV ESI,dword ptr [0x0084a880]      ; 00445417 | g_CramPaddingCalculation
    SUB ECX,ESI                         ; 0044541d
    MOV dword ptr [EDX + 0x220],ECX     ; 0044541f
    MOV ESI,dword ptr [EAX + 0x3c]      ; 00445425 | DAT_0083c218
    MOV EDI,dword ptr [EAX + 0x34]      ; 00445428 | DAT_0083c210
    MOV ECX,dword ptr [0x0084a880]      ; 0044542b | g_CramPaddingCalculation
    SUB ESI,EDI                         ; 00445431
    SUB ESI,ECX                         ; 00445433
    MOV dword ptr [EDX + 0x224],ESI     ; 00445435
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044543b
        ;   Label: LAB_0044543b
    INC EBX                             ; 0044543f
    ADD EAX,0x4c                        ; 00445440
    CMP EBX,EDX                         ; 00445443
    JL 0x004453db                       ; 00445445
        ;   XREF to: 004453db (CONDITIONAL_JUMP)  ; LAB_004453db
    MOV EDX,dword ptr [ESP + 0x60]      ; 00445447
        ;   Label: LAB_00445447
    MOV EAX,[0x0084a884]                ; 0044544b | g_CramCurrentAcceptableSize
    MOV dword ptr [EDX],EAX             ; 00445450
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00445452
    MOV dword ptr [EDX],EAX             ; 00445456
    XOR EAX,EAX                         ; 00445458
    ADD ESP,0x30                        ; 0044545a
    POP EBP                             ; 0044545d
    POP EDI                             ; 0044545e
    POP ESI                             ; 0044545f
    POP EBX                             ; 00445460
    RET                                 ; 00445461
    MOV EDI,dword ptr [0x0084a880]      ; 00445462 | g_CramPaddingCalculation
        ;   Label: LAB_00445462
    PUSH EDI                            ; 00445468
    PUSH 0x619604                       ; 00445469 | = "initial pad guess = %d\n"
    PUSH EAX                            ; 0044546e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044546f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00445474
    PUSH 0x1e6                          ; 00445477
    PUSH 0x61961c                       ; 0044547c | = "..\\shape\\cramtex.cpp"
    PUSH EBX                            ; 00445481
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00445482
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00445487
    JMP 0x00444f4c                      ; 0044548a
        ;   XREF to: 00444f4c (UNCONDITIONAL_JUMP)  ; LAB_00444f4c
    MOV dword ptr [0x0084a880],EBX      ; 0044548f | g_CramPaddingCalculation
        ;   Label: LAB_0044548f
    CMP EDI,0xa                         ; 00445495
    JL 0x00444f66                       ; 00445498
        ;   XREF to: 00444f66 (CONDITIONAL_JUMP)  ; LAB_00444f66
    JMP 0x00445071                      ; 0044549e
        ;   XREF to: 00445071 (UNCONDITIONAL_JUMP)  ; LAB_00445071
    MOV EAX,EDX                         ; 004454a3
        ;   Label: LAB_004454a3
    JMP 0x00445115                      ; 004454a5
        ;   XREF to: 00445115 (UNCONDITIONAL_JUMP)  ; LAB_00445115
    ADD EAX,0x28                        ; 004454aa
        ;   Label: LAB_004454aa
    CMP EAX,EDX                         ; 004454ad
    JL 0x00445182                       ; 004454af
        ;   XREF to: 00445182 (CONDITIONAL_JUMP)  ; LAB_00445182
    XOR EAX,EAX                         ; 004454b5
        ;   Label: LAB_004454b5
    MOV EDX,dword ptr [0x0084a860]      ; 004454b7 | g_CramRectangleCount
    MOV dword ptr [ESP + 0xc],EAX       ; 004454bd
    IMUL EAX,EDX,0x28                   ; 004454c1
    ADD EAX,0x840c14                    ; 004454c4 | g_CramRectangles
    MOV dword ptr [ESP + 0x20],EAX      ; 004454c9 | g_CramRectangles
    CMP dword ptr [ESP + 0xc],0x0       ; 004454cd
        ;   Label: LAB_004454cd
    JZ 0x0044552c                       ; 004454d2
        ;   XREF to: 0044552c (CONDITIONAL_JUMP)  ; LAB_0044552c
    MOV EDI,dword ptr [0x0084a868]      ; 004454d4 | g_CramMinPlacementX
    MOV ESI,dword ptr [0x0084a86c]      ; 004454da | g_CramMinPlacementY
    ADD EDI,ECX                         ; 004454e0
        ;   Label: LAB_004454e0
    ADD ESI,EBX                         ; 004454e2
    MOV EDX,dword ptr [0x0084a85c]      ; 004454e4 | g_CramPlacedTextureCount
    DEC EDX                             ; 004454ea
    TEST EDX,EDX                        ; 004454eb
    JL 0x00445514                       ; 004454ed
        ;   XREF to: 00445514 (CONDITIONAL_JUMP)  ; LAB_00445514
    IMUL EAX,EDX,0x4c                   ; 004454ef
    ADD EAX,0x83c1dc                    ; 004454f2 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 004454f7 | DAT_0083c1a0 | g_CramSortedTextureEntries[0].assigned_map_number
        ;   Label: LAB_004454f7
    CMP EBP,dword ptr [ESP + 0x8]       ; 004454fa
    JNZ 0x0044553a                      ; 004454fe
        ;   XREF to: 0044553a (CONDITIONAL_JUMP)  ; LAB_0044553a
    CMP EBX,dword ptr [EAX + 0x24]      ; 00445500 | DAT_0083c1b4 | g_CramSortedTextureEntries[0].working_top
    JGE 0x0044553a                      ; 00445503
        ;   XREF to: 0044553a (CONDITIONAL_JUMP)  ; LAB_0044553a
    CMP ECX,dword ptr [EAX + 0x28]      ; 00445505 | DAT_0083c1b8 | g_CramSortedTextureEntries[0].working_width
    JGE 0x0044553a                      ; 00445508
        ;   XREF to: 0044553a (CONDITIONAL_JUMP)  ; LAB_0044553a
    CMP ESI,dword ptr [EAX + 0x1c]      ; 0044550a | DAT_0083c1ac | g_CramSortedTextureEntries[0].placement_bottom
    JLE 0x0044553a                      ; 0044550d
        ;   XREF to: 0044553a (CONDITIONAL_JUMP)  ; LAB_0044553a
    CMP EDI,dword ptr [EAX + 0x20]      ; 0044550f | DAT_0083c1b0 | g_CramSortedTextureEntries[0].working_right
    JLE 0x0044553a                      ; 00445512
        ;   XREF to: 0044553a (CONDITIONAL_JUMP)  ; LAB_0044553a
    TEST EDX,EDX                        ; 00445514
        ;   Label: LAB_00445514
    JL 0x00445544                       ; 00445516
        ;   XREF to: 00445544 (CONDITIONAL_JUMP)  ; LAB_00445544
    MOV ESI,dword ptr [ESP + 0xc]       ; 00445518
        ;   Label: LAB_00445518
    INC ESI                             ; 0044551c
    MOV dword ptr [ESP + 0xc],ESI       ; 0044551d
    CMP ESI,0x1                         ; 00445521
    JG 0x004451a8                       ; 00445524
        ;   XREF to: 004451a8 (CONDITIONAL_JUMP)  ; LAB_004451a8
    JMP 0x004454cd                      ; 0044552a
        ;   XREF to: 004454cd (UNCONDITIONAL_JUMP)  ; LAB_004454cd
    MOV EDI,dword ptr [0x0084a86c]      ; 0044552c | g_CramMinPlacementY
        ;   Label: LAB_0044552c
    MOV ESI,dword ptr [0x0084a868]      ; 00445532 | g_CramMinPlacementX
    JMP 0x004454e0                      ; 00445538
        ;   XREF to: 004454e0 (UNCONDITIONAL_JUMP)  ; LAB_004454e0
    DEC EDX                             ; 0044553a
        ;   Label: LAB_0044553a
    SUB EAX,0x4c                        ; 0044553b
    TEST EDX,EDX                        ; 0044553e
    JGE 0x004454f7                      ; 00445540
        ;   XREF to: 004454f7 (CONDITIONAL_JUMP)  ; LAB_004454f7
    JMP 0x00445514                      ; 00445542
        ;   XREF to: 00445514 (UNCONDITIONAL_JUMP)  ; LAB_00445514
    MOV EDX,dword ptr [ESP + 0x20]      ; 00445544
        ;   Label: LAB_00445544
    MOV dword ptr [EDX + 0x18],0x0      ; 00445548 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044554f
    MOV dword ptr [EDX + 0x24],0x1      ; 00445553 | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 0044555a | g_CramRectangles
    MOV dword ptr [EDX + 0x4],EBX       ; 0044555c | DAT_00840c18
    MOV dword ptr [EDX + 0x8],ECX       ; 0044555f | DAT_00840c1c
    MOV dword ptr [EDX + 0xc],ESI       ; 00445562 | DAT_00840c20
    MOV EAX,dword ptr [ESP + 0xc]       ; 00445565
    MOV dword ptr [EDX + 0x14],EAX      ; 00445569 | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 0044556c | DAT_00840c3c
    MOV dword ptr [EDX + 0x10],EDI      ; 0044556f | DAT_00840c24
    MOV EDX,dword ptr [0x0084a860]      ; 00445572 | g_CramRectangleCount
    INC EDX                             ; 00445578
    MOV dword ptr [ESP + 0x20],EAX      ; 00445579 | DAT_00840c3c
    MOV dword ptr [0x0084a860],EDX      ; 0044557d | g_CramRectangleCount
    JMP 0x00445518                      ; 00445583
        ;   XREF to: 00445518 (UNCONDITIONAL_JUMP)  ; LAB_00445518
    ADD EAX,0x28                        ; 00445585
        ;   Label: LAB_00445585
    CMP EAX,EDX                         ; 00445588
    JL 0x004451d2                       ; 0044558a
        ;   XREF to: 004451d2 (CONDITIONAL_JUMP)  ; LAB_004451d2
    IMUL EAX,dword ptr [0x0084a860],0x28 ; 00445590 | g_CramRectangleCount
        ;   Label: LAB_00445590
    XOR EDX,EDX                         ; 00445597
    ADD EAX,0x840c14                    ; 00445599 | g_CramRectangles
    MOV dword ptr [ESP + 0x14],EDX      ; 0044559e
    MOV dword ptr [ESP + 0x24],EAX      ; 004455a2 | g_CramRectangles | DAT_00840c3c
    CMP dword ptr [ESP + 0x14],0x0      ; 004455a6
        ;   Label: LAB_004455a6
    JZ 0x00445605                       ; 004455ab
        ;   XREF to: 00445605 (CONDITIONAL_JUMP)  ; LAB_00445605
    MOV ESI,dword ptr [0x0084a868]      ; 004455ad | g_CramMinPlacementX
    MOV EDI,dword ptr [0x0084a86c]      ; 004455b3 | g_CramMinPlacementY
    ADD ESI,EBX                         ; 004455b9
        ;   Label: LAB_004455b9
    ADD EDI,ECX                         ; 004455bb
    MOV EDX,dword ptr [0x0084a85c]      ; 004455bd | g_CramPlacedTextureCount
    DEC EDX                             ; 004455c3
    TEST EDX,EDX                        ; 004455c4
    JL 0x004455ed                       ; 004455c6
        ;   XREF to: 004455ed (CONDITIONAL_JUMP)  ; LAB_004455ed
    IMUL EAX,EDX,0x4c                   ; 004455c8
    ADD EAX,0x83c1dc                    ; 004455cb | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 004455d0 | DAT_0083c1a0 | g_CramSortedTextureEntries[0].assigned_map_number
        ;   Label: LAB_004455d0
    CMP EBP,dword ptr [ESP + 0x10]      ; 004455d3
    JNZ 0x00445613                      ; 004455d7
        ;   XREF to: 00445613 (CONDITIONAL_JUMP)  ; LAB_00445613
    CMP ECX,dword ptr [EAX + 0x24]      ; 004455d9 | DAT_0083c1b4 | g_CramSortedTextureEntries[0].working_top
    JGE 0x00445613                      ; 004455dc
        ;   XREF to: 00445613 (CONDITIONAL_JUMP)  ; LAB_00445613
    CMP EBX,dword ptr [EAX + 0x28]      ; 004455de | DAT_0083c1b8 | g_CramSortedTextureEntries[0].working_width
    JGE 0x00445613                      ; 004455e1
        ;   XREF to: 00445613 (CONDITIONAL_JUMP)  ; LAB_00445613
    CMP EDI,dword ptr [EAX + 0x1c]      ; 004455e3 | DAT_0083c1ac | g_CramSortedTextureEntries[0].placement_bottom
    JLE 0x00445613                      ; 004455e6
        ;   XREF to: 00445613 (CONDITIONAL_JUMP)  ; LAB_00445613
    CMP ESI,dword ptr [EAX + 0x20]      ; 004455e8 | DAT_0083c1b0 | g_CramSortedTextureEntries[0].working_right
    JLE 0x00445613                      ; 004455eb
        ;   XREF to: 00445613 (CONDITIONAL_JUMP)  ; LAB_00445613
    TEST EDX,EDX                        ; 004455ed
        ;   Label: LAB_004455ed
    JL 0x0044561d                       ; 004455ef
        ;   XREF to: 0044561d (CONDITIONAL_JUMP)  ; LAB_0044561d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004455f1
        ;   Label: LAB_004455f1
    INC ESI                             ; 004455f5
    MOV dword ptr [ESP + 0x14],ESI      ; 004455f6
    CMP ESI,0x1                         ; 004455fa
    JG 0x004451f7                       ; 004455fd
        ;   XREF to: 004451f7 (CONDITIONAL_JUMP)  ; LAB_004451f7
    JMP 0x004455a6                      ; 00445603
        ;   XREF to: 004455a6 (UNCONDITIONAL_JUMP)  ; LAB_004455a6
    MOV ESI,dword ptr [0x0084a86c]      ; 00445605 | g_CramMinPlacementY
        ;   Label: LAB_00445605
    MOV EDI,dword ptr [0x0084a868]      ; 0044560b | g_CramMinPlacementX
    JMP 0x004455b9                      ; 00445611
        ;   XREF to: 004455b9 (UNCONDITIONAL_JUMP)  ; LAB_004455b9
    DEC EDX                             ; 00445613
        ;   Label: LAB_00445613
    SUB EAX,0x4c                        ; 00445614
    TEST EDX,EDX                        ; 00445617
    JGE 0x004455d0                      ; 00445619
        ;   XREF to: 004455d0 (CONDITIONAL_JUMP)  ; LAB_004455d0
    JMP 0x004455ed                      ; 0044561b
        ;   XREF to: 004455ed (UNCONDITIONAL_JUMP)  ; LAB_004455ed
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044561d
        ;   Label: LAB_0044561d
    MOV dword ptr [EDX + 0x18],0x0      ; 00445621 | DAT_00840c2c | DAT_00840c54
    MOV EAX,dword ptr [ESP + 0x10]      ; 00445628
    MOV dword ptr [EDX + 0x24],0x1      ; 0044562c | DAT_00840c38 | DAT_00840c60
    MOV dword ptr [EDX],EAX             ; 00445633 | g_CramRectangles | DAT_00840c3c
    MOV dword ptr [EDX + 0x4],ECX       ; 00445635 | DAT_00840c18 | DAT_00840c40
    MOV dword ptr [EDX + 0x8],EBX       ; 00445638 | DAT_00840c1c | DAT_00840c44
    MOV dword ptr [EDX + 0xc],EDI       ; 0044563b | DAT_00840c20 | DAT_00840c48
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044563e
    MOV dword ptr [EDX + 0x14],EAX      ; 00445642 | DAT_00840c28 | DAT_00840c50
    LEA EAX,[EDX + 0x28]                ; 00445645 | DAT_00840c3c
    MOV dword ptr [EDX + 0x10],ESI      ; 00445648 | DAT_00840c24 | DAT_00840c4c
    MOV EDX,dword ptr [0x0084a860]      ; 0044564b | g_CramRectangleCount
    INC EDX                             ; 00445651
    MOV dword ptr [ESP + 0x24],EAX      ; 00445652 | DAT_00840c3c | DAT_00840c64
    MOV dword ptr [0x0084a860],EDX      ; 00445656 | g_CramRectangleCount
    JMP 0x004455f1                      ; 0044565c
        ;   XREF to: 004455f1 (UNCONDITIONAL_JUMP)  ; LAB_004455f1
    ADD EAX,0x28                        ; 0044565e
        ;   Label: LAB_0044565e
    CMP EAX,EDX                         ; 00445661
    JL 0x0044522c                       ; 00445663
        ;   XREF to: 0044522c (CONDITIONAL_JUMP)  ; LAB_0044522c
    IMUL EAX,dword ptr [0x0084a860],0x28 ; 00445669 | g_CramRectangleCount
        ;   Label: LAB_00445669
    XOR EDI,EDI                         ; 00445670
    ADD EAX,0x840c14                    ; 00445672 | g_CramRectangles
    MOV dword ptr [ESP + 0x1c],EDI      ; 00445677
    MOV dword ptr [ESP + 0x28],EAX      ; 0044567b | g_CramRectangles | DAT_00840c3c
    CMP dword ptr [ESP + 0x1c],0x0      ; 0044567f
        ;   Label: LAB_0044567f
    JZ 0x004456de                       ; 00445684
        ;   XREF to: 004456de (CONDITIONAL_JUMP)  ; LAB_004456de
    MOV EDI,dword ptr [0x0084a868]      ; 00445686 | g_CramMinPlacementX
    MOV ESI,dword ptr [0x0084a86c]      ; 0044568c | g_CramMinPlacementY
    ADD EDI,ECX                         ; 00445692
        ;   Label: LAB_00445692
    ADD ESI,EBX                         ; 00445694
    MOV EDX,dword ptr [0x0084a85c]      ; 00445696 | g_CramPlacedTextureCount
    DEC EDX                             ; 0044569c
    TEST EDX,EDX                        ; 0044569d
    JL 0x004456c6                       ; 0044569f
        ;   XREF to: 004456c6 (CONDITIONAL_JUMP)  ; LAB_004456c6
    IMUL EAX,EDX,0x4c                   ; 004456a1
    ADD EAX,0x83c1dc                    ; 004456a4 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 004456a9 | DAT_0083c1a0 | g_CramSortedTextureEntries[0].assigned_map_number
        ;   Label: LAB_004456a9
    CMP EBP,dword ptr [ESP + 0x18]      ; 004456ac
    JNZ 0x004456ec                      ; 004456b0
        ;   XREF to: 004456ec (CONDITIONAL_JUMP)  ; LAB_004456ec
    CMP EBX,dword ptr [EAX + 0x24]      ; 004456b2 | DAT_0083c1b4 | g_CramSortedTextureEntries[0].working_top
    JGE 0x004456ec                      ; 004456b5
        ;   XREF to: 004456ec (CONDITIONAL_JUMP)  ; LAB_004456ec
    CMP ECX,dword ptr [EAX + 0x28]      ; 004456b7 | DAT_0083c1b8 | g_CramSortedTextureEntries[0].working_width
    JGE 0x004456ec                      ; 004456ba
        ;   XREF to: 004456ec (CONDITIONAL_JUMP)  ; LAB_004456ec
    CMP ESI,dword ptr [EAX + 0x1c]      ; 004456bc | DAT_0083c1ac | g_CramSortedTextureEntries[0].placement_bottom
    JLE 0x004456ec                      ; 004456bf
        ;   XREF to: 004456ec (CONDITIONAL_JUMP)  ; LAB_004456ec
    CMP EDI,dword ptr [EAX + 0x20]      ; 004456c1 | DAT_0083c1b0 | g_CramSortedTextureEntries[0].working_right
    JLE 0x004456ec                      ; 004456c4
        ;   XREF to: 004456ec (CONDITIONAL_JUMP)  ; LAB_004456ec
    TEST EDX,EDX                        ; 004456c6
        ;   Label: LAB_004456c6
    JL 0x004456f6                       ; 004456c8
        ;   XREF to: 004456f6 (CONDITIONAL_JUMP)  ; LAB_004456f6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004456ca
        ;   Label: LAB_004456ca
    INC ESI                             ; 004456ce
    MOV dword ptr [ESP + 0x1c],ESI      ; 004456cf
    CMP ESI,0x1                         ; 004456d3
    JG 0x00445252                       ; 004456d6
        ;   XREF to: 00445252 (CONDITIONAL_JUMP)  ; LAB_00445252
    JMP 0x0044567f                      ; 004456dc
        ;   XREF to: 0044567f (UNCONDITIONAL_JUMP)  ; LAB_0044567f
    MOV EDI,dword ptr [0x0084a86c]      ; 004456de | g_CramMinPlacementY
        ;   Label: LAB_004456de
    MOV ESI,dword ptr [0x0084a868]      ; 004456e4 | g_CramMinPlacementX
    JMP 0x00445692                      ; 004456ea
        ;   XREF to: 00445692 (UNCONDITIONAL_JUMP)  ; LAB_00445692
    DEC EDX                             ; 004456ec
        ;   Label: LAB_004456ec
    SUB EAX,0x4c                        ; 004456ed
    TEST EDX,EDX                        ; 004456f0
    JGE 0x004456a9                      ; 004456f2
        ;   XREF to: 004456a9 (CONDITIONAL_JUMP)  ; LAB_004456a9
    JMP 0x004456c6                      ; 004456f4
        ;   XREF to: 004456c6 (UNCONDITIONAL_JUMP)  ; LAB_004456c6
    MOV EDX,dword ptr [ESP + 0x28]      ; 004456f6
        ;   Label: LAB_004456f6
    MOV dword ptr [EDX + 0x18],0x0      ; 004456fa | DAT_00840c2c | DAT_00840c54
    MOV EAX,dword ptr [ESP + 0x18]      ; 00445701
    MOV dword ptr [EDX + 0x24],0x1      ; 00445705 | DAT_00840c38 | DAT_00840c60
    MOV dword ptr [EDX],EAX             ; 0044570c | g_CramRectangles | DAT_00840c3c
    MOV dword ptr [EDX + 0x4],EBX       ; 0044570e | DAT_00840c18 | DAT_00840c40
    MOV dword ptr [EDX + 0x8],ECX       ; 00445711 | DAT_00840c1c | DAT_00840c44
    MOV dword ptr [EDX + 0xc],ESI       ; 00445714 | DAT_00840c20 | DAT_00840c48
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00445717
    MOV dword ptr [EDX + 0x14],EAX      ; 0044571b | DAT_00840c28 | DAT_00840c50
    LEA EAX,[EDX + 0x28]                ; 0044571e | DAT_00840c3c
    MOV dword ptr [EDX + 0x10],EDI      ; 00445721 | DAT_00840c24 | DAT_00840c4c
    MOV EDX,dword ptr [0x0084a860]      ; 00445724 | g_CramRectangleCount
    INC EDX                             ; 0044572a
    MOV dword ptr [ESP + 0x28],EAX      ; 0044572b | DAT_00840c3c | DAT_00840c64
    MOV dword ptr [0x0084a860],EDX      ; 0044572f | g_CramRectangleCount
    JMP 0x004456ca                      ; 00445735
        ;   XREF to: 004456ca (UNCONDITIONAL_JUMP)  ; LAB_004456ca
    CMP ESI,dword ptr [0x0084a874]      ; 00445737 | g_CramAcceptableSize
        ;   Label: LAB_00445737
    JLE 0x00445745                      ; 0044573d
        ;   XREF to: 00445745 (CONDITIONAL_JUMP)  ; LAB_00445745
    MOV dword ptr [0x0084a874],ESI      ; 0044573f | g_CramAcceptableSize
    PUSH 0x24f                          ; 00445745
        ;   Label: LAB_00445745
    PUSH 0x6196ab                       ; 0044574a | = "..\\shape\\cramtex.cpp"
    PUSH 0x6196c0                       ; 0044574f | = "at"
    MOV ECX,dword ptr [0x0084a874]      ; 00445754 | g_CramAcceptableSize
    PUSH 0x0                            ; 0044575a
    INC ECX                             ; 0044575c
    PUSH 0x6196c3                       ; 0044575d | = "..\\shape\\cramlog.txt"
    MOV dword ptr [0x0084a874],ECX      ; 00445762 | g_CramAcceptableSize
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00445768
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 0044576d
    ADD ESP,0x14                        ; 0044576f
    TEST EAX,EAX                        ; 00445772
    JZ 0x00444f54                       ; 00445774
        ;   XREF to: 00444f54 (CONDITIONAL_JUMP)  ; LAB_00444f54
    PUSH 0x6196d8                       ; 0044577a | = "UNDERESTIMATED PAD!!\n"
    PUSH EAX                            ; 0044577f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445780
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00445785
    MOV ESI,dword ptr [0x0084a874]      ; 00445788 | g_CramAcceptableSize
    PUSH ESI                            ; 0044578e
    PUSH 0x6196ee                       ; 0044578f | = "acceptableSize now adjusted to %d\n"
    PUSH EBX                            ; 00445794
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445795
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0044579a
    PUSH 0x253                          ; 0044579d
    PUSH 0x619711                       ; 004457a2 | = "..\\shape\\cramtex.cpp"
    PUSH EBX                            ; 004457a7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004457a8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004457ad
    JMP 0x00444f54                      ; 004457b0
        ;   XREF to: 00444f54 (UNCONDITIONAL_JUMP)  ; LAB_00444f54
    MOV EBP,dword ptr [EAX + 0x30]      ; 004457b5 | DAT_0083c20c | DAT_0083c258
        ;   Label: LAB_004457b5
    MOV ESI,dword ptr [EAX + 0x38]      ; 004457b8 | DAT_0083c214 | DAT_0083c260
    MOV ECX,dword ptr [0x0084a880]      ; 004457bb | g_CramPaddingCalculation
    SUB ESI,EBP                         ; 004457c1
    SUB ESI,ECX                         ; 004457c3
    MOV dword ptr [EDX + 0x224],ESI     ; 004457c5
    MOV ECX,dword ptr [EAX + 0x3c]      ; 004457cb | DAT_0083c218 | DAT_0083c264
    SUB ECX,dword ptr [EAX + 0x34]      ; 004457ce | DAT_0083c210 | DAT_0083c25c
    MOV ESI,dword ptr [0x0084a880]      ; 004457d1 | g_CramPaddingCalculation
    SUB ECX,ESI                         ; 004457d7
    MOV dword ptr [EDX + 0x220],ECX     ; 004457d9
    JMP 0x0044543b                      ; 004457df
        ;   XREF to: 0044543b (UNCONDITIONAL_JUMP)  ; LAB_0044543b

