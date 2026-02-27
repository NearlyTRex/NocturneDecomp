; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_engine_palette_cpp_0063e4c8
;   TerminatedCString s_engine_palette_cpp_0063e4de
;   TerminatedCString s_paletteManager_createOut_0063e4f4
;   TerminatedCString s_engine_palette_cpp_0063e532
;   TerminatedCString s_engine_palette_cpp_0063e548
;   TerminatedCString s_paletteManager_createOut_0063e55e
;   TerminatedCString s_ACT_0063e597
;   undefined4 s_ACT_0063e598
;   undefined4 s_CT_0063e599
;   undefined4 s_T_0063e59a
;   TerminatedCString s_rb_0063e59c
;   TerminatedCString s_art_0063e59f
;   TerminatedCString s_rb_0063e5a3
;   char s_EmptyChar_0063e5a6 = \x00
;   TerminatedCString s_engine_palette_cpp_0063e5a7
;   ... and 32 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fwrite_FUN_005fdc00
;   engine_colquant.c_quantizeColors_FUN_004406c0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545180
        ;   Label: engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180
    PUSH EBP                            ; 00545181
    SUB ESP,0x64                        ; 00545182
    PUSH 0xb4                           ; 00545185
    PUSH 0x63e4c8                       ; 0054518a | = "..\\engine\\palette.cpp"
    PUSH 0x8308                         ; 0054518f
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00545194
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00545199
    XOR EBP,EBP                         ; 0054519c
    MOV dword ptr [ESP + 0x54],EAX      ; 0054519e
    TEST EAX,EAX                        ; 005451a2
    JNZ 0x005451c9                      ; 005451a4
        ;   XREF to: 005451c9 (CONDITIONAL_JUMP)  ; LAB_005451c9
    MOV EDX,0x63e4de                    ; 005451a6 | = "..\\engine\\palette.cpp"
    MOV ECX,0xb6                        ; 005451ab
    PUSH 0x63e4f4                       ; 005451b0 | = "paletteManager::createOutputPalette -..."
    MOV dword ptr [0x02f0ca48],EDX      ; 005451b5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005451bb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005451c1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005451c6
    PUSH 0xbb                           ; 005451c9
        ;   Label: LAB_005451c9
    PUSH 0x63e532                       ; 005451ce | = "..\\engine\\palette.cpp"
    MOV EAX,dword ptr [ESP + 0x78]      ; 005451d3
    PUSH 0x4                            ; 005451d7
    MOV EBX,dword ptr [EAX + 0x8]       ; 005451d9
    PUSH EBX                            ; 005451dc
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 005451dd
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 005451e2
    MOV dword ptr [ESP + 0x58],EAX      ; 005451e5
    TEST EAX,EAX                        ; 005451e9
    JZ 0x00545509                       ; 005451eb
        ;   XREF to: 00545509 (CONDITIONAL_JUMP)  ; LAB_00545509
    PUSH EDI                            ; 005451f1
    PUSH ESI                            ; 005451f2
    MOV EAX,dword ptr [ESP + 0x78]      ; 005451f3
    XOR ESI,ESI                         ; 005451f7
    MOV EDI,dword ptr [EAX]             ; 005451f9
    MOV dword ptr [ESP + 0x58],ESI      ; 005451fb
    TEST EDI,EDI                        ; 005451ff
    JLE 0x0054541e                      ; 00545201
        ;   XREF to: 0054541e (CONDITIONAL_JUMP)  ; LAB_0054541e
    MOV dword ptr [ESP + 0x64],ESI      ; 00545207
    MOV ESI,dword ptr [ESP + 0x78]      ; 0054520b
        ;   Label: LAB_0054520b
    MOV EDX,dword ptr [ESP + 0x64]      ; 0054520f
    MOV ESI,dword ptr [ESI + 0x4]       ; 00545213
    LEA EDI,[ESP + 0x8]                 ; 00545216
    ADD ESI,EDX                         ; 0054521a
    PUSH EDI                            ; 0054521c
    MOV AL,byte ptr [ESI]               ; 0054521d
        ;   Label: LAB_0054521d
    MOV byte ptr [EDI],AL               ; 0054521f
    CMP AL,0x0                          ; 00545221
    JZ 0x00545235                       ; 00545223
        ;   XREF to: 00545235 (CONDITIONAL_JUMP)  ; LAB_00545235
    MOV AL,byte ptr [ESI + 0x1]         ; 00545225
    ADD ESI,0x2                         ; 00545228
    MOV byte ptr [EDI + 0x1],AL         ; 0054522b
    ADD EDI,0x2                         ; 0054522e
    CMP AL,0x0                          ; 00545231
    JNZ 0x0054521d                      ; 00545233
        ;   XREF to: 0054521d (CONDITIONAL_JUMP)  ; LAB_0054521d
    POP EDI                             ; 00545235
        ;   Label: LAB_00545235
    MOV DL,0x2e                         ; 00545236
    LEA ESI,[ESP + 0x8]                 ; 00545238
    MOV AL,byte ptr [ESI]               ; 0054523c
        ;   Label: LAB_0054523c
    CMP AL,DL                           ; 0054523e
    JZ 0x00545254                       ; 00545240
        ;   XREF to: 00545254 (CONDITIONAL_JUMP)  ; LAB_00545254
    CMP AL,0x0                          ; 00545242
    JZ 0x00545252                       ; 00545244
        ;   XREF to: 00545252 (CONDITIONAL_JUMP)  ; LAB_00545252
    INC ESI                             ; 00545246
    MOV AL,byte ptr [ESI]               ; 00545247
    CMP AL,DL                           ; 00545249
    JZ 0x00545254                       ; 0054524b
        ;   XREF to: 00545254 (CONDITIONAL_JUMP)  ; LAB_00545254
    INC ESI                             ; 0054524d
    CMP AL,0x0                          ; 0054524e
    JNZ 0x0054523c                      ; 00545250
        ;   XREF to: 0054523c (CONDITIONAL_JUMP)  ; LAB_0054523c
    SUB ESI,ESI                         ; 00545252
        ;   Label: LAB_00545252
    MOV EDI,ESI                         ; 00545254
        ;   Label: LAB_00545254
    TEST ESI,ESI                        ; 00545256
    JNZ 0x0054527d                      ; 00545258
        ;   XREF to: 0054527d (CONDITIONAL_JUMP)  ; LAB_0054527d
    MOV ECX,0x63e548                    ; 0054525a | = "..\\engine\\palette.cpp"
    MOV EBX,0xcb                        ; 0054525f
    PUSH 0x63e55e                       ; 00545264 | = "paletteManager::createOutputPalette -..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00545269 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0054526f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00545275
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054527a
    MOV ESI,0x63e597                    ; 0054527d | = ".ACT"
        ;   Label: LAB_0054527d
    MOV DL,0x5c                         ; 00545282
    PUSH EDI                            ; 00545284
    MOV AL,byte ptr [ESI]               ; 00545285 | = ".ACT" | s_CT_0063e599
        ;   Label: LAB_00545285
    MOV byte ptr [EDI],AL               ; 00545287
    CMP AL,0x0                          ; 00545289
    JZ 0x0054529d                       ; 0054528b
        ;   XREF to: 0054529d (CONDITIONAL_JUMP)  ; LAB_0054529d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054528d | s_ACT_0063e598 | s_T_0063e59a
    ADD ESI,0x2                         ; 00545290
    MOV byte ptr [EDI + 0x1],AL         ; 00545293
    ADD EDI,0x2                         ; 00545296
    CMP AL,0x0                          ; 00545299
    JNZ 0x00545285                      ; 0054529b
        ;   XREF to: 00545285 (CONDITIONAL_JUMP)  ; LAB_00545285
    POP EDI                             ; 0054529d
        ;   Label: LAB_0054529d
    LEA ESI,[ESP + 0x8]                 ; 0054529e
    MOV AL,byte ptr [ESI]               ; 005452a2
        ;   Label: LAB_005452a2
    CMP AL,DL                           ; 005452a4
    JZ 0x005452ba                       ; 005452a6
        ;   XREF to: 005452ba (CONDITIONAL_JUMP)  ; LAB_005452ba
    CMP AL,0x0                          ; 005452a8
    JZ 0x005452b8                       ; 005452aa
        ;   XREF to: 005452b8 (CONDITIONAL_JUMP)  ; LAB_005452b8
    INC ESI                             ; 005452ac
    MOV AL,byte ptr [ESI]               ; 005452ad
    CMP AL,DL                           ; 005452af
    JZ 0x005452ba                       ; 005452b1
        ;   XREF to: 005452ba (CONDITIONAL_JUMP)  ; LAB_005452ba
    INC ESI                             ; 005452b3
    CMP AL,0x0                          ; 005452b4
    JNZ 0x005452a2                      ; 005452b6
        ;   XREF to: 005452a2 (CONDITIONAL_JUMP)  ; LAB_005452a2
    SUB ESI,ESI                         ; 005452b8
        ;   Label: LAB_005452b8
    TEST ESI,ESI                        ; 005452ba
        ;   Label: LAB_005452ba
    JNZ 0x0054550f                      ; 005452bc
        ;   XREF to: 0054550f (CONDITIONAL_JUMP)  ; LAB_0054550f
    PUSH 0x63e59c                       ; 005452c2 | = "rb"
    LEA EAX,[ESP + 0xc]                 ; 005452c7
    PUSH EAX                            ; 005452cb
    PUSH 0x63e59f                       ; 005452cc | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005452d1
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   Label: LAB_005452d1
    ADD ESP,0xc                         ; 005452d6
    MOV ESI,EAX                         ; 005452d9
    TEST ESI,ESI                        ; 005452db
    JZ 0x00545523                       ; 005452dd
        ;   XREF to: 00545523 (CONDITIONAL_JUMP)  ; LAB_00545523
    PUSH ESI                            ; 005452e3
    PUSH 0x1                            ; 005452e4
    PUSH 0x300                          ; 005452e6
    PUSH 0x2fd8d20                      ; 005452eb | g_PaletteData
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005452f0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005452f5
    PUSH 0xd9                           ; 005452f8
    PUSH 0x63e5a7                       ; 005452fd | = "..\\engine\\palette.cpp"
    PUSH ESI                            ; 00545302
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00545303
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00545308
    MOV ESI,dword ptr [ESP + 0x78]      ; 0054530b
        ;   Label: LAB_0054530b
    MOV EDI,dword ptr [ESP + 0x64]      ; 0054530f
    MOV ESI,dword ptr [ESI + 0x4]       ; 00545313
    MOV DL,0x5c                         ; 00545316
    ADD ESI,EDI                         ; 00545318
    MOV AL,byte ptr [ESI]               ; 0054531a
        ;   Label: LAB_0054531a
    CMP AL,DL                           ; 0054531c
    JZ 0x00545332                       ; 0054531e
        ;   XREF to: 00545332 (CONDITIONAL_JUMP)  ; LAB_00545332
    CMP AL,0x0                          ; 00545320
    JZ 0x00545330                       ; 00545322
        ;   XREF to: 00545330 (CONDITIONAL_JUMP)  ; LAB_00545330
    INC ESI                             ; 00545324
    MOV AL,byte ptr [ESI]               ; 00545325
    CMP AL,DL                           ; 00545327
    JZ 0x00545332                       ; 00545329
        ;   XREF to: 00545332 (CONDITIONAL_JUMP)  ; LAB_00545332
    INC ESI                             ; 0054532b
    CMP AL,0x0                          ; 0054532c
    JNZ 0x0054531a                      ; 0054532e
        ;   XREF to: 0054531a (CONDITIONAL_JUMP)  ; LAB_0054531a
    SUB ESI,ESI                         ; 00545330
        ;   Label: LAB_00545330
    TEST ESI,ESI                        ; 00545332
        ;   Label: LAB_00545332
    JNZ 0x00545547                      ; 00545334
        ;   XREF to: 00545547 (CONDITIONAL_JUMP)  ; LAB_00545547
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054533a
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054533e
    ADD EAX,EDI                         ; 00545341
    PUSH EAX                            ; 00545343
    PUSH 0x63e5bd                       ; 00545344 | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00545349
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   Label: LAB_00545349
    ADD ESP,0x8                         ; 0054534e
    MOV EDI,EAX                         ; 00545351
    MOV ESI,dword ptr [ESP + 0x78]      ; 00545353
    MOV EBX,dword ptr [ESP + 0x64]      ; 00545357
    MOV ESI,dword ptr [ESI + 0x4]       ; 0054535b
    MOV DL,0x5c                         ; 0054535e
    ADD ESI,EBX                         ; 00545360
    MOV AL,byte ptr [ESI]               ; 00545362
        ;   Label: LAB_00545362
    CMP AL,DL                           ; 00545364
    JZ 0x0054537a                       ; 00545366
        ;   XREF to: 0054537a (CONDITIONAL_JUMP)  ; LAB_0054537a
    CMP AL,0x0                          ; 00545368
    JZ 0x00545378                       ; 0054536a
        ;   XREF to: 00545378 (CONDITIONAL_JUMP)  ; LAB_00545378
    INC ESI                             ; 0054536c
    MOV AL,byte ptr [ESI]               ; 0054536d
    CMP AL,DL                           ; 0054536f
    JZ 0x0054537a                       ; 00545371
        ;   XREF to: 0054537a (CONDITIONAL_JUMP)  ; LAB_0054537a
    INC ESI                             ; 00545373
    CMP AL,0x0                          ; 00545374
    JNZ 0x00545362                      ; 00545376
        ;   XREF to: 00545362 (CONDITIONAL_JUMP)  ; LAB_00545362
    SUB ESI,ESI                         ; 00545378
        ;   Label: LAB_00545378
    TEST ESI,ESI                        ; 0054537a
        ;   Label: LAB_0054537a
    JNZ 0x0054555b                      ; 0054537c
        ;   XREF to: 0054555b (CONDITIONAL_JUMP)  ; LAB_0054555b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00545382
    MOV EAX,dword ptr [EAX + 0x4]       ; 00545386
    PUSH 0x63e5c2                       ; 00545389 | = "rb"
    ADD EAX,EBX                         ; 0054538e
    PUSH EAX                            ; 00545390
    PUSH 0x63e5c5                       ; 00545391 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00545396
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   Label: LAB_00545396
    ADD ESP,0xc                         ; 0054539b
    MOV ESI,EAX                         ; 0054539e
    TEST ESI,ESI                        ; 005453a0
    JZ 0x00545574                       ; 005453a2
        ;   XREF to: 00545574 (CONDITIONAL_JUMP)  ; LAB_00545574
    MOV EAX,dword ptr [ESP + 0x60]      ; 005453a8
        ;   Label: LAB_005453a8
    LEA EBX,[EBP*0x4 + 0x0]             ; 005453ac
    ADD EBX,EAX                         ; 005453b3
    TEST EDI,EDI                        ; 005453b5
        ;   Label: LAB_005453b5
    JLE 0x005453e9                      ; 005453b7
        ;   XREF to: 005453e9 (CONDITIONAL_JUMP)  ; LAB_005453e9
    MOV EDX,dword ptr [ESI + 0x4]       ; 005453b9
    TEST EDX,EDX                        ; 005453bc
    JLE 0x005453d7                      ; 005453be
        ;   XREF to: 005453d7 (CONDITIONAL_JUMP)  ; LAB_005453d7
    MOV EAX,dword ptr [ESI]             ; 005453c0
    MOV AL,byte ptr [EAX]               ; 005453c2
    AND EAX,0xff                        ; 005453c4
    SUB EAX,0xd                         ; 005453c9
    CMP EAX,0xfd                        ; 005453cc
    JA 0x0054559c                       ; 005453d1
        ;   XREF to: 0054559c (CONDITIONAL_JUMP)  ; LAB_0054559c
    PUSH ESI                            ; 005453d7
        ;   Label: LAB_005453d7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005453d8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005453dd
    CMP EAX,-0x1                        ; 005453e0
        ;   Label: LAB_005453e0
    JNZ 0x005455b5                      ; 005453e3
        ;   XREF to: 005455b5 (CONDITIONAL_JUMP)  ; LAB_005455b5
    PUSH 0x110                          ; 005453e9
        ;   Label: LAB_005453e9
    PUSH 0x63e66c                       ; 005453ee | = "..\\engine\\palette.cpp"
    PUSH ESI                            ; 005453f3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005453f4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005453f9
    MOV EAX,dword ptr [ESP + 0x64]      ; 005453fc
    MOV EDX,dword ptr [ESP + 0x58]      ; 00545400
    ADD EAX,0x40                        ; 00545404
    INC EDX                             ; 00545407
    MOV dword ptr [ESP + 0x64],EAX      ; 00545408
    MOV dword ptr [ESP + 0x58],EDX      ; 0054540c
    MOV EAX,EDX                         ; 00545410
    MOV EDX,dword ptr [ESP + 0x78]      ; 00545412
    CMP EAX,dword ptr [EDX]             ; 00545416
    JL 0x0054520b                       ; 00545418
        ;   XREF to: 0054520b (CONDITIONAL_JUMP)  ; LAB_0054520b
    MOV EBX,dword ptr [ESP + 0x80]      ; 0054541e
        ;   Label: LAB_0054541e
    PUSH EBX                            ; 00545425
    PUSH EBP                            ; 00545426
    MOV ESI,dword ptr [ESP + 0x68]      ; 00545427
    PUSH ESI                            ; 0054542b
    MOV EDI,dword ptr [ESP + 0x68]      ; 0054542c
    PUSH EDI                            ; 00545430
    CALL engine_colquant.c_quantizeColors_FUN_004406c0 ; 00545431
        ;   XREF to: 004406c0 (UNCONDITIONAL_CALL)  ; char * engine_colquant.c_quantizeColors_FUN_004406c0(SColorQuantWorkspace * workspace, char * color_data, int color_count, int num_palette_entries)
    ADD ESP,0x10                        ; 00545436
    MOV DL,0x5c                         ; 00545439
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0054543b
    MOV EDI,EAX                         ; 0054543f
    MOV AL,byte ptr [ESI]               ; 00545441
        ;   Label: LAB_00545441
    CMP AL,DL                           ; 00545443
    JZ 0x00545459                       ; 00545445
        ;   XREF to: 00545459 (CONDITIONAL_JUMP)  ; LAB_00545459
    CMP AL,0x0                          ; 00545447
    JZ 0x00545457                       ; 00545449
        ;   XREF to: 00545457 (CONDITIONAL_JUMP)  ; LAB_00545457
    INC ESI                             ; 0054544b
    MOV AL,byte ptr [ESI]               ; 0054544c
    CMP AL,DL                           ; 0054544e
    JZ 0x00545459                       ; 00545450
        ;   XREF to: 00545459 (CONDITIONAL_JUMP)  ; LAB_00545459
    INC ESI                             ; 00545452
    CMP AL,0x0                          ; 00545453
    JNZ 0x00545441                      ; 00545455
        ;   XREF to: 00545441 (CONDITIONAL_JUMP)  ; LAB_00545441
    SUB ESI,ESI                         ; 00545457
        ;   Label: LAB_00545457
    TEST ESI,ESI                        ; 00545459
        ;   Label: LAB_00545459
    JNZ 0x0054562d                      ; 0054545b
        ;   XREF to: 0054562d (CONDITIONAL_JUMP)  ; LAB_0054562d
    PUSH 0x63e682                       ; 00545461 | = "wb"
    MOV EAX,dword ptr [ESP + 0x80]      ; 00545466
    PUSH EAX                            ; 0054546d
    PUSH 0x63e685                       ; 0054546e | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00545473
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   Label: LAB_00545473
    ADD ESP,0xc                         ; 00545478
    MOV EBX,EAX                         ; 0054547b
    TEST EBX,EBX                        ; 0054547d
    JNZ 0x005454a4                      ; 0054547f
        ;   XREF to: 005454a4 (CONDITIONAL_JUMP)  ; LAB_005454a4
    MOV EDX,0x63e68d                    ; 00545481 | = "..\\engine\\palette.cpp"
    MOV ECX,0x122                       ; 00545486
    PUSH 0x63e6a3                       ; 0054548b | = "paletteManager::createOutputPalette -..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00545490 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00545496 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054549c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005454a1
    PUSH EBX                            ; 005454a4
        ;   Label: LAB_005454a4
    PUSH 0x1                            ; 005454a5
    PUSH 0x300                          ; 005454a7
    PUSH EDI                            ; 005454ac
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 005454ad
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005454b2
    PUSH 0x125                          ; 005454b5
    PUSH 0x63e6e2                       ; 005454ba | = "..\\engine\\palette.cpp"
    PUSH EBX                            ; 005454bf
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005454c0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005454c5
    PUSH 0x129                          ; 005454c8
    PUSH 0x63e6f8                       ; 005454cd | = "..\\engine\\palette.cpp"
    MOV EBX,dword ptr [ESP + 0x68]      ; 005454d2
    PUSH EBX                            ; 005454d6
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005454d7
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005454dc
    MOV ESI,0x63e70e                    ; 005454df | = "..\\engine\\palette.cpp"
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005454e4
    MOV EDI,0x12a                       ; 005454e8
    PUSH EBP                            ; 005454ed
    MOV dword ptr [0x0067d20c],ESI      ; 005454ee | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 005454f4 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005454fa
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    MOV EAX,0x1                         ; 005454ff
    ADD ESP,0x4                         ; 00545504
    POP ESI                             ; 00545507
    POP EDI                             ; 00545508
    ADD ESP,0x64                        ; 00545509
        ;   Label: LAB_00545509
    POP EBP                             ; 0054550c
    POP EBX                             ; 0054550d
    RET                                 ; 0054550e
    PUSH 0x63e5a3                       ; 0054550f | = "rb"
        ;   Label: LAB_0054550f
    LEA EAX,[ESP + 0xc]                 ; 00545514
    PUSH EAX                            ; 00545518
    PUSH 0x63e5a6                       ; 00545519 | s_EmptyChar_0063e5a6
    JMP 0x005452d1                      ; 0054551e
        ;   XREF to: 005452d1 (UNCONDITIONAL_JUMP)  ; LAB_005452d1
    MOV ECX,0x300                       ; 00545523
        ;   Label: LAB_00545523
    MOV ESI,0x2d02248                   ; 00545528 | g_DefaultPalette
    MOV EDI,0x2fd8d20                   ; 0054552d | g_PaletteData
    PUSH EDI                            ; 00545532 | g_PaletteData
    MOV EAX,ECX                         ; 00545533
    SHR ECX,0x2                         ; 00545535
    MOVSD.REP ES:EDI,ESI                ; 00545538 | g_DefaultPalette | g_PaletteData | UCHAR_ARRAY_02d0224c
    MOV CL,AL                           ; 0054553a
    AND CL,0x3                          ; 0054553c
    MOVSB.REP ES:EDI,ESI                ; 0054553f | UCHAR_ARRAY_02d0224c | UCHAR_ARRAY_02fd8d24 | UCHAR_ARRAY_02d0224d
    POP EDI                             ; 00545541
    JMP 0x0054530b                      ; 00545542
        ;   XREF to: 0054530b (UNCONDITIONAL_JUMP)  ; LAB_0054530b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00545547
        ;   Label: LAB_00545547
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054554b
    ADD EAX,EDI                         ; 0054554e
    PUSH EAX                            ; 00545550
    PUSH 0x63e5c1                       ; 00545551 | s_EmptyChar_0063e5c1
    JMP 0x00545349                      ; 00545556
        ;   XREF to: 00545349 (UNCONDITIONAL_JUMP)  ; LAB_00545349
    MOV EAX,dword ptr [ESP + 0x78]      ; 0054555b
        ;   Label: LAB_0054555b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0054555f
    PUSH 0x63e5c9                       ; 00545562 | = "rb"
    ADD EAX,EBX                         ; 00545567
    PUSH EAX                            ; 00545569
    PUSH 0x63e5cc                       ; 0054556a | s_EmptyChar_0063e5cc
    JMP 0x00545396                      ; 0054556f
        ;   XREF to: 00545396 (UNCONDITIONAL_JUMP)  ; LAB_00545396
    MOV ECX,0x63e5cd                    ; 00545574 | = "..\\engine\\palette.cpp"
        ;   Label: LAB_00545574
    MOV EBX,0xf1                        ; 00545579
    PUSH 0x63e5e3                       ; 0054557e | = "paletteManager::createOutputPalette -..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00545583 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00545589 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054558f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00545594
    JMP 0x005453a8                      ; 00545597
        ;   XREF to: 005453a8 (UNCONDITIONAL_JUMP)  ; LAB_005453a8
    LEA ECX,[EDX + -0x1]                ; 0054559c
        ;   Label: LAB_0054559c
    MOV EAX,dword ptr [ESI]             ; 0054559f
    LEA EDX,[EAX + 0x1]                 ; 005455a1
    MOV dword ptr [ESI + 0x4],ECX       ; 005455a4
    MOV dword ptr [ESI],EDX             ; 005455a7
    MOV AL,byte ptr [EAX]               ; 005455a9
    AND EAX,0xff                        ; 005455ab
    JMP 0x005453e0                      ; 005455b0
        ;   XREF to: 005453e0 (UNCONDITIONAL_JUMP)  ; LAB_005453e0
    LEA EAX,[EAX + EAX*0x2]             ; 005455b5
        ;   Label: LAB_005455b5
    XOR ECX,ECX                         ; 005455b8
    XOR EDX,EDX                         ; 005455ba
    MOV CL,byte ptr [EAX + 0x2fd8d21]   ; 005455bc | UCHAR_ARRAY_02fd8d21
    MOV DL,byte ptr [EAX + 0x2fd8d20]   ; 005455c2 | g_PaletteData
    MOV dword ptr [ESP + 0x68],ECX      ; 005455c8
    MOV AL,byte ptr [EAX + 0x2fd8d22]   ; 005455cc | UCHAR_ARRAY_02fd8d22
    AND EAX,0xff                        ; 005455d2
    TEST EDX,EDX                        ; 005455d7
    JZ 0x00545623                       ; 005455d9
        ;   XREF to: 00545623 (CONDITIONAL_JUMP)  ; LAB_00545623
    ADD EBX,0x4                         ; 005455db
        ;   Label: LAB_005455db
    MOV AH,byte ptr [ESP + 0x68]        ; 005455de
    MOV byte ptr [EBX + -0x4],DL        ; 005455e2
    MOV byte ptr [EBX + -0x3],AH        ; 005455e5
    INC EBP                             ; 005455e8
    MOV byte ptr [EBX + -0x2],AL        ; 005455e9
    MOV EAX,dword ptr [ESP + 0x78]      ; 005455ec
        ;   Label: LAB_005455ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 005455f0
    DEC EDI                             ; 005455f3
    CMP EBP,EDX                         ; 005455f4
    JBE 0x005453b5                      ; 005455f6
        ;   XREF to: 005453b5 (CONDITIONAL_JUMP)  ; LAB_005453b5
    MOV ECX,0x63e620                    ; 005455fc | = "..\\engine\\palette.cpp"
    MOV EAX,0x10c                       ; 00545601
    PUSH 0x63e636                       ; 00545606 | = "paletteManager::createOutputPalette -..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0054560b | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00545611 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00545616
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054561b
    JMP 0x005453b5                      ; 0054561e
        ;   XREF to: 005453b5 (UNCONDITIONAL_JUMP)  ; LAB_005453b5
    TEST ECX,ECX                        ; 00545623
        ;   Label: LAB_00545623
    JNZ 0x005455db                      ; 00545625
        ;   XREF to: 005455db (CONDITIONAL_JUMP)  ; LAB_005455db
    TEST EAX,EAX                        ; 00545627
    JNZ 0x005455db                      ; 00545629
        ;   XREF to: 005455db (CONDITIONAL_JUMP)  ; LAB_005455db
    JMP 0x005455ec                      ; 0054562b
        ;   XREF to: 005455ec (UNCONDITIONAL_JUMP)  ; LAB_005455ec
    PUSH 0x63e689                       ; 0054562d | = "wb"
        ;   Label: LAB_0054562d
    MOV EBP,dword ptr [ESP + 0x80]      ; 00545632
    PUSH EBP                            ; 00545639
    PUSH 0x63e68c                       ; 0054563a | s_EmptyChar_0063e68c
    JMP 0x00545473                      ; 0054563f
        ;   XREF to: 00545473 (UNCONDITIONAL_JUMP)  ; LAB_00545473

