; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_loadS3DModelFile_FUN_004593a0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; int              Stack[-0x9e4]:4  local_9e4
; char[260]        Stack[-0x9e0]:260  local_9e0
; undefined1[4]    Stack[-0x8dc]:4  local_8dc
; int[500]         Stack[-0x8d8]:2000  local_8d8
; char[200]        Stack[-0x108]:200  local_108
; uint             Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; void *           Stack[-0x38]:4  local_38
; _FILE *          Stack[-0x34]:4  local_34
; int[3]           Stack[-0x30]:12  local_30
; undefined1[4]    Stack[-0x24]:4  local_24
; undefined1[4]    Stack[-0x20]:4  local_20
; undefined1[4]    Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; SShapeEditorPolygon * Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_loadModelFile_FUN_00458ac0 at 00458bfc
;
; Referenced Globals:
;   TerminatedCString s_rt_0061ab05
;   TerminatedCString s_models_0061ab08
;   TerminatedCString s_FILE_ERROR_Nothing_chang_0061ab0f
;   TerminatedCString s_d_0061ab2c
;   TerminatedCString s_s_is_corrupt_0061ab30
;   TerminatedCString s_shape_design_c_0061ab3f
;   char s_EmptyChar_0061ab51 = \x00
;   TerminatedCString s_shape_design_c_0061ab52
;   undefined4 s_.\\shape\\design.c_0061ab53
;   undefined4 s_\\shape\\design.c_0061ab54
;   TerminatedCString s_Invalid_S3D_version_d_we_0061ab64
;   TerminatedCString s_d_d_d_d_d_d_d_0061aba5
;   TerminatedCString s_Too_many_polygons_d_max__0061abbb
;   TerminatedCString s_Too_many_vertices_d_max__0061abdc
;   TerminatedCString s_Too_many_parts_d_max_is__0061abfd
;   ... and 50 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_splitpath_FUN_005ff178
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_design.c_skipLines_FUN_00459360
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004593a0
        ;   Label: shape_design.c_loadS3DModelFile_FUN_004593a0
    PUSH ESI                            ; 004593a1
    PUSH EDI                            ; 004593a2
    PUSH EBP                            ; 004593a3
    MOV EBP,ESP                         ; 004593a4
    SUB ESP,0x9d4                       ; 004593a6
    MOV dword ptr [EBP + -0x28],0x0     ; 004593ac
    MOV EAX,0x61ab05                    ; 004593b3 | = "rt"
    PUSH EAX                            ; 004593b8 | = "rt"
    MOV EAX,dword ptr [EBP + 0x14]      ; 004593b9
    PUSH EAX                            ; 004593bc
    MOV EAX,0x61ab08                    ; 004593bd | = "models"
    PUSH EAX                            ; 004593c2 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004593c3
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004593c8
    MOV dword ptr [EBP + -0x24],EAX     ; 004593cb
    CMP dword ptr [EBP + -0x24],0x0     ; 004593ce
    JNZ 0x00459401                      ; 004593d2
        ;   XREF to: 00459401 (CONDITIONAL_JUMP)  ; LAB_00459401
    PUSH 0x16                           ; 004593d4
    PUSH 0x0                            ; 004593d6
    MOV EAX,0x61ab0f                    ; 004593d8 | = "FILE ERROR! Nothing changed!"
    PUSH EAX                            ; 004593dd | = "FILE ERROR! Nothing changed!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004593de
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004593e3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004593e6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004593eb
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004593f0
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [EBP + -0x2c],0x0     ; 004593f5
    JMP 0x00459a0c                      ; 004593fc
        ;   XREF to: 00459a0c (UNCONDITIONAL_JUMP)  ; LAB_00459a0c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00459401
        ;   Label: LAB_00459401
    MOV EDI,0x66eda8                    ; 00459404 | g_LoadedModelName
    PUSH EDI                            ; 00459409 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 0045940a
        ;   Label: LAB_0045940a
    MOV byte ptr [EDI],AL               ; 0045940c | g_LoadedModelName | s__0066edaa
    CMP AL,0x0                          ; 0045940e
    JZ 0x00459422                       ; 00459410
        ;   XREF to: 00459422 (CONDITIONAL_JUMP)  ; LAB_00459422
    MOV AL,byte ptr [ESI + 0x1]         ; 00459412
    ADD ESI,0x2                         ; 00459415
    MOV byte ptr [EDI + 0x1],AL         ; 00459418 | s__0066eda9 | DAT_0066edab
    ADD EDI,0x2                         ; 0045941b
    CMP AL,0x0                          ; 0045941e
    JNZ 0x0045940a                      ; 00459420
        ;   XREF to: 0045940a (CONDITIONAL_JUMP)  ; LAB_0045940a
    POP EDI                             ; 00459422
        ;   Label: LAB_00459422
    MOV dword ptr [0x01e528a8],0x0      ; 00459423 | g_PolygonOptimizationPasses
    MOV EAX,[0x01e528a8]                ; 0045942d | g_PolygonOptimizationPasses
    MOV [0x01e528a4],EAX                ; 00459432 | g_VertexOptimizationPasses
    MOV dword ptr [0x01e528b8],0xffffffff ; 00459437 | g_SelectedPolygonIndex
    MOV dword ptr [0x01e66150],0x0      ; 00459441 | g_SpatialTreeRoot
    PUSH 0x1                            ; 0045944b
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045944d
    PUSH EAX                            ; 00459450
    CALL shape_design.c_skipLines_FUN_00459360 ; 00459451
        ;   XREF to: 00459360 (UNCONDITIONAL_CALL)  ; void shape_design.c_skipLines_FUN_00459360(_FILE * file, int line_count)
    ADD ESP,0x8                         ; 00459456
    LEA EAX,[EBP + -0x20]               ; 00459459
    PUSH EAX                            ; 0045945c
    MOV EAX,0x61ab2c                    ; 0045945d | = "%d\n"
    PUSH EAX                            ; 00459462 | = "%d\n"
    MOV EAX,dword ptr [EBP + -0x24]     ; 00459463
    PUSH EAX                            ; 00459466
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00459467
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0045946c
    CMP EAX,0x1                         ; 0045946f
    JZ 0x00459539                       ; 00459472
        ;   XREF to: 00459539 (CONDITIONAL_JUMP)  ; LAB_00459539
    MOV EAX,dword ptr [EBP + 0x14]      ; 00459478
        ;   Label: LAB_00459478
    PUSH EAX                            ; 0045947b
    MOV EAX,0x61ab30                    ; 0045947c | = "%s is corrupt."
    PUSH EAX                            ; 00459481 | = "%s is corrupt."
    LEA EAX,[EBP + 0xffffff08]          ; 00459482
    PUSH EAX                            ; 00459488
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00459489
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045948e
    PUSH 0x3ae                          ; 00459491
        ;   Label: LAB_00459491
    MOV ESI,0x61ab3f                    ; 00459496 | = "..\\shape\\design.c"
    PUSH ESI                            ; 0045949b | = "..\\shape\\design.c"
    MOV ESI,dword ptr [EBP + -0x24]     ; 0045949c
    PUSH ESI                            ; 0045949f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004594a0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004594a5
    PUSH 0x16                           ; 004594a8
    PUSH 0x0                            ; 004594aa
    LEA ESI,[EBP + 0xffffff08]          ; 004594ac
    PUSH ESI                            ; 004594b2
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004594b3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004594b8
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004594bb
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004594c0
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004594c5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ESI,0x61ab51                    ; 004594ca | s_EmptyChar_0061ab51
    MOV EDI,0x66eda8                    ; 004594cf | g_LoadedModelName
    PUSH EDI                            ; 004594d4 | g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 004594d5 | s_EmptyChar_0061ab51 | s_.\shape\design.c_0061ab53
        ;   Label: LAB_004594d5
    MOV byte ptr [EDI],AL               ; 004594d7 | g_LoadedModelName | s__0066edaa
    CMP AL,0x0                          ; 004594d9
    JZ 0x004594ed                       ; 004594db
        ;   XREF to: 004594ed (CONDITIONAL_JUMP)  ; LAB_004594ed
    MOV AL,byte ptr [ESI + 0x1]         ; 004594dd | = "..\\shape\\design.c" | s_\shape\design.c_0061ab54
    ADD ESI,0x2                         ; 004594e0
    MOV byte ptr [EDI + 0x1],AL         ; 004594e3 | s__0066eda9 | DAT_0066edab
    ADD EDI,0x2                         ; 004594e6
    CMP AL,0x0                          ; 004594e9
    JNZ 0x004594d5                      ; 004594eb
        ;   XREF to: 004594d5 (CONDITIONAL_JUMP)  ; LAB_004594d5
    POP EDI                             ; 004594ed
        ;   Label: LAB_004594ed
    MOV dword ptr [0x01e528a0],0x0      ; 004594ee | g_PartsCount
    MOV ESI,dword ptr [0x01e528a0]      ; 004594f8 | g_PartsCount
    MOV dword ptr [0x016e990c],ESI      ; 004594fe | g_PolygonCount
    MOV ESI,dword ptr [0x016e990c]      ; 00459504 | g_PolygonCount
    MOV dword ptr [0x01626408],ESI      ; 0045950a | g_VertexCount
    CMP dword ptr [EBP + -0x28],0x0     ; 00459510
    JZ 0x0045952d                       ; 00459514
        ;   XREF to: 0045952d (CONDITIONAL_JUMP)  ; LAB_0045952d
    PUSH 0x3be                          ; 00459516
    MOV EAX,0x61ab52                    ; 0045951b | = "..\\shape\\design.c"
    PUSH EAX                            ; 00459520 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x28]     ; 00459521
    PUSH EAX                            ; 00459524
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00459525
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0045952a
    MOV dword ptr [EBP + -0x2c],0x0     ; 0045952d
        ;   Label: LAB_0045952d
    JMP 0x00459a0c                      ; 00459534
        ;   XREF to: 00459a0c (UNCONDITIONAL_JUMP)  ; LAB_00459a0c
    MOV dword ptr [EBP + -0x1c],0x67    ; 00459539
        ;   Label: LAB_00459539
    MOV EAX,dword ptr [EBP + -0x20]     ; 00459540
    CMP EAX,dword ptr [EBP + -0x1c]     ; 00459543
    JZ 0x0045956a                       ; 00459546
        ;   XREF to: 0045956a (CONDITIONAL_JUMP)  ; LAB_0045956a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00459548
    PUSH EAX                            ; 0045954b
    MOV EAX,dword ptr [EBP + -0x20]     ; 0045954c
    PUSH EAX                            ; 0045954f
    MOV EAX,0x61ab64                    ; 00459550 | = "Invalid .S3D version: %d, we can only..."
    PUSH EAX                            ; 00459555 | = "Invalid .S3D version: %d, we can only..."
    LEA EAX,[EBP + 0xffffff08]          ; 00459556
    PUSH EAX                            ; 0045955c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045955d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00459562
    JMP 0x00459491                      ; 00459565
        ;   XREF to: 00459491 (UNCONDITIONAL_JUMP)  ; LAB_00459491
    PUSH 0x1                            ; 0045956a
        ;   Label: LAB_0045956a
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045956c
    PUSH EAX                            ; 0045956f
    CALL shape_design.c_skipLines_FUN_00459360 ; 00459570
        ;   XREF to: 00459360 (UNCONDITIONAL_CALL)  ; void shape_design.c_skipLines_FUN_00459360(_FILE * file, int line_count)
    ADD ESP,0x8                         ; 00459575
    LEA EAX,[EBP + -0xc]                ; 00459578
    PUSH EAX                            ; 0045957b
    LEA EAX,[EBP + -0x10]               ; 0045957c
    PUSH EAX                            ; 0045957f
    LEA EAX,[EBP + -0x14]               ; 00459580
    PUSH EAX                            ; 00459583
    MOV EAX,0x1e528a0                   ; 00459584 | g_PartsCount
    PUSH EAX                            ; 00459589 | g_PartsCount
    MOV EAX,0x1626408                   ; 0045958a | g_VertexCount
    PUSH EAX                            ; 0045958f | g_VertexCount
    MOV EAX,0x16e990c                   ; 00459590 | g_PolygonCount
    PUSH EAX                            ; 00459595 | g_PolygonCount
    LEA EAX,[EBP + -0x18]               ; 00459596
    PUSH EAX                            ; 00459599
    MOV EAX,0x61aba5                    ; 0045959a | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH EAX                            ; 0045959f | = "%d,%d,%d,%d,%d,%d,%d\n"
    MOV EAX,dword ptr [EBP + -0x24]     ; 004595a0
    PUSH EAX                            ; 004595a3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004595a4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 004595a9
    CMP EAX,0x7                         ; 004595ac
    JZ 0x004595b6                       ; 004595af
        ;   XREF to: 004595b6 (CONDITIONAL_JUMP)  ; LAB_004595b6
    JMP 0x00459478                      ; 004595b1
        ;   XREF to: 00459478 (UNCONDITIONAL_JUMP)  ; LAB_00459478
    CMP dword ptr [0x016e990c],0x4e20   ; 004595b6 | g_PolygonCount
        ;   Label: LAB_004595b6
    JLE 0x004595e7                      ; 004595c0
        ;   XREF to: 004595e7 (CONDITIONAL_JUMP)  ; LAB_004595e7
    PUSH 0x4e20                         ; 004595c2
    PUSH dword ptr [0x016e990c]         ; 004595c7 | g_PolygonCount
    MOV EAX,0x61abbb                    ; 004595cd | = "Too many polygons: %d, max is %d"
    PUSH EAX                            ; 004595d2 | = "Too many polygons: %d, max is %d"
    LEA EAX,[EBP + 0xffffff08]          ; 004595d3
    PUSH EAX                            ; 004595d9
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004595da
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004595df
    JMP 0x00459491                      ; 004595e2
        ;   XREF to: 00459491 (UNCONDITIONAL_JUMP)  ; LAB_00459491
    CMP dword ptr [0x01626408],0x4e20   ; 004595e7 | g_VertexCount
        ;   Label: LAB_004595e7
    JLE 0x00459618                      ; 004595f1
        ;   XREF to: 00459618 (CONDITIONAL_JUMP)  ; LAB_00459618
    PUSH 0x4e20                         ; 004595f3
    PUSH dword ptr [0x01626408]         ; 004595f8 | g_VertexCount
    MOV EAX,0x61abdc                    ; 004595fe | = "Too many vertices: %d, max is %d"
    PUSH EAX                            ; 00459603 | = "Too many vertices: %d, max is %d"
    LEA EAX,[EBP + 0xffffff08]          ; 00459604
    PUSH EAX                            ; 0045960a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045960b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00459610
    JMP 0x00459491                      ; 00459613
        ;   XREF to: 00459491 (UNCONDITIONAL_JUMP)  ; LAB_00459491
    CMP dword ptr [0x01e528a0],0x1f4    ; 00459618 | g_PartsCount
        ;   Label: LAB_00459618
    JLE 0x00459649                      ; 00459622
        ;   XREF to: 00459649 (CONDITIONAL_JUMP)  ; LAB_00459649
    PUSH 0x1f4                          ; 00459624
    PUSH dword ptr [0x01626408]         ; 00459629 | g_VertexCount
    MOV EAX,0x61abfd                    ; 0045962f | = "Too many parts: %d, max is %d"
    PUSH EAX                            ; 00459634 | = "Too many parts: %d, max is %d"
    LEA EAX,[EBP + 0xffffff08]          ; 00459635
    PUSH EAX                            ; 0045963b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045963c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00459641
    JMP 0x00459491                      ; 00459644
        ;   XREF to: 00459491 (UNCONDITIONAL_JUMP)  ; LAB_00459491
    PUSH 0x1                            ; 00459649
        ;   Label: LAB_00459649
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045964b
    PUSH EAX                            ; 0045964e
    CALL shape_design.c_skipLines_FUN_00459360 ; 0045964f
        ;   XREF to: 00459360 (UNCONDITIONAL_CALL)  ; void shape_design.c_skipLines_FUN_00459360(_FILE * file, int line_count)
    ADD ESP,0x8                         ; 00459654
    MOV dword ptr [EBP + -0x30],0x0     ; 00459657
    JMP 0x00459663                      ; 0045965e
        ;   XREF to: 00459663 (UNCONDITIONAL_JUMP)  ; LAB_00459663
    INC dword ptr [EBP + -0x30]         ; 00459660
        ;   Label: LAB_00459660
    MOV EAX,dword ptr [EBP + -0x30]     ; 00459663
        ;   Label: LAB_00459663
    CMP EAX,dword ptr [0x01e528a0]      ; 00459666 | g_PartsCount
    JGE 0x004596bc                      ; 0045966c
        ;   XREF to: 004596bc (CONDITIONAL_JUMP)  ; LAB_004596bc
    IMUL EAX,dword ptr [EBP + -0x30],0x14 ; 0045966e
    MOV EDX,0x1e50190                   ; 00459672 | g_ModelPartNames
    ADD EAX,EDX                         ; 00459677
    PUSH EAX                            ; 00459679
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045967a
    SHL EAX,0x2                         ; 0045967d
    LEA EDX,[EBP + 0xfffff738]          ; 00459680
    ADD EAX,EDX                         ; 00459686
    PUSH EAX                            ; 00459688
    LEA EAX,[EBP + 0xfffff734]          ; 00459689
    PUSH EAX                            ; 0045968f
    LEA EAX,[EBP + 0xfffff734]          ; 00459690
    PUSH EAX                            ; 00459696
    LEA EAX,[EBP + 0xfffff734]          ; 00459697
    PUSH EAX                            ; 0045969d
    MOV EAX,0x61ac1b                    ; 0045969e | = "%d,%d,%d,%d,\"%[^\"]\"\n"
    PUSH EAX                            ; 004596a3 | = "%d,%d,%d,%d,\"%[^\"]\"\n"
    MOV EAX,dword ptr [EBP + -0x24]     ; 004596a4
    PUSH EAX                            ; 004596a7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004596a8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 004596ad
    CMP EAX,0x5                         ; 004596b0
    JZ 0x004596ba                       ; 004596b3
        ;   XREF to: 004596ba (CONDITIONAL_JUMP)  ; LAB_004596ba
    JMP 0x00459478                      ; 004596b5
        ;   XREF to: 00459478 (UNCONDITIONAL_JUMP)  ; LAB_00459478
    JMP 0x00459660                      ; 004596ba
        ;   XREF to: 00459660 (UNCONDITIONAL_JUMP)  ; LAB_00459660
        ;   Label: LAB_004596ba
    PUSH 0x1                            ; 004596bc
        ;   Label: LAB_004596bc
    MOV EAX,dword ptr [EBP + -0x24]     ; 004596be
    PUSH EAX                            ; 004596c1
    CALL shape_design.c_skipLines_FUN_00459360 ; 004596c2
        ;   XREF to: 00459360 (UNCONDITIONAL_CALL)  ; void shape_design.c_skipLines_FUN_00459360(_FILE * file, int line_count)
    ADD ESP,0x8                         ; 004596c7
    CMP dword ptr [EBP + -0x18],0x0     ; 004596ca
    JLE 0x004597e9                      ; 004596ce
        ;   XREF to: 004597e9 (CONDITIONAL_JUMP)  ; LAB_004597e9
    PUSH 0x3ec                          ; 004596d4
    MOV EAX,0x61ac30                    ; 004596d9 | = "..\\shape\\design.c"
    PUSH EAX                            ; 004596de | = "..\\shape\\design.c"
    IMUL EAX,dword ptr [EBP + -0x18],0x50 ; 004596df
    PUSH EAX                            ; 004596e3
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004596e4
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004596e9
    MOV dword ptr [EBP + -0x28],EAX     ; 004596ec
    CMP dword ptr [EBP + -0x28],0x0     ; 004596ef
    JNZ 0x00459713                      ; 004596f3
        ;   XREF to: 00459713 (CONDITIONAL_JUMP)  ; LAB_00459713
    MOV EAX,dword ptr [EBP + -0x18]     ; 004596f5
    PUSH EAX                            ; 004596f8
    MOV EAX,0x61ac42                    ; 004596f9 | = "Out of memory for texture list, numTe..."
    PUSH EAX                            ; 004596fe | = "Out of memory for texture list, numTe..."
    LEA EAX,[EBP + 0xffffff08]          ; 004596ff
    PUSH EAX                            ; 00459705
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00459706
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045970b
    JMP 0x00459491                      ; 0045970e
        ;   XREF to: 00459491 (UNCONDITIONAL_JUMP)  ; LAB_00459491
    MOV dword ptr [EBP + -0x30],0x0     ; 00459713
        ;   Label: LAB_00459713
    JMP 0x0045971f                      ; 0045971a
        ;   XREF to: 0045971f (UNCONDITIONAL_JUMP)  ; LAB_0045971f
    INC dword ptr [EBP + -0x30]         ; 0045971c
        ;   Label: LAB_0045971c
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045971f
        ;   Label: LAB_0045971f
    CMP EAX,dword ptr [EBP + -0x18]     ; 00459722
    JGE 0x004597e9                      ; 00459725
        ;   XREF to: 004597e9 (CONDITIONAL_JUMP)  ; LAB_004597e9
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045972b
    PUSH EAX                            ; 0045972e
    PUSH 0x104                          ; 0045972f
    LEA EAX,[EBP + 0xfffff630]          ; 00459734
    PUSH EAX                            ; 0045973a
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0045973b
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00459740
    TEST EAX,EAX                        ; 00459743
    JNZ 0x0045974c                      ; 00459745
        ;   XREF to: 0045974c (CONDITIONAL_JUMP)  ; LAB_0045974c
    JMP 0x00459478                      ; 00459747
        ;   XREF to: 00459478 (UNCONDITIONAL_JUMP)  ; LAB_00459478
    MOV EDX,0xa                         ; 0045974c
        ;   Label: LAB_0045974c
    LEA ESI,[EBP + 0xfffff630]          ; 00459751
    MOV AL,byte ptr [ESI]               ; 00459757
        ;   Label: LAB_00459757
    CMP AL,DL                           ; 00459759
    JZ 0x0045976f                       ; 0045975b
        ;   XREF to: 0045976f (CONDITIONAL_JUMP)  ; LAB_0045976f
    CMP AL,0x0                          ; 0045975d
    JZ 0x0045976d                       ; 0045975f
        ;   XREF to: 0045976d (CONDITIONAL_JUMP)  ; LAB_0045976d
    INC ESI                             ; 00459761
    MOV AL,byte ptr [ESI]               ; 00459762
    CMP AL,DL                           ; 00459764
    JZ 0x0045976f                       ; 00459766
        ;   XREF to: 0045976f (CONDITIONAL_JUMP)  ; LAB_0045976f
    INC ESI                             ; 00459768
    CMP AL,0x0                          ; 00459769
    JNZ 0x00459757                      ; 0045976b
        ;   XREF to: 00459757 (CONDITIONAL_JUMP)  ; LAB_00459757
    SUB ESI,ESI                         ; 0045976d
        ;   Label: LAB_0045976d
    TEST ESI,ESI                        ; 0045976f
        ;   Label: LAB_0045976f
    JZ 0x00459799                       ; 00459771
        ;   XREF to: 00459799 (CONDITIONAL_JUMP)  ; LAB_00459799
    MOV EDX,0xa                         ; 00459773
    LEA ESI,[EBP + 0xfffff630]          ; 00459778
    MOV AL,byte ptr [ESI]               ; 0045977e
        ;   Label: LAB_0045977e
    CMP AL,DL                           ; 00459780
    JZ 0x00459796                       ; 00459782
        ;   XREF to: 00459796 (CONDITIONAL_JUMP)  ; LAB_00459796
    CMP AL,0x0                          ; 00459784
    JZ 0x00459794                       ; 00459786
        ;   XREF to: 00459794 (CONDITIONAL_JUMP)  ; LAB_00459794
    INC ESI                             ; 00459788
    MOV AL,byte ptr [ESI]               ; 00459789
    CMP AL,DL                           ; 0045978b
    JZ 0x00459796                       ; 0045978d
        ;   XREF to: 00459796 (CONDITIONAL_JUMP)  ; LAB_00459796
    INC ESI                             ; 0045978f
    CMP AL,0x0                          ; 00459790
    JNZ 0x0045977e                      ; 00459792
        ;   XREF to: 0045977e (CONDITIONAL_JUMP)  ; LAB_0045977e
    SUB ESI,ESI                         ; 00459794
        ;   Label: LAB_00459794
    MOV byte ptr [ESI],0x0              ; 00459796
        ;   Label: LAB_00459796
    PUSH 0x0                            ; 00459799
        ;   Label: LAB_00459799
    IMUL ESI,dword ptr [EBP + -0x30],0x50 ; 0045979b
    ADD ESI,dword ptr [EBP + -0x28]     ; 0045979f
    PUSH ESI                            ; 004597a2
    PUSH 0x0                            ; 004597a3
    PUSH 0x0                            ; 004597a5
    LEA ESI,[EBP + 0xfffff630]          ; 004597a7
    PUSH ESI                            ; 004597ad
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004597ae
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004597b3
    MOV ESI,0x61ac73                    ; 004597b6 | = ".raw"
    IMUL EDI,dword ptr [EBP + -0x30],0x50 ; 004597bb
    ADD EDI,dword ptr [EBP + -0x28]     ; 004597bf
    PUSH EDI                            ; 004597c2
    SUB ECX,ECX                         ; 004597c3
    DEC ECX                             ; 004597c5
    MOV AL,0x0                          ; 004597c6
    SCASB.REPNE ES:EDI                  ; 004597c8
    DEC EDI                             ; 004597ca
    MOV AL,byte ptr [ESI]               ; 004597cb | = ".raw" | DAT_0061ac75
        ;   Label: LAB_004597cb
    MOV byte ptr [EDI],AL               ; 004597cd
    CMP AL,0x0                          ; 004597cf
    JZ 0x004597e3                       ; 004597d1
        ;   XREF to: 004597e3 (CONDITIONAL_JUMP)  ; LAB_004597e3
    MOV AL,byte ptr [ESI + 0x1]         ; 004597d3 | DAT_0061ac74 | s_w_0061ac76
    ADD ESI,0x2                         ; 004597d6
    MOV byte ptr [EDI + 0x1],AL         ; 004597d9
    ADD EDI,0x2                         ; 004597dc
    CMP AL,0x0                          ; 004597df
    JNZ 0x004597cb                      ; 004597e1
        ;   XREF to: 004597cb (CONDITIONAL_JUMP)  ; LAB_004597cb
    POP EDI                             ; 004597e3
        ;   Label: LAB_004597e3
    JMP 0x0045971c                      ; 004597e4
        ;   XREF to: 0045971c (UNCONDITIONAL_JUMP)  ; LAB_0045971c
    PUSH 0x1                            ; 004597e9
        ;   Label: LAB_004597e9
    MOV EAX,dword ptr [EBP + -0x24]     ; 004597eb
    PUSH EAX                            ; 004597ee
    CALL shape_design.c_skipLines_FUN_00459360 ; 004597ef
        ;   XREF to: 00459360 (UNCONDITIONAL_CALL)  ; void shape_design.c_skipLines_FUN_00459360(_FILE * file, int line_count)
    ADD ESP,0x8                         ; 004597f4
    PUSH 0x766880                       ; 004597f7 | DAT_00766880
    PUSH 0x0                            ; 004597fc
    MOV EAX,0x16e9910                   ; 004597fe | g_ModelPolygonData
    PUSH EAX                            ; 00459803 | g_ModelPolygonData
    CALL crt_memory.c_memset_FUN_005fde40 ; 00459804
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00459809
    MOV dword ptr [EBP + -0x4],0x16e9910 ; 0045980c | g_ModelPolygonData
    MOV dword ptr [EBP + -0x30],0x0     ; 00459813
    JMP 0x0045981f                      ; 0045981a
        ;   XREF to: 0045981f (UNCONDITIONAL_JUMP)  ; LAB_0045981f
    INC dword ptr [EBP + -0x30]         ; 0045981c
        ;   Label: LAB_0045981c
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045981f
        ;   Label: LAB_0045981f
    CMP EAX,dword ptr [0x01e528a0]      ; 00459822 | g_PartsCount
    JGE 0x0045995f                      ; 00459828
        ;   XREF to: 0045995f (CONDITIONAL_JUMP)  ; LAB_0045995f
    MOV dword ptr [EBP + -0x8],0x0      ; 0045982e
    JMP 0x0045983a                      ; 00459835
        ;   XREF to: 0045983a (UNCONDITIONAL_JUMP)  ; LAB_0045983a
    INC dword ptr [EBP + -0x8]          ; 00459837
        ;   Label: LAB_00459837
    MOV EDX,dword ptr [EBP + -0x30]     ; 0045983a
        ;   Label: LAB_0045983a
    SHL EDX,0x2                         ; 0045983d
    MOV EAX,dword ptr [EBP + -0x8]      ; 00459840
    CMP EAX,dword ptr [EDX + EBP*0x1 + 0xfffff738] ; 00459843
    JGE 0x0045995a                      ; 0045984a
        ;   XREF to: 0045995a (CONDITIONAL_JUMP)  ; LAB_0045995a
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459850
    MOV dword ptr [EAX + 0xa4],0x3      ; 00459853 | DAT_016e99b4 | DAT_016e9b38
    MOV EAX,dword ptr [EBP + -0x30]     ; 0045985d
    MOV EDX,dword ptr [EBP + -0x4]      ; 00459860 | g_ModelPolygonData
    MOV dword ptr [EDX + 0x178],EAX     ; 00459863 | DAT_016e9a88 | DAT_016e9c0c
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459869
    ADD EAX,0x140                       ; 0045986c
    PUSH EAX                            ; 00459871 | DAT_016e9a50 | DAT_016e9bd4
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459872
    ADD EAX,0x100                       ; 00459875
    PUSH EAX                            ; 0045987a | DAT_016e9a10 | DAT_016e9b94
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045987b
    ADD EAX,0xc0                        ; 0045987e
    PUSH EAX                            ; 00459883 | DAT_016e99d0
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459884
    ADD EAX,0x13c                       ; 00459887
    PUSH EAX                            ; 0045988c | DAT_016e9a4c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045988d
    ADD EAX,0xfc                        ; 00459890
    PUSH EAX                            ; 00459895 | DAT_016e9a0c
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459896
    ADD EAX,0xbc                        ; 00459899
    PUSH EAX                            ; 0045989e | DAT_016e99cc
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045989f
    ADD EAX,0x138                       ; 004598a2
    PUSH EAX                            ; 004598a7 | DAT_016e9a48
    MOV EAX,dword ptr [EBP + -0x4]      ; 004598a8
    ADD EAX,0xf8                        ; 004598ab
    PUSH EAX                            ; 004598b0 | DAT_016e9a08
    MOV EAX,dword ptr [EBP + -0x4]      ; 004598b1
    ADD EAX,0xb8                        ; 004598b4
    PUSH EAX                            ; 004598b9 | DAT_016e99c8
    LEA EAX,[EBP + 0xfffff62c]          ; 004598ba
    PUSH EAX                            ; 004598c0
    MOV EAX,0x61ac78                    ; 004598c1 | = "%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n"
    PUSH EAX                            ; 004598c6 | = "%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x24]     ; 004598c7
    PUSH EAX                            ; 004598ca
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004598cb
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 004598d0
    CMP EAX,0xa                         ; 004598d3
    JZ 0x004598dd                       ; 004598d6
        ;   XREF to: 004598dd (CONDITIONAL_JUMP)  ; LAB_004598dd
    JMP 0x00459478                      ; 004598d8
        ;   XREF to: 00459478 (UNCONDITIONAL_JUMP)  ; LAB_00459478
    CMP dword ptr [EBP + 0xfffff62c],0x0 ; 004598dd
        ;   Label: LAB_004598dd
    JL 0x00459945                       ; 004598e4
        ;   XREF to: 00459945 (CONDITIONAL_JUMP)  ; LAB_00459945
    MOV ESI,dword ptr [EBP + -0x4]      ; 004598e6
    MOV dword ptr [ESI],0x2             ; 004598e9 | g_ModelPolygonData
    IMUL ESI,dword ptr [EBP + 0xfffff62c],0x50 ; 004598ef
    ADD ESI,dword ptr [EBP + -0x28]     ; 004598f6
    MOV EDI,dword ptr [EBP + -0x4]      ; 004598f9
    ADD EDI,0x54                        ; 004598fc
    PUSH EDI                            ; 004598ff | DAT_016e9964
    MOV AL,byte ptr [ESI]               ; 00459900
        ;   Label: LAB_00459900
    MOV byte ptr [EDI],AL               ; 00459902 | DAT_016e9964 | DAT_016e9966
    CMP AL,0x0                          ; 00459904
    JZ 0x00459918                       ; 00459906
        ;   XREF to: 00459918 (CONDITIONAL_JUMP)  ; LAB_00459918
    MOV AL,byte ptr [ESI + 0x1]         ; 00459908
    ADD ESI,0x2                         ; 0045990b
    MOV byte ptr [EDI + 0x1],AL         ; 0045990e | DAT_016e9965 | DAT_016e9967
    ADD EDI,0x2                         ; 00459911
    CMP AL,0x0                          ; 00459914
    JNZ 0x00459900                      ; 00459916
        ;   XREF to: 00459900 (CONDITIONAL_JUMP)  ; LAB_00459900
    POP EDI                             ; 00459918
        ;   Label: LAB_00459918
    IMUL ESI,dword ptr [EBP + 0xfffff62c],0x50 ; 00459919
    ADD ESI,dword ptr [EBP + -0x28]     ; 00459920
    MOV EDI,dword ptr [EBP + -0x4]      ; 00459923
    ADD EDI,0x4                         ; 00459926
    PUSH EDI                            ; 00459929 | DAT_016e9914
    MOV AL,byte ptr [ESI]               ; 0045992a
        ;   Label: LAB_0045992a
    MOV byte ptr [EDI],AL               ; 0045992c | DAT_016e9914 | DAT_016e9916
    CMP AL,0x0                          ; 0045992e
    JZ 0x00459942                       ; 00459930
        ;   XREF to: 00459942 (CONDITIONAL_JUMP)  ; LAB_00459942
    MOV AL,byte ptr [ESI + 0x1]         ; 00459932
    ADD ESI,0x2                         ; 00459935
    MOV byte ptr [EDI + 0x1],AL         ; 00459938 | DAT_016e9915 | DAT_016e9917
    ADD EDI,0x2                         ; 0045993b
    CMP AL,0x0                          ; 0045993e
    JNZ 0x0045992a                      ; 00459940
        ;   XREF to: 0045992a (CONDITIONAL_JUMP)  ; LAB_0045992a
    POP EDI                             ; 00459942
        ;   Label: LAB_00459942
    JMP 0x0045994e                      ; 00459943
        ;   XREF to: 0045994e (UNCONDITIONAL_JUMP)  ; LAB_0045994e
    MOV EAX,dword ptr [EBP + -0x4]      ; 00459945
        ;   Label: LAB_00459945
    MOV dword ptr [EAX],0x1             ; 00459948 | g_ModelPolygonData
    ADD dword ptr [EBP + -0x4],0x184    ; 0045994e | DAT_016e9a94
        ;   Label: LAB_0045994e
    JMP 0x00459837                      ; 00459955
        ;   XREF to: 00459837 (UNCONDITIONAL_JUMP)  ; LAB_00459837
    JMP 0x0045981c                      ; 0045995a
        ;   XREF to: 0045981c (UNCONDITIONAL_JUMP)  ; LAB_0045981c
        ;   Label: LAB_0045995a
    PUSH 0x1                            ; 0045995f
        ;   Label: LAB_0045995f
    MOV EAX,dword ptr [EBP + -0x24]     ; 00459961
    PUSH EAX                            ; 00459964
    CALL shape_design.c_skipLines_FUN_00459360 ; 00459965
        ;   XREF to: 00459360 (UNCONDITIONAL_CALL)  ; void shape_design.c_skipLines_FUN_00459360(_FILE * file, int line_count)
    ADD ESP,0x8                         ; 0045996a
    MOV dword ptr [EBP + -0x30],0x0     ; 0045996d
    JMP 0x00459979                      ; 00459974
        ;   XREF to: 00459979 (UNCONDITIONAL_JUMP)  ; LAB_00459979
    INC dword ptr [EBP + -0x30]         ; 00459976
        ;   Label: LAB_00459976
    MOV EAX,dword ptr [EBP + -0x30]     ; 00459979
        ;   Label: LAB_00459979
    CMP EAX,dword ptr [0x01626408]      ; 0045997c | g_VertexCount
    JGE 0x004599cc                      ; 00459982
        ;   XREF to: 004599cc (CONDITIONAL_JUMP)  ; LAB_004599cc
    IMUL EDX,dword ptr [EBP + -0x30],0x14 ; 00459984
    MOV EAX,0x162640c                   ; 00459988 | g_LoadedVertices
    ADD EAX,EDX                         ; 0045998d
    ADD EAX,0x8                         ; 0045998f
    PUSH EAX                            ; 00459992
    IMUL EAX,dword ptr [EBP + -0x30],0x14 ; 00459993
    MOV EDX,0x162640c                   ; 00459997 | g_LoadedVertices
    ADD EAX,EDX                         ; 0045999c
    ADD EAX,0x4                         ; 0045999e
    PUSH EAX                            ; 004599a1
    IMUL EAX,dword ptr [EBP + -0x30],0x14 ; 004599a2
    MOV EDX,0x162640c                   ; 004599a6 | g_LoadedVertices
    ADD EAX,EDX                         ; 004599ab
    PUSH EAX                            ; 004599ad
    MOV EAX,0x61ac97                    ; 004599ae | = "%f,%f,%f\n"
    PUSH EAX                            ; 004599b3 | = "%f,%f,%f\n"
    MOV EAX,dword ptr [EBP + -0x24]     ; 004599b4
    PUSH EAX                            ; 004599b7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004599b8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004599bd
    CMP EAX,0x3                         ; 004599c0
    JZ 0x004599ca                       ; 004599c3
        ;   XREF to: 004599ca (CONDITIONAL_JUMP)  ; LAB_004599ca
    JMP 0x00459478                      ; 004599c5
        ;   XREF to: 00459478 (UNCONDITIONAL_JUMP)  ; LAB_00459478
    JMP 0x00459976                      ; 004599ca
        ;   XREF to: 00459976 (UNCONDITIONAL_JUMP)  ; LAB_00459976
        ;   Label: LAB_004599ca
    CMP dword ptr [EBP + -0x28],0x0     ; 004599cc
        ;   Label: LAB_004599cc
    JZ 0x004599e9                       ; 004599d0
        ;   XREF to: 004599e9 (CONDITIONAL_JUMP)  ; LAB_004599e9
    PUSH 0x42f                          ; 004599d2
    MOV EAX,0x61aca1                    ; 004599d7 | = "..\\shape\\design.c"
    PUSH EAX                            ; 004599dc | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x28]     ; 004599dd
    PUSH EAX                            ; 004599e0
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004599e1
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004599e6
    PUSH 0x433                          ; 004599e9
        ;   Label: LAB_004599e9
    MOV EAX,0x61acb3                    ; 004599ee | = "..\\shape\\design.c"
    PUSH EAX                            ; 004599f3 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x24]     ; 004599f4
    PUSH EAX                            ; 004599f7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004599f8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004599fd
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 00459a00
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculateVertexNormals_FUN_0045be40()
    MOV dword ptr [EBP + -0x2c],0x1     ; 00459a05
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00459a0c
        ;   Label: LAB_00459a0c
    MOV ESP,EBP                         ; 00459a0f
    POP EBP                             ; 00459a11
    POP EDI                             ; 00459a12
    POP ESI                             ; 00459a13
    POP EBX                             ; 00459a14
    RET                                 ; 00459a15

