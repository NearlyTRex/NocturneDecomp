; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_readTimestampFile_FUN_004b23a0(FILE * file, STimestampRecord * * records, int * count)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
; STimestampRecord * * Stack[0x8]:4   records
; int *            Stack[0xc]:4   count
; Local Variables:
; undefined        Stack[-0x560]:1  local_560
; undefined        Stack[-0x160]:1  local_160
; undefined1       Stack[-0x15f]:1  local_15f
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 at 004b26a6
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_anon_00626169
;   TerminatedCString s_Error_reading_s_0062616b
;   TerminatedCString s_engine_fileio_cpp_0062617c
;   TerminatedCString s_Error_parsing_s_record_d_00626191
;   TerminatedCString s_engine_fileio_cpp_006261ad
;   TerminatedCString s_Out_of_memory_reading_s__006261c2
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_fseek_FUN_005ffacc
;   engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b23a0
        ;   Label: engine_fileio.cpp_readTimestampFile_FUN_004b23a0
    PUSH ESI                            ; 004b23a1
    PUSH EDI                            ; 004b23a2
    PUSH EBP                            ; 004b23a3
    SUB ESP,0x550                       ; 004b23a4
    MOV EBX,dword ptr [ESP + 0x568]     ; 004b23aa
    XOR EDX,EDX                         ; 004b23b1
    PUSH EDX                            ; 004b23b3
    MOV EAX,dword ptr [ESP + 0x568]     ; 004b23b4
    PUSH EDX                            ; 004b23bb
    MOV ECX,dword ptr [EAX]             ; 004b23bc
    MOV EBP,0x148                       ; 004b23be
    PUSH ECX                            ; 004b23c3
    XOR ESI,ESI                         ; 004b23c4
    MOV dword ptr [ESP + 0x554],EDX     ; 004b23c6
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 004b23cd
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004b23d2
    MOV dword ptr [EBX],0x0             ; 004b23d5
    MOV dword ptr [ESP + 0x54c],ESI     ; 004b23db
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b23e2
        ;   Label: LAB_004b23e2
    PUSH 0x626169                       ; 004b23e9 | = " "
    MOV EDI,dword ptr [EAX]             ; 004b23ee
    PUSH EDI                            ; 004b23f0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b23f1
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x8                         ; 004b23f6
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b23f9
    MOV EDX,dword ptr [EAX]             ; 004b2400
    PUSH EDX                            ; 004b2402
    PUSH 0x400                          ; 004b2403
    LEA EAX,[ESP + 0x8]                 ; 004b2408
    PUSH EAX                            ; 004b240c
    LEA EDI,[ESP + 0xc]                 ; 004b240d
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b2411
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
    ADD ESP,0xc                         ; 004b2416
    CMP EAX,EDI                         ; 004b2419
    JZ 0x004b24cb                       ; 004b241b
        ;   XREF to: 004b24cb (CONDITIONAL_JUMP)  ; LAB_004b24cb
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b2421
    MOV EAX,dword ptr [EAX]             ; 004b2428
    TEST byte ptr [EAX + 0xc],0x20      ; 004b242a
    JZ 0x004b2620                       ; 004b242e
        ;   XREF to: 004b2620 (CONDITIONAL_JUMP)  ; LAB_004b2620
    PUSH 0xc4                           ; 004b2434
    PUSH 0x62604b                       ; 004b2439 | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004b243e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b243f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2444
    MOV EBP,dword ptr [ESP + 0x570]     ; 004b2447
    PUSH EBP                            ; 004b244e
    MOV EAX,dword ptr [ESP + 0x568]     ; 004b244f
    PUSH 0x62616b                       ; 004b2456 | = "Error reading %s"
    MOV dword ptr [EAX],0x0             ; 004b245b
    MOV EAX,[0x00678a60]                ; 004b2461 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b2466 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b2467
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b246c
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b246f
        ;   Label: LAB_004b246f
    MOV EDX,dword ptr [EAX]             ; 004b2476
    TEST EDX,EDX                        ; 004b2478
    JZ 0x004b249c                       ; 004b247a
        ;   XREF to: 004b249c (CONDITIONAL_JUMP)  ; LAB_004b249c
    PUSH 0xc4                           ; 004b247c
    PUSH 0x62604b                       ; 004b2481 | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b2486
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2487
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b248c
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b248f
    MOV dword ptr [EAX],0x0             ; 004b2496
    MOV ESI,dword ptr [EBX]             ; 004b249c
        ;   Label: LAB_004b249c
    TEST ESI,ESI                        ; 004b249e
    JZ 0x004b24bb                       ; 004b24a0
        ;   XREF to: 004b24bb (CONDITIONAL_JUMP)  ; LAB_004b24bb
    PUSH 0x1ae                          ; 004b24a2
    PUSH 0x62617c                       ; 004b24a7 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b24ac
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004b24ad
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004b24b2
    MOV dword ptr [EBX],0x0             ; 004b24b5
    MOV EAX,0xffffffff                  ; 004b24bb
        ;   Label: LAB_004b24bb
    ADD ESP,0x550                       ; 004b24c0
    POP EBP                             ; 004b24c6
    POP EDI                             ; 004b24c7
    POP ESI                             ; 004b24c8
    POP EBX                             ; 004b24c9
    RET                                 ; 004b24ca
    LEA EAX,[ESP + 0x400]               ; 004b24cb
        ;   Label: LAB_004b24cb
    PUSH EAX                            ; 004b24d2
    PUSH EDI                            ; 004b24d3
    CALL engine_fileio.cpp_parseTimestampRecord_FUN_004b2270 ; 004b24d4
        ;   XREF to: 004b2270 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_parseTimestampRecord_FUN_004b2270(char * input_string, STimestampRecord * output_record)
    ADD ESP,0x8                         ; 004b24d9
    TEST EAX,EAX                        ; 004b24dc
    JNZ 0x004b2535                      ; 004b24de
        ;   XREF to: 004b2535 (CONDITIONAL_JUMP)  ; LAB_004b2535
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b24e0
    MOV ECX,dword ptr [EAX]             ; 004b24e7
    TEST ECX,ECX                        ; 004b24e9
    JZ 0x004b250d                       ; 004b24eb
        ;   XREF to: 004b250d (CONDITIONAL_JUMP)  ; LAB_004b250d
    PUSH 0xc4                           ; 004b24ed
    PUSH 0x62604b                       ; 004b24f2 | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004b24f7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b24f8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b24fd
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b2500
    MOV dword ptr [EAX],0x0             ; 004b2507
    MOV EDI,dword ptr [ESP + 0x548]     ; 004b250d
        ;   Label: LAB_004b250d
    PUSH EDI                            ; 004b2514
    MOV EBP,dword ptr [ESP + 0x574]     ; 004b2515
    PUSH EBP                            ; 004b251c
    PUSH 0x626191                       ; 004b251d | = "Error parsing %s, record %d"
    MOV EAX,[0x00678a60]                ; 004b2522 | g_CEditorToolsPtr
    PUSH EAX                            ; 004b2527 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b2528
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b252d
    JMP 0x004b246f                      ; 004b2530
        ;   XREF to: 004b246f (UNCONDITIONAL_JUMP)  ; LAB_004b246f
    MOV ESI,dword ptr [ESP + 0x56c]     ; 004b2535
        ;   Label: LAB_004b2535
    LEA EDI,[ESP + 0x400]               ; 004b253c
    PUSH EDI                            ; 004b2543
    MOV AL,byte ptr [ESI]               ; 004b2544
        ;   Label: LAB_004b2544
    MOV byte ptr [EDI],AL               ; 004b2546
    CMP AL,0x0                          ; 004b2548
    JZ 0x004b255c                       ; 004b254a
        ;   XREF to: 004b255c (CONDITIONAL_JUMP)  ; LAB_004b255c
    MOV AL,byte ptr [ESI + 0x1]         ; 004b254c
    ADD ESI,0x2                         ; 004b254f
    MOV byte ptr [EDI + 0x1],AL         ; 004b2552
    ADD EDI,0x2                         ; 004b2555
    CMP AL,0x0                          ; 004b2558
    JNZ 0x004b2544                      ; 004b255a
        ;   XREF to: 004b2544 (CONDITIONAL_JUMP)  ; LAB_004b2544
    POP EDI                             ; 004b255c
        ;   Label: LAB_004b255c
    PUSH 0x1c2                          ; 004b255d
    PUSH 0x6261ad                       ; 004b2562 | = "..\\engine\\fileio.cpp"
    PUSH EBP                            ; 004b2567
    MOV EDX,dword ptr [EBX]             ; 004b2568
    PUSH EDX                            ; 004b256a
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 004b256b
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004b2570
    MOV dword ptr [EBX],EAX             ; 004b2573
    TEST EAX,EAX                        ; 004b2575
    JNZ 0x004b25da                      ; 004b2577
        ;   XREF to: 004b25da (CONDITIONAL_JUMP)  ; LAB_004b25da
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b2579
    MOV EDX,dword ptr [EAX]             ; 004b2580
    TEST EDX,EDX                        ; 004b2582
    JZ 0x004b25a6                       ; 004b2584
        ;   XREF to: 004b25a6 (CONDITIONAL_JUMP)  ; LAB_004b25a6
    PUSH 0xc4                           ; 004b2586
    PUSH 0x62604b                       ; 004b258b | = "..\\engine\\fileio.cpp"
    PUSH EDX                            ; 004b2590
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b2591
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b2596
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b2599
    MOV dword ptr [EAX],0x0             ; 004b25a0
    MOV EBX,dword ptr [ESP + 0x548]     ; 004b25a6
        ;   Label: LAB_004b25a6
    PUSH EBX                            ; 004b25ad
    MOV ESI,dword ptr [ESP + 0x574]     ; 004b25ae
    PUSH ESI                            ; 004b25b5
    PUSH 0x6261c2                       ; 004b25b6 | = "Out of memory reading %s record %d"
    MOV EDI,dword ptr [0x00678a60]      ; 004b25bb | g_CEditorToolsPtr
    PUSH EDI                            ; 004b25c1 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b25c2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    MOV EAX,0xffffffff                  ; 004b25c7
    ADD ESP,0x10                        ; 004b25cc
    ADD ESP,0x550                       ; 004b25cf
    POP EBP                             ; 004b25d5
    POP EDI                             ; 004b25d6
    POP ESI                             ; 004b25d7
    POP EBX                             ; 004b25d8
    RET                                 ; 004b25d9
    MOV ESI,dword ptr [ESP + 0x54c]     ; 004b25da
        ;   Label: LAB_004b25da
    MOV ECX,0x52                        ; 004b25e1
    LEA EDI,[EAX + ESI*0x1]             ; 004b25e6
    LEA ESI,[ESP + 0x400]               ; 004b25e9
    ADD EBP,0x148                       ; 004b25f0
    MOVSD.REP ES:EDI,ESI                ; 004b25f6
    MOV EAX,dword ptr [ESP + 0x548]     ; 004b25f8
    MOV EDI,dword ptr [ESP + 0x54c]     ; 004b25ff
    INC EAX                             ; 004b2606
    ADD EDI,0x148                       ; 004b2607
    MOV dword ptr [ESP + 0x548],EAX     ; 004b260d
    MOV dword ptr [ESP + 0x54c],EDI     ; 004b2614
    JMP 0x004b23e2                      ; 004b261b
        ;   XREF to: 004b23e2 (UNCONDITIONAL_JUMP)  ; LAB_004b23e2
    MOV EAX,dword ptr [ESP + 0x548]     ; 004b2620
        ;   Label: LAB_004b2620
    ADD ESP,0x550                       ; 004b2627
    POP EBP                             ; 004b262d
    POP EDI                             ; 004b262e
    POP ESI                             ; 004b262f
    POP EBX                             ; 004b2630
    RET                                 ; 004b2631

