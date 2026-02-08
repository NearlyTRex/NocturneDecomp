; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_optimizePolygonMesh_FUN_004658e0 (float angle_tolerance,int strict_mode,int display_progress)
;
; Parameters:
; float            Stack[0x4]:4   angle_tolerance
; int              Stack[0x8]:4   strict_mode
; int              Stack[0xc]:4   display_progress
; Local Variables:
; undefined8       Stack[-0x78]:8  local_78
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 at 00482e6b
;   shape_design.c_configureFullPassPolygonReduction_FUN_00465810 at 004658cd
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7de2
;
; Referenced Globals:
;   TerminatedCString s_Scanning_polygons_0061c5f9
;   double g_DegToRadConversion = 0.0174532925200000
;   TerminatedCString s_Original_polygons_d_New__0061c616
;   TerminatedCString s_Hit_a_key_0061c64f
;   undefined4 s_Hit_a_key..._0061c650
;   undefined4 s_Hit_a_key..._0061c651
;   undefined4 s_it_a_key..._0061c652
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e9a88
;   int g_PolygonOptimizationPasses
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_strcmp_FUN_005fef20
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_design.c_findVertexMatches_FUN_00461ae0
;   shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
;   shape_design.c_removeDegeneratePolygons_FUN_00465310
;   shape_design.c_removeDuplicatePolygons_FUN_004651b0
;   shape_design.c_removeUnusedVertices_FUN_00463830
;   shape_design.c_validatePolygonNormals_FUN_00461d80
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004658e0
        ;   Label: shape_design.c_optimizePolygonMesh_FUN_004658e0
    PUSH ESI                            ; 004658e1
    PUSH EDI                            ; 004658e2
    PUSH EBP                            ; 004658e3
    MOV EBP,ESP                         ; 004658e4
    SUB ESP,0x60                        ; 004658e6
    MOV EAX,[0x016e990c]                ; 004658ec | g_PolygonCount
    MOV dword ptr [EBP + -0x4],EAX      ; 004658f1
    CMP dword ptr [EBP + 0x1c],0x0      ; 004658f4
    JL 0x00465916                       ; 004658f8
        ;   XREF to: 00465916 (CONDITIONAL_JUMP)  ; LAB_00465916
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004658fa
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004658ff
    PUSH 0x0                            ; 00465901
    MOV EAX,0x61c5f9                    ; 00465903 | = "Scanning polygons..."
    PUSH EAX                            ; 00465908 | = "Scanning polygons..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00465909
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046590e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00465911
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    FLD float ptr [EBP + 0x14]          ; 00465916
        ;   Label: LAB_00465916
    FMUL double ptr [0x0061c60e]        ; 00465919 | g_DegToRadConversion
    FCOS                                ; 0046591f
    FSTP float ptr [EBP + 0x14]         ; 00465921
    MOV EAX,dword ptr [EBP + 0x18]      ; 00465924
    PUSH EAX                            ; 00465927
    CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0 ; 00465928
        ;   XREF to: 004651b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)
    ADD ESP,0x4                         ; 0046592d
    CALL shape_design.c_removeDegeneratePolygons_FUN_00465310 ; 00465930
        ;   XREF to: 00465310 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeDegeneratePolygons_FUN_00465310()
    MOV EAX,[0x016e990c]                ; 00465935 | g_PolygonCount
        ;   Label: LAB_00465935
    MOV dword ptr [EBP + -0x8],EAX      ; 0046593a
    MOV dword ptr [EBP + -0x10],0x0     ; 0046593d
    JMP 0x0046594c                      ; 00465944
        ;   XREF to: 0046594c (UNCONDITIONAL_JUMP)  ; LAB_0046594c
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465946
        ;   Label: LAB_00465946
    INC dword ptr [EBP + -0x10]         ; 00465949
    MOV EAX,[0x016e990c]                ; 0046594c | g_PolygonCount
        ;   Label: LAB_0046594c
    DEC EAX                             ; 00465951
    CMP EAX,dword ptr [EBP + -0x10]     ; 00465952
    JLE 0x00465a94                      ; 00465955
        ;   XREF to: 00465a94 (CONDITIONAL_JUMP)  ; LAB_00465a94
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 0046595b
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00465962 | DAT_016e99b4
    JZ 0x00465970                       ; 00465969
        ;   XREF to: 00465970 (CONDITIONAL_JUMP)  ; LAB_00465970
    JMP 0x00465a8f                      ; 0046596b
        ;   XREF to: 00465a8f (UNCONDITIONAL_JUMP)  ; LAB_00465a8f
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465970
        ;   Label: LAB_00465970
    INC EAX                             ; 00465973
    MOV dword ptr [EBP + -0xc],EAX      ; 00465974
    JMP 0x0046597f                      ; 00465977
        ;   XREF to: 0046597f (UNCONDITIONAL_JUMP)  ; LAB_0046597f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465979
        ;   Label: LAB_00465979
    INC dword ptr [EBP + -0xc]          ; 0046597c
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046597f
        ;   Label: LAB_0046597f
    CMP EAX,dword ptr [0x016e990c]      ; 00465982 | g_PolygonCount
    JGE 0x00465a8f                      ; 00465988
        ;   XREF to: 00465a8f (CONDITIONAL_JUMP)  ; LAB_00465a8f
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 0046598e
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00465995 | DAT_016e99b4
    JZ 0x004659a3                       ; 0046599c
        ;   XREF to: 004659a3 (CONDITIONAL_JUMP)  ; LAB_004659a3
    JMP 0x00465a8f                      ; 0046599e
        ;   XREF to: 00465a8f (UNCONDITIONAL_JUMP)  ; LAB_00465a8f
    IMUL EAX,dword ptr [EBP + -0xc],0x184 ; 004659a3
        ;   Label: LAB_004659a3
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 004659aa | DAT_016e99b4
    JNZ 0x00465a8a                      ; 004659b1
        ;   XREF to: 00465a8a (CONDITIONAL_JUMP)  ; LAB_00465a8a
    FLD float ptr [EBP + 0x14]          ; 004659b7
    SUB ESP,0x8                         ; 004659ba
    FSTP double ptr [ESP]               ; 004659bd
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 004659c0
    MOV EAX,0x16e9910                   ; 004659c7 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004659cc
    PUSH EAX                            ; 004659ce
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 004659cf
    MOV EAX,0x16e9910                   ; 004659d6 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004659db
    PUSH EAX                            ; 004659dd
    CALL shape_design.c_validatePolygonNormals_FUN_00461d80 ; 004659de
        ;   XREF to: 00461d80 (UNCONDITIONAL_CALL)  ; int shape_design.c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance)
    ADD ESP,0x10                        ; 004659e3
    TEST EAX,EAX                        ; 004659e6
    JZ 0x00465a22                       ; 004659e8
        ;   XREF to: 00465a22 (CONDITIONAL_JUMP)  ; LAB_00465a22
    PUSH 0x3                            ; 004659ea
    PUSH 0x3                            ; 004659ec
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 004659ee
    MOV EAX,0x16e9910                   ; 004659f5 | g_ModelPolygonData
    ADD EAX,EDX                         ; 004659fa
    ADD EAX,0xb8                        ; 004659fc
    PUSH EAX                            ; 00465a01
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00465a02
    MOV EAX,0x16e9910                   ; 00465a09 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465a0e
    ADD EAX,0xb8                        ; 00465a10
    PUSH EAX                            ; 00465a15
    CALL shape_design.c_findVertexMatches_FUN_00461ae0 ; 00465a16
        ;   XREF to: 00461ae0 (UNCONDITIONAL_CALL)  ; int shape_design.c_findVertexMatches_FUN_00461ae0(int * vertices1, int * vertices2, int count1, int count2)
    ADD ESP,0x10                        ; 00465a1b
    TEST EAX,EAX                        ; 00465a1e
    JNZ 0x00465a24                      ; 00465a20
        ;   XREF to: 00465a24 (CONDITIONAL_JUMP)  ; LAB_00465a24
    JMP 0x00465a54                      ; 00465a22
        ;   XREF to: 00465a54 (UNCONDITIONAL_JUMP)  ; LAB_00465a54
        ;   Label: LAB_00465a22
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 00465a24
        ;   Label: LAB_00465a24
    MOV EAX,0x16e9910                   ; 00465a2b | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465a30
    ADD EAX,0x54                        ; 00465a32
    PUSH EAX                            ; 00465a35
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00465a36
    MOV EAX,0x16e9910                   ; 00465a3d | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465a42
    ADD EAX,0x54                        ; 00465a44
    PUSH EAX                            ; 00465a47
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00465a48
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00465a4d
    TEST EAX,EAX                        ; 00465a50
    JZ 0x00465a56                       ; 00465a52
        ;   XREF to: 00465a56 (CONDITIONAL_JUMP)  ; LAB_00465a56
    JMP 0x00465a8a                      ; 00465a54
        ;   XREF to: 00465a8a (UNCONDITIONAL_JUMP)  ; LAB_00465a8a
        ;   Label: LAB_00465a54
    CMP dword ptr [EBP + 0x18],0x0      ; 00465a56
        ;   Label: LAB_00465a56
    JZ 0x00465a7a                       ; 00465a5a
        ;   XREF to: 00465a7a (CONDITIONAL_JUMP)  ; LAB_00465a7a
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00465a5c
    IMUL EDX,dword ptr [EBP + -0xc],0x184 ; 00465a63
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 00465a6a | DAT_016e9a88
    CMP EAX,dword ptr [EDX + 0x16e9a88] ; 00465a70 | DAT_016e9a88
    JZ 0x00465a7a                       ; 00465a76
        ;   XREF to: 00465a7a (CONDITIONAL_JUMP)  ; LAB_00465a7a
    JMP 0x00465a8a                      ; 00465a78
        ;   XREF to: 00465a8a (UNCONDITIONAL_JUMP)  ; LAB_00465a8a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465a7a
        ;   Label: LAB_00465a7a
    PUSH EAX                            ; 00465a7d
    MOV EAX,dword ptr [EBP + -0x10]     ; 00465a7e
    PUSH EAX                            ; 00465a81
    CALL shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 ; 00465a82
        ;   XREF to: 00462190 (UNCONDITIONAL_CALL)  ; uint shape_design.c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index, int second_polygon_index)
    ADD ESP,0x8                         ; 00465a87
    JMP 0x00465979                      ; 00465a8a
        ;   XREF to: 00465979 (UNCONDITIONAL_JUMP)  ; LAB_00465979
        ;   Label: LAB_00465a8a
    JMP 0x00465946                      ; 00465a8f
        ;   XREF to: 00465946 (UNCONDITIONAL_JUMP)  ; LAB_00465946
        ;   Label: LAB_00465a8f
    MOV EAX,[0x016e990c]                ; 00465a94 | g_PolygonCount
        ;   Label: LAB_00465a94
    CMP EAX,dword ptr [EBP + -0x8]      ; 00465a99
    JZ 0x00465aa3                       ; 00465a9c
        ;   XREF to: 00465aa3 (CONDITIONAL_JUMP)  ; LAB_00465aa3
    JMP 0x00465935                      ; 00465a9e
        ;   XREF to: 00465935 (UNCONDITIONAL_JUMP)  ; LAB_00465935
    MOV EAX,dword ptr [EBP + 0x18]      ; 00465aa3
        ;   Label: LAB_00465aa3
    PUSH EAX                            ; 00465aa6
    CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0 ; 00465aa7
        ;   XREF to: 004651b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)
    ADD ESP,0x4                         ; 00465aac
    CALL shape_design.c_removeDegeneratePolygons_FUN_00465310 ; 00465aaf
        ;   XREF to: 00465310 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeDegeneratePolygons_FUN_00465310()
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 00465ab4
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeUnusedVertices_FUN_00463830()
    INC dword ptr [0x01e528a8]          ; 00465ab9 | g_PolygonOptimizationPasses
    PUSH dword ptr [0x01e528a8]         ; 00465abf | g_PolygonOptimizationPasses
    PUSH dword ptr [0x016e990c]         ; 00465ac5 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 00465acb
    PUSH EAX                            ; 00465ace
    MOV EAX,0x61c616                    ; 00465acf | = "Original polygons: %d    New total: %..."
    PUSH EAX                            ; 00465ad4 | = "Original polygons: %d    New total: %..."
    LEA EAX,[EBP + -0x60]               ; 00465ad5
    PUSH EAX                            ; 00465ad8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00465ad9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00465ade
    CMP dword ptr [EBP + 0x1c],0x0      ; 00465ae1
    JLE 0x00465b11                      ; 00465ae5
        ;   XREF to: 00465b11 (CONDITIONAL_JUMP)  ; LAB_00465b11
    MOV ESI,0x61c64f                    ; 00465ae7 | = "\n\nHit a key..."
    LEA EDI,[EBP + -0x60]               ; 00465aec
    PUSH EDI                            ; 00465aef
    SUB ECX,ECX                         ; 00465af0
    DEC ECX                             ; 00465af2
    MOV AL,0x0                          ; 00465af3
    SCASB.REPNE ES:EDI                  ; 00465af5
    DEC EDI                             ; 00465af7
    MOV AL,byte ptr [ESI]               ; 00465af8 | = "\n\nHit a key..." | s_Hit_a_key..._0061c651
        ;   Label: LAB_00465af8
    MOV byte ptr [EDI],AL               ; 00465afa
    CMP AL,0x0                          ; 00465afc
    JZ 0x00465b10                       ; 00465afe
        ;   XREF to: 00465b10 (CONDITIONAL_JUMP)  ; LAB_00465b10
    MOV AL,byte ptr [ESI + 0x1]         ; 00465b00 | s_Hit_a_key..._0061c650 | s_it_a_key..._0061c652
    ADD ESI,0x2                         ; 00465b03
    MOV byte ptr [EDI + 0x1],AL         ; 00465b06
    ADD EDI,0x2                         ; 00465b09
    CMP AL,0x0                          ; 00465b0c
    JNZ 0x00465af8                      ; 00465b0e
        ;   XREF to: 00465af8 (CONDITIONAL_JUMP)  ; LAB_00465af8
    POP EDI                             ; 00465b10
        ;   Label: LAB_00465b10
    CMP dword ptr [EBP + 0x1c],0x0      ; 00465b11
        ;   Label: LAB_00465b11
    JL 0x00465b2c                       ; 00465b15
        ;   XREF to: 00465b2c (CONDITIONAL_JUMP)  ; LAB_00465b2c
    PUSH 0x0                            ; 00465b17
    PUSH 0x0                            ; 00465b19
    LEA EAX,[EBP + -0x60]               ; 00465b1b
    PUSH EAX                            ; 00465b1e
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00465b1f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00465b24
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00465b27
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CMP dword ptr [EBP + 0x1c],0x0      ; 00465b2c
        ;   Label: LAB_00465b2c
    JLE 0x00465b37                      ; 00465b30
        ;   XREF to: 00465b37 (CONDITIONAL_JUMP)  ; LAB_00465b37
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00465b32
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV ESP,EBP                         ; 00465b37
        ;   Label: LAB_00465b37
    POP EBP                             ; 00465b39
    POP EDI                             ; 00465b3a
    POP ESI                             ; 00465b3b
    POP EBX                             ; 00465b3c
    RET                                 ; 00465b3d

