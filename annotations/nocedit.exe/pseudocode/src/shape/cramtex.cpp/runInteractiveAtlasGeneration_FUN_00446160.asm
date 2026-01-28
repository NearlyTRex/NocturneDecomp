; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160 (SCramWorkingEntry *current_texture_entry)
;
; Parameters:
; SCramWorkingEntry * Stack[0xc]:4   current_texture_entry
; Local Variables:
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
;
; XREF[3]:
;   shape_cramtex.cpp_addTextureEntry_FUN_00446100 at 00446127
;   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 at 00445272
;   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 at 00445c54
;
; Referenced Globals:
;   TerminatedCString s_shape_cramtex_cpp_006197cb
;   TerminatedCString s_at_006197e0
;   TerminatedCString s_shape_cramlog_txt_006197e3
;   TerminatedCString s_New_best_solution_found__006197f8
;   TerminatedCString s_shape_cramtex_cpp_00619827
;   TerminatedCString s_shape_cramtex_cpp_0061983c
;   TerminatedCString s_at_00619851
;   TerminatedCString s_shape_cramlog_txt_00619854
;   TerminatedCString s_CRAMTEX_BUG_00619869
;   TerminatedCString s_bestSquareSize_d_thisSqu_00619879
;   TerminatedCString s_acceptableSize_d_006198bc
;   TerminatedCString s_targetPadSize_d_006198d1
;   TerminatedCString s_pad_d_006198e5
;   TerminatedCString s_Best_006198ef
;   TerminatedCString s_s_3d_5dx_5d_Map_d_5d_5d__006198f6
;   ... and 86 more
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdlib.c_qsort_FUN_005fdf38
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
;   shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
;   shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
;   shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
;   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
;   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
;
; *****************************************************************************

section .text

    PUSH 0xdc                           ; 00446160
        ;   Label: shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00446165
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0044616a
    PUSH ESI                            ; 0044616b
    PUSH EDI                            ; 0044616c
    PUSH EBP                            ; 0044616d
    MOV EBP,ESP                         ; 0044616e
    SUB ESP,0x9c                        ; 00446170
    AND ESP,0xfffffff8                  ; 00446176
    MOV EAX,[0x00887940]                ; 00446179 | g_CramAlgorithmState
    XOR EDX,EDX                         ; 0044617e
    MOV EBX,dword ptr [0x0084a860]      ; 00446180 | g_CramRectangleCount
    MOV dword ptr [ESP + 0x8],EDX       ; 00446186
    MOV dword ptr [ESP + 0xc],EDX       ; 0044618a
    MOV dword ptr [ESP + 0x4],EAX       ; 0044618e
    TEST EBX,EBX                        ; 00446192
    JLE 0x004461c7                      ; 00446194
        ;   XREF to: 004461c7 (CONDITIONAL_JUMP)  ; LAB_004461c7
    MOV ESI,0x840c14                    ; 00446196 | g_CramRectangles
    MOV EDI,EAX                         ; 0044619b
    MOV EDX,ESI                         ; 0044619d
        ;   Label: LAB_0044619d
    MOV EAX,dword ptr [ESI + 0x18]      ; 0044619f | DAT_00840c2c | DAT_00840c54
    MOV dword ptr [ESI + 0x24],0x0      ; 004461a2 | DAT_00840c38 | DAT_00840c60
    TEST EAX,EAX                        ; 004461a9
    JZ 0x00446502                       ; 004461ab
        ;   XREF to: 00446502 (CONDITIONAL_JUMP)  ; LAB_00446502
    MOV EAX,dword ptr [ESP + 0xc]       ; 004461b1
        ;   Label: LAB_004461b1
    MOV EDX,dword ptr [0x0084a860]      ; 004461b5 | g_CramRectangleCount
    INC EAX                             ; 004461bb
    ADD ESI,0x28                        ; 004461bc
    MOV dword ptr [ESP + 0xc],EAX       ; 004461bf
    CMP EAX,EDX                         ; 004461c3
    JL 0x0044619d                       ; 004461c5
        ;   XREF to: 0044619d (CONDITIONAL_JUMP)  ; LAB_0044619d
    MOV ECX,dword ptr [ESP + 0x8]       ; 004461c7
        ;   Label: LAB_004461c7
    CMP ECX,0x1                         ; 004461cb
    JL 0x004464f9                       ; 004461ce
        ;   XREF to: 004464f9 (CONDITIONAL_JUMP)  ; LAB_004464f9
    MOV EAX,[0x00887940]                ; 004461d4 | g_CramAlgorithmState
    MOV dword ptr [ESP + 0x10],EAX      ; 004461d9
    MOV EBX,dword ptr [0x0084a85c]      ; 004461dd | g_CramPlacedTextureCount
    MOV EDX,dword ptr [ESP + 0x10]      ; 004461e3
    LEA EAX,[ECX*0x4 + 0x0]             ; 004461e7
    INC EBX                             ; 004461ee
    ADD EDX,EAX                         ; 004461ef
    MOV dword ptr [0x0084a85c],EBX      ; 004461f1 | g_CramPlacedTextureCount
    MOV dword ptr [0x00887940],EDX      ; 004461f7 | g_CramAlgorithmState
    CMP ECX,0x1                         ; 004461fd
    JLE 0x00446262                      ; 00446200
        ;   XREF to: 00446262 (CONDITIONAL_JUMP)  ; LAB_00446262
    XOR ESI,ESI                         ; 00446202
    TEST ECX,ECX                        ; 00446204
    JLE 0x00446249                      ; 00446206
        ;   XREF to: 00446249 (CONDITIONAL_JUMP)  ; LAB_00446249
    MOV ECX,dword ptr [ESP + 0x4]       ; 00446208
    MOV EAX,dword ptr [ECX]             ; 0044620c
        ;   Label: LAB_0044620c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044620e
    MOV EBX,dword ptr [EAX + 0x8]       ; 00446211
    ADD EDX,EBX                         ; 00446214
    MOV dword ptr [EAX + 0x24],EDX      ; 00446216
    MOV EBX,dword ptr [EAX + 0x20]      ; 00446219
    MOV EDX,dword ptr [EAX + 0x1c]      ; 0044621c
    LEA EDI,[EAX + 0x24]                ; 0044621f
    CMP EDX,EBX                         ; 00446222
    JLE 0x004465da                      ; 00446224
        ;   XREF to: 004465da (CONDITIONAL_JUMP)  ; LAB_004465da
    LEA EDX,[EDX + EDX*0x4]             ; 0044622a
        ;   Label: LAB_0044622a
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0044622d
    MOV EAX,dword ptr [EAX + 0x20]      ; 00446230
    ADD EDX,EBX                         ; 00446233
    ADD ECX,0x4                         ; 00446235
    ADD EAX,EDX                         ; 00446238
    MOV EDX,dword ptr [EDI]             ; 0044623a
    INC ESI                             ; 0044623c
    ADD EDX,EAX                         ; 0044623d
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044623f
    MOV dword ptr [EDI],EDX             ; 00446243
    CMP ESI,EBX                         ; 00446245
    JL 0x0044620c                       ; 00446247
        ;   XREF to: 0044620c (CONDITIONAL_JUMP)  ; LAB_0044620c
    PUSH 0x446140                       ; 00446249
        ;   Label: LAB_00446249
    PUSH 0x4                            ; 0044624e
    MOV ESI,dword ptr [ESP + 0x10]      ; 00446250
    PUSH ESI                            ; 00446254
    MOV EDI,dword ptr [ESP + 0x10]      ; 00446255
    PUSH EDI                            ; 00446259
    CALL crt_stdlib.c_qsort_FUN_005fdf38 ; 0044625a
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c_qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 0044625f
    MOV ESI,dword ptr [ESP + 0x8]       ; 00446262
        ;   Label: LAB_00446262
    XOR EBX,EBX                         ; 00446266
    TEST ESI,ESI                        ; 00446268
    JLE 0x00446290                      ; 0044626a
        ;   XREF to: 00446290 (CONDITIONAL_JUMP)  ; LAB_00446290
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044626c
    MOV EDI,dword ptr [ESP + 0x8]       ; 00446270
    LEA EDX,[EBX + 0x5]                 ; 00446274
        ;   Label: LAB_00446274
    MOV EAX,dword ptr [ESI]             ; 00446277
    ADD ESI,0x4                         ; 00446279
    INC EBX                             ; 0044627c
    MOV dword ptr [EAX + 0x24],EDX      ; 0044627d
    CMP EBX,EDI                         ; 00446280
    JL 0x00446274                       ; 00446282
        ;   XREF to: 00446274 (CONDITIONAL_JUMP)  ; LAB_00446274
    LEA EAX,[EAX]                       ; 00446284
    LEA EDX,[EDX]                       ; 0044628a
    MOV EDX,dword ptr [0x0084a854]      ; 00446290 | g_CramTextureCount
        ;   Label: LAB_00446290
    CMP EDX,dword ptr [0x0084a85c]      ; 00446296 | g_CramPlacedTextureCount
    JG 0x00446b4b                       ; 0044629c
        ;   XREF to: 00446b4b (CONDITIONAL_JUMP)  ; LAB_00446b4b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004462a2
    MOV EAX,dword ptr [EAX]             ; 004462a6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004462a8
    MOV EDX,dword ptr [EAX]             ; 004462ab
    MOV dword ptr [EBX + 0x10],EDX      ; 004462ad
    MOV EDX,dword ptr [EAX + 0x14]      ; 004462b0
    MOV dword ptr [EBX + 0x40],EDX      ; 004462b3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004462b6
    MOV dword ptr [EBX + 0x1c],EDX      ; 004462b9
    MOV EAX,dword ptr [EAX + 0x8]       ; 004462bc
    MOV ESI,dword ptr [EBX + 0x40]      ; 004462bf
    MOV dword ptr [EBX + 0x20],EAX      ; 004462c2
    TEST ESI,ESI                        ; 004462c5
    JZ 0x004465e1                       ; 004462c7
        ;   XREF to: 004465e1 (CONDITIONAL_JUMP)  ; LAB_004465e1
    MOV EAX,dword ptr [EBX + 0xc]       ; 004462cd
    MOV dword ptr [EBX + 0x14],EAX      ; 004462d0
    MOV EAX,dword ptr [EBX + 0x8]       ; 004462d3
    MOV dword ptr [EBX + 0x18],EAX      ; 004462d6
        ;   Label: LAB_004462d6
    MOV EDI,dword ptr [EBX + 0x14]      ; 004462d9
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004462dc
    ADD EAX,EDI                         ; 004462df
    MOV dword ptr [EBX + 0x24],EAX      ; 004462e1
    MOV EDX,dword ptr [EBX + 0x18]      ; 004462e4
    MOV EAX,dword ptr [EBX + 0x20]      ; 004462e7
    MOV ECX,dword ptr [0x0084a85c]      ; 004462ea | g_CramPlacedTextureCount
    ADD EAX,EDX                         ; 004462f0
    XOR ESI,ESI                         ; 004462f2
    MOV dword ptr [EBX + 0x28],EAX      ; 004462f4
    XOR EBX,EBX                         ; 004462f7
    TEST ECX,ECX                        ; 004462f9
    JLE 0x00446324                      ; 004462fb
        ;   XREF to: 00446324 (CONDITIONAL_JUMP)  ; LAB_00446324
    MOV EAX,0x83c1dc                    ; 004462fd | g_CramSortedTextureEntries
    MOV EDI,dword ptr [EAX + 0x24]      ; 00446302 | g_CramSortedTextureEntries[0].working_top | DAT_0083c24c
        ;   Label: LAB_00446302
    MOV EDX,EAX                         ; 00446305
    CMP EBX,EDI                         ; 00446307
    JGE 0x0044630d                      ; 00446309
        ;   XREF to: 0044630d (CONDITIONAL_JUMP)  ; LAB_0044630d
    MOV EBX,EDI                         ; 0044630b
    MOV ECX,dword ptr [EDX + 0x28]      ; 0044630d | g_CramSortedTextureEntries[0].working_width | DAT_0083c250
        ;   Label: LAB_0044630d
    CMP EBX,ECX                         ; 00446310
    JGE 0x00446316                      ; 00446312
        ;   XREF to: 00446316 (CONDITIONAL_JUMP)  ; LAB_00446316
    MOV EBX,ECX                         ; 00446314
    MOV EDI,dword ptr [0x0084a85c]      ; 00446316 | g_CramPlacedTextureCount
        ;   Label: LAB_00446316
    INC ESI                             ; 0044631c
    ADD EAX,0x4c                        ; 0044631d
    CMP ESI,EDI                         ; 00446320
    JL 0x00446302                       ; 00446322
        ;   XREF to: 00446302 (CONDITIONAL_JUMP)  ; LAB_00446302
    PUSH 0x30d                          ; 00446324
        ;   Label: LAB_00446324
    PUSH 0x6197cb                       ; 00446329 | = "..\\shape\\cramtex.cpp"
    PUSH 0x6197e0                       ; 0044632e | = "at"
    PUSH 0x0                            ; 00446333
    PUSH 0x6197e3                       ; 00446335 | = "..\\shape\\cramlog.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0044633a
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 0044633f
    ADD ESP,0x14                        ; 00446341
    TEST EAX,EAX                        ; 00446344
    JZ 0x0044636a                       ; 00446346
        ;   XREF to: 0044636a (CONDITIONAL_JUMP)  ; LAB_0044636a
    PUSH EBX                            ; 00446348
    PUSH 0x6197f8                       ; 00446349 | = "New best solution found!  thisSquareS..."
    PUSH EAX                            ; 0044634e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044634f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00446354
    PUSH 0x310                          ; 00446357
    PUSH 0x619827                       ; 0044635c | = "..\\shape\\cramtex.cpp"
    PUSH ESI                            ; 00446361
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00446362
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00446367
    CMP EBX,dword ptr [0x0084a888]      ; 0044636a | g_CramBestSolutionMetric1
        ;   Label: LAB_0044636a
    JL 0x004465ef                       ; 00446370
        ;   XREF to: 004465ef (CONDITIONAL_JUMP)  ; LAB_004465ef
    PUSH 0x318                          ; 00446376
    PUSH 0x61983c                       ; 0044637b | = "..\\shape\\cramtex.cpp"
    PUSH 0x619851                       ; 00446380 | = "at"
    PUSH 0x0                            ; 00446385
    PUSH 0x619854                       ; 00446387 | = "..\\shape\\cramlog.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0044638c
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 00446391
    ADD ESP,0x14                        ; 00446393
    MOV EDI,EAX                         ; 00446396
    TEST EAX,EAX                        ; 00446398
    JZ 0x004464e3                       ; 0044639a
        ;   XREF to: 004464e3 (CONDITIONAL_JUMP)  ; LAB_004464e3
    PUSH 0x619869                       ; 004463a0 | = "\n\nCRAMTEX BUG!\n"
    PUSH EAX                            ; 004463a5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004463a6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 004463ab
    MOV ECX,dword ptr [0x0084a888]      ; 004463ae | g_CramBestSolutionMetric1
    PUSH ECX                            ; 004463b4
    PUSH EBX                            ; 004463b5
    MOV EBX,dword ptr [0x0084a884]      ; 004463b6 | g_CramCurrentAcceptableSize
    PUSH EBX                            ; 004463bc
    PUSH 0x619879                       ; 004463bd | = "bestSquareSize = %d, thisSquareSize =..."
    PUSH ESI                            ; 004463c2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004463c3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004463c8
    MOV EAX,[0x0084a874]                ; 004463cb | g_CramAcceptableSize
    PUSH EAX                            ; 004463d0
    PUSH 0x6198bc                       ; 004463d1 | = "acceptableSize = %d\n"
    PUSH ESI                            ; 004463d6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004463d7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004463dc
    MOV EDX,dword ptr [0x0084a87c]      ; 004463df | g_CramAtlasHeight
    PUSH EDX                            ; 004463e5
    PUSH 0x6198d1                       ; 004463e6 | = "targetPadSize = %d\n"
    PUSH ESI                            ; 004463eb
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004463ec
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004463f1
    MOV ECX,dword ptr [0x0084a880]      ; 004463f4 | g_CramPaddingCalculation
    PUSH ECX                            ; 004463fa
    PUSH 0x6198e5                       ; 004463fb | = "pad = %d\n"
    PUSH ESI                            ; 00446400
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00446401
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00446406
    PUSH 0x6198ef                       ; 00446409 | = "Best:\n"
    PUSH ESI                            ; 0044640e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0044640f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EBX,dword ptr [0x0084a854]      ; 00446414 | g_CramTextureCount
    ADD ESP,0x8                         ; 0044641a
    XOR ESI,ESI                         ; 0044641d
    TEST EBX,EBX                        ; 0044641f
    JLE 0x00446470                      ; 00446421
        ;   XREF to: 00446470 (CONDITIONAL_JUMP)  ; LAB_00446470
    MOV EBX,0x83c1dc                    ; 00446423 | g_CramSortedTextureEntries
    MOV EAX,dword ptr [EBX + 0x44]      ; 00446428 | DAT_0083c220 | DAT_0083c26c
        ;   Label: LAB_00446428
    PUSH EAX                            ; 0044642b
    MOV EDX,dword ptr [EBX + 0x3c]      ; 0044642c | DAT_0083c218 | DAT_0083c264
    PUSH EDX                            ; 0044642f
    MOV ECX,dword ptr [EBX + 0x38]      ; 00446430 | DAT_0083c214 | DAT_0083c260
    PUSH ECX                            ; 00446433
    MOV EAX,dword ptr [EBX + 0x34]      ; 00446434 | DAT_0083c210 | DAT_0083c25c
    PUSH EAX                            ; 00446437
    MOV EDX,dword ptr [EBX + 0x30]      ; 00446438 | DAT_0083c20c | DAT_0083c258
    PUSH EDX                            ; 0044643b
    MOV ECX,dword ptr [EBX + 0x2c]      ; 0044643c | DAT_0083c208 | DAT_0083c254
    PUSH ECX                            ; 0044643f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00446440 | DAT_0083c1e0 | DAT_0083c22c
    PUSH EAX                            ; 00446443
    MOV EDX,dword ptr [EBX]             ; 00446444 | g_CramSortedTextureEntries | DAT_0083c228
    PUSH EDX                            ; 00446446
    PUSH ESI                            ; 00446447
    PUSH 0x6198f6                       ; 00446448 | = "%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d..."
    PUSH EDI                            ; 0044644d
    ADD EBX,0x4c                        ; 0044644e
    INC ESI                             ; 00446451
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00446452
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV ECX,dword ptr [0x0084a854]      ; 00446457 | g_CramTextureCount
    ADD ESP,0x2c                        ; 0044645d
    CMP ESI,ECX                         ; 00446460
    JL 0x00446428                       ; 00446462
        ;   XREF to: 00446428 (CONDITIONAL_JUMP)  ; LAB_00446428
    LEA EAX,[EAX]                       ; 00446464
    LEA EDX,[EDX]                       ; 0044646a
    PUSH 0x619932                       ; 00446470 | = "Current:\n"
        ;   Label: LAB_00446470
    PUSH EDI                            ; 00446475
    XOR ESI,ESI                         ; 00446476
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00446478
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EBX,dword ptr [0x0084a854]      ; 0044647d | g_CramTextureCount
    ADD ESP,0x8                         ; 00446483
    TEST EBX,EBX                        ; 00446486
    JLE 0x004464d0                      ; 00446488
        ;   XREF to: 004464d0 (CONDITIONAL_JUMP)  ; LAB_004464d0
    MOV EBX,0x83c1dc                    ; 0044648a | g_CramSortedTextureEntries
    MOV EAX,dword ptr [EBX + 0x44]      ; 0044648f | DAT_0083c220 | DAT_0083c26c
        ;   Label: LAB_0044648f
    PUSH EAX                            ; 00446492
    MOV EDX,dword ptr [EBX + 0x28]      ; 00446493 | g_CramSortedTextureEntries[0].working_width | DAT_0083c250
    PUSH EDX                            ; 00446496
    MOV ECX,dword ptr [EBX + 0x24]      ; 00446497 | g_CramSortedTextureEntries[0].working_top | DAT_0083c24c
    PUSH ECX                            ; 0044649a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0044649b | g_CramSortedTextureEntries[0].working_right | DAT_0083c248
    PUSH EAX                            ; 0044649e
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0044649f | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c244
    PUSH EDX                            ; 004464a2
    MOV ECX,dword ptr [EBX + 0x10]      ; 004464a3 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c238
    PUSH ECX                            ; 004464a6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004464a7 | DAT_0083c1e0 | DAT_0083c22c
    PUSH EAX                            ; 004464aa
    MOV EDX,dword ptr [EBX]             ; 004464ab | g_CramSortedTextureEntries | DAT_0083c228
    PUSH EDX                            ; 004464ad
    PUSH ESI                            ; 004464ae
    PUSH 0x61993c                       ; 004464af | = "%3d: %5dx%-5d  Map %d (%5d,%-5d)-(%5d..."
    PUSH EDI                            ; 004464b4
    ADD EBX,0x4c                        ; 004464b5
    INC ESI                             ; 004464b8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004464b9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV ECX,dword ptr [0x0084a854]      ; 004464be | g_CramTextureCount
    ADD ESP,0x2c                        ; 004464c4
    CMP ESI,ECX                         ; 004464c7
    JL 0x0044648f                       ; 004464c9
        ;   XREF to: 0044648f (CONDITIONAL_JUMP)  ; LAB_0044648f
    LEA EAX,[EAX]                       ; 004464cb
    MOV ECX,ECX                         ; 004464ce
    PUSH 0x32f                          ; 004464d0
        ;   Label: LAB_004464d0
    PUSH 0x619978                       ; 004464d5 | = "..\\shape\\cramtex.cpp"
    PUSH EDI                            ; 004464da
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004464db
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004464e0
    MOV ESI,dword ptr [0x0084a85c]      ; 004464e3 | g_CramPlacedTextureCount
        ;   Label: LAB_004464e3
    MOV EAX,dword ptr [ESP + 0x10]      ; 004464e9
    DEC ESI                             ; 004464ed
    MOV [0x00887940],EAX                ; 004464ee | g_CramAlgorithmState
    MOV dword ptr [0x0084a85c],ESI      ; 004464f3 | g_CramPlacedTextureCount
    XOR EAX,EAX                         ; 004464f9
        ;   Label: LAB_004464f9
    MOV ESP,EBP                         ; 004464fb
    POP EBP                             ; 004464fd
    POP EDI                             ; 004464fe
    POP ESI                             ; 004464ff
    POP EBX                             ; 00446500
    RET                                 ; 00446501
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446502
        ;   Label: LAB_00446502
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446505
    MOV EBX,dword ptr [ECX + 0xc]       ; 00446508
    CMP EBX,dword ptr [EAX + 0x8]       ; 0044650b
    JNZ 0x0044651a                      ; 0044650e
        ;   XREF to: 0044651a (CONDITIONAL_JUMP)  ; LAB_0044651a
    CMP dword ptr [ESI + 0x14],0x0      ; 00446510 | DAT_00840c50
    JNZ 0x004461b1                      ; 00446514
        ;   XREF to: 004461b1 (CONDITIONAL_JUMP)  ; LAB_004461b1
    CMP dword ptr [EDX + 0x14],0x0      ; 0044651a | DAT_00840c50
        ;   Label: LAB_0044651a
    JZ 0x004465b2                       ; 0044651e
        ;   XREF to: 004465b2 (CONDITIONAL_JUMP)  ; LAB_004465b2
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446524
    MOV EAX,dword ptr [EDX + 0x4]       ; 00446527 | DAT_00840c40
    ADD EAX,dword ptr [ECX + 0xc]       ; 0044652a
    MOV ECX,dword ptr [0x0084a888]      ; 0044652d | g_CramBestSolutionMetric1
    MOV dword ptr [EDX + 0x1c],EAX      ; 00446533 | DAT_00840c58
    CMP EAX,ECX                         ; 00446536
    JGE 0x004461b1                      ; 00446538
        ;   XREF to: 004461b1 (CONDITIONAL_JUMP)  ; LAB_004461b1
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044653e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00446541 | DAT_00840c44
    ADD EAX,dword ptr [ECX + 0x8]       ; 00446544
    MOV ECX,dword ptr [0x0084a888]      ; 00446547 | g_CramBestSolutionMetric1
        ;   Label: LAB_00446547
    MOV dword ptr [EDX + 0x20],EAX      ; 0044654d | DAT_00840c5c
    CMP EAX,ECX                         ; 00446550
    JGE 0x004461b1                      ; 00446552
        ;   XREF to: 004461b1 (CONDITIONAL_JUMP)  ; LAB_004461b1
    MOV ECX,dword ptr [0x0084a85c]      ; 00446558 | g_CramPlacedTextureCount
    DEC ECX                             ; 0044655e
    TEST ECX,ECX                        ; 0044655f
    JL 0x0044659e                       ; 00446561
        ;   XREF to: 0044659e (CONDITIONAL_JUMP)  ; LAB_0044659e
    IMUL EAX,ECX,0x4c                   ; 00446563
    ADD EAX,0x83c1dc                    ; 00446566 | g_CramSortedTextureEntries
    MOV EBX,dword ptr [EDX]             ; 0044656b | DAT_00840c3c
        ;   Label: LAB_0044656b
    CMP EBX,dword ptr [EAX + 0x10]      ; 0044656d | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
    JNZ 0x00446596                      ; 00446570
        ;   XREF to: 00446596 (CONDITIONAL_JUMP)  ; LAB_00446596
    MOV EBX,dword ptr [EDX + 0x4]       ; 00446572 | DAT_00840c40
    CMP EBX,dword ptr [EAX + 0x24]      ; 00446575 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00446596                      ; 00446578
        ;   XREF to: 00446596 (CONDITIONAL_JUMP)  ; LAB_00446596
    MOV EBX,dword ptr [EDX + 0x8]       ; 0044657a | DAT_00840c44
    CMP EBX,dword ptr [EAX + 0x28]      ; 0044657d | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00446596                      ; 00446580
        ;   XREF to: 00446596 (CONDITIONAL_JUMP)  ; LAB_00446596
    MOV EBX,dword ptr [EDX + 0x1c]      ; 00446582 | DAT_00840c58
    CMP EBX,dword ptr [EAX + 0x1c]      ; 00446585 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x00446596                      ; 00446588
        ;   XREF to: 00446596 (CONDITIONAL_JUMP)  ; LAB_00446596
    MOV EBX,dword ptr [EDX + 0x20]      ; 0044658a | DAT_00840c5c
    CMP EBX,dword ptr [EAX + 0x20]      ; 0044658d | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JG 0x004461b1                       ; 00446590
        ;   XREF to: 004461b1 (CONDITIONAL_JUMP)  ; LAB_004461b1
    DEC ECX                             ; 00446596
        ;   Label: LAB_00446596
    SUB EAX,0x4c                        ; 00446597
    TEST ECX,ECX                        ; 0044659a
    JGE 0x0044656b                      ; 0044659c
        ;   XREF to: 0044656b (CONDITIONAL_JUMP)  ; LAB_0044656b
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044659e
        ;   Label: LAB_0044659e
    ADD EDI,0x4                         ; 004465a2
    INC EBX                             ; 004465a5
    MOV dword ptr [EDI + -0x4],EDX      ; 004465a6 | DAT_00840c3c
    MOV dword ptr [ESP + 0x8],EBX       ; 004465a9
    JMP 0x004461b1                      ; 004465ad
        ;   XREF to: 004461b1 (UNCONDITIONAL_JUMP)  ; LAB_004461b1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004465b2
        ;   Label: LAB_004465b2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004465b5 | DAT_00840c40
    ADD EAX,dword ptr [ECX + 0x8]       ; 004465b8
    MOV ECX,dword ptr [0x0084a888]      ; 004465bb | g_CramBestSolutionMetric1
    MOV dword ptr [EDX + 0x1c],EAX      ; 004465c1 | DAT_00840c58
    CMP EAX,ECX                         ; 004465c4
    JGE 0x004461b1                      ; 004465c6
        ;   XREF to: 004461b1 (CONDITIONAL_JUMP)  ; LAB_004461b1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004465cc
    MOV EAX,dword ptr [EDX + 0x8]       ; 004465cf | DAT_00840c44
    ADD EAX,dword ptr [ECX + 0xc]       ; 004465d2
    JMP 0x00446547                      ; 004465d5
        ;   XREF to: 00446547 (UNCONDITIONAL_JUMP)  ; LAB_00446547
    MOV EDX,EBX                         ; 004465da
        ;   Label: LAB_004465da
    JMP 0x0044622a                      ; 004465dc
        ;   XREF to: 0044622a (UNCONDITIONAL_JUMP)  ; LAB_0044622a
    MOV EAX,dword ptr [EBX + 0x8]       ; 004465e1
        ;   Label: LAB_004465e1
    MOV dword ptr [EBX + 0x14],EAX      ; 004465e4
    MOV EAX,dword ptr [EBX + 0xc]       ; 004465e7
    JMP 0x004462d6                      ; 004465ea
        ;   XREF to: 004462d6 (UNCONDITIONAL_JUMP)  ; LAB_004462d6
    MOV EDX,dword ptr [0x0084a85c]      ; 004465ef | g_CramPlacedTextureCount
        ;   Label: LAB_004465ef
    MOV dword ptr [0x0084a884],EBX      ; 004465f5 | g_CramCurrentAcceptableSize
    XOR EBX,EBX                         ; 004465fb
    TEST EDX,EDX                        ; 004465fd
    JLE 0x00446640                      ; 004465ff
        ;   XREF to: 00446640 (CONDITIONAL_JUMP)  ; LAB_00446640
    MOV EAX,0x83c1dc                    ; 00446601 | g_CramSortedTextureEntries
    ADD EAX,0x4c                        ; 00446606 | DAT_0083c228
        ;   Label: LAB_00446606
    MOV EDX,dword ptr [EAX + -0x3c]     ; 00446609 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c238
    MOV dword ptr [EAX + -0x20],EDX     ; 0044660c | DAT_0083c208 | DAT_0083c254
    MOV EDX,dword ptr [EAX + -0xc]      ; 0044660f | g_CramSortedTextureEntries[0].placement_flags | DAT_0083c268
    MOV dword ptr [EAX + -0x8],EDX      ; 00446612 | DAT_0083c220 | DAT_0083c26c
    MOV EDX,dword ptr [EAX + -0x30]     ; 00446615 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c244
    MOV dword ptr [EAX + -0x1c],EDX     ; 00446618 | DAT_0083c20c | DAT_0083c258
    MOV EDX,dword ptr [EAX + -0x2c]     ; 0044661b | g_CramSortedTextureEntries[0].working_right | DAT_0083c248
    MOV dword ptr [EAX + -0x18],EDX     ; 0044661e | DAT_0083c210 | DAT_0083c25c
    MOV EDX,dword ptr [EAX + -0x28]     ; 00446621 | g_CramSortedTextureEntries[0].working_top | DAT_0083c24c
    MOV dword ptr [EAX + -0x14],EDX     ; 00446624 | DAT_0083c214 | DAT_0083c260
    MOV ESI,dword ptr [0x0084a85c]      ; 00446627 | g_CramPlacedTextureCount
    MOV EDX,dword ptr [EAX + -0x24]     ; 0044662d | g_CramSortedTextureEntries[0].working_width | DAT_0083c250
    INC EBX                             ; 00446630
    MOV dword ptr [EAX + -0x10],EDX     ; 00446631 | DAT_0083c218 | DAT_0083c264
    CMP EBX,ESI                         ; 00446634
    JL 0x00446606                       ; 00446636
        ;   XREF to: 00446606 (CONDITIONAL_JUMP)  ; LAB_00446606
    LEA EAX,[EAX]                       ; 00446638 | DAT_0083c228
    MOV EDX,EDX                         ; 0044663e
    CMP dword ptr [0x0084a898],0x0      ; 00446640 | g_CramFillGaps
        ;   Label: LAB_00446640
    JZ 0x00446940                       ; 00446647
        ;   XREF to: 00446940 (CONDITIONAL_JUMP)  ; LAB_00446940
    XOR EDI,EDI                         ; 0044664d
        ;   Label: LAB_0044664d
    MOV EAX,[0x0084a854]                ; 0044664f | g_CramTextureCount
    MOV dword ptr [ESP + 0x14],EDI      ; 00446654
    TEST EAX,EAX                        ; 00446658
    JLE 0x00446705                      ; 0044665a
        ;   XREF to: 00446705 (CONDITIONAL_JUMP)  ; LAB_00446705
    MOV dword ptr [ESP + 0x58],0x83c1dc ; 00446660 | g_CramSortedTextureEntries
    MOV EBX,dword ptr [ESP + 0x58]      ; 00446668 | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_00446668
    MOV EDX,dword ptr [0x0084a884]      ; 0044666c | g_CramCurrentAcceptableSize
        ;   Label: LAB_0044666c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00446672 | DAT_0083c218 | DAT_0083c264
    XOR ESI,ESI                         ; 00446675
    CMP EAX,EDX                         ; 00446677
    JGE 0x004466a3                      ; 00446679
        ;   XREF to: 004466a3 (CONDITIONAL_JUMP)  ; LAB_004466a3
    PUSH EBX                            ; 0044667b | g_CramSortedTextureEntries | DAT_0083c228
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 0044667c
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
    MOV ECX,dword ptr [0x0084a884]      ; 00446681 | g_CramCurrentAcceptableSize
    ADD ESP,0x4                         ; 00446687
    CMP EAX,ECX                         ; 0044668a
    JL 0x004466a3                       ; 0044668c
        ;   XREF to: 004466a3 (CONDITIONAL_JUMP)  ; LAB_004466a3
    SUB EAX,dword ptr [EBX + 0x3c]      ; 0044668e | DAT_0083c218
    MOV EDX,dword ptr [EBX + 0x3c]      ; 00446691 | DAT_0083c218
    MOV ESI,EAX                         ; 00446694
    MOV EAX,dword ptr [EBX + 0x34]      ; 00446696 | DAT_0083c210
    ADD EDX,ESI                         ; 00446699
    ADD EAX,ESI                         ; 0044669b
    MOV dword ptr [EBX + 0x3c],EDX      ; 0044669d | DAT_0083c218
    MOV dword ptr [EBX + 0x34],EAX      ; 004466a0 | DAT_0083c210
    MOV ECX,dword ptr [0x0084a884]      ; 004466a3 | g_CramCurrentAcceptableSize
        ;   Label: LAB_004466a3
    CMP ECX,dword ptr [EBX + 0x38]      ; 004466a9 | DAT_0083c214
    JLE 0x004466d8                      ; 004466ac
        ;   XREF to: 004466d8 (CONDITIONAL_JUMP)  ; LAB_004466d8
    PUSH EBX                            ; 004466ae | g_CramSortedTextureEntries
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 004466af
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
    MOV EDX,dword ptr [0x0084a884]      ; 004466b4 | g_CramCurrentAcceptableSize
    ADD ESP,0x4                         ; 004466ba
    CMP EAX,EDX                         ; 004466bd
    JL 0x004466d8                       ; 004466bf
        ;   XREF to: 004466d8 (CONDITIONAL_JUMP)  ; LAB_004466d8
    MOV ESI,EAX                         ; 004466c1
    MOV ECX,dword ptr [EBX + 0x38]      ; 004466c3 | DAT_0083c214
    MOV EAX,dword ptr [EBX + 0x30]      ; 004466c6 | DAT_0083c20c
    SUB ESI,ECX                         ; 004466c9
    MOV EDX,dword ptr [EBX + 0x38]      ; 004466cb | DAT_0083c214
    ADD EAX,ESI                         ; 004466ce
    ADD EDX,ESI                         ; 004466d0
    MOV dword ptr [EBX + 0x30],EAX      ; 004466d2 | DAT_0083c20c
    MOV dword ptr [EBX + 0x38],EDX      ; 004466d5 | DAT_0083c214
    TEST ESI,ESI                        ; 004466d8
        ;   Label: LAB_004466d8
    JLE 0x004466e3                      ; 004466da
        ;   XREF to: 004466e3 (CONDITIONAL_JUMP)  ; LAB_004466e3
    MOV EDI,0x1                         ; 004466dc
    JMP 0x0044666c                      ; 004466e1
        ;   XREF to: 0044666c (UNCONDITIONAL_JUMP)  ; LAB_0044666c
    MOV EDX,dword ptr [ESP + 0x58]      ; 004466e3
        ;   Label: LAB_004466e3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004466e7
    MOV EBX,dword ptr [0x0084a854]      ; 004466eb | g_CramTextureCount
    ADD EDX,0x4c                        ; 004466f1 | DAT_0083c228
    INC ECX                             ; 004466f4
    MOV dword ptr [ESP + 0x58],EDX      ; 004466f5 | DAT_0083c228
    MOV dword ptr [ESP + 0x14],ECX      ; 004466f9
    CMP ECX,EBX                         ; 004466fd
    JL 0x00446668                       ; 004466ff
        ;   XREF to: 00446668 (CONDITIONAL_JUMP)  ; LAB_00446668
    TEST EDI,EDI                        ; 00446705
        ;   Label: LAB_00446705
    JNZ 0x0044664d                      ; 00446707
        ;   XREF to: 0044664d (CONDITIONAL_JUMP)  ; LAB_0044664d
    MOV dword ptr [ESP + 0x18],EDI      ; 0044670d
    MOV EBX,dword ptr [0x0084a854]      ; 00446711 | g_CramTextureCount
        ;   Label: LAB_00446711
    XOR ECX,ECX                         ; 00446717
    XOR EDI,EDI                         ; 00446719
    MOV dword ptr [ESP + 0x7c],ECX      ; 0044671b
    TEST EBX,EBX                        ; 0044671f
    JLE 0x004467d8                      ; 00446721
        ;   XREF to: 004467d8 (CONDITIONAL_JUMP)  ; LAB_004467d8
    MOV EBX,0x83c1dc                    ; 00446727 | g_CramSortedTextureEntries
    PUSH EBX                            ; 0044672c | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_0044672c
    CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 ; 0044672d
        ;   XREF to: 004479a0 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
    MOV EDX,dword ptr [EBX + 0x30]      ; 00446732 | DAT_0083c20c
    ADD ESP,0x4                         ; 00446735
    SUB EAX,EDX                         ; 00446738
    PUSH EBX                            ; 0044673a | g_CramSortedTextureEntries
    MOV dword ptr [ESP + 0x20],EAX      ; 0044673b
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 0044673f
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
    ADD ESP,0x4                         ; 00446744
    MOV ECX,dword ptr [EBX + 0x38]      ; 00446747 | DAT_0083c214
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044674a
    SUB EAX,ECX                         ; 0044674e
    ADD EDX,EAX                         ; 00446750
    MOV EAX,EDX                         ; 00446752
    SAR EDX,0x1f                        ; 00446754
    SUB EAX,EDX                         ; 00446757
    SAR EAX,0x1                         ; 00446759
    MOV ESI,EBX                         ; 0044675b
    TEST EAX,EAX                        ; 0044675d
    JZ 0x0044677a                       ; 0044675f
        ;   XREF to: 0044677a (CONDITIONAL_JUMP)  ; LAB_0044677a
    MOV EDX,0x1                         ; 00446761
    MOV ECX,dword ptr [EBX + 0x30]      ; 00446766 | DAT_0083c20c
    MOV dword ptr [ESP + 0x7c],EDX      ; 00446769
    ADD ECX,EAX                         ; 0044676d
    MOV EDX,dword ptr [EBX + 0x38]      ; 0044676f | DAT_0083c214
    MOV dword ptr [EBX + 0x30],ECX      ; 00446772 | DAT_0083c20c
    ADD EDX,EAX                         ; 00446775
    MOV dword ptr [EBX + 0x38],EDX      ; 00446777 | DAT_0083c214
    PUSH ESI                            ; 0044677a | g_CramSortedTextureEntries
        ;   Label: LAB_0044677a
    CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 ; 0044677b
        ;   XREF to: 004478c0 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
    MOV ECX,dword ptr [ESI + 0x34]      ; 00446780 | DAT_0083c210
    ADD ESP,0x4                         ; 00446783
    SUB EAX,ECX                         ; 00446786
    PUSH ESI                            ; 00446788 | g_CramSortedTextureEntries
    MOV dword ptr [ESP + 0x24],EAX      ; 00446789
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 0044678d
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
    MOV EDX,dword ptr [ESI + 0x3c]      ; 00446792 | DAT_0083c218
    ADD ESP,0x4                         ; 00446795
    SUB EAX,EDX                         ; 00446798
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044679a
    ADD EDX,EAX                         ; 0044679e
    MOV EAX,EDX                         ; 004467a0
    SAR EDX,0x1f                        ; 004467a2
    SUB EAX,EDX                         ; 004467a5
    SAR EAX,0x1                         ; 004467a7
    TEST EAX,EAX                        ; 004467a9
    JZ 0x004467c6                       ; 004467ab
        ;   XREF to: 004467c6 (CONDITIONAL_JUMP)  ; LAB_004467c6
    MOV ECX,0x1                         ; 004467ad
    MOV EDX,dword ptr [ESI + 0x34]      ; 004467b2 | DAT_0083c210
    MOV dword ptr [ESP + 0x7c],ECX      ; 004467b5
    ADD EDX,EAX                         ; 004467b9
    MOV ECX,dword ptr [ESI + 0x3c]      ; 004467bb | DAT_0083c218
    MOV dword ptr [ESI + 0x34],EDX      ; 004467be | DAT_0083c210
    ADD ECX,EAX                         ; 004467c1
    MOV dword ptr [ESI + 0x3c],ECX      ; 004467c3 | DAT_0083c218
    MOV ESI,dword ptr [0x0084a854]      ; 004467c6 | g_CramTextureCount
        ;   Label: LAB_004467c6
    INC EDI                             ; 004467cc
    ADD EBX,0x4c                        ; 004467cd | DAT_0083c228
    CMP EDI,ESI                         ; 004467d0
    JL 0x0044672c                       ; 004467d2
        ;   XREF to: 0044672c (CONDITIONAL_JUMP)  ; LAB_0044672c
    CMP dword ptr [ESP + 0x7c],0x0      ; 004467d8
        ;   Label: LAB_004467d8
    JNZ 0x00446a96                      ; 004467dd
        ;   XREF to: 00446a96 (CONDITIONAL_JUMP)  ; LAB_00446a96
    XOR ECX,ECX                         ; 004467e3
        ;   Label: LAB_004467e3
    MOV dword ptr [ESP + 0x78],ECX      ; 004467e5
    TEST byte ptr [ESP + 0x78],0x1      ; 004467e9
        ;   Label: LAB_004467e9
    JZ 0x00446aad                       ; 004467ee
        ;   XREF to: 00446aad (CONDITIONAL_JUMP)  ; LAB_00446aad
    MOV EDI,0xffffffff                  ; 004467f4
    MOV EAX,[0x0084a854]                ; 004467f9 | g_CramTextureCount
    MOV dword ptr [ESP + 0x24],EDI      ; 004467fe
    DEC EAX                             ; 00446802
    MOV ESI,EAX                         ; 00446803
        ;   Label: LAB_00446803
    CMP EAX,EDI                         ; 00446805
    JZ 0x00446888                       ; 00446807
        ;   XREF to: 00446888 (CONDITIONAL_JUMP)  ; LAB_00446888
    IMUL EBX,ESI,0x4c                   ; 0044680d
        ;   Label: LAB_0044680d
    ADD EBX,0x83c1dc                    ; 00446810 | g_CramSortedTextureEntries
    PUSH EBX                            ; 00446816 | g_CramSortedTextureEntries
    CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 ; 00446817
        ;   XREF to: 004479a0 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
    MOV EDX,dword ptr [EBX + 0x30]      ; 0044681c | DAT_0083c20c
    ADD EDX,EAX                         ; 0044681f
    MOV EAX,EDX                         ; 00446821
    SAR EDX,0x1f                        ; 00446823
    SUB EAX,EDX                         ; 00446826
    SAR EAX,0x1                         ; 00446828
    ADD ESP,0x4                         ; 0044682a
    PUSH EBX                            ; 0044682d
    MOV dword ptr [EBX + 0x30],EAX      ; 0044682e | DAT_0083c20c
    CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 ; 00446831
        ;   XREF to: 004478c0 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
    MOV EDX,dword ptr [EBX + 0x34]      ; 00446836 | DAT_0083c210
    ADD EDX,EAX                         ; 00446839
    MOV EAX,EDX                         ; 0044683b
    SAR EDX,0x1f                        ; 0044683d
    SUB EAX,EDX                         ; 00446840
    SAR EAX,0x1                         ; 00446842
    ADD ESP,0x4                         ; 00446844
    PUSH EBX                            ; 00446847
    MOV dword ptr [EBX + 0x34],EAX      ; 00446848 | DAT_0083c210
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 0044684b
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
    ADD EAX,dword ptr [EBX + 0x38]      ; 00446850 | DAT_0083c214
    LEA EDX,[EAX + 0x1]                 ; 00446853
    MOV EAX,EDX                         ; 00446856
    SAR EDX,0x1f                        ; 00446858
    SUB EAX,EDX                         ; 0044685b
    SAR EAX,0x1                         ; 0044685d
    ADD ESP,0x4                         ; 0044685f
    PUSH EBX                            ; 00446862
    MOV dword ptr [EBX + 0x38],EAX      ; 00446863 | DAT_0083c214
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 00446866
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
    ADD EAX,dword ptr [EBX + 0x3c]      ; 0044686b | DAT_0083c218
    LEA EDX,[EAX + 0x1]                 ; 0044686e
    MOV EAX,EDX                         ; 00446871
    SAR EDX,0x1f                        ; 00446873
    SUB EAX,EDX                         ; 00446876
    SAR EAX,0x1                         ; 00446878
    ADD ESP,0x4                         ; 0044687a
    MOV dword ptr [EBX + 0x3c],EAX      ; 0044687d | DAT_0083c218
    ADD ESI,dword ptr [ESP + 0x24]      ; 00446880
    CMP ESI,EDI                         ; 00446884
    JNZ 0x0044680d                      ; 00446886
        ;   XREF to: 0044680d (CONDITIONAL_JUMP)  ; LAB_0044680d
    MOV ESI,dword ptr [ESP + 0x78]      ; 00446888
        ;   Label: LAB_00446888
    INC ESI                             ; 0044688c
    MOV dword ptr [ESP + 0x78],ESI      ; 0044688d
    CMP ESI,0xa                         ; 00446891
    JL 0x004467e9                       ; 00446894
        ;   XREF to: 004467e9 (CONDITIONAL_JUMP)  ; LAB_004467e9
    MOV EAX,[0x0084a854]                ; 0044689a | g_CramTextureCount
    XOR EDI,EDI                         ; 0044689f
    TEST EAX,EAX                        ; 004468a1
    JLE 0x004468fe                      ; 004468a3
        ;   XREF to: 004468fe (CONDITIONAL_JUMP)  ; LAB_004468fe
    MOV ESI,0x83c1dc                    ; 004468a5 | g_CramSortedTextureEntries
    MOV EBX,ESI                         ; 004468aa | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_004468aa
    PUSH EBX                            ; 004468ac | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_004468ac
    CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 ; 004468ad
        ;   XREF to: 004478c0 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
    MOV EDX,dword ptr [EBX + 0x34]      ; 004468b2 | DAT_0083c210
    ADD ESP,0x4                         ; 004468b5
    SUB EDX,EAX                         ; 004468b8
    MOV ECX,dword ptr [EBX + 0x3c]      ; 004468ba | DAT_0083c218
    MOV EAX,EDX                         ; 004468bd
    MOV EDX,dword ptr [EBX + 0x34]      ; 004468bf | DAT_0083c210
    SUB ECX,EAX                         ; 004468c2
    SUB EDX,EAX                         ; 004468c4
    MOV dword ptr [EBX + 0x3c],ECX      ; 004468c6 | DAT_0083c218
    PUSH EBX                            ; 004468c9 | g_CramSortedTextureEntries
    MOV dword ptr [EBX + 0x34],EDX      ; 004468ca | DAT_0083c210
    CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 ; 004468cd
        ;   XREF to: 004479a0 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
    MOV EDX,dword ptr [EBX + 0x30]      ; 004468d2 | DAT_0083c20c
    SUB EDX,EAX                         ; 004468d5
    MOV ECX,dword ptr [EBX + 0x38]      ; 004468d7 | DAT_0083c214
    MOV EAX,EDX                         ; 004468da
    MOV EDX,dword ptr [EBX + 0x30]      ; 004468dc | DAT_0083c20c
    SUB ECX,EAX                         ; 004468df
    SUB EDX,EAX                         ; 004468e1
    MOV dword ptr [EBX + 0x38],ECX      ; 004468e3 | DAT_0083c214
    ADD ESP,0x4                         ; 004468e6
    MOV dword ptr [EBX + 0x30],EDX      ; 004468e9 | DAT_0083c20c
    TEST EAX,EAX                        ; 004468ec
    JG 0x004468ac                       ; 004468ee
        ;   XREF to: 004468ac (CONDITIONAL_JUMP)  ; LAB_004468ac
    MOV EDX,dword ptr [0x0084a854]      ; 004468f0 | g_CramTextureCount
    INC EDI                             ; 004468f6
    ADD ESI,0x4c                        ; 004468f7
    CMP EDI,EDX                         ; 004468fa
    JL 0x004468aa                       ; 004468fc
        ;   XREF to: 004468aa (CONDITIONAL_JUMP)  ; LAB_004468aa
    MOV ECX,dword ptr [0x0084a854]      ; 004468fe | g_CramTextureCount
        ;   Label: LAB_004468fe
    XOR ESI,ESI                         ; 00446904
    TEST ECX,ECX                        ; 00446906
    JLE 0x00446940                      ; 00446908
        ;   XREF to: 00446940 (CONDITIONAL_JUMP)  ; LAB_00446940
    MOV EBX,0x83c1dc                    ; 0044690a | g_CramSortedTextureEntries
    PUSH EBX                            ; 0044690f | g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_0044690f
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 00446910
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
    ADD ESP,0x4                         ; 00446915
    PUSH EBX                            ; 00446918 | g_CramSortedTextureEntries
    INC ESI                             ; 00446919
    MOV dword ptr [EBX + 0x38],EAX      ; 0044691a | DAT_0083c214
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 0044691d
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
    ADD EBX,0x4c                        ; 00446922 | DAT_0083c228
    MOV EDI,dword ptr [0x0084a854]      ; 00446925 | g_CramTextureCount
    ADD ESP,0x4                         ; 0044692b
    MOV dword ptr [EBX + -0x10],EAX     ; 0044692e | DAT_0083c218
    CMP ESI,EDI                         ; 00446931
    JL 0x0044690f                       ; 00446933
        ;   XREF to: 0044690f (CONDITIONAL_JUMP)  ; LAB_0044690f
    LEA EAX,[EAX]                       ; 00446935
    LEA EDX,[EDX]                       ; 0044693b
    MOV EBX,EBX                         ; 0044693e
    PUSH 0x0                            ; 00446940
        ;   Label: LAB_00446940
    PUSH 0x0                            ; 00446942
    PUSH 0x1                            ; 00446944
    CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 ; 00446946
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)
    ADD ESP,0xc                         ; 0044694b
    PUSH 0x359                          ; 0044694e
    PUSH 0x61998d                       ; 00446953 | = "..\\shape\\cramtex.cpp"
    PUSH 0x6199a2                       ; 00446958 | = "at"
    PUSH 0x0                            ; 0044695d
    PUSH 0x6199a5                       ; 0044695f | = "..\\shape\\cramlog.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00446964
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 00446969
    ADD ESP,0x14                        ; 0044696b
    TEST EAX,EAX                        ; 0044696e
    JZ 0x004469af                       ; 00446970
        ;   XREF to: 004469af (CONDITIONAL_JUMP)  ; LAB_004469af
    PUSH 0x6199ba                       ; 00446972 | = "Checking if solution acceptable.\n"
    PUSH EAX                            ; 00446977
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00446978
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0044697d
    MOV ESI,dword ptr [0x0084a874]      ; 00446980 | g_CramAcceptableSize
    PUSH ESI                            ; 00446986
    MOV EDI,dword ptr [0x0084a884]      ; 00446987 | g_CramCurrentAcceptableSize
    PUSH EDI                            ; 0044698d
    PUSH 0x6199dc                       ; 0044698e | = "  bestSquareSize = %d, acceptableSize..."
    PUSH EBX                            ; 00446993
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00446994
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00446999
    PUSH 0x35d                          ; 0044699c
    PUSH 0x619a08                       ; 004469a1 | = "..\\shape\\cramtex.cpp"
    PUSH EBX                            ; 004469a6
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004469a7
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004469ac
    MOV EDX,dword ptr [0x0084a874]      ; 004469af | g_CramAcceptableSize
        ;   Label: LAB_004469af
    MOV EAX,[0x0084a884]                ; 004469b5 | g_CramCurrentAcceptableSize
    CMP EAX,EDX                         ; 004469ba
    JLE 0x00446ac3                      ; 004469bc
        ;   XREF to: 00446ac3 (CONDITIONAL_JUMP)  ; LAB_00446ac3
    MOV EDX,EAX                         ; 004469c2
    SHL EAX,0x2                         ; 004469c4
    SUB EAX,EDX                         ; 004469c7
    MOV EDX,dword ptr [0x0084a874]      ; 004469c9 | g_CramAcceptableSize
    ADD EDX,EAX                         ; 004469cf
    MOV EAX,EDX                         ; 004469d1
    SAR EDX,0x1f                        ; 004469d3
    SHL EDX,0x2                         ; 004469d6
    SBB EAX,EDX                         ; 004469d9
    SAR EAX,0x2                         ; 004469db
    MOV ECX,dword ptr [0x0084a870]      ; 004469de | g_CramOptimalPlacement
    MOV [0x0084a888],EAX                ; 004469e4 | g_CramBestSolutionMetric1
    SUB EAX,ECX                         ; 004469e9
    MOV EBX,dword ptr [0x0084a860]      ; 004469eb | g_CramRectangleCount
    MOV [0x0084a88c],EAX                ; 004469f1 | g_CramBestSolutionMetric2
    XOR ECX,ECX                         ; 004469f6
    TEST EBX,EBX                        ; 004469f8
    JLE 0x00446a3e                      ; 004469fa
        ;   XREF to: 00446a3e (CONDITIONAL_JUMP)  ; LAB_00446a3e
    MOV EAX,0x840c14                    ; 004469fc | g_CramRectangles
    MOV EDX,dword ptr [EAX + 0x14]      ; 00446a01 | DAT_00840c28 | DAT_00840c50
        ;   Label: LAB_00446a01
    MOV EBX,EAX                         ; 00446a04
    TEST EDX,EDX                        ; 00446a06
    JZ 0x00446ae5                       ; 00446a08
        ;   XREF to: 00446ae5 (CONDITIONAL_JUMP)  ; LAB_00446ae5
    MOV ESI,dword ptr [0x0084a86c]      ; 00446a0e | g_CramMinPlacementY
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446a14 | DAT_00840c18 | DAT_00840c40
    MOV EDI,dword ptr [0x0084a888]      ; 00446a17 | g_CramBestSolutionMetric1
    ADD EDX,ESI                         ; 00446a1d
    CMP EDX,EDI                         ; 00446a1f
    JL 0x00446b16                       ; 00446a21
        ;   XREF to: 00446b16 (CONDITIONAL_JUMP)  ; LAB_00446b16
    MOV EDX,dword ptr [0x0065c238]      ; 00446a27 | g_CramInvalidMarker
        ;   Label: LAB_00446a27
    MOV dword ptr [EBX + 0x18],EDX      ; 00446a2d | DAT_00840c2c | DAT_00840c54
    MOV EDI,dword ptr [0x0084a860]      ; 00446a30 | g_CramRectangleCount
        ;   Label: LAB_00446a30
    INC ECX                             ; 00446a36
    ADD EAX,0x28                        ; 00446a37
    CMP ECX,EDI                         ; 00446a3a
    JL 0x00446a01                       ; 00446a3c
        ;   XREF to: 00446a01 (CONDITIONAL_JUMP)  ; LAB_00446a01
    MOV EDX,0x1                         ; 00446a3e
        ;   Label: LAB_00446a3e
    CMP EDX,dword ptr [0x0084a85c]      ; 00446a43 | g_CramPlacedTextureCount
    JGE 0x004464e3                      ; 00446a49
        ;   XREF to: 004464e3 (CONDITIONAL_JUMP)  ; LAB_004464e3
    MOV ECX,dword ptr [0x0084a85c]      ; 00446a4f | g_CramPlacedTextureCount
    LEA EBX,[ECX*0x4 + 0x0]             ; 00446a55
    ADD EBX,ECX                         ; 00446a5c
    SHL EBX,0x2                         ; 00446a5e
    MOV EAX,0x4c                        ; 00446a61
    SUB EBX,ECX                         ; 00446a66
    MOV ESI,dword ptr [0x0084a888]      ; 00446a68 | g_CramBestSolutionMetric1
    SHL EBX,0x2                         ; 00446a6e
    CMP ESI,dword ptr [EAX + 0x83c200]  ; 00446a71 | DAT_0083c24c | DAT_0083c298
        ;   Label: LAB_00446a71
    JLE 0x00446b2e                      ; 00446a77
        ;   XREF to: 00446b2e (CONDITIONAL_JUMP)  ; LAB_00446b2e
    CMP ESI,dword ptr [EAX + 0x83c204]  ; 00446a7d | DAT_0083c250 | DAT_0083c29c
    JLE 0x00446b2e                      ; 00446a83
        ;   XREF to: 00446b2e (CONDITIONAL_JUMP)  ; LAB_00446b2e
    ADD EAX,0x4c                        ; 00446a89
    INC EDX                             ; 00446a8c
    CMP EAX,EBX                         ; 00446a8d
    JL 0x00446a71                       ; 00446a8f
        ;   XREF to: 00446a71 (CONDITIONAL_JUMP)  ; LAB_00446a71
    JMP 0x004464e3                      ; 00446a91
        ;   XREF to: 004464e3 (UNCONDITIONAL_JUMP)  ; LAB_004464e3
    MOV EAX,dword ptr [ESP + 0x18]      ; 00446a96
        ;   Label: LAB_00446a96
    INC EAX                             ; 00446a9a
    MOV dword ptr [ESP + 0x18],EAX      ; 00446a9b
    CMP EAX,0xa                         ; 00446a9f
    JL 0x00446711                       ; 00446aa2
        ;   XREF to: 00446711 (CONDITIONAL_JUMP)  ; LAB_00446711
    JMP 0x004467e3                      ; 00446aa8
        ;   XREF to: 004467e3 (UNCONDITIONAL_JUMP)  ; LAB_004467e3
    MOV EBX,0x1                         ; 00446aad
        ;   Label: LAB_00446aad
    MOV EDI,dword ptr [0x0084a854]      ; 00446ab2 | g_CramTextureCount
    XOR EAX,EAX                         ; 00446ab8
    MOV dword ptr [ESP + 0x24],EBX      ; 00446aba
    JMP 0x00446803                      ; 00446abe
        ;   XREF to: 00446803 (UNCONDITIONAL_JUMP)  ; LAB_00446803
    MOV EAX,dword ptr [ESP + 0x10]      ; 00446ac3
        ;   Label: LAB_00446ac3
    MOV ESI,dword ptr [0x0084a85c]      ; 00446ac7 | g_CramPlacedTextureCount
    MOV [0x00887940],EAX                ; 00446acd | g_CramAlgorithmState
    DEC ESI                             ; 00446ad2
    MOV EAX,0xf423f                     ; 00446ad3
    MOV dword ptr [0x0084a85c],ESI      ; 00446ad8 | g_CramPlacedTextureCount
    MOV ESP,EBP                         ; 00446ade
    POP EBP                             ; 00446ae0
    POP EDI                             ; 00446ae1
    POP ESI                             ; 00446ae2
    POP EBX                             ; 00446ae3
    RET                                 ; 00446ae4
    MOV ESI,dword ptr [0x0084a868]      ; 00446ae5 | g_CramMinPlacementX
        ;   Label: LAB_00446ae5
    MOV EDX,dword ptr [EAX + 0x4]       ; 00446aeb | DAT_00840c40
    MOV EDI,dword ptr [0x0084a888]      ; 00446aee | g_CramBestSolutionMetric1
    ADD EDX,ESI                         ; 00446af4
    CMP EDX,EDI                         ; 00446af6
    JGE 0x00446a27                      ; 00446af8
        ;   XREF to: 00446a27 (CONDITIONAL_JUMP)  ; LAB_00446a27
    MOV ESI,dword ptr [0x0084a86c]      ; 00446afe | g_CramMinPlacementY
    MOV EDX,dword ptr [EAX + 0x8]       ; 00446b04 | DAT_00840c44
    ADD EDX,ESI                         ; 00446b07
    CMP EDX,EDI                         ; 00446b09
    JGE 0x00446a27                      ; 00446b0b
        ;   XREF to: 00446a27 (CONDITIONAL_JUMP)  ; LAB_00446a27
    JMP 0x00446a30                      ; 00446b11
        ;   XREF to: 00446a30 (UNCONDITIONAL_JUMP)  ; LAB_00446a30
    MOV ESI,dword ptr [0x0084a868]      ; 00446b16 | g_CramMinPlacementX
        ;   Label: LAB_00446b16
    MOV EDX,dword ptr [EAX + 0x8]       ; 00446b1c | DAT_00840c44
    ADD EDX,ESI                         ; 00446b1f
    CMP EDX,EDI                         ; 00446b21
    JGE 0x00446a27                      ; 00446b23
        ;   XREF to: 00446a27 (CONDITIONAL_JUMP)  ; LAB_00446a27
    JMP 0x00446a30                      ; 00446b29
        ;   XREF to: 00446a30 (UNCONDITIONAL_JUMP)  ; LAB_00446a30
    MOV EAX,dword ptr [ESP + 0x10]      ; 00446b2e
        ;   Label: LAB_00446b2e
    MOV [0x00887940],EAX                ; 00446b32 | g_CramAlgorithmState
    MOV EAX,[0x0084a85c]                ; 00446b37 | g_CramPlacedTextureCount
    DEC EAX                             ; 00446b3c
    MOV [0x0084a85c],EAX                ; 00446b3d | g_CramPlacedTextureCount
    SUB EAX,EDX                         ; 00446b42
    MOV ESP,EBP                         ; 00446b44
    POP EBP                             ; 00446b46
    POP EDI                             ; 00446b47
    POP ESI                             ; 00446b48
    POP EBX                             ; 00446b49
    RET                                 ; 00446b4a
    XOR ECX,ECX                         ; 00446b4b
        ;   Label: LAB_00446b4b
    MOV EBX,dword ptr [ESP + 0x8]       ; 00446b4d
    MOV dword ptr [ESP + 0x28],ECX      ; 00446b51
    TEST EBX,EBX                        ; 00446b55
    JLE 0x004464e3                      ; 00446b57
        ;   XREF to: 004464e3 (CONDITIONAL_JUMP)  ; LAB_004464e3
    MOV EAX,dword ptr [ESP + 0x4]       ; 00446b5d
    MOV dword ptr [ESP + 0x74],EAX      ; 00446b61
    MOV EDX,dword ptr [ESP + 0x74]      ; 00446b65
        ;   Label: LAB_00446b65
    MOV EDX,dword ptr [EDX]             ; 00446b69
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446b6b
    MOV ECX,dword ptr [EDX]             ; 00446b6e
    MOV dword ptr [EAX + 0x10],ECX      ; 00446b70
    MOV ECX,dword ptr [EDX + 0x14]      ; 00446b73
    MOV dword ptr [EAX + 0x40],ECX      ; 00446b76
    MOV ECX,dword ptr [EDX + 0x4]       ; 00446b79
    MOV dword ptr [EAX + 0x1c],ECX      ; 00446b7c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00446b7f
    MOV ESI,dword ptr [EAX + 0x40]      ; 00446b82
    MOV dword ptr [EAX + 0x20],EDX      ; 00446b85
    TEST ESI,ESI                        ; 00446b88
    JNZ 0x00446bdd                      ; 00446b8a
        ;   XREF to: 00446bdd (CONDITIONAL_JUMP)  ; LAB_00446bdd
    MOV EDX,dword ptr [EAX + 0x8]       ; 00446b8c
    MOV dword ptr [EAX + 0x14],EDX      ; 00446b8f
    MOV EDX,dword ptr [EAX + 0xc]       ; 00446b92
    MOV dword ptr [EAX + 0x18],EDX      ; 00446b95
        ;   Label: LAB_00446b95
    MOV EDI,dword ptr [EAX + 0x14]      ; 00446b98
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00446b9b
    ADD EDX,EDI                         ; 00446b9e
    MOV dword ptr [EAX + 0x24],EDX      ; 00446ba0
    MOV ECX,dword ptr [EAX + 0x18]      ; 00446ba3
    MOV EDX,dword ptr [EAX + 0x20]      ; 00446ba6
    ADD EDX,ECX                         ; 00446ba9
    MOV dword ptr [EAX + 0x28],EDX      ; 00446bab
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446bae
    MOV EBX,dword ptr [0x0084a888]      ; 00446bb1 | g_CramBestSolutionMetric1
    CMP EBX,dword ptr [EAX + 0x24]      ; 00446bb7
    JG 0x00446be8                       ; 00446bba
        ;   XREF to: 00446be8 (CONDITIONAL_JUMP)  ; LAB_00446be8
    MOV EDX,dword ptr [ESP + 0x74]      ; 00446bbc
        ;   Label: LAB_00446bbc
    MOV ECX,dword ptr [ESP + 0x28]      ; 00446bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00446bc4
    ADD EDX,0x4                         ; 00446bc8
    INC ECX                             ; 00446bcb
    MOV dword ptr [ESP + 0x74],EDX      ; 00446bcc
    MOV dword ptr [ESP + 0x28],ECX      ; 00446bd0
    CMP ECX,EBX                         ; 00446bd4
    JL 0x00446b65                       ; 00446bd6
        ;   XREF to: 00446b65 (CONDITIONAL_JUMP)  ; LAB_00446b65
    JMP 0x004464e3                      ; 00446bd8
        ;   XREF to: 004464e3 (UNCONDITIONAL_JUMP)  ; LAB_004464e3
    MOV EDX,dword ptr [EAX + 0xc]       ; 00446bdd
        ;   Label: LAB_00446bdd
    MOV dword ptr [EAX + 0x14],EDX      ; 00446be0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00446be3
    JMP 0x00446b95                      ; 00446be6
        ;   XREF to: 00446b95 (UNCONDITIONAL_JUMP)  ; LAB_00446b95
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446be8
        ;   Label: LAB_00446be8
    CMP EBX,dword ptr [EAX + 0x28]      ; 00446beb
    JLE 0x00446bbc                      ; 00446bee
        ;   XREF to: 00446bbc (CONDITIONAL_JUMP)  ; LAB_00446bbc
    MOV EDI,dword ptr [0x0084a860]      ; 00446bf0 | g_CramRectangleCount
    XOR EDX,EDX                         ; 00446bf6
    TEST EDI,EDI                        ; 00446bf8
    JLE 0x00446c51                      ; 00446bfa
        ;   XREF to: 00446c51 (CONDITIONAL_JUMP)  ; LAB_00446c51
    MOV EAX,0x840c14                    ; 00446bfc | g_CramRectangles
    CMP dword ptr [EAX + 0x18],0x0      ; 00446c01 | DAT_00840c2c | DAT_00840c54
        ;   Label: LAB_00446c01
    JNZ 0x00446c43                      ; 00446c05
        ;   XREF to: 00446c43 (CONDITIONAL_JUMP)  ; LAB_00446c43
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446c07
    MOV EBX,dword ptr [EAX]             ; 00446c0a | g_CramRectangles | DAT_00840c3c
    CMP EBX,dword ptr [ECX + 0x10]      ; 00446c0c
    JNZ 0x00446c43                      ; 00446c0f
        ;   XREF to: 00446c43 (CONDITIONAL_JUMP)  ; LAB_00446c43
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446c11
    MOV ESI,dword ptr [EAX + 0xc]       ; 00446c14 | DAT_00840c20 | DAT_00840c48
    CMP ESI,dword ptr [ECX + 0x1c]      ; 00446c17
    JLE 0x00446c43                      ; 00446c1a
        ;   XREF to: 00446c43 (CONDITIONAL_JUMP)  ; LAB_00446c43
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446c1c
    MOV EDI,dword ptr [EAX + 0x10]      ; 00446c1f | DAT_00840c24 | DAT_00840c4c
    CMP EDI,dword ptr [ECX + 0x20]      ; 00446c22
    JLE 0x00446c43                      ; 00446c25
        ;   XREF to: 00446c43 (CONDITIONAL_JUMP)  ; LAB_00446c43
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446c27
    MOV EBX,dword ptr [EAX + 0x4]       ; 00446c2a | DAT_00840c18 | DAT_00840c40
    CMP EBX,dword ptr [ECX + 0x24]      ; 00446c2d
    JGE 0x00446c43                      ; 00446c30
        ;   XREF to: 00446c43 (CONDITIONAL_JUMP)  ; LAB_00446c43
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446c32
    MOV ESI,dword ptr [EAX + 0x8]       ; 00446c35 | DAT_00840c1c
    CMP ESI,dword ptr [ECX + 0x28]      ; 00446c38
    JGE 0x00446c43                      ; 00446c3b
        ;   XREF to: 00446c43 (CONDITIONAL_JUMP)  ; LAB_00446c43
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446c3d
    MOV dword ptr [EAX + 0x18],ECX      ; 00446c40 | DAT_00840c2c
    MOV ECX,dword ptr [0x0084a860]      ; 00446c43 | g_CramRectangleCount
        ;   Label: LAB_00446c43
    INC EDX                             ; 00446c49
    ADD EAX,0x28                        ; 00446c4a
    CMP EDX,ECX                         ; 00446c4d
    JL 0x00446c01                       ; 00446c4f
        ;   XREF to: 00446c01 (CONDITIONAL_JUMP)  ; LAB_00446c01
    MOV EAX,[0x0084a860]                ; 00446c51 | g_CramRectangleCount
        ;   Label: LAB_00446c51
    MOV dword ptr [ESP + 0x2c],EAX      ; 00446c56
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446c5a
    MOV EBX,dword ptr [0x0084a88c]      ; 00446c5d | g_CramBestSolutionMetric2
    CMP EBX,dword ptr [EAX + 0x28]      ; 00446c63
    JL 0x00446df8                       ; 00446c66
        ;   XREF to: 00446df8 (CONDITIONAL_JUMP)  ; LAB_00446df8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446c6c
    MOV EDI,dword ptr [0x0084a870]      ; 00446c6f | g_CramOptimalPlacement
    MOV EDX,dword ptr [0x0084a85c]      ; 00446c75 | g_CramPlacedTextureCount
    XOR ESI,ESI                         ; 00446c7b
    MOV EAX,dword ptr [EAX + 0x28]      ; 00446c7d
    SUB EDX,0x2                         ; 00446c80
    ADD EAX,EDI                         ; 00446c83
    MOV dword ptr [ESP + 0x30],ESI      ; 00446c85
    LEA EBX,[EAX + -0x1]                ; 00446c89
    TEST EDX,EDX                        ; 00446c8c
    JL 0x00446ccf                       ; 00446c8e
        ;   XREF to: 00446ccf (CONDITIONAL_JUMP)  ; LAB_00446ccf
    IMUL EAX,EDX,0x4c                   ; 00446c90
    ADD EAX,0x83c1dc                    ; 00446c93 | g_CramSortedTextureEntries
    MOV ESI,dword ptr [EBP + 0x14]      ; 00446c98
        ;   Label: LAB_00446c98
    MOV ECX,dword ptr [EAX + 0x10]      ; 00446c9b | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
    CMP ECX,dword ptr [ESI + 0x10]      ; 00446c9e
    JNZ 0x00446cc7                      ; 00446ca1
        ;   XREF to: 00446cc7 (CONDITIONAL_JUMP)  ; LAB_00446cc7
    MOV EDI,dword ptr [ESI + 0x24]      ; 00446ca3
    CMP EDI,dword ptr [EAX + 0x24]      ; 00446ca6 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JL 0x00446cc7                       ; 00446ca9
        ;   XREF to: 00446cc7 (CONDITIONAL_JUMP)  ; LAB_00446cc7
    MOV EDI,dword ptr [ESI + 0x28]      ; 00446cab
    CMP EDI,dword ptr [EAX + 0x28]      ; 00446cae | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00446cc7                      ; 00446cb1
        ;   XREF to: 00446cc7 (CONDITIONAL_JUMP)  ; LAB_00446cc7
    CMP EBX,dword ptr [EAX + 0x20]      ; 00446cb3 | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x00446cc7                      ; 00446cb6
        ;   XREF to: 00446cc7 (CONDITIONAL_JUMP)  ; LAB_00446cc7
    MOV ESI,dword ptr [ESP + 0x30]      ; 00446cb8
    MOV ECX,dword ptr [EAX + 0x24]      ; 00446cbc | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    CMP ECX,ESI                         ; 00446cbf
    JLE 0x00446cc7                      ; 00446cc1
        ;   XREF to: 00446cc7 (CONDITIONAL_JUMP)  ; LAB_00446cc7
    MOV dword ptr [ESP + 0x30],ECX      ; 00446cc3
    DEC EDX                             ; 00446cc7
        ;   Label: LAB_00446cc7
    SUB EAX,0x4c                        ; 00446cc8
    TEST EDX,EDX                        ; 00446ccb
    JGE 0x00446c98                      ; 00446ccd
        ;   XREF to: 00446c98 (CONDITIONAL_JUMP)  ; LAB_00446c98
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446ccf
        ;   Label: LAB_00446ccf
    MOV EAX,dword ptr [ESP + 0x30]      ; 00446cd2
    CMP EAX,dword ptr [EDX + 0x24]      ; 00446cd6
    JGE 0x00446df8                      ; 00446cd9
        ;   XREF to: 00446df8 (CONDITIONAL_JUMP)  ; LAB_00446df8
    MOV EAX,[0x0084a85c]                ; 00446cdf | g_CramPlacedTextureCount
    SUB EAX,0x2                         ; 00446ce4
    MOV dword ptr [ESP + 0x80],EAX      ; 00446ce7
    TEST EAX,EAX                        ; 00446cee
    JL 0x00446da9                       ; 00446cf0
        ;   XREF to: 00446da9 (CONDITIONAL_JUMP)  ; LAB_00446da9
    IMUL EAX,EAX,0x4c                   ; 00446cf6
    ADD EAX,0x83c1dc                    ; 00446cf9 | g_CramSortedTextureEntries
    MOV dword ptr [ESP + 0x60],EAX      ; 00446cfe
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446d02
        ;   Label: LAB_00446d02
    MOV EAX,dword ptr [ESP + 0x60]      ; 00446d05
    MOV ECX,dword ptr [EDX + 0x10]      ; 00446d09
    CMP ECX,dword ptr [EAX + 0x10]      ; 00446d0c | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
    JNZ 0x00446d87                      ; 00446d0f
        ;   XREF to: 00446d87 (CONDITIONAL_JUMP)  ; LAB_00446d87
    MOV EAX,dword ptr [ESP + 0x60]      ; 00446d15
    MOV EBX,dword ptr [EDX + 0x24]      ; 00446d19
    CMP EBX,dword ptr [EAX + 0x24]      ; 00446d1c | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JL 0x00446d87                       ; 00446d1f
        ;   XREF to: 00446d87 (CONDITIONAL_JUMP)  ; LAB_00446d87
    MOV EAX,dword ptr [ESP + 0x60]      ; 00446d21
    MOV ESI,dword ptr [EDX + 0x28]      ; 00446d25
    CMP ESI,dword ptr [EAX + 0x28]      ; 00446d28 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00446d87                      ; 00446d2b
        ;   XREF to: 00446d87 (CONDITIONAL_JUMP)  ; LAB_00446d87
    MOV EAX,dword ptr [ESP + 0x60]      ; 00446d2d
    MOV EDI,dword ptr [ESP + 0x30]      ; 00446d31
    CMP EDI,dword ptr [EAX + 0x24]      ; 00446d35 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00446d87                      ; 00446d38
        ;   XREF to: 00446d87 (CONDITIONAL_JUMP)  ; LAB_00446d87
    MOV EBX,dword ptr [ESP + 0x60]      ; 00446d3a
    MOV EAX,[0x0084a860]                ; 00446d3e | g_CramRectangleCount
    MOV dword ptr [ESP + 0x34],ECX      ; 00446d43
    MOV ECX,ESI                         ; 00446d47
    MOV EBX,dword ptr [EBX + 0x24]      ; 00446d49 | g_CramSortedTextureEntries[0].working_top
    TEST EAX,EAX                        ; 00446d4c
    JLE 0x0044703f                      ; 00446d4e
        ;   XREF to: 0044703f (CONDITIONAL_JUMP)  ; LAB_0044703f
    MOV ESI,dword ptr [0x0084a860]      ; 00446d54 | g_CramRectangleCount
    XOR EAX,EAX                         ; 00446d5a
    IMUL EDX,ESI,0x28                   ; 00446d5c
    MOV EDI,dword ptr [ESP + 0x34]      ; 00446d5f
        ;   Label: LAB_00446d5f
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 00446d63 | g_CramRectangles | DAT_00840c3c
    JNZ 0x00447034                      ; 00446d69
        ;   XREF to: 00447034 (CONDITIONAL_JUMP)  ; LAB_00447034
    CMP EBX,dword ptr [EAX + 0x840c18]  ; 00446d6f | DAT_00840c18 | DAT_00840c40
    JNZ 0x00447034                      ; 00446d75
        ;   XREF to: 00447034 (CONDITIONAL_JUMP)  ; LAB_00447034
    CMP ECX,dword ptr [EAX + 0x840c1c]  ; 00446d7b | DAT_00840c1c | DAT_00840c44
    JNZ 0x00447034                      ; 00446d81
        ;   XREF to: 00447034 (CONDITIONAL_JUMP)  ; LAB_00447034
    MOV EDI,dword ptr [ESP + 0x60]      ; 00446d87
        ;   Label: LAB_00446d87
    MOV EAX,dword ptr [ESP + 0x80]      ; 00446d8b
    SUB EDI,0x4c                        ; 00446d92
    DEC EAX                             ; 00446d95
    MOV dword ptr [ESP + 0x60],EDI      ; 00446d96
    MOV dword ptr [ESP + 0x80],EAX      ; 00446d9a
    TEST EAX,EAX                        ; 00446da1
    JGE 0x00446d02                      ; 00446da3
        ;   XREF to: 00446d02 (CONDITIONAL_JUMP)  ; LAB_00446d02
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446da9
        ;   Label: LAB_00446da9
    MOV ECX,dword ptr [ESP + 0x30]      ; 00446dac
    MOV EBX,dword ptr [EBP + 0x14]      ; 00446db0
    MOV ESI,dword ptr [0x0084a860]      ; 00446db3 | g_CramRectangleCount
    MOV EAX,dword ptr [EAX + 0x10]      ; 00446db9
    MOV EBX,dword ptr [EBX + 0x28]      ; 00446dbc
    MOV dword ptr [ESP + 0x3c],EAX      ; 00446dbf
    TEST ESI,ESI                        ; 00446dc3
    JLE 0x00447131                      ; 00446dc5
        ;   XREF to: 00447131 (CONDITIONAL_JUMP)  ; LAB_00447131
    XOR EAX,EAX                         ; 00446dcb
    IMUL EDX,ESI,0x28                   ; 00446dcd
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00446dd0
        ;   Label: LAB_00446dd0
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 00446dd4 | g_CramRectangles | DAT_00840c3c
    JNZ 0x00447126                      ; 00446dda
        ;   XREF to: 00447126 (CONDITIONAL_JUMP)  ; LAB_00447126
    CMP ECX,dword ptr [EAX + 0x840c18]  ; 00446de0 | DAT_00840c18 | DAT_00840c40
    JNZ 0x00447126                      ; 00446de6
        ;   XREF to: 00447126 (CONDITIONAL_JUMP)  ; LAB_00447126
    CMP EBX,dword ptr [EAX + 0x840c1c]  ; 00446dec | DAT_00840c1c | DAT_00840c44
    JNZ 0x00447126                      ; 00446df2
        ;   XREF to: 00447126 (CONDITIONAL_JUMP)  ; LAB_00447126
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446df8
        ;   Label: LAB_00446df8
    MOV EDX,dword ptr [0x0084a88c]      ; 00446dfb | g_CramBestSolutionMetric2
    CMP EDX,dword ptr [EAX + 0x28]      ; 00446e01
    JL 0x00446f96                       ; 00446e04
        ;   XREF to: 00446f96 (CONDITIONAL_JUMP)  ; LAB_00446f96
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446e0a
    MOV EBX,dword ptr [0x0084a870]      ; 00446e0d | g_CramOptimalPlacement
    MOV EDX,dword ptr [0x0084a85c]      ; 00446e13 | g_CramPlacedTextureCount
    XOR ECX,ECX                         ; 00446e19
    MOV EAX,dword ptr [EAX + 0x24]      ; 00446e1b
    SUB EDX,0x2                         ; 00446e1e
    ADD EAX,EBX                         ; 00446e21
    MOV dword ptr [ESP + 0x44],ECX      ; 00446e23
    LEA EBX,[EAX + -0x1]                ; 00446e27
    TEST EDX,EDX                        ; 00446e2a
    JL 0x00446e6d                       ; 00446e2c
        ;   XREF to: 00446e6d (CONDITIONAL_JUMP)  ; LAB_00446e6d
    IMUL EAX,EDX,0x4c                   ; 00446e2e
    ADD EAX,0x83c1dc                    ; 00446e31 | g_CramSortedTextureEntries
    MOV ESI,dword ptr [EBP + 0x14]      ; 00446e36
        ;   Label: LAB_00446e36
    MOV ECX,dword ptr [EAX + 0x10]      ; 00446e39 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
    CMP ECX,dword ptr [ESI + 0x10]      ; 00446e3c
    JNZ 0x00446e65                      ; 00446e3f
        ;   XREF to: 00446e65 (CONDITIONAL_JUMP)  ; LAB_00446e65
    MOV EDI,dword ptr [ESI + 0x28]      ; 00446e41
    CMP EDI,dword ptr [EAX + 0x28]      ; 00446e44 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JL 0x00446e65                       ; 00446e47
        ;   XREF to: 00446e65 (CONDITIONAL_JUMP)  ; LAB_00446e65
    MOV EDI,dword ptr [ESI + 0x24]      ; 00446e49
    CMP EDI,dword ptr [EAX + 0x24]      ; 00446e4c | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00446e65                      ; 00446e4f
        ;   XREF to: 00446e65 (CONDITIONAL_JUMP)  ; LAB_00446e65
    CMP EBX,dword ptr [EAX + 0x1c]      ; 00446e51 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x00446e65                      ; 00446e54
        ;   XREF to: 00446e65 (CONDITIONAL_JUMP)  ; LAB_00446e65
    MOV ESI,dword ptr [ESP + 0x44]      ; 00446e56
    MOV ECX,dword ptr [EAX + 0x28]      ; 00446e5a | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    CMP ECX,ESI                         ; 00446e5d
    JLE 0x00446e65                      ; 00446e5f
        ;   XREF to: 00446e65 (CONDITIONAL_JUMP)  ; LAB_00446e65
    MOV dword ptr [ESP + 0x44],ECX      ; 00446e61
    DEC EDX                             ; 00446e65
        ;   Label: LAB_00446e65
    SUB EAX,0x4c                        ; 00446e66
    TEST EDX,EDX                        ; 00446e69
    JGE 0x00446e36                      ; 00446e6b
        ;   XREF to: 00446e36 (CONDITIONAL_JUMP)  ; LAB_00446e36
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446e6d
        ;   Label: LAB_00446e6d
    MOV EAX,dword ptr [ESP + 0x44]      ; 00446e70
    CMP EAX,dword ptr [EDX + 0x28]      ; 00446e74
    JGE 0x00446f96                      ; 00446e77
        ;   XREF to: 00446f96 (CONDITIONAL_JUMP)  ; LAB_00446f96
    MOV EAX,[0x0084a85c]                ; 00446e7d | g_CramPlacedTextureCount
    SUB EAX,0x2                         ; 00446e82
    MOV dword ptr [ESP + 0x8c],EAX      ; 00446e85
    TEST EAX,EAX                        ; 00446e8c
    JL 0x00446f47                       ; 00446e8e
        ;   XREF to: 00446f47 (CONDITIONAL_JUMP)  ; LAB_00446f47
    IMUL EAX,EAX,0x4c                   ; 00446e94
    ADD EAX,0x83c1dc                    ; 00446e97 | g_CramSortedTextureEntries
    MOV dword ptr [ESP + 0x6c],EAX      ; 00446e9c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446ea0
        ;   Label: LAB_00446ea0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00446ea3
    MOV ECX,dword ptr [EDX + 0x10]      ; 00446ea7
    CMP ECX,dword ptr [EAX + 0x10]      ; 00446eaa | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
    JNZ 0x00446f25                      ; 00446ead
        ;   XREF to: 00446f25 (CONDITIONAL_JUMP)  ; LAB_00446f25
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00446eb3
    MOV EBX,dword ptr [EDX + 0x28]      ; 00446eb7
    CMP EBX,dword ptr [EAX + 0x28]      ; 00446eba | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JL 0x00446f25                       ; 00446ebd
        ;   XREF to: 00446f25 (CONDITIONAL_JUMP)  ; LAB_00446f25
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00446ebf
    MOV ESI,dword ptr [EDX + 0x24]      ; 00446ec3
    CMP ESI,dword ptr [EAX + 0x24]      ; 00446ec6 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00446f25                      ; 00446ec9
        ;   XREF to: 00446f25 (CONDITIONAL_JUMP)  ; LAB_00446f25
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00446ecb
    MOV EDI,dword ptr [ESP + 0x44]      ; 00446ecf
    CMP EDI,dword ptr [EAX + 0x28]      ; 00446ed3 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00446f25                      ; 00446ed6
        ;   XREF to: 00446f25 (CONDITIONAL_JUMP)  ; LAB_00446f25
    MOV dword ptr [ESP + 0x48],ECX      ; 00446ed8
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00446edc
    MOV EAX,[0x0084a860]                ; 00446ee0 | g_CramRectangleCount
    MOV EBX,ESI                         ; 00446ee5
    MOV ECX,dword ptr [ECX + 0x28]      ; 00446ee7 | g_CramSortedTextureEntries[0].working_width
    TEST EAX,EAX                        ; 00446eea
    JLE 0x00447221                      ; 00446eec
        ;   XREF to: 00447221 (CONDITIONAL_JUMP)  ; LAB_00447221
    MOV ESI,dword ptr [0x0084a860]      ; 00446ef2 | g_CramRectangleCount
    XOR EAX,EAX                         ; 00446ef8
    IMUL EDX,ESI,0x28                   ; 00446efa
    MOV EDI,dword ptr [ESP + 0x48]      ; 00446efd
        ;   Label: LAB_00446efd
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 00446f01 | g_CramRectangles | DAT_00840c3c
    JNZ 0x00447216                      ; 00446f07
        ;   XREF to: 00447216 (CONDITIONAL_JUMP)  ; LAB_00447216
    CMP EBX,dword ptr [EAX + 0x840c18]  ; 00446f0d | DAT_00840c18 | DAT_00840c40
    JNZ 0x00447216                      ; 00446f13
        ;   XREF to: 00447216 (CONDITIONAL_JUMP)  ; LAB_00447216
    CMP ECX,dword ptr [EAX + 0x840c1c]  ; 00446f19 | DAT_00840c1c | DAT_00840c44
    JNZ 0x00447216                      ; 00446f1f
        ;   XREF to: 00447216 (CONDITIONAL_JUMP)  ; LAB_00447216
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00446f25
        ;   Label: LAB_00446f25
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00446f29
    SUB EDI,0x4c                        ; 00446f30
    DEC EAX                             ; 00446f33
    MOV dword ptr [ESP + 0x6c],EDI      ; 00446f34
    MOV dword ptr [ESP + 0x8c],EAX      ; 00446f38
    TEST EAX,EAX                        ; 00446f3f
    JGE 0x00446ea0                      ; 00446f41
        ;   XREF to: 00446ea0 (CONDITIONAL_JUMP)  ; LAB_00446ea0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446f47
        ;   Label: LAB_00446f47
    MOV ECX,dword ptr [EBP + 0x14]      ; 00446f4a
    MOV EBX,dword ptr [ESP + 0x44]      ; 00446f4d
    MOV ESI,dword ptr [0x0084a860]      ; 00446f51 | g_CramRectangleCount
    MOV EAX,dword ptr [EAX + 0x10]      ; 00446f57
    MOV ECX,dword ptr [ECX + 0x24]      ; 00446f5a
    MOV dword ptr [ESP + 0x50],EAX      ; 00446f5d
    TEST ESI,ESI                        ; 00446f61
    JLE 0x00447313                      ; 00446f63
        ;   XREF to: 00447313 (CONDITIONAL_JUMP)  ; LAB_00447313
    XOR EAX,EAX                         ; 00446f69
    IMUL EDX,ESI,0x28                   ; 00446f6b
    MOV EDI,dword ptr [ESP + 0x50]      ; 00446f6e
        ;   Label: LAB_00446f6e
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 00446f72 | g_CramRectangles | DAT_00840c3c
    JNZ 0x00447308                      ; 00446f78
        ;   XREF to: 00447308 (CONDITIONAL_JUMP)  ; LAB_00447308
    CMP ECX,dword ptr [EAX + 0x840c18]  ; 00446f7e | DAT_00840c18 | DAT_00840c40
    JNZ 0x00447308                      ; 00446f84
        ;   XREF to: 00447308 (CONDITIONAL_JUMP)  ; LAB_00447308
    CMP EBX,dword ptr [EAX + 0x840c1c]  ; 00446f8a | DAT_00840c1c | DAT_00840c44
    JNZ 0x00447308                      ; 00446f90
        ;   XREF to: 00447308 (CONDITIONAL_JUMP)  ; LAB_00447308
    CMP dword ptr [0x0084a8a0],0x0      ; 00446f96 | g_CramVisualizationMode
        ;   Label: LAB_00446f96
    JZ 0x00446fad                       ; 00446f9d
        ;   XREF to: 00446fad (CONDITIONAL_JUMP)  ; LAB_00446fad
    PUSH 0x0                            ; 00446f9f
    PUSH 0x0                            ; 00446fa1
    PUSH 0x0                            ; 00446fa3
    CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 ; 00446fa5
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)
    ADD ESP,0xc                         ; 00446faa
    IMUL EAX,dword ptr [0x0084a85c],0x4c ; 00446fad | g_CramPlacedTextureCount
        ;   Label: LAB_00446fad
    ADD EAX,0x83c1dc                    ; 00446fb4 | g_CramSortedTextureEntries
    PUSH EAX                            ; 00446fb9
    CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 ; 00446fba
        ;   XREF to: 00446160 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160(SCramWorkingEntry * current_texture_entry)
    ADD ESP,0x4                         ; 00446fbf
    MOV EDX,EAX                         ; 00446fc2
    TEST EAX,EAX                        ; 00446fc4
    JLE 0x00446fcb                      ; 00446fc6
        ;   XREF to: 00446fcb (CONDITIONAL_JUMP)  ; LAB_00446fcb
    LEA EDX,[EAX + -0x1]                ; 00446fc8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00446fcb
        ;   Label: LAB_00446fcb
    MOV EBX,EDX                         ; 00446fcf
    MOV [0x0084a860],EAX                ; 00446fd1 | g_CramRectangleCount
    TEST EAX,EAX                        ; 00446fd6
    JLE 0x00446ffd                      ; 00446fd8
        ;   XREF to: 00446ffd (CONDITIONAL_JUMP)  ; LAB_00446ffd
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00446fda
    MOV ESI,dword ptr [EBP + 0x14]      ; 00446fde
    XOR EAX,EAX                         ; 00446fe1
    IMUL EDX,ECX,0x28                   ; 00446fe3
    CMP ESI,dword ptr [EAX + 0x840c2c]  ; 00446fe6 | DAT_00840c2c | DAT_00840c54
        ;   Label: LAB_00446fe6
    JNZ 0x00446ff6                      ; 00446fec
        ;   XREF to: 00446ff6 (CONDITIONAL_JUMP)  ; LAB_00446ff6
    XOR EDI,EDI                         ; 00446fee
    MOV dword ptr [EAX + 0x840c2c],EDI  ; 00446ff0 | DAT_00840c2c | DAT_00840c54
    ADD EAX,0x28                        ; 00446ff6
        ;   Label: LAB_00446ff6
    CMP EAX,EDX                         ; 00446ff9
    JL 0x00446fe6                       ; 00446ffb
        ;   XREF to: 00446fe6 (CONDITIONAL_JUMP)  ; LAB_00446fe6
    MOV ESI,dword ptr [0x0083c1d8]      ; 00446ffd | g_CramVisualizationUpdateCounter
        ;   Label: LAB_00446ffd
    CMP ESI,0x64                        ; 00447003
    JGE 0x004473f8                      ; 00447006
        ;   XREF to: 004473f8 (CONDITIONAL_JUMP)  ; LAB_004473f8
    LEA EAX,[ESI + 0x1]                 ; 0044700c
    MOV [0x0083c1d8],EAX                ; 0044700f | g_CramVisualizationUpdateCounter
    TEST EBX,EBX                        ; 00447014
        ;   Label: LAB_00447014
    JZ 0x00446bbc                       ; 00447016
        ;   XREF to: 00446bbc (CONDITIONAL_JUMP)  ; LAB_00446bbc
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044701c
    MOV [0x00887940],EAX                ; 00447020 | g_CramAlgorithmState
    MOV EAX,EBX                         ; 00447025
    DEC dword ptr [0x0084a85c]          ; 00447027 | g_CramPlacedTextureCount
    MOV ESP,EBP                         ; 0044702d
    POP EBP                             ; 0044702f
    POP EDI                             ; 00447030
    POP ESI                             ; 00447031
    POP EBX                             ; 00447032
    RET                                 ; 00447033
    ADD EAX,0x28                        ; 00447034
        ;   Label: LAB_00447034
    CMP EAX,EDX                         ; 00447037
    JL 0x00446d5f                       ; 00447039
        ;   XREF to: 00446d5f (CONDITIONAL_JUMP)  ; LAB_00446d5f
    XOR EAX,EAX                         ; 0044703f
        ;   Label: LAB_0044703f
    MOV EDX,dword ptr [0x0084a860]      ; 00447041 | g_CramRectangleCount
    MOV dword ptr [ESP + 0x38],EAX      ; 00447047
    IMUL EAX,EDX,0x28                   ; 0044704b
    ADD EAX,0x840c14                    ; 0044704e | g_CramRectangles
    MOV dword ptr [ESP + 0x5c],EAX      ; 00447053
    CMP dword ptr [ESP + 0x38],0x0      ; 00447057
        ;   Label: LAB_00447057
    JZ 0x004470c7                       ; 0044705c
        ;   XREF to: 004470c7 (CONDITIONAL_JUMP)  ; LAB_004470c7
    MOV EAX,[0x0084a86c]                ; 00447062 | g_CramMinPlacementY
    MOV ESI,dword ptr [0x0084a868]      ; 00447067 | g_CramMinPlacementX
    ADD EAX,EBX                         ; 0044706d
        ;   Label: LAB_0044706d
    ADD ESI,ECX                         ; 0044706f
    MOV dword ptr [ESP + 0x84],EAX      ; 00447071
    MOV EDX,dword ptr [0x0084a85c]      ; 00447078 | g_CramPlacedTextureCount
    DEC EDX                             ; 0044707e
    TEST EDX,EDX                        ; 0044707f
    JL 0x004470af                       ; 00447081
        ;   XREF to: 004470af (CONDITIONAL_JUMP)  ; LAB_004470af
    IMUL EAX,EDX,0x4c                   ; 00447083
    ADD EAX,0x83c1dc                    ; 00447086 | g_CramSortedTextureEntries
    MOV EDI,dword ptr [EAX + 0x10]      ; 0044708b | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_0044708b
    CMP EDI,dword ptr [ESP + 0x34]      ; 0044708e
    JNZ 0x004470d4                      ; 00447092
        ;   XREF to: 004470d4 (CONDITIONAL_JUMP)  ; LAB_004470d4
    CMP EBX,dword ptr [EAX + 0x24]      ; 00447094 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x004470d4                      ; 00447097
        ;   XREF to: 004470d4 (CONDITIONAL_JUMP)  ; LAB_004470d4
    CMP ECX,dword ptr [EAX + 0x28]      ; 00447099 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x004470d4                      ; 0044709c
        ;   XREF to: 004470d4 (CONDITIONAL_JUMP)  ; LAB_004470d4
    MOV EDI,dword ptr [ESP + 0x84]      ; 0044709e
    CMP EDI,dword ptr [EAX + 0x1c]      ; 004470a5 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x004470d4                      ; 004470a8
        ;   XREF to: 004470d4 (CONDITIONAL_JUMP)  ; LAB_004470d4
    CMP ESI,dword ptr [EAX + 0x20]      ; 004470aa | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x004470d4                      ; 004470ad
        ;   XREF to: 004470d4 (CONDITIONAL_JUMP)  ; LAB_004470d4
    TEST EDX,EDX                        ; 004470af
        ;   Label: LAB_004470af
    JL 0x004470de                       ; 004470b1
        ;   XREF to: 004470de (CONDITIONAL_JUMP)  ; LAB_004470de
    MOV ESI,dword ptr [ESP + 0x38]      ; 004470b3
        ;   Label: LAB_004470b3
    INC ESI                             ; 004470b7
    MOV dword ptr [ESP + 0x38],ESI      ; 004470b8
    CMP ESI,0x1                         ; 004470bc
    JG 0x00446d87                       ; 004470bf
        ;   XREF to: 00446d87 (CONDITIONAL_JUMP)  ; LAB_00446d87
    JMP 0x00447057                      ; 004470c5
        ;   XREF to: 00447057 (UNCONDITIONAL_JUMP)  ; LAB_00447057
    MOV EAX,[0x0084a868]                ; 004470c7 | g_CramMinPlacementX
        ;   Label: LAB_004470c7
    MOV ESI,dword ptr [0x0084a86c]      ; 004470cc | g_CramMinPlacementY
    JMP 0x0044706d                      ; 004470d2
        ;   XREF to: 0044706d (UNCONDITIONAL_JUMP)  ; LAB_0044706d
    DEC EDX                             ; 004470d4
        ;   Label: LAB_004470d4
    SUB EAX,0x4c                        ; 004470d5
    TEST EDX,EDX                        ; 004470d8
    JGE 0x0044708b                      ; 004470da
        ;   XREF to: 0044708b (CONDITIONAL_JUMP)  ; LAB_0044708b
    JMP 0x004470af                      ; 004470dc
        ;   XREF to: 004470af (UNCONDITIONAL_JUMP)  ; LAB_004470af
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004470de
        ;   Label: LAB_004470de
    MOV dword ptr [EDX + 0x18],0x0      ; 004470e2 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x34]      ; 004470e9
    MOV dword ptr [EDX + 0x24],0x1      ; 004470ed | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 004470f4 | g_CramRectangles
    MOV dword ptr [EDX + 0x4],EBX       ; 004470f6 | DAT_00840c18
    MOV dword ptr [EDX + 0x8],ECX       ; 004470f9 | DAT_00840c1c
    MOV EAX,dword ptr [ESP + 0x84]      ; 004470fc
    MOV dword ptr [EDX + 0xc],EAX       ; 00447103 | DAT_00840c20
    MOV EAX,dword ptr [ESP + 0x38]      ; 00447106
    MOV dword ptr [EDX + 0x14],EAX      ; 0044710a | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 0044710d
    MOV dword ptr [EDX + 0x10],ESI      ; 00447110 | DAT_00840c24
    MOV EDX,dword ptr [0x0084a860]      ; 00447113 | g_CramRectangleCount
    INC EDX                             ; 00447119
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044711a
    MOV dword ptr [0x0084a860],EDX      ; 0044711e | g_CramRectangleCount
    JMP 0x004470b3                      ; 00447124
        ;   XREF to: 004470b3 (UNCONDITIONAL_JUMP)  ; LAB_004470b3
    ADD EAX,0x28                        ; 00447126
        ;   Label: LAB_00447126
    CMP EAX,EDX                         ; 00447129
    JL 0x00446dd0                       ; 0044712b
        ;   XREF to: 00446dd0 (CONDITIONAL_JUMP)  ; LAB_00446dd0
    IMUL EAX,dword ptr [0x0084a860],0x28 ; 00447131 | g_CramRectangleCount
        ;   Label: LAB_00447131
    XOR EDX,EDX                         ; 00447138
    ADD EAX,0x840c14                    ; 0044713a | g_CramRectangles
    MOV dword ptr [ESP + 0x40],EDX      ; 0044713f
    MOV dword ptr [ESP + 0x64],EAX      ; 00447143
    CMP dword ptr [ESP + 0x40],0x0      ; 00447147
        ;   Label: LAB_00447147
    JZ 0x004471b7                       ; 0044714c
        ;   XREF to: 004471b7 (CONDITIONAL_JUMP)  ; LAB_004471b7
    MOV EAX,[0x0084a868]                ; 00447152 | g_CramMinPlacementX
    MOV ESI,dword ptr [0x0084a86c]      ; 00447157 | g_CramMinPlacementY
    ADD EAX,EBX                         ; 0044715d
        ;   Label: LAB_0044715d
    ADD ESI,ECX                         ; 0044715f
    MOV dword ptr [ESP + 0x88],EAX      ; 00447161
    MOV EDX,dword ptr [0x0084a85c]      ; 00447168 | g_CramPlacedTextureCount
    DEC EDX                             ; 0044716e
    TEST EDX,EDX                        ; 0044716f
    JL 0x0044719f                       ; 00447171
        ;   XREF to: 0044719f (CONDITIONAL_JUMP)  ; LAB_0044719f
    IMUL EAX,EDX,0x4c                   ; 00447173
    ADD EAX,0x83c1dc                    ; 00447176 | g_CramSortedTextureEntries
    MOV EDI,dword ptr [EAX + 0x10]      ; 0044717b | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_0044717b
    CMP EDI,dword ptr [ESP + 0x3c]      ; 0044717e
    JNZ 0x004471c4                      ; 00447182
        ;   XREF to: 004471c4 (CONDITIONAL_JUMP)  ; LAB_004471c4
    CMP ECX,dword ptr [EAX + 0x24]      ; 00447184 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x004471c4                      ; 00447187
        ;   XREF to: 004471c4 (CONDITIONAL_JUMP)  ; LAB_004471c4
    CMP EBX,dword ptr [EAX + 0x28]      ; 00447189 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x004471c4                      ; 0044718c
        ;   XREF to: 004471c4 (CONDITIONAL_JUMP)  ; LAB_004471c4
    CMP ESI,dword ptr [EAX + 0x1c]      ; 0044718e | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x004471c4                      ; 00447191
        ;   XREF to: 004471c4 (CONDITIONAL_JUMP)  ; LAB_004471c4
    MOV EDI,dword ptr [ESP + 0x88]      ; 00447193
    CMP EDI,dword ptr [EAX + 0x20]      ; 0044719a | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x004471c4                      ; 0044719d
        ;   XREF to: 004471c4 (CONDITIONAL_JUMP)  ; LAB_004471c4
    TEST EDX,EDX                        ; 0044719f
        ;   Label: LAB_0044719f
    JL 0x004471ce                       ; 004471a1
        ;   XREF to: 004471ce (CONDITIONAL_JUMP)  ; LAB_004471ce
    MOV ESI,dword ptr [ESP + 0x40]      ; 004471a3
        ;   Label: LAB_004471a3
    INC ESI                             ; 004471a7
    MOV dword ptr [ESP + 0x40],ESI      ; 004471a8
    CMP ESI,0x1                         ; 004471ac
    JG 0x00446df8                       ; 004471af
        ;   XREF to: 00446df8 (CONDITIONAL_JUMP)  ; LAB_00446df8
    JMP 0x00447147                      ; 004471b5
        ;   XREF to: 00447147 (UNCONDITIONAL_JUMP)  ; LAB_00447147
    MOV EAX,[0x0084a86c]                ; 004471b7 | g_CramMinPlacementY
        ;   Label: LAB_004471b7
    MOV ESI,dword ptr [0x0084a868]      ; 004471bc | g_CramMinPlacementX
    JMP 0x0044715d                      ; 004471c2
        ;   XREF to: 0044715d (UNCONDITIONAL_JUMP)  ; LAB_0044715d
    DEC EDX                             ; 004471c4
        ;   Label: LAB_004471c4
    SUB EAX,0x4c                        ; 004471c5
    TEST EDX,EDX                        ; 004471c8
    JGE 0x0044717b                      ; 004471ca
        ;   XREF to: 0044717b (CONDITIONAL_JUMP)  ; LAB_0044717b
    JMP 0x0044719f                      ; 004471cc
        ;   XREF to: 0044719f (UNCONDITIONAL_JUMP)  ; LAB_0044719f
    MOV EDX,dword ptr [ESP + 0x64]      ; 004471ce
        ;   Label: LAB_004471ce
    MOV dword ptr [EDX + 0x18],0x0      ; 004471d2 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004471d9
    MOV dword ptr [EDX + 0x24],0x1      ; 004471dd | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 004471e4 | g_CramRectangles
    MOV dword ptr [EDX + 0x4],ECX       ; 004471e6 | DAT_00840c18
    MOV dword ptr [EDX + 0x8],EBX       ; 004471e9 | DAT_00840c1c
    MOV EAX,dword ptr [ESP + 0x88]      ; 004471ec
    MOV dword ptr [EDX + 0x10],EAX      ; 004471f3 | DAT_00840c24
    MOV EAX,dword ptr [ESP + 0x40]      ; 004471f6
    MOV dword ptr [EDX + 0x14],EAX      ; 004471fa | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 004471fd
    MOV dword ptr [EDX + 0xc],ESI       ; 00447200 | DAT_00840c20
    MOV EDX,dword ptr [0x0084a860]      ; 00447203 | g_CramRectangleCount
    INC EDX                             ; 00447209
    MOV dword ptr [ESP + 0x64],EAX      ; 0044720a
    MOV dword ptr [0x0084a860],EDX      ; 0044720e | g_CramRectangleCount
    JMP 0x004471a3                      ; 00447214
        ;   XREF to: 004471a3 (UNCONDITIONAL_JUMP)  ; LAB_004471a3
    ADD EAX,0x28                        ; 00447216
        ;   Label: LAB_00447216
    CMP EAX,EDX                         ; 00447219
    JL 0x00446efd                       ; 0044721b
        ;   XREF to: 00446efd (CONDITIONAL_JUMP)  ; LAB_00446efd
    XOR EAX,EAX                         ; 00447221
        ;   Label: LAB_00447221
    MOV EDX,dword ptr [0x0084a860]      ; 00447223 | g_CramRectangleCount
    MOV dword ptr [ESP + 0x4c],EAX      ; 00447229
    IMUL EAX,EDX,0x28                   ; 0044722d
    ADD EAX,0x840c14                    ; 00447230 | g_CramRectangles
    MOV dword ptr [ESP + 0x68],EAX      ; 00447235
    CMP dword ptr [ESP + 0x4c],0x0      ; 00447239
        ;   Label: LAB_00447239
    JZ 0x004472a9                       ; 0044723e
        ;   XREF to: 004472a9 (CONDITIONAL_JUMP)  ; LAB_004472a9
    MOV EAX,[0x0084a86c]                ; 00447244 | g_CramMinPlacementY
    MOV ESI,dword ptr [0x0084a868]      ; 00447249 | g_CramMinPlacementX
    ADD EAX,EBX                         ; 0044724f
        ;   Label: LAB_0044724f
    ADD ESI,ECX                         ; 00447251
    MOV dword ptr [ESP + 0x90],EAX      ; 00447253
    MOV EDX,dword ptr [0x0084a85c]      ; 0044725a | g_CramPlacedTextureCount
    DEC EDX                             ; 00447260
    TEST EDX,EDX                        ; 00447261
    JL 0x00447291                       ; 00447263
        ;   XREF to: 00447291 (CONDITIONAL_JUMP)  ; LAB_00447291
    IMUL EAX,EDX,0x4c                   ; 00447265
    ADD EAX,0x83c1dc                    ; 00447268 | g_CramSortedTextureEntries
    MOV EDI,dword ptr [EAX + 0x10]      ; 0044726d | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_0044726d
    CMP EDI,dword ptr [ESP + 0x48]      ; 00447270
    JNZ 0x004472b6                      ; 00447274
        ;   XREF to: 004472b6 (CONDITIONAL_JUMP)  ; LAB_004472b6
    CMP EBX,dword ptr [EAX + 0x24]      ; 00447276 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x004472b6                      ; 00447279
        ;   XREF to: 004472b6 (CONDITIONAL_JUMP)  ; LAB_004472b6
    CMP ECX,dword ptr [EAX + 0x28]      ; 0044727b | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x004472b6                      ; 0044727e
        ;   XREF to: 004472b6 (CONDITIONAL_JUMP)  ; LAB_004472b6
    MOV EDI,dword ptr [ESP + 0x90]      ; 00447280
    CMP EDI,dword ptr [EAX + 0x1c]      ; 00447287 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x004472b6                      ; 0044728a
        ;   XREF to: 004472b6 (CONDITIONAL_JUMP)  ; LAB_004472b6
    CMP ESI,dword ptr [EAX + 0x20]      ; 0044728c | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x004472b6                      ; 0044728f
        ;   XREF to: 004472b6 (CONDITIONAL_JUMP)  ; LAB_004472b6
    TEST EDX,EDX                        ; 00447291
        ;   Label: LAB_00447291
    JL 0x004472c0                       ; 00447293
        ;   XREF to: 004472c0 (CONDITIONAL_JUMP)  ; LAB_004472c0
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00447295
        ;   Label: LAB_00447295
    INC ESI                             ; 00447299
    MOV dword ptr [ESP + 0x4c],ESI      ; 0044729a
    CMP ESI,0x1                         ; 0044729e
    JG 0x00446f25                       ; 004472a1
        ;   XREF to: 00446f25 (CONDITIONAL_JUMP)  ; LAB_00446f25
    JMP 0x00447239                      ; 004472a7
        ;   XREF to: 00447239 (UNCONDITIONAL_JUMP)  ; LAB_00447239
    MOV EAX,[0x0084a868]                ; 004472a9 | g_CramMinPlacementX
        ;   Label: LAB_004472a9
    MOV ESI,dword ptr [0x0084a86c]      ; 004472ae | g_CramMinPlacementY
    JMP 0x0044724f                      ; 004472b4
        ;   XREF to: 0044724f (UNCONDITIONAL_JUMP)  ; LAB_0044724f
    DEC EDX                             ; 004472b6
        ;   Label: LAB_004472b6
    SUB EAX,0x4c                        ; 004472b7
    TEST EDX,EDX                        ; 004472ba
    JGE 0x0044726d                      ; 004472bc
        ;   XREF to: 0044726d (CONDITIONAL_JUMP)  ; LAB_0044726d
    JMP 0x00447291                      ; 004472be
        ;   XREF to: 00447291 (UNCONDITIONAL_JUMP)  ; LAB_00447291
    MOV EDX,dword ptr [ESP + 0x68]      ; 004472c0
        ;   Label: LAB_004472c0
    MOV dword ptr [EDX + 0x18],0x0      ; 004472c4 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x48]      ; 004472cb
    MOV dword ptr [EDX + 0x24],0x1      ; 004472cf | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 004472d6 | g_CramRectangles
    MOV dword ptr [EDX + 0x4],EBX       ; 004472d8 | DAT_00840c18
    MOV dword ptr [EDX + 0x8],ECX       ; 004472db | DAT_00840c1c
    MOV EAX,dword ptr [ESP + 0x90]      ; 004472de
    MOV dword ptr [EDX + 0xc],EAX       ; 004472e5 | DAT_00840c20
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004472e8
    MOV dword ptr [EDX + 0x14],EAX      ; 004472ec | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 004472ef
    MOV dword ptr [EDX + 0x10],ESI      ; 004472f2 | DAT_00840c24
    MOV EDX,dword ptr [0x0084a860]      ; 004472f5 | g_CramRectangleCount
    INC EDX                             ; 004472fb
    MOV dword ptr [ESP + 0x68],EAX      ; 004472fc
    MOV dword ptr [0x0084a860],EDX      ; 00447300 | g_CramRectangleCount
    JMP 0x00447295                      ; 00447306
        ;   XREF to: 00447295 (UNCONDITIONAL_JUMP)  ; LAB_00447295
    ADD EAX,0x28                        ; 00447308
        ;   Label: LAB_00447308
    CMP EAX,EDX                         ; 0044730b
    JL 0x00446f6e                       ; 0044730d
        ;   XREF to: 00446f6e (CONDITIONAL_JUMP)  ; LAB_00446f6e
    IMUL EAX,dword ptr [0x0084a860],0x28 ; 00447313 | g_CramRectangleCount
        ;   Label: LAB_00447313
    XOR EDX,EDX                         ; 0044731a
    ADD EAX,0x840c14                    ; 0044731c | g_CramRectangles
    MOV dword ptr [ESP + 0x54],EDX      ; 00447321
    MOV dword ptr [ESP + 0x70],EAX      ; 00447325
    CMP dword ptr [ESP + 0x54],0x0      ; 00447329
        ;   Label: LAB_00447329
    JZ 0x00447399                       ; 0044732e
        ;   XREF to: 00447399 (CONDITIONAL_JUMP)  ; LAB_00447399
    MOV EAX,[0x0084a868]                ; 00447334 | g_CramMinPlacementX
    MOV ESI,dword ptr [0x0084a86c]      ; 00447339 | g_CramMinPlacementY
    ADD EAX,EBX                         ; 0044733f
        ;   Label: LAB_0044733f
    ADD ESI,ECX                         ; 00447341
    MOV dword ptr [ESP + 0x94],EAX      ; 00447343
    MOV EDX,dword ptr [0x0084a85c]      ; 0044734a | g_CramPlacedTextureCount
    DEC EDX                             ; 00447350
    TEST EDX,EDX                        ; 00447351
    JL 0x00447381                       ; 00447353
        ;   XREF to: 00447381 (CONDITIONAL_JUMP)  ; LAB_00447381
    IMUL EAX,EDX,0x4c                   ; 00447355
    ADD EAX,0x83c1dc                    ; 00447358 | g_CramSortedTextureEntries
    MOV EDI,dword ptr [EAX + 0x10]      ; 0044735d | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_0044735d
    CMP EDI,dword ptr [ESP + 0x50]      ; 00447360
    JNZ 0x004473a6                      ; 00447364
        ;   XREF to: 004473a6 (CONDITIONAL_JUMP)  ; LAB_004473a6
    CMP ECX,dword ptr [EAX + 0x24]      ; 00447366 | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x004473a6                      ; 00447369
        ;   XREF to: 004473a6 (CONDITIONAL_JUMP)  ; LAB_004473a6
    CMP EBX,dword ptr [EAX + 0x28]      ; 0044736b | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x004473a6                      ; 0044736e
        ;   XREF to: 004473a6 (CONDITIONAL_JUMP)  ; LAB_004473a6
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00447370 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x004473a6                      ; 00447373
        ;   XREF to: 004473a6 (CONDITIONAL_JUMP)  ; LAB_004473a6
    MOV EDI,dword ptr [ESP + 0x94]      ; 00447375
    CMP EDI,dword ptr [EAX + 0x20]      ; 0044737c | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x004473a6                      ; 0044737f
        ;   XREF to: 004473a6 (CONDITIONAL_JUMP)  ; LAB_004473a6
    TEST EDX,EDX                        ; 00447381
        ;   Label: LAB_00447381
    JL 0x004473b0                       ; 00447383
        ;   XREF to: 004473b0 (CONDITIONAL_JUMP)  ; LAB_004473b0
    MOV ESI,dword ptr [ESP + 0x54]      ; 00447385
        ;   Label: LAB_00447385
    INC ESI                             ; 00447389
    MOV dword ptr [ESP + 0x54],ESI      ; 0044738a
    CMP ESI,0x1                         ; 0044738e
    JG 0x00446f96                       ; 00447391
        ;   XREF to: 00446f96 (CONDITIONAL_JUMP)  ; LAB_00446f96
    JMP 0x00447329                      ; 00447397
        ;   XREF to: 00447329 (UNCONDITIONAL_JUMP)  ; LAB_00447329
    MOV EAX,[0x0084a86c]                ; 00447399 | g_CramMinPlacementY
        ;   Label: LAB_00447399
    MOV ESI,dword ptr [0x0084a868]      ; 0044739e | g_CramMinPlacementX
    JMP 0x0044733f                      ; 004473a4
        ;   XREF to: 0044733f (UNCONDITIONAL_JUMP)  ; LAB_0044733f
    DEC EDX                             ; 004473a6
        ;   Label: LAB_004473a6
    SUB EAX,0x4c                        ; 004473a7
    TEST EDX,EDX                        ; 004473aa
    JGE 0x0044735d                      ; 004473ac
        ;   XREF to: 0044735d (CONDITIONAL_JUMP)  ; LAB_0044735d
    JMP 0x00447381                      ; 004473ae
        ;   XREF to: 00447381 (UNCONDITIONAL_JUMP)  ; LAB_00447381
    MOV EDX,dword ptr [ESP + 0x70]      ; 004473b0
        ;   Label: LAB_004473b0
    MOV dword ptr [EDX + 0x18],0x0      ; 004473b4 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x50]      ; 004473bb
    MOV dword ptr [EDX + 0x24],0x1      ; 004473bf | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 004473c6 | g_CramRectangles
    MOV dword ptr [EDX + 0x4],ECX       ; 004473c8 | DAT_00840c18
    MOV dword ptr [EDX + 0x8],EBX       ; 004473cb | DAT_00840c1c
    MOV EAX,dword ptr [ESP + 0x94]      ; 004473ce
    MOV dword ptr [EDX + 0x10],EAX      ; 004473d5 | DAT_00840c24
    MOV EAX,dword ptr [ESP + 0x54]      ; 004473d8
    MOV dword ptr [EDX + 0x14],EAX      ; 004473dc | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 004473df
    MOV dword ptr [EDX + 0xc],ESI       ; 004473e2 | DAT_00840c20
    MOV EDX,dword ptr [0x0084a860]      ; 004473e5 | g_CramRectangleCount
    INC EDX                             ; 004473eb
    MOV dword ptr [ESP + 0x70],EAX      ; 004473ec
    MOV dword ptr [0x0084a860],EDX      ; 004473f0 | g_CramRectangleCount
    JMP 0x00447385                      ; 004473f6
        ;   XREF to: 00447385 (UNCONDITIONAL_JUMP)  ; LAB_00447385
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 004473f8
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
        ;   Label: LAB_004473f8
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004473fd
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDI,dword ptr [0x0084a8a8]      ; 00447402 | g_CramStartTime
    MOV EDX,EAX                         ; 00447408
    SUB EAX,EDI                         ; 0044740a
    MOV dword ptr [ESP + 0x98],EAX      ; 0044740c
    FILD dword ptr [ESP + 0x98]         ; 00447413
    FMUL double ptr [0x00619a22]        ; 0044741a | g_CramTimeTicksToSecondsMultiplier
    FST float ptr [ESP]                 ; 00447420
    FLDZ                                ; 00447423
    FCOMPP                              ; 00447425
    FNSTSW AX                           ; 00447427
    SAHF                                ; 00447429
    JC 0x00447468                       ; 0044742a
        ;   XREF to: 00447468 (CONDITIONAL_JUMP)  ; LAB_00447468
    MOV dword ptr [0x0084a8a8],EDX      ; 0044742c | g_CramStartTime
        ;   Label: LAB_0044742c
    XOR ESI,ESI                         ; 00447432
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 00447434
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_00447434
    TEST EAX,EAX                        ; 00447439
    JNZ 0x00447479                      ; 0044743b
        ;   XREF to: 00447479 (CONDITIONAL_JUMP)  ; LAB_00447479
    CMP dword ptr [0x0084a8a4],0x0      ; 0044743d | g_CramMaxIterationsLimit
    JLE 0x0044745b                      ; 00447444
        ;   XREF to: 0044745b (CONDITIONAL_JUMP)  ; LAB_0044745b
    FILD dword ptr [0x0084a8a4]         ; 00447446 | g_CramMaxIterationsLimit
    FCOMP float ptr [0x0084a8ac]        ; 0044744c | g_CramIterationCount
    FNSTSW AX                           ; 00447452
    SAHF                                ; 00447454
    JC 0x00447500                       ; 00447455
        ;   XREF to: 00447500 (CONDITIONAL_JUMP)  ; LAB_00447500
    XOR EDX,EDX                         ; 0044745b
        ;   Label: LAB_0044745b
    MOV dword ptr [0x0083c1d8],EDX      ; 0044745d | g_CramVisualizationUpdateCounter
    JMP 0x00447014                      ; 00447463
        ;   XREF to: 00447014 (UNCONDITIONAL_JUMP)  ; LAB_00447014
    FLD float ptr [0x0084a8ac]          ; 00447468 | g_CramIterationCount
        ;   Label: LAB_00447468
    FADD float ptr [ESP]                ; 0044746e
    FSTP float ptr [0x0084a8ac]         ; 00447471 | g_CramIterationCount
    JMP 0x0044742c                      ; 00447477
        ;   XREF to: 0044742c (UNCONDITIONAL_JUMP)  ; LAB_0044742c
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00447479
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   Label: LAB_00447479
    AND EAX,0xff                        ; 0044747e
    CMP EAX,0x1b                        ; 00447483
    JZ 0x00447500                       ; 00447486
        ;   XREF to: 00447500 (CONDITIONAL_JUMP)  ; LAB_00447500
    CMP EAX,0x2e                        ; 00447488
    JNZ 0x00447527                      ; 0044748b
        ;   XREF to: 00447527 (CONDITIONAL_JUMP)  ; LAB_00447527
    INC dword ptr [0x0084a890]          ; 00447491 | g_CramMapNumber
        ;   Label: LAB_00447491
    CMP EAX,0x2c                        ; 00447497
        ;   Label: LAB_00447497
    JNZ 0x00447547                      ; 0044749a
        ;   XREF to: 00447547 (CONDITIONAL_JUMP)  ; LAB_00447547
    MOV EDX,dword ptr [0x0084a858]      ; 004474a0 | g_CramTotalMaps
        ;   Label: LAB_004474a0
    MOV ECX,dword ptr [0x0084a890]      ; 004474a6 | g_CramMapNumber
    DEC EDX                             ; 004474ac
    ADD ECX,EDX                         ; 004474ad
    MOV dword ptr [0x0084a890],ECX      ; 004474af | g_CramMapNumber
    CMP EAX,0x73                        ; 004474b5
        ;   Label: LAB_004474b5
    JNZ 0x00447567                      ; 004474b8
        ;   XREF to: 00447567 (CONDITIONAL_JUMP)  ; LAB_00447567
    CMP ESI,dword ptr [0x0084a89c]      ; 004474be | g_CramDebugStepMode
        ;   Label: LAB_004474be
    SETZ DL                             ; 004474c4
    AND EDX,0xff                        ; 004474c7
    MOV dword ptr [0x0084a89c],EDX      ; 004474cd | g_CramDebugStepMode
    CMP EAX,0x74                        ; 004474d3
        ;   Label: LAB_004474d3
    JNZ 0x00447575                      ; 004474d6
        ;   XREF to: 00447575 (CONDITIONAL_JUMP)  ; LAB_00447575
    CMP ESI,dword ptr [0x0084a8a0]      ; 004474dc | g_CramVisualizationMode
        ;   Label: LAB_004474dc
    SETZ AL                             ; 004474e2
    AND EAX,0xff                        ; 004474e5
    MOV [0x0084a8a0],EAX                ; 004474ea | g_CramVisualizationMode
    PUSH ESI                            ; 004474ef
    PUSH ESI                            ; 004474f0
    PUSH 0x1                            ; 004474f1
    CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 ; 004474f3
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)
    ADD ESP,0xc                         ; 004474f8
    JMP 0x00447434                      ; 004474fb
        ;   XREF to: 00447434 (UNCONDITIONAL_JUMP)  ; LAB_00447434
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00447500
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00447500
    MOV EAX,dword ptr [ESP + 0x10]      ; 00447505
    MOV ECX,dword ptr [0x0084a85c]      ; 00447509 | g_CramPlacedTextureCount
    MOV [0x00887940],EAX                ; 0044750f | g_CramAlgorithmState
    DEC ECX                             ; 00447514
    MOV EAX,0xf423f                     ; 00447515
    MOV dword ptr [0x0084a85c],ECX      ; 0044751a | g_CramPlacedTextureCount
    MOV ESP,EBP                         ; 00447520
    POP EBP                             ; 00447522
    POP EDI                             ; 00447523
    POP ESI                             ; 00447524
    POP EBX                             ; 00447525
    RET                                 ; 00447526
    CMP EAX,0x3e                        ; 00447527
        ;   Label: LAB_00447527
    JZ 0x00447491                       ; 0044752a
        ;   XREF to: 00447491 (CONDITIONAL_JUMP)  ; LAB_00447491
    CMP EAX,0x6e                        ; 00447530
    JZ 0x00447491                       ; 00447533
        ;   XREF to: 00447491 (CONDITIONAL_JUMP)  ; LAB_00447491
    CMP EAX,0x4e                        ; 00447539
    JZ 0x00447491                       ; 0044753c
        ;   XREF to: 00447491 (CONDITIONAL_JUMP)  ; LAB_00447491
    JMP 0x00447497                      ; 00447542
        ;   XREF to: 00447497 (UNCONDITIONAL_JUMP)  ; LAB_00447497
    CMP EAX,0x3c                        ; 00447547
        ;   Label: LAB_00447547
    JZ 0x004474a0                       ; 0044754a
        ;   XREF to: 004474a0 (CONDITIONAL_JUMP)  ; LAB_004474a0
    CMP EAX,0x70                        ; 00447550
    JZ 0x004474a0                       ; 00447553
        ;   XREF to: 004474a0 (CONDITIONAL_JUMP)  ; LAB_004474a0
    CMP EAX,0x50                        ; 00447559
    JZ 0x004474a0                       ; 0044755c
        ;   XREF to: 004474a0 (CONDITIONAL_JUMP)  ; LAB_004474a0
    JMP 0x004474b5                      ; 00447562
        ;   XREF to: 004474b5 (UNCONDITIONAL_JUMP)  ; LAB_004474b5
    CMP EAX,0x53                        ; 00447567
        ;   Label: LAB_00447567
    JZ 0x004474be                       ; 0044756a
        ;   XREF to: 004474be (CONDITIONAL_JUMP)  ; LAB_004474be
    JMP 0x004474d3                      ; 00447570
        ;   XREF to: 004474d3 (UNCONDITIONAL_JUMP)  ; LAB_004474d3
    CMP EAX,0x54                        ; 00447575
        ;   Label: LAB_00447575
    JZ 0x004474dc                       ; 00447578
        ;   XREF to: 004474dc (CONDITIONAL_JUMP)  ; LAB_004474dc
    PUSH ESI                            ; 0044757e
    PUSH ESI                            ; 0044757f
    PUSH 0x1                            ; 00447580
    CALL shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 ; 00447582
        ;   XREF to: 00447f20 (UNCONDITIONAL_CALL)  ; void shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20(int visualization_mode, int completion_mode, int display_mode)
    ADD ESP,0xc                         ; 00447587
    JMP 0x00447434                      ; 0044758a
        ;   XREF to: 00447434 (UNCONDITIONAL_JUMP)  ; LAB_00447434

