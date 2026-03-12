; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_cramtex_cpp_generateTextureAtlas_FUN_00445820(int acceptable_coverage)
;
; Parameters:
; int              Stack[0x4]:4   acceptable_coverage
; Local Variables:
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x24]:4  local_24
; SCramRectangle * Stack[-0x20]:4  local_20
; SCramRectangle * Stack[-0x1c]:4  local_1c
; SCramRectangle * Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
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
;   ... and 77 more
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdlib.c__qsort_FUN_005fdf38
;   crt_stdlib.c_rand_FUN_005feb5c
;   crt_stdlib.c_srand_FUN_005feb80
;   shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160
;   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445820
        ;   Label: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
    PUSH ESI                            ; 00445821
    PUSH EDI                            ; 00445822
    PUSH EBP                            ; 00445823
    SUB ESP,0x30                        ; 00445824
    PUSH 0x6195c2                       ; 00445827 | = "..\\shape\\cramlog.txt"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0044582c
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00445831
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00445834
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    PUSH 0x16                           ; 00445839
    MOV dword ptr [ESP + 0x4],EAX       ; 0044583b
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 0044583f
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005feb80(uint seed)
    ADD ESP,0x4                         ; 00445844
    PUSH 0x4457f0                       ; 00445847
    PUSH 0x4c                           ; 0044584c
    MOV EDX,dword ptr [0x0084a854]      ; 0044584e | g_CramTextureCount
    PUSH EDX                            ; 00445854
    PUSH 0x83c1dc                       ; 00445855 | g_CramSortedTextureEntries
    CALL crt_stdlib.c__qsort_FUN_005fdf38 ; 0044585a
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    MOV EBX,dword ptr [0x0084a854]      ; 0044585f | g_CramTextureCount
    XOR ECX,ECX                         ; 00445865
    ADD ESP,0x10                        ; 00445867
    MOV dword ptr [0x0084a864],ECX      ; 0044586a | g_CramTotalPixelArea
    TEST EBX,EBX                        ; 00445870
    JLE 0x004458a0                      ; 00445872
        ;   XREF to: 004458a0 (CONDITIONAL_JUMP)  ; LAB_004458a0
    MOV EAX,0x83c1dc                    ; 00445874 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [0x0084a854]      ; 00445879 | g_CramTextureCount
    MOV EDX,dword ptr [EAX]             ; 0044587f | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_0044587f
    IMUL EDX,dword ptr [EAX + 0x4]      ; 00445881 | DAT_0083c1e0 | DAT_0083c22c
    MOV EDI,dword ptr [0x0084a864]      ; 00445885 | g_CramTotalPixelArea
    ADD EAX,0x4c                        ; 0044588b
    ADD EDI,EDX                         ; 0044588e
    INC ECX                             ; 00445890
    MOV dword ptr [0x0084a864],EDI      ; 00445891 | g_CramTotalPixelArea
    CMP ECX,EBP                         ; 00445897
    JL 0x0044587f                       ; 00445899
        ;   XREF to: 0044587f (CONDITIONAL_JUMP)  ; LAB_0044587f
    LEA EAX,[EAX]                       ; 0044589b | DAT_0083c228
    MOV ECX,ECX                         ; 0044589e
    MOV EDX,dword ptr [0x0084a864]      ; 004458a0 | g_CramTotalPixelArea
        ;   Label: LAB_004458a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004458a6
    SUB EAX,EDX                         ; 004458ad
    SHL EAX,0x3                         ; 004458af
    ADD EDX,EAX                         ; 004458b2
    SHL EDX,0x2                         ; 004458b4
    MOV ECX,dword ptr [ESP + 0x44]      ; 004458b7
    MOV EAX,EDX                         ; 004458bb
    SAR EDX,0x1f                        ; 004458bd
    IDIV ECX                            ; 004458c0
    MOV ESI,dword ptr [0x0084a858]      ; 004458c2 | g_CramTotalMaps
    MOV EDX,EAX                         ; 004458c8
    MOV EAX,[0x0084a874]                ; 004458ca | g_CramAcceptableSize
        ;   Label: LAB_004458ca
    IMUL EAX,EAX                        ; 004458cf
    IMUL EAX,ESI                        ; 004458d2
    CMP EAX,EDX                         ; 004458d5
    JG 0x004458e1                       ; 004458d7
        ;   XREF to: 004458e1 (CONDITIONAL_JUMP)  ; LAB_004458e1
    INC dword ptr [0x0084a874]          ; 004458d9 | g_CramAcceptableSize
    JMP 0x004458ca                      ; 004458df
        ;   XREF to: 004458ca (UNCONDITIONAL_JUMP)  ; LAB_004458ca
    MOV EAX,[0x0084a87c]                ; 004458e1 | g_CramPaddingSize
        ;   Label: LAB_004458e1
    IMUL EAX,dword ptr [0x0084a874]     ; 004458e6 | g_CramAcceptableSize
    MOV EDX,dword ptr [0x0084a878]      ; 004458ed | g_CramAtlasDimension
    DEC EDX                             ; 004458f3
    ADD EDX,EAX                         ; 004458f4
    MOV ECX,dword ptr [0x0084a878]      ; 004458f6 | g_CramAtlasDimension
    MOV EAX,EDX                         ; 004458fc
    SAR EDX,0x1f                        ; 004458fe
    IDIV ECX                            ; 00445901
    PUSH 0x1e3                          ; 00445903
    PUSH 0x6195d7                       ; 00445908 | = "..\\shape\\cramtex.cpp"
    PUSH 0x6195ec                       ; 0044590d | = "at"
    PUSH 0x0                            ; 00445912
    PUSH 0x6195ef                       ; 00445914 | = "..\\shape\\cramlog.txt"
    MOV [0x0084a880],EAX                ; 00445919 | g_CramPaddingCalculation
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0044591e
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 00445923
    ADD ESP,0x14                        ; 00445925
    TEST EAX,EAX                        ; 00445928
    JNZ 0x00445db4                      ; 0044592a
        ;   XREF to: 00445db4 (CONDITIONAL_JUMP)  ; LAB_00445db4
    MOV dword ptr [ESP + 0x4],0xffffffff ; 00445930
        ;   Label: LAB_00445930
    MOV EBP,dword ptr [ESP + 0x4]       ; 00445938
        ;   Label: LAB_00445938
    MOV EBX,0x84a8b0                    ; 0044593c | g_CramCandidateRectangles
    XOR EDI,EDI                         ; 00445941
    INC EBP                             ; 00445943
    MOV dword ptr [0x00887940],EBX      ; 00445944 | g_CramCandidateWriteCursor
    MOV ESI,dword ptr [0x0084a854]      ; 0044594a | g_CramTextureCount
        ;   Label: LAB_0044594a
    INC EDI                             ; 00445950
    XOR ECX,ECX                         ; 00445951
    TEST ESI,ESI                        ; 00445953
    JLE 0x004459a1                      ; 00445955
        ;   XREF to: 004459a1 (CONDITIONAL_JUMP)  ; LAB_004459a1
    MOV EAX,0x83c1dc                    ; 00445957 | g_CramSortedTextureEntries
    MOV ESI,dword ptr [0x0084a880]      ; 0044595c | g_CramPaddingCalculation
        ;   Label: LAB_0044595c
    MOV EDX,dword ptr [EAX]             ; 00445962 | g_CramSortedTextureEntries | DAT_0083c228
    ADD EDX,ESI                         ; 00445964
    MOV ESI,dword ptr [0x0084a874]      ; 00445966 | g_CramAcceptableSize
    MOV EBX,EAX                         ; 0044596c
    CMP EDX,ESI                         ; 0044596e
    JLE 0x00445978                      ; 00445970
        ;   XREF to: 00445978 (CONDITIONAL_JUMP)  ; LAB_00445978
    MOV dword ptr [0x0084a874],EDX      ; 00445972 | g_CramAcceptableSize
    MOV EDX,dword ptr [EBX + 0x4]       ; 00445978 | DAT_0083c1e0 | DAT_0083c22c
        ;   Label: LAB_00445978
    MOV EBX,dword ptr [0x0084a880]      ; 0044597b | g_CramPaddingCalculation
    MOV ESI,dword ptr [0x0084a874]      ; 00445981 | g_CramAcceptableSize
    ADD EDX,EBX                         ; 00445987
    CMP EDX,ESI                         ; 00445989
    JLE 0x00445993                      ; 0044598b
        ;   XREF to: 00445993 (CONDITIONAL_JUMP)  ; LAB_00445993
    MOV dword ptr [0x0084a874],EDX      ; 0044598d | g_CramAcceptableSize
    MOV EDX,dword ptr [0x0084a854]      ; 00445993 | g_CramTextureCount
        ;   Label: LAB_00445993
    INC ECX                             ; 00445999
    ADD EAX,0x4c                        ; 0044599a
    CMP ECX,EDX                         ; 0044599d
    JL 0x0044595c                       ; 0044599f
        ;   XREF to: 0044595c (CONDITIONAL_JUMP)  ; LAB_0044595c
    MOV EDX,dword ptr [0x0084a874]      ; 004459a1 | g_CramAcceptableSize
        ;   Label: LAB_004459a1
    LEA EDX,[EDX + EDX*0x4]             ; 004459a7
    MOV EAX,EDX                         ; 004459aa
    SAR EDX,0x1f                        ; 004459ac
    SHL EDX,0x2                         ; 004459af
    SBB EAX,EDX                         ; 004459b2
    SAR EAX,0x2                         ; 004459b4
    IMUL EAX,dword ptr [0x0084a87c]     ; 004459b7 | g_CramPaddingSize
    MOV EDX,dword ptr [0x0084a878]      ; 004459be | g_CramAtlasDimension
    DEC EDX                             ; 004459c4
    ADD EDX,EAX                         ; 004459c5
    MOV EBX,dword ptr [0x0084a878]      ; 004459c7 | g_CramAtlasDimension
    MOV EAX,EDX                         ; 004459cd
    SAR EDX,0x1f                        ; 004459cf
    IDIV EBX                            ; 004459d2
    MOV ESI,EAX                         ; 004459d4
    CMP ESI,dword ptr [ESP + 0x4]       ; 004459d6
    JG 0x004459de                       ; 004459da
        ;   XREF to: 004459de (CONDITIONAL_JUMP)  ; LAB_004459de
    MOV ESI,EBP                         ; 004459dc
    PUSH 0x206                          ; 004459de
        ;   Label: LAB_004459de
    PUSH 0x619631                       ; 004459e3 | = "..\\shape\\cramtex.cpp"
    PUSH 0x619646                       ; 004459e8 | = "at"
    PUSH 0x0                            ; 004459ed
    PUSH 0x619649                       ; 004459ef | = "..\\shape\\cramlog.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004459f4
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004459f9
    ADD ESP,0x14                        ; 004459fb
    TEST EAX,EAX                        ; 004459fe
    JZ 0x00445a48                       ; 00445a00
        ;   XREF to: 00445a48 (CONDITIONAL_JUMP)  ; LAB_00445a48
    PUSH EDI                            ; 00445a02
    PUSH 0x61965e                       ; 00445a03 | = "Guess #%d\n"
    PUSH EAX                            ; 00445a08
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445a09
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00445a0e
    MOV EDX,dword ptr [0x0084a874]      ; 00445a11 | g_CramAcceptableSize
    PUSH EDX                            ; 00445a17
    PUSH 0x619669                       ; 00445a18 | = "  acceptableSize = %d\n"
    PUSH EBX                            ; 00445a1d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445a1e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00445a23
    PUSH ESI                            ; 00445a26
    PUSH 0x619680                       ; 00445a27 | = "  estimated pad = %d\n"
    PUSH EBX                            ; 00445a2c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445a2d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00445a32
    PUSH 0x20b                          ; 00445a35
    PUSH 0x619696                       ; 00445a3a | = "..\\shape\\cramtex.cpp"
    PUSH EBX                            ; 00445a3f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00445a40
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00445a45
    CMP ESI,dword ptr [0x0084a880]      ; 00445a48 | g_CramPaddingCalculation
        ;   Label: LAB_00445a48
    JNZ 0x00445de1                      ; 00445a4e
        ;   XREF to: 00445de1 (CONDITIONAL_JUMP)  ; LAB_00445de1
    MOV ESI,0xf423f                     ; 00445a54
        ;   Label: LAB_00445a54
    MOV EAX,[0x0084a880]                ; 00445a59 | g_CramPaddingCalculation
    MOV ECX,dword ptr [0x0084a854]      ; 00445a5e | g_CramTextureCount
    XOR EBX,EBX                         ; 00445a64
    XOR EDX,EDX                         ; 00445a66
    MOV dword ptr [ESP + 0x4],EAX       ; 00445a68
    MOV dword ptr [0x0084a860],EBX      ; 00445a6c | g_CramRectangleCount
    MOV dword ptr [0x0084a88c],ESI      ; 00445a72 | g_CramBestSolutionMetric2
    MOV dword ptr [0x0084a888],ESI      ; 00445a78 | g_CramBestSolutionMetric1
    MOV dword ptr [0x0084a868],ESI      ; 00445a7e | g_CramMinPlacementX
    MOV EAX,[0x0084a874]                ; 00445a84 | g_CramAcceptableSize
    MOV dword ptr [0x0084a86c],ESI      ; 00445a89 | g_CramMinPlacementY
    MOV [0x0084a884],EAX                ; 00445a8f | g_CramCurrentAcceptableSize
    TEST ECX,ECX                        ; 00445a94
    JLE 0x00445ae6                      ; 00445a96
        ;   XREF to: 00445ae6 (CONDITIONAL_JUMP)  ; LAB_00445ae6
    MOV ECX,0x83c1dc                    ; 00445a98 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [0x0084a880]      ; 00445a9d | g_CramPaddingCalculation
        ;   Label: LAB_00445a9d
    MOV EAX,dword ptr [ECX]             ; 00445aa3 | g_CramSortedTextureEntries | DAT_0083c228
    ADD EAX,EBP                         ; 00445aa5
    MOV dword ptr [ECX + 0x8],EAX       ; 00445aa7 | g_CramSortedTextureEntries[0].padded_width | DAT_0083c230
    MOV EAX,dword ptr [ECX + 0x4]       ; 00445aaa | DAT_0083c1e0 | DAT_0083c22c
    ADD EAX,EBP                         ; 00445aad
    MOV dword ptr [ECX + 0xc],EAX       ; 00445aaf | g_CramSortedTextureEntries[0].padded_height | DAT_0083c234
    MOV EDI,dword ptr [0x0084a868]      ; 00445ab2 | g_CramMinPlacementX
    MOV EAX,dword ptr [ECX + 0x8]       ; 00445ab8 | g_CramSortedTextureEntries[0].padded_width | DAT_0083c230
    MOV EBX,ECX                         ; 00445abb
    CMP EAX,EDI                         ; 00445abd
    JGE 0x00445ac6                      ; 00445abf
        ;   XREF to: 00445ac6 (CONDITIONAL_JUMP)  ; LAB_00445ac6
    MOV [0x0084a868],EAX                ; 00445ac1 | g_CramMinPlacementX
    MOV EBP,dword ptr [0x0084a86c]      ; 00445ac6 | g_CramMinPlacementY
        ;   Label: LAB_00445ac6
    MOV EAX,dword ptr [EBX + 0xc]       ; 00445acc | g_CramSortedTextureEntries[0].padded_height | DAT_0083c234
    CMP EAX,EBP                         ; 00445acf
    JGE 0x00445ad8                      ; 00445ad1
        ;   XREF to: 00445ad8 (CONDITIONAL_JUMP)  ; LAB_00445ad8
    MOV [0x0084a86c],EAX                ; 00445ad3 | g_CramMinPlacementY
    MOV EDI,dword ptr [0x0084a854]      ; 00445ad8 | g_CramTextureCount
        ;   Label: LAB_00445ad8
    INC EDX                             ; 00445ade
    ADD ECX,0x4c                        ; 00445adf
    CMP EDX,EDI                         ; 00445ae2
    JL 0x00445a9d                       ; 00445ae4
        ;   XREF to: 00445a9d (CONDITIONAL_JUMP)  ; LAB_00445a9d
    MOV EAX,[0x0084a86c]                ; 00445ae6 | g_CramMinPlacementY
        ;   Label: LAB_00445ae6
    MOV EDX,dword ptr [0x0084a868]      ; 00445aeb | g_CramMinPlacementX
    CMP EDX,EAX                         ; 00445af1
    JGE 0x00445af7                      ; 00445af3
        ;   XREF to: 00445af7 (CONDITIONAL_JUMP)  ; LAB_00445af7
    MOV EAX,EDX                         ; 00445af5
    MOV EBX,0x1                         ; 00445af7
        ;   Label: LAB_00445af7
    MOV EDI,dword ptr [0x0084a860]      ; 00445afc | g_CramRectangleCount
    MOV [0x0084a870],EAX                ; 00445b02 | g_CramOptimalPlacement
    XOR EBP,EBP                         ; 00445b07
    MOV EAX,[0x0083c1e4]                ; 00445b09 | g_CramSortedTextureEntries[0].padded_width
    MOV dword ptr [0x0083c21c],EBP      ; 00445b0e | g_CramSortedTextureEntries[0].placement_flags
    MOV dword ptr [0x0083c1ec],EBP      ; 00445b14 | g_CramSortedTextureEntries[0].assigned_map_number
    MOV dword ptr [0x0083c1f8],EBP      ; 00445b1a | g_CramSortedTextureEntries[0].placement_bottom
    MOV dword ptr [0x0083c1fc],EBP      ; 00445b20 | g_CramSortedTextureEntries[0].working_right
    MOV [0x0083c1f0],EAX                ; 00445b26 | g_CramSortedTextureEntries[0].effective_width
    MOV EAX,[0x0083c1e8]                ; 00445b2b | g_CramSortedTextureEntries[0].padded_height
    MOV dword ptr [0x0084a85c],EBX      ; 00445b30 | g_CramPlacedTextureCount
    MOV [0x0083c1f4],EAX                ; 00445b36 | g_CramSortedTextureEntries[0].effective_height
    MOV EAX,[0x0083c1f0]                ; 00445b3b | g_CramSortedTextureEntries[0].effective_width
    MOV dword ptr [ESP + 0x8],EBP       ; 00445b40
    MOV [0x0083c200],EAX                ; 00445b44 | g_CramSortedTextureEntries[0].working_top
    MOV EAX,[0x0083c1f4]                ; 00445b49 | g_CramSortedTextureEntries[0].effective_height
    XOR EBX,EBX                         ; 00445b4e
    MOV [0x0083c204],EAX                ; 00445b50 | g_CramSortedTextureEntries[0].working_width
    MOV ECX,EAX                         ; 00445b55
    TEST EDI,EDI                        ; 00445b57
    JLE 0x00445e00                      ; 00445b59
        ;   XREF to: 00445e00 (CONDITIONAL_JUMP)  ; LAB_00445e00
    XOR EAX,EAX                         ; 00445b5f
    IMUL EDX,EDI,0x28                   ; 00445b61
    CMP dword ptr [EAX + 0x840c14],0x0  ; 00445b64 | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_00445b64
    JNZ 0x00445df5                      ; 00445b6b
        ;   XREF to: 00445df5 (CONDITIONAL_JUMP)  ; LAB_00445df5
    CMP dword ptr [EAX + 0x840c18],0x0  ; 00445b71 | DAT_00840c18 | DAT_00840c40
    JNZ 0x00445df5                      ; 00445b78
        ;   XREF to: 00445df5 (CONDITIONAL_JUMP)  ; LAB_00445df5
    CMP ECX,dword ptr [EAX + 0x840c1c]  ; 00445b7e | DAT_00840c1c | DAT_00840c44
    JNZ 0x00445df5                      ; 00445b84
        ;   XREF to: 00445df5 (CONDITIONAL_JUMP)  ; LAB_00445df5
    MOV ECX,dword ptr [0x0083c200]      ; 00445b8a | g_CramSortedTextureEntries[0].working_top
        ;   Label: LAB_00445b8a
    MOV EBX,dword ptr [0x0083c1fc]      ; 00445b90 | g_CramSortedTextureEntries[0].working_right
    XOR EBP,EBP                         ; 00445b96
    MOV EAX,[0x0084a860]                ; 00445b98 | g_CramRectangleCount
    MOV dword ptr [ESP + 0x10],EBP      ; 00445b9d
    TEST EAX,EAX                        ; 00445ba1
    JLE 0x00445edb                      ; 00445ba3
        ;   XREF to: 00445edb (CONDITIONAL_JUMP)  ; LAB_00445edb
    MOV EDI,dword ptr [0x0084a860]      ; 00445ba9 | g_CramRectangleCount
    XOR EAX,EAX                         ; 00445baf
    IMUL EDX,EDI,0x28                   ; 00445bb1
    CMP dword ptr [EAX + 0x840c14],0x0  ; 00445bb4 | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_00445bb4
    JNZ 0x00445ed0                      ; 00445bbb
        ;   XREF to: 00445ed0 (CONDITIONAL_JUMP)  ; LAB_00445ed0
    CMP ECX,dword ptr [EAX + 0x840c18]  ; 00445bc1 | DAT_00840c18 | DAT_00840c40
    JNZ 0x00445ed0                      ; 00445bc7
        ;   XREF to: 00445ed0 (CONDITIONAL_JUMP)  ; LAB_00445ed0
    CMP EBX,dword ptr [EAX + 0x840c1c]  ; 00445bcd | DAT_00840c1c | DAT_00840c44
    JNZ 0x00445ed0                      ; 00445bd3
        ;   XREF to: 00445ed0 (CONDITIONAL_JUMP)  ; LAB_00445ed0
    MOV EBP,0x1                         ; 00445bd9
        ;   Label: LAB_00445bd9
    MOV EAX,[0x0084a858]                ; 00445bde | g_CramTotalMaps
    MOV dword ptr [ESP + 0x2c],EBP      ; 00445be3
    CMP EAX,EBP                         ; 00445be7
    JLE 0x00445c47                      ; 00445be9
        ;   XREF to: 00445c47 (CONDITIONAL_JUMP)  ; LAB_00445c47
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00445beb
        ;   Label: LAB_00445beb
    MOV EBP,dword ptr [0x0084a860]      ; 00445bef | g_CramRectangleCount
    XOR EBX,EBX                         ; 00445bf5
    XOR ECX,ECX                         ; 00445bf7
    MOV dword ptr [ESP + 0x18],EAX      ; 00445bf9
    TEST EBP,EBP                        ; 00445bfd
    JLE 0x00445fb4                      ; 00445bff
        ;   XREF to: 00445fb4 (CONDITIONAL_JUMP)  ; LAB_00445fb4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00445c05
    XOR EAX,EAX                         ; 00445c09
    IMUL EDX,EBP,0x28                   ; 00445c0b
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 00445c0e | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_00445c0e
    JNZ 0x00445fa9                      ; 00445c14
        ;   XREF to: 00445fa9 (CONDITIONAL_JUMP)  ; LAB_00445fa9
    CMP dword ptr [EAX + 0x840c18],0x0  ; 00445c1a | DAT_00840c18 | DAT_00840c40
    JNZ 0x00445fa9                      ; 00445c21
        ;   XREF to: 00445fa9 (CONDITIONAL_JUMP)  ; LAB_00445fa9
    CMP dword ptr [EAX + 0x840c1c],0x0  ; 00445c27 | DAT_00840c1c | DAT_00840c44
    JNZ 0x00445fa9                      ; 00445c2e
        ;   XREF to: 00445fa9 (CONDITIONAL_JUMP)  ; LAB_00445fa9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00445c34
        ;   Label: LAB_00445c34
    INC EDX                             ; 00445c38
    MOV ECX,dword ptr [0x0084a858]      ; 00445c39 | g_CramTotalMaps
    MOV dword ptr [ESP + 0x2c],EDX      ; 00445c3f
    CMP EDX,ECX                         ; 00445c43
    JL 0x00445beb                       ; 00445c45
        ;   XREF to: 00445beb (CONDITIONAL_JUMP)  ; LAB_00445beb
    IMUL EAX,dword ptr [0x0084a85c],0x4c ; 00445c47 | g_CramPlacedTextureCount
        ;   Label: LAB_00445c47
    ADD EAX,0x83c1dc                    ; 00445c4e | DAT_0083c228 | g_CramSortedTextureEntries
    PUSH EAX                            ; 00445c53 | DAT_0083c228
    CALL shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160 ; 00445c54
        ;   XREF to: 00446160 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_CCramTex_runInteractiveAtlasGeneration_FUN_00446160(CCramTex * this_ptr)
    MOV EAX,[0x0084a87c]                ; 00445c59 | g_CramPaddingSize
    MOV ESI,dword ptr [0x0084a884]      ; 00445c5e | g_CramCurrentAcceptableSize
    IMUL EAX,ESI                        ; 00445c64
    MOV EDX,dword ptr [0x0084a878]      ; 00445c67 | g_CramAtlasDimension
    DEC EDX                             ; 00445c6d
    ADD EDX,EAX                         ; 00445c6e
    MOV EDI,dword ptr [0x0084a878]      ; 00445c70 | g_CramAtlasDimension
    MOV EAX,EDX                         ; 00445c76
    SAR EDX,0x1f                        ; 00445c78
    IDIV EDI                            ; 00445c7b
    MOV EBP,dword ptr [0x0084a880]      ; 00445c7d | g_CramPaddingCalculation
    ADD ESP,0x4                         ; 00445c83
    CMP EAX,EBP                         ; 00445c86
    JG 0x00446082                       ; 00445c88
        ;   XREF to: 00446082 (CONDITIONAL_JUMP)  ; LAB_00446082
    PUSH 0x0                            ; 00445c8e
    PUSH 0x1                            ; 00445c90
    PUSH 0x1                            ; 00445c92
    XOR EBX,EBX                         ; 00445c94
    CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 ; 00445c96
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int show_textures, int is_complete)
    MOV EDI,dword ptr [0x0084a854]      ; 00445c9b | g_CramTextureCount
    ADD ESP,0xc                         ; 00445ca1
    TEST EDI,EDI                        ; 00445ca4
    JLE 0x00445cf0                      ; 00445ca6
        ;   XREF to: 00445cf0 (CONDITIONAL_JUMP)  ; LAB_00445cf0
    MOV ECX,0x83c1dc                    ; 00445ca8 | g_CramSortedTextureEntries
    MOV EAX,[0x0084a880]                ; 00445cad | g_CramPaddingCalculation
        ;   Label: LAB_00445cad
    MOV EDX,EAX                         ; 00445cb2
    SAR EDX,0x1f                        ; 00445cb4
    SUB EAX,EDX                         ; 00445cb7
    SAR EAX,0x1                         ; 00445cb9
    ADD ECX,0x4c                        ; 00445cbb
    INC EBX                             ; 00445cbe
    MOV ESI,dword ptr [ECX + -0x18]     ; 00445cbf | DAT_0083c210 | DAT_0083c25c
    MOV EDI,dword ptr [ECX + -0x14]     ; 00445cc2 | DAT_0083c214 | DAT_0083c260
    MOV EBP,dword ptr [ECX + -0x10]     ; 00445cc5 | DAT_0083c218 | DAT_0083c264
    MOV EDX,dword ptr [ECX + -0x1c]     ; 00445cc8 | DAT_0083c20c | DAT_0083c258
    ADD ESI,EAX                         ; 00445ccb
    ADD EDI,EAX                         ; 00445ccd
    MOV dword ptr [ECX + -0x18],ESI     ; 00445ccf | DAT_0083c210 | DAT_0083c25c
    ADD EBP,EAX                         ; 00445cd2
    MOV dword ptr [ECX + -0x14],EDI     ; 00445cd4 | DAT_0083c214 | DAT_0083c260
    ADD EDX,EAX                         ; 00445cd7
    MOV dword ptr [ECX + -0x10],EBP     ; 00445cd9 | DAT_0083c218
    MOV EAX,[0x0084a854]                ; 00445cdc | g_CramTextureCount
    MOV dword ptr [ECX + -0x1c],EDX     ; 00445ce1 | DAT_0083c20c
    CMP EBX,EAX                         ; 00445ce4
    JL 0x00445cad                       ; 00445ce6
        ;   XREF to: 00445cad (CONDITIONAL_JUMP)  ; LAB_00445cad
    LEA EAX,[EAX]                       ; 00445ce8
    MOV EDX,EDX                         ; 00445cee
    PUSH 0x271                          ; 00445cf0
        ;   Label: LAB_00445cf0
    PUSH 0x619726                       ; 00445cf5 | = "..\\shape\\cramtex.cpp"
    PUSH 0x61973b                       ; 00445cfa | = "wt"
    PUSH 0x0                            ; 00445cff
    PUSH 0x61973e                       ; 00445d01 | = "..\\shape\\CramTex.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00445d06
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00445d0b
    MOV EBP,EAX                         ; 00445d0e
    TEST EAX,EAX                        ; 00445d10
    JZ 0x00445da0                       ; 00445d12
        ;   XREF to: 00445da0 (CONDITIONAL_JUMP)  ; LAB_00445da0
    MOV EDX,dword ptr [0x0084a854]      ; 00445d18 | g_CramTextureCount
    MOV EDI,EAX                         ; 00445d1e
    XOR ESI,ESI                         ; 00445d20
    TEST EDX,EDX                        ; 00445d22
    JLE 0x00445d70                      ; 00445d24
        ;   XREF to: 00445d70 (CONDITIONAL_JUMP)  ; LAB_00445d70
    MOV EBX,0x83c1dc                    ; 00445d26 | g_CramSortedTextureEntries
    MOV ECX,dword ptr [EBX + 0x44]      ; 00445d2b | DAT_0083c220 | DAT_0083c26c
        ;   Label: LAB_00445d2b
    PUSH ECX                            ; 00445d2e
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00445d2f | DAT_0083c218 | DAT_0083c264
    PUSH EAX                            ; 00445d32
    MOV EDX,dword ptr [EBX + 0x38]      ; 00445d33 | DAT_0083c214 | DAT_0083c260
    PUSH EDX                            ; 00445d36
    MOV ECX,dword ptr [EBX + 0x34]      ; 00445d37 | DAT_0083c210 | DAT_0083c25c
    PUSH ECX                            ; 00445d3a
    MOV EAX,dword ptr [EBX + 0x30]      ; 00445d3b | DAT_0083c20c | DAT_0083c258
    PUSH EAX                            ; 00445d3e
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00445d3f | DAT_0083c208 | DAT_0083c254
    PUSH EDX                            ; 00445d42
    MOV ECX,dword ptr [EBX + 0x4]       ; 00445d43 | DAT_0083c1e0 | DAT_0083c22c
    PUSH ECX                            ; 00445d46
    MOV EAX,dword ptr [EBX]             ; 00445d47 | g_CramSortedTextureEntries | DAT_0083c228
    PUSH EAX                            ; 00445d49
    PUSH ESI                            ; 00445d4a
    PUSH 0x619753                       ; 00445d4b | = "%2d: %5dx%-5d  Page %d (%5d,%-5d)-(%5..."
    PUSH EDI                            ; 00445d50
    ADD EBX,0x4c                        ; 00445d51
    INC ESI                             ; 00445d54
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445d55
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,dword ptr [0x0084a854]      ; 00445d5a | g_CramTextureCount
    ADD ESP,0x2c                        ; 00445d60
    CMP ESI,EDX                         ; 00445d63
    JL 0x00445d2b                       ; 00445d65
        ;   XREF to: 00445d2b (CONDITIONAL_JUMP)  ; LAB_00445d2b
    LEA EAX,[EAX]                       ; 00445d67
    LEA EDX,[EDX]                       ; 00445d6d
    MOV ECX,dword ptr [0x0084a880]      ; 00445d70 | g_CramPaddingCalculation
        ;   Label: LAB_00445d70
    PUSH ECX                            ; 00445d76
    MOV EBX,dword ptr [0x0084a884]      ; 00445d77 | g_CramCurrentAcceptableSize
    PUSH EBX                            ; 00445d7d
    PUSH EBX                            ; 00445d7e
    PUSH 0x619790                       ; 00445d7f | = "%ux%u square found using %u padding.\n"
    PUSH EDI                            ; 00445d84
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445d85
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00445d8a
    PUSH 0x274                          ; 00445d8d
    PUSH 0x6197b6                       ; 00445d92 | = "..\\shape\\cramtex.cpp"
    PUSH EBP                            ; 00445d97
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00445d98
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00445d9d
    MOV EBP,dword ptr [ESP]             ; 00445da0
        ;   Label: LAB_00445da0
    PUSH EBP                            ; 00445da3
    CALL crt_stdlib.c_srand_FUN_005feb80 ; 00445da4
        ;   XREF to: 005feb80 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_srand_FUN_005feb80(uint seed)
    ADD ESP,0x4                         ; 00445da9
    ADD ESP,0x30                        ; 00445dac
    POP EBP                             ; 00445daf
    POP EDI                             ; 00445db0
    POP ESI                             ; 00445db1
    POP EBX                             ; 00445db2
    RET                                 ; 00445db3
    MOV EBP,dword ptr [0x0084a880]      ; 00445db4 | g_CramPaddingCalculation
        ;   Label: LAB_00445db4
    PUSH EBP                            ; 00445dba
    PUSH 0x619604                       ; 00445dbb | = "initial pad guess = %d\n"
    PUSH EAX                            ; 00445dc0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00445dc1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00445dc6
    PUSH 0x1e6                          ; 00445dc9
    PUSH 0x61961c                       ; 00445dce | = "..\\shape\\cramtex.cpp"
    PUSH EBX                            ; 00445dd3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00445dd4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00445dd9
    JMP 0x00445930                      ; 00445ddc
        ;   XREF to: 00445930 (UNCONDITIONAL_JUMP)  ; LAB_00445930
    MOV dword ptr [0x0084a880],ESI      ; 00445de1 | g_CramPaddingCalculation
        ;   Label: LAB_00445de1
    CMP EDI,0xa                         ; 00445de7
    JL 0x0044594a                       ; 00445dea
        ;   XREF to: 0044594a (CONDITIONAL_JUMP)  ; LAB_0044594a
    JMP 0x00445a54                      ; 00445df0
        ;   XREF to: 00445a54 (UNCONDITIONAL_JUMP)  ; LAB_00445a54
    ADD EAX,0x28                        ; 00445df5
        ;   Label: LAB_00445df5
    CMP EAX,EDX                         ; 00445df8
    JL 0x00445b64                       ; 00445dfa
        ;   XREF to: 00445b64 (CONDITIONAL_JUMP)  ; LAB_00445b64
    XOR EAX,EAX                         ; 00445e00
        ;   Label: LAB_00445e00
    MOV EDX,dword ptr [0x0084a860]      ; 00445e02 | g_CramRectangleCount
    MOV dword ptr [ESP + 0xc],EAX       ; 00445e08
    IMUL EAX,EDX,0x28                   ; 00445e0c
    ADD EAX,0x840c14                    ; 00445e0f | g_CramRectangles
    MOV dword ptr [ESP + 0x20],EAX      ; 00445e14 | g_CramRectangles
    CMP dword ptr [ESP + 0xc],0x0       ; 00445e18
        ;   Label: LAB_00445e18
    JZ 0x00445e77                       ; 00445e1d
        ;   XREF to: 00445e77 (CONDITIONAL_JUMP)  ; LAB_00445e77
    MOV ESI,dword ptr [0x0084a868]      ; 00445e1f | g_CramMinPlacementX
    MOV EDI,dword ptr [0x0084a86c]      ; 00445e25 | g_CramMinPlacementY
    ADD ESI,ECX                         ; 00445e2b
        ;   Label: LAB_00445e2b
    ADD EDI,EBX                         ; 00445e2d
    MOV EDX,dword ptr [0x0084a85c]      ; 00445e2f | g_CramPlacedTextureCount
    DEC EDX                             ; 00445e35
    TEST EDX,EDX                        ; 00445e36
    JL 0x00445e5f                       ; 00445e38
        ;   XREF to: 00445e5f (CONDITIONAL_JUMP)  ; LAB_00445e5f
    IMUL EAX,EDX,0x4c                   ; 00445e3a
    ADD EAX,0x83c1dc                    ; 00445e3d | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 00445e42 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_00445e42
    CMP EBP,dword ptr [ESP + 0x8]       ; 00445e45
    JNZ 0x00445e85                      ; 00445e49
        ;   XREF to: 00445e85 (CONDITIONAL_JUMP)  ; LAB_00445e85
    CMP EBX,dword ptr [EAX + 0x24]      ; 00445e4b | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00445e85                      ; 00445e4e
        ;   XREF to: 00445e85 (CONDITIONAL_JUMP)  ; LAB_00445e85
    CMP ECX,dword ptr [EAX + 0x28]      ; 00445e50 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00445e85                      ; 00445e53
        ;   XREF to: 00445e85 (CONDITIONAL_JUMP)  ; LAB_00445e85
    CMP EDI,dword ptr [EAX + 0x1c]      ; 00445e55 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x00445e85                      ; 00445e58
        ;   XREF to: 00445e85 (CONDITIONAL_JUMP)  ; LAB_00445e85
    CMP ESI,dword ptr [EAX + 0x20]      ; 00445e5a | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x00445e85                      ; 00445e5d
        ;   XREF to: 00445e85 (CONDITIONAL_JUMP)  ; LAB_00445e85
    TEST EDX,EDX                        ; 00445e5f
        ;   Label: LAB_00445e5f
    JL 0x00445e8f                       ; 00445e61
        ;   XREF to: 00445e8f (CONDITIONAL_JUMP)  ; LAB_00445e8f
    MOV ESI,dword ptr [ESP + 0xc]       ; 00445e63
        ;   Label: LAB_00445e63
    INC ESI                             ; 00445e67
    MOV dword ptr [ESP + 0xc],ESI       ; 00445e68
    CMP ESI,0x1                         ; 00445e6c
    JG 0x00445b8a                       ; 00445e6f
        ;   XREF to: 00445b8a (CONDITIONAL_JUMP)  ; LAB_00445b8a
    JMP 0x00445e18                      ; 00445e75
        ;   XREF to: 00445e18 (UNCONDITIONAL_JUMP)  ; LAB_00445e18
    MOV ESI,dword ptr [0x0084a86c]      ; 00445e77 | g_CramMinPlacementY
        ;   Label: LAB_00445e77
    MOV EDI,dword ptr [0x0084a868]      ; 00445e7d | g_CramMinPlacementX
    JMP 0x00445e2b                      ; 00445e83
        ;   XREF to: 00445e2b (UNCONDITIONAL_JUMP)  ; LAB_00445e2b
    DEC EDX                             ; 00445e85
        ;   Label: LAB_00445e85
    SUB EAX,0x4c                        ; 00445e86
    TEST EDX,EDX                        ; 00445e89
    JGE 0x00445e42                      ; 00445e8b
        ;   XREF to: 00445e42 (CONDITIONAL_JUMP)  ; LAB_00445e42
    JMP 0x00445e5f                      ; 00445e8d
        ;   XREF to: 00445e5f (UNCONDITIONAL_JUMP)  ; LAB_00445e5f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00445e8f
        ;   Label: LAB_00445e8f
    MOV dword ptr [EDX + 0x18],0x0      ; 00445e93 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00445e9a
    MOV dword ptr [EDX + 0x24],0x1      ; 00445e9e | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 00445ea5 | g_CramRectangles
    MOV dword ptr [EDX + 0x4],EBX       ; 00445ea7 | DAT_00840c18
    MOV dword ptr [EDX + 0x8],ECX       ; 00445eaa | DAT_00840c1c
    MOV dword ptr [EDX + 0xc],EDI       ; 00445ead | DAT_00840c20
    MOV EAX,dword ptr [ESP + 0xc]       ; 00445eb0
    MOV dword ptr [EDX + 0x14],EAX      ; 00445eb4 | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 00445eb7 | DAT_00840c3c
    MOV dword ptr [EDX + 0x10],ESI      ; 00445eba | DAT_00840c24
    MOV EDX,dword ptr [0x0084a860]      ; 00445ebd | g_CramRectangleCount
    INC EDX                             ; 00445ec3
    MOV dword ptr [ESP + 0x20],EAX      ; 00445ec4 | DAT_00840c3c
    MOV dword ptr [0x0084a860],EDX      ; 00445ec8 | g_CramRectangleCount
    JMP 0x00445e63                      ; 00445ece
        ;   XREF to: 00445e63 (UNCONDITIONAL_JUMP)  ; LAB_00445e63
    ADD EAX,0x28                        ; 00445ed0
        ;   Label: LAB_00445ed0
    CMP EAX,EDX                         ; 00445ed3
    JL 0x00445bb4                       ; 00445ed5
        ;   XREF to: 00445bb4 (CONDITIONAL_JUMP)  ; LAB_00445bb4
    IMUL EAX,dword ptr [0x0084a860],0x28 ; 00445edb | g_CramRectangleCount
        ;   Label: LAB_00445edb
    XOR EDX,EDX                         ; 00445ee2
    ADD EAX,0x840c14                    ; 00445ee4 | g_CramRectangles
    MOV dword ptr [ESP + 0x14],EDX      ; 00445ee9
    MOV dword ptr [ESP + 0x24],EAX      ; 00445eed | DAT_00840c3c
    CMP dword ptr [ESP + 0x14],0x0      ; 00445ef1
        ;   Label: LAB_00445ef1
    JZ 0x00445f50                       ; 00445ef6
        ;   XREF to: 00445f50 (CONDITIONAL_JUMP)  ; LAB_00445f50
    MOV EDI,dword ptr [0x0084a868]      ; 00445ef8 | g_CramMinPlacementX
    MOV ESI,dword ptr [0x0084a86c]      ; 00445efe | g_CramMinPlacementY
    ADD EDI,EBX                         ; 00445f04
        ;   Label: LAB_00445f04
    ADD ESI,ECX                         ; 00445f06
    MOV EDX,dword ptr [0x0084a85c]      ; 00445f08 | g_CramPlacedTextureCount
    DEC EDX                             ; 00445f0e
    TEST EDX,EDX                        ; 00445f0f
    JL 0x00445f38                       ; 00445f11
        ;   XREF to: 00445f38 (CONDITIONAL_JUMP)  ; LAB_00445f38
    IMUL EAX,EDX,0x4c                   ; 00445f13
    ADD EAX,0x83c1dc                    ; 00445f16 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 00445f1b | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_00445f1b
    CMP EBP,dword ptr [ESP + 0x10]      ; 00445f1e
    JNZ 0x00445f5e                      ; 00445f22
        ;   XREF to: 00445f5e (CONDITIONAL_JUMP)  ; LAB_00445f5e
    CMP ECX,dword ptr [EAX + 0x24]      ; 00445f24 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00445f5e                      ; 00445f27
        ;   XREF to: 00445f5e (CONDITIONAL_JUMP)  ; LAB_00445f5e
    CMP EBX,dword ptr [EAX + 0x28]      ; 00445f29 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00445f5e                      ; 00445f2c
        ;   XREF to: 00445f5e (CONDITIONAL_JUMP)  ; LAB_00445f5e
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00445f2e | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x00445f5e                      ; 00445f31
        ;   XREF to: 00445f5e (CONDITIONAL_JUMP)  ; LAB_00445f5e
    CMP EDI,dword ptr [EAX + 0x20]      ; 00445f33 | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x00445f5e                      ; 00445f36
        ;   XREF to: 00445f5e (CONDITIONAL_JUMP)  ; LAB_00445f5e
    TEST EDX,EDX                        ; 00445f38
        ;   Label: LAB_00445f38
    JL 0x00445f68                       ; 00445f3a
        ;   XREF to: 00445f68 (CONDITIONAL_JUMP)  ; LAB_00445f68
    MOV ESI,dword ptr [ESP + 0x14]      ; 00445f3c
        ;   Label: LAB_00445f3c
    INC ESI                             ; 00445f40
    MOV dword ptr [ESP + 0x14],ESI      ; 00445f41
    CMP ESI,0x1                         ; 00445f45
    JG 0x00445bd9                       ; 00445f48
        ;   XREF to: 00445bd9 (CONDITIONAL_JUMP)  ; LAB_00445bd9
    JMP 0x00445ef1                      ; 00445f4e
        ;   XREF to: 00445ef1 (UNCONDITIONAL_JUMP)  ; LAB_00445ef1
    MOV EDI,dword ptr [0x0084a86c]      ; 00445f50 | g_CramMinPlacementY
        ;   Label: LAB_00445f50
    MOV ESI,dword ptr [0x0084a868]      ; 00445f56 | g_CramMinPlacementX
    JMP 0x00445f04                      ; 00445f5c
        ;   XREF to: 00445f04 (UNCONDITIONAL_JUMP)  ; LAB_00445f04
    DEC EDX                             ; 00445f5e
        ;   Label: LAB_00445f5e
    SUB EAX,0x4c                        ; 00445f5f
    TEST EDX,EDX                        ; 00445f62
    JGE 0x00445f1b                      ; 00445f64
        ;   XREF to: 00445f1b (CONDITIONAL_JUMP)  ; LAB_00445f1b
    JMP 0x00445f38                      ; 00445f66
        ;   XREF to: 00445f38 (UNCONDITIONAL_JUMP)  ; LAB_00445f38
    MOV EDX,dword ptr [ESP + 0x24]      ; 00445f68
        ;   Label: LAB_00445f68
    MOV dword ptr [EDX + 0x18],0x0      ; 00445f6c | DAT_00840c54
    MOV EAX,dword ptr [ESP + 0x10]      ; 00445f73
    MOV dword ptr [EDX + 0x24],0x1      ; 00445f77 | DAT_00840c60
    MOV dword ptr [EDX],EAX             ; 00445f7e | DAT_00840c3c
    MOV dword ptr [EDX + 0x4],ECX       ; 00445f80 | DAT_00840c40
    MOV dword ptr [EDX + 0x8],EBX       ; 00445f83 | DAT_00840c44
    MOV dword ptr [EDX + 0xc],ESI       ; 00445f86 | DAT_00840c48
    MOV EAX,dword ptr [ESP + 0x14]      ; 00445f89
    MOV dword ptr [EDX + 0x14],EAX      ; 00445f8d | DAT_00840c50
    LEA EAX,[EDX + 0x28]                ; 00445f90 | DAT_00840c64
    MOV dword ptr [EDX + 0x10],EDI      ; 00445f93 | DAT_00840c4c
    MOV EDX,dword ptr [0x0084a860]      ; 00445f96 | g_CramRectangleCount
    INC EDX                             ; 00445f9c
    MOV dword ptr [ESP + 0x24],EAX      ; 00445f9d | DAT_00840c64
    MOV dword ptr [0x0084a860],EDX      ; 00445fa1 | g_CramRectangleCount
    JMP 0x00445f3c                      ; 00445fa7
        ;   XREF to: 00445f3c (UNCONDITIONAL_JUMP)  ; LAB_00445f3c
    ADD EAX,0x28                        ; 00445fa9
        ;   Label: LAB_00445fa9
    CMP EAX,EDX                         ; 00445fac
    JL 0x00445c0e                       ; 00445fae
        ;   XREF to: 00445c0e (CONDITIONAL_JUMP)  ; LAB_00445c0e
    IMUL EAX,dword ptr [0x0084a860],0x28 ; 00445fb4 | g_CramRectangleCount
        ;   Label: LAB_00445fb4
    XOR EDI,EDI                         ; 00445fbb
    ADD EAX,0x840c14                    ; 00445fbd | g_CramRectangles
    MOV dword ptr [ESP + 0x1c],EDI      ; 00445fc2
    MOV dword ptr [ESP + 0x28],EAX      ; 00445fc6 | DAT_00840c3c
    CMP dword ptr [ESP + 0x1c],0x0      ; 00445fca
        ;   Label: LAB_00445fca
    JZ 0x00446029                       ; 00445fcf
        ;   XREF to: 00446029 (CONDITIONAL_JUMP)  ; LAB_00446029
    MOV ESI,dword ptr [0x0084a868]      ; 00445fd1 | g_CramMinPlacementX
    MOV EDI,dword ptr [0x0084a86c]      ; 00445fd7 | g_CramMinPlacementY
    ADD ESI,ECX                         ; 00445fdd
        ;   Label: LAB_00445fdd
    ADD EDI,EBX                         ; 00445fdf
    MOV EDX,dword ptr [0x0084a85c]      ; 00445fe1 | g_CramPlacedTextureCount
    DEC EDX                             ; 00445fe7
    TEST EDX,EDX                        ; 00445fe8
    JL 0x00446011                       ; 00445fea
        ;   XREF to: 00446011 (CONDITIONAL_JUMP)  ; LAB_00446011
    IMUL EAX,EDX,0x4c                   ; 00445fec
    ADD EAX,0x83c1dc                    ; 00445fef | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 00445ff4 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_00445ff4
    CMP EBP,dword ptr [ESP + 0x18]      ; 00445ff7
    JNZ 0x00446037                      ; 00445ffb
        ;   XREF to: 00446037 (CONDITIONAL_JUMP)  ; LAB_00446037
    CMP EBX,dword ptr [EAX + 0x24]      ; 00445ffd | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00446037                      ; 00446000
        ;   XREF to: 00446037 (CONDITIONAL_JUMP)  ; LAB_00446037
    CMP ECX,dword ptr [EAX + 0x28]      ; 00446002 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00446037                      ; 00446005
        ;   XREF to: 00446037 (CONDITIONAL_JUMP)  ; LAB_00446037
    CMP EDI,dword ptr [EAX + 0x1c]      ; 00446007 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x00446037                      ; 0044600a
        ;   XREF to: 00446037 (CONDITIONAL_JUMP)  ; LAB_00446037
    CMP ESI,dword ptr [EAX + 0x20]      ; 0044600c | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x00446037                      ; 0044600f
        ;   XREF to: 00446037 (CONDITIONAL_JUMP)  ; LAB_00446037
    TEST EDX,EDX                        ; 00446011
        ;   Label: LAB_00446011
    JL 0x00446041                       ; 00446013
        ;   XREF to: 00446041 (CONDITIONAL_JUMP)  ; LAB_00446041
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00446015
        ;   Label: LAB_00446015
    INC ESI                             ; 00446019
    MOV dword ptr [ESP + 0x1c],ESI      ; 0044601a
    CMP ESI,0x1                         ; 0044601e
    JG 0x00445c34                       ; 00446021
        ;   XREF to: 00445c34 (CONDITIONAL_JUMP)  ; LAB_00445c34
    JMP 0x00445fca                      ; 00446027
        ;   XREF to: 00445fca (UNCONDITIONAL_JUMP)  ; LAB_00445fca
    MOV ESI,dword ptr [0x0084a86c]      ; 00446029 | g_CramMinPlacementY
        ;   Label: LAB_00446029
    MOV EDI,dword ptr [0x0084a868]      ; 0044602f | g_CramMinPlacementX
    JMP 0x00445fdd                      ; 00446035
        ;   XREF to: 00445fdd (UNCONDITIONAL_JUMP)  ; LAB_00445fdd
    DEC EDX                             ; 00446037
        ;   Label: LAB_00446037
    SUB EAX,0x4c                        ; 00446038
    TEST EDX,EDX                        ; 0044603b
    JGE 0x00445ff4                      ; 0044603d
        ;   XREF to: 00445ff4 (CONDITIONAL_JUMP)  ; LAB_00445ff4
    JMP 0x00446011                      ; 0044603f
        ;   XREF to: 00446011 (UNCONDITIONAL_JUMP)  ; LAB_00446011
    MOV EDX,dword ptr [ESP + 0x28]      ; 00446041
        ;   Label: LAB_00446041
    MOV dword ptr [EDX + 0x18],0x0      ; 00446045 | DAT_00840c54
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044604c
    MOV dword ptr [EDX + 0x24],0x1      ; 00446050 | DAT_00840c60
    MOV dword ptr [EDX],EAX             ; 00446057 | DAT_00840c3c
    MOV dword ptr [EDX + 0x4],EBX       ; 00446059 | DAT_00840c40
    MOV dword ptr [EDX + 0x8],ECX       ; 0044605c | DAT_00840c44
    MOV dword ptr [EDX + 0xc],EDI       ; 0044605f | DAT_00840c48
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00446062
    MOV dword ptr [EDX + 0x14],EAX      ; 00446066 | DAT_00840c50
    LEA EAX,[EDX + 0x28]                ; 00446069 | DAT_00840c64
    MOV dword ptr [EDX + 0x10],ESI      ; 0044606c | DAT_00840c4c
    MOV EDX,dword ptr [0x0084a860]      ; 0044606f | g_CramRectangleCount
    INC EDX                             ; 00446075
    MOV dword ptr [ESP + 0x28],EAX      ; 00446076 | DAT_00840c64
    MOV dword ptr [0x0084a860],EDX      ; 0044607a | g_CramRectangleCount
    JMP 0x00446015                      ; 00446080
        ;   XREF to: 00446015 (UNCONDITIONAL_JUMP)  ; LAB_00446015
    CMP ESI,dword ptr [0x0084a874]      ; 00446082 | g_CramAcceptableSize
        ;   Label: LAB_00446082
    JLE 0x00446090                      ; 00446088
        ;   XREF to: 00446090 (CONDITIONAL_JUMP)  ; LAB_00446090
    MOV dword ptr [0x0084a874],ESI      ; 0044608a | g_CramAcceptableSize
    PUSH 0x24f                          ; 00446090
        ;   Label: LAB_00446090
    PUSH 0x6196ab                       ; 00446095 | = "..\\shape\\cramtex.cpp"
    PUSH 0x6196c0                       ; 0044609a | = "at"
    MOV ECX,dword ptr [0x0084a874]      ; 0044609f | g_CramAcceptableSize
    PUSH 0x0                            ; 004460a5
    INC ECX                             ; 004460a7
    PUSH 0x6196c3                       ; 004460a8 | = "..\\shape\\cramlog.txt"
    MOV dword ptr [0x0084a874],ECX      ; 004460ad | g_CramAcceptableSize
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004460b3
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004460b8
    ADD ESP,0x14                        ; 004460ba
    TEST EAX,EAX                        ; 004460bd
    JZ 0x00445938                       ; 004460bf
        ;   XREF to: 00445938 (CONDITIONAL_JUMP)  ; LAB_00445938
    PUSH 0x6196d8                       ; 004460c5 | = "UNDERESTIMATED PAD!!\n"
    PUSH EAX                            ; 004460ca
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004460cb
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004460d0
    MOV ESI,dword ptr [0x0084a874]      ; 004460d3 | g_CramAcceptableSize
    PUSH ESI                            ; 004460d9
    PUSH 0x6196ee                       ; 004460da | = "acceptableSize now adjusted to %d\n"
    PUSH EBX                            ; 004460df
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004460e0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004460e5
    PUSH 0x253                          ; 004460e8
    PUSH 0x619711                       ; 004460ed | = "..\\shape\\cramtex.cpp"
    PUSH EBX                            ; 004460f2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004460f3
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004460f8
    JMP 0x00445938                      ; 004460fb
        ;   XREF to: 00445938 (UNCONDITIONAL_JUMP)  ; LAB_00445938

