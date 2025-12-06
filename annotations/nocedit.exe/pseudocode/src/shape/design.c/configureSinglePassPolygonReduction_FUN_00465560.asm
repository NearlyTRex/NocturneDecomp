; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)
;
; Parameters:
; int              Stack[0x4]:4   ui_mode
; Local Variables:
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x73]:1  local_73
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_polygonReducer_FUN_004654e0 at 00465551
;
; Referenced Globals:
;   TerminatedCString s_Enter_tolerance_angle_8__0061c50b
;   TerminatedCString s_Ignore_different_part_na_0061c52a
;   TerminatedCString s_Scanning_polygons_0061c54e
;   double g_SinglePassDegreesToRadiansConversion = 0.0174532925200000
;   TerminatedCString s_Original_polygons_d_New__0061c56e
;   TerminatedCString s_Hit_a_key_0061c5a7
;   undefined4 s_Hit_a_key..._0061c5a8
;   undefined4 s_Hit_a_key..._0061c5a9
;   undefined4 s_it_a_key..._0061c5aa
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e9a88
;   int g_PolygonOptimizationPasses
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strcmp_FUN_005fef20
;   crt_string.c_strtod_FUN_005ff0f3
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
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

    PUSH EBX                            ; 00465560
        ;   Label: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
    PUSH ESI                            ; 00465561
    PUSH EDI                            ; 00465562
    PUSH EBP                            ; 00465563
    MOV EBP,ESP                         ; 00465564
    SUB ESP,0x6c                        ; 00465566
    MOV EAX,[0x016e990c]                ; 0046556c | int g_PolygonCount
    MOV dword ptr [EBP + -0x10],EAX     ; 00465571
    MOV dword ptr [EBP + -0xc],0x0      ; 00465574
    CMP dword ptr [EBP + 0x14],0x0      ; 0046557b
    JLE 0x004655a0                      ; 0046557f | LAB_004655a0
        ;   XREF to: 004655a0 (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00465581 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    MOV EAX,0x61c50b                    ; 00465586 | = "Enter tolerance angle [8.5] : " | s_Enter_tolerance_angle_8__0061c50b = Enter tolerance angle [8.5] :
    PUSH EAX                            ; 0046558b | = "Enter tolerance angle [8.5] : " | s_Enter_tolerance_angle_8__0061c50b = Enter tolerance angle [8.5] :
    PUSH 0x0                            ; 0046558c
    PUSH 0x0                            ; 0046558e
    PUSH 0x14                           ; 00465590
    LEA EAX,[EBP + -0x64]               ; 00465592
    PUSH EAX                            ; 00465595
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00465596 | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0046559b
    JMP 0x004655a4                      ; 0046559e | LAB_004655a4
        ;   XREF to: 004655a4 (UNCONDITIONAL_JUMP)
    MOV byte ptr [EBP + -0x64],0x0      ; 004655a0
        ;   Label: LAB_004655a0
    MOV dword ptr [EBP + -0x4],0x41080000 ; 004655a4
        ;   Label: LAB_004655a4
    LEA EDI,[EBP + -0x64]               ; 004655ab
    SUB ECX,ECX                         ; 004655ae
    DEC ECX                             ; 004655b0
    XOR EAX,EAX                         ; 004655b1
    SCASB.REPNE ES:EDI                  ; 004655b3
    NOT ECX                             ; 004655b5
    DEC ECX                             ; 004655b7
    TEST ECX,ECX                        ; 004655b8
    JZ 0x004655d4                       ; 004655ba | LAB_004655d4
        ;   XREF to: 004655d4 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x64]               ; 004655bc
    PUSH EAX                            ; 004655bf
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 004655c0 | double crt_string.c_strtod_FUN_005ff0f3(char * str)
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x6c],EAX     ; 004655c5
    MOV dword ptr [EBP + -0x68],EDX     ; 004655c8
    FLD double ptr [EBP + -0x6c]        ; 004655cb
    ADD ESP,0x4                         ; 004655ce
    FSTP float ptr [EBP + -0x4]         ; 004655d1
    CMP dword ptr [EBP + 0x14],0x0      ; 004655d4
        ;   Label: LAB_004655d4
    JLE 0x0046560c                      ; 004655d8 | LAB_0046560c
        ;   XREF to: 0046560c (CONDITIONAL_JUMP)
    MOV EAX,0x61c52a                    ; 004655da | = "Ignore different part names? [y] : " | s_Ignore_different_part_na_0061c52a = Ignore different part names? [y] :
    PUSH EAX                            ; 004655df | = "Ignore different part names? [y] : " | s_Ignore_different_part_na_0061c52a = Ignore different part names? [y] :
    PUSH 0x16                           ; 004655e0
    PUSH 0x0                            ; 004655e2
    PUSH 0x14                           ; 004655e4
    LEA EAX,[EBP + -0x64]               ; 004655e6
    PUSH EAX                            ; 004655e9
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 004655ea | int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004655ef
    XOR EAX,EAX                         ; 004655f2
    MOV AL,byte ptr [EBP + -0x64]       ; 004655f4
    PUSH EAX                            ; 004655f7
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004655f8 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004655fd
    CMP EAX,0x4e                        ; 00465600
    JNZ 0x0046560c                      ; 00465603 | LAB_0046560c
        ;   XREF to: 0046560c (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0xc],0x1      ; 00465605
    CMP dword ptr [EBP + 0x14],0x0      ; 0046560c
        ;   Label: LAB_0046560c
    JL 0x0046562e                       ; 00465610 | LAB_0046562e
        ;   XREF to: 0046562e (CONDITIONAL_JUMP)
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00465612 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 00465617
    PUSH 0x0                            ; 00465619
    MOV EAX,0x61c54e                    ; 0046561b | = "Scanning polygons..." | s_Scanning_polygons_0061c54e = Scanning polygons...
    PUSH EAX                            ; 00465620 | = "Scanning polygons..." | s_Scanning_polygons_0061c54e = Scanning polygons...
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00465621 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00465626
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00465629 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    FLD float ptr [EBP + -0x4]          ; 0046562e
        ;   Label: LAB_0046562e
    FMUL double ptr [0x0061c566]        ; 00465631 | double g_SinglePassDegreesToRadiansConversion
    FCOS                                ; 00465637
    FSTP float ptr [EBP + -0x4]         ; 00465639
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046563c
    PUSH EAX                            ; 0046563f
    CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0 ; 00465640 | void shape_design.c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)
        ;   XREF to: 004651b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00465645
    CALL shape_design.c_removeDegeneratePolygons_FUN_00465310 ; 00465648 | void shape_design.c_removeDegeneratePolygons_FUN_00465310()
        ;   XREF to: 00465310 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x8],0x0      ; 0046564d
    JMP 0x0046565c                      ; 00465654 | LAB_0046565c
        ;   XREF to: 0046565c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465656
        ;   Label: LAB_00465656
    INC dword ptr [EBP + -0x8]          ; 00465659
    MOV EAX,[0x016e990c]                ; 0046565c | int g_PolygonCount
        ;   Label: LAB_0046565c
    DEC EAX                             ; 00465661
    CMP EAX,dword ptr [EBP + -0x8]      ; 00465662
    JLE 0x00465774                      ; 00465665 | LAB_00465774
        ;   XREF to: 00465774 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046566b
    INC EAX                             ; 0046566e
    MOV dword ptr [EBP + -0x14],EAX     ; 0046566f
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 00465672
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00465679 | DAT_016e99b4
    JZ 0x00465687                       ; 00465680 | LAB_00465687
        ;   XREF to: 00465687 (CONDITIONAL_JUMP)
    JMP 0x0046576f                      ; 00465682 | LAB_0046576f
        ;   XREF to: 0046576f (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x14],0x184 ; 00465687
        ;   Label: LAB_00465687
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 0046568e | DAT_016e99b4
    JZ 0x0046569c                       ; 00465695 | LAB_0046569c
        ;   XREF to: 0046569c (CONDITIONAL_JUMP)
    JMP 0x0046576f                      ; 00465697 | LAB_0046576f
        ;   XREF to: 0046576f (UNCONDITIONAL_JUMP)
    FLD float ptr [EBP + -0x4]          ; 0046569c
        ;   Label: LAB_0046569c
    SUB ESP,0x8                         ; 0046569f
    FSTP double ptr [ESP]               ; 004656a2
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 004656a5
    MOV EAX,0x16e9910                   ; 004656ac | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004656b1
    PUSH EAX                            ; 004656b3
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 004656b4
    MOV EAX,0x16e9910                   ; 004656bb | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004656c0
    PUSH EAX                            ; 004656c2
    CALL shape_design.c_validatePolygonNormals_FUN_00461d80 ; 004656c3 | int shape_design.c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance)
        ;   XREF to: 00461d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004656c8
    TEST EAX,EAX                        ; 004656cb
    JZ 0x00465707                       ; 004656cd | LAB_00465707
        ;   XREF to: 00465707 (CONDITIONAL_JUMP)
    PUSH 0x3                            ; 004656cf
    PUSH 0x3                            ; 004656d1
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 004656d3
    MOV EAX,0x16e9910                   ; 004656da | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004656df
    ADD EAX,0xb8                        ; 004656e1
    PUSH EAX                            ; 004656e6
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 004656e7
    MOV EAX,0x16e9910                   ; 004656ee | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004656f3
    ADD EAX,0xb8                        ; 004656f5
    PUSH EAX                            ; 004656fa
    CALL shape_design.c_findVertexMatches_FUN_00461ae0 ; 004656fb | int shape_design.c_findVertexMatches_FUN_00461ae0(int * vertices1, int * vertices2, int count1, int count2)
        ;   XREF to: 00461ae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00465700
    TEST EAX,EAX                        ; 00465703
    JNZ 0x00465709                      ; 00465705 | LAB_00465709
        ;   XREF to: 00465709 (CONDITIONAL_JUMP)
    JMP 0x00465739                      ; 00465707 | LAB_00465739
        ;   Label: LAB_00465707
        ;   XREF to: 00465739 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465709
        ;   Label: LAB_00465709
    MOV EAX,0x16e9910                   ; 00465710 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 00465715
    ADD EAX,0x54                        ; 00465717
    PUSH EAX                            ; 0046571a
    IMUL EDX,dword ptr [EBP + -0x8],0x184 ; 0046571b
    MOV EAX,0x16e9910                   ; 00465722 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 00465727
    ADD EAX,0x54                        ; 00465729
    PUSH EAX                            ; 0046572c
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0046572d | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00465732
    TEST EAX,EAX                        ; 00465735
    JZ 0x0046573b                       ; 00465737 | LAB_0046573b
        ;   XREF to: 0046573b (CONDITIONAL_JUMP)
    JMP 0x0046576f                      ; 00465739 | LAB_0046576f
        ;   Label: LAB_00465739
        ;   XREF to: 0046576f (UNCONDITIONAL_JUMP)
    CMP dword ptr [EBP + -0xc],0x0      ; 0046573b
        ;   Label: LAB_0046573b
    JZ 0x0046575f                       ; 0046573f | LAB_0046575f
        ;   XREF to: 0046575f (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x8],0x184 ; 00465741
    IMUL EDX,dword ptr [EBP + -0x14],0x184 ; 00465748
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 0046574f | DAT_016e9a88
    CMP EAX,dword ptr [EDX + 0x16e9a88] ; 00465755 | DAT_016e9a88
    JZ 0x0046575f                       ; 0046575b | LAB_0046575f
        ;   XREF to: 0046575f (CONDITIONAL_JUMP)
    JMP 0x0046576f                      ; 0046575d | LAB_0046576f
        ;   XREF to: 0046576f (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046575f
        ;   Label: LAB_0046575f
    PUSH EAX                            ; 00465762
    MOV EAX,dword ptr [EBP + -0x8]      ; 00465763
    PUSH EAX                            ; 00465766
    CALL shape_design.c_mergeTrianglesIntoQuad_FUN_00462190 ; 00465767 | uint shape_design.c_mergeTrianglesIntoQuad_FUN_00462190(int first_polygon_index, int second_polygon_index)
        ;   XREF to: 00462190 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046576c
    JMP 0x00465656                      ; 0046576f | LAB_00465656
        ;   Label: LAB_0046576f
        ;   XREF to: 00465656 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 00465774
        ;   Label: LAB_00465774
    PUSH EAX                            ; 00465777
    CALL shape_design.c_removeDuplicatePolygons_FUN_004651b0 ; 00465778 | void shape_design.c_removeDuplicatePolygons_FUN_004651b0(int respect_part_assignments)
        ;   XREF to: 004651b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0046577d
    CALL shape_design.c_removeDegeneratePolygons_FUN_00465310 ; 00465780 | void shape_design.c_removeDegeneratePolygons_FUN_00465310()
        ;   XREF to: 00465310 (UNCONDITIONAL_CALL)
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 00465785 | void shape_design.c_removeUnusedVertices_FUN_00463830()
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)
    INC dword ptr [0x01e528a8]          ; 0046578a | int g_PolygonOptimizationPasses
    PUSH dword ptr [0x01e528a8]         ; 00465790 | int g_PolygonOptimizationPasses
    PUSH dword ptr [0x016e990c]         ; 00465796 | int g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046579c
    PUSH EAX                            ; 0046579f
    MOV EAX,0x61c56e                    ; 004657a0 | = "Original polygons: %d    New total: %..." | s_Original_polygons_d_New__0061c56e = Original polygons: %d    New total: %d

    %d                                  ; Total passes
    PUSH EAX                            ; 004657a5 | = "Original polygons: %d    New total: %..." | s_Original_polygons_d_New__0061c56e = Original polygons: %d    New total: %d

    %d                                  ; Total passes
    LEA EAX,[EBP + -0x64]               ; 004657a6
    PUSH EAX                            ; 004657a9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004657aa | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004657af
    CMP dword ptr [EBP + 0x14],0x0      ; 004657b2
    JLE 0x004657e2                      ; 004657b6 | LAB_004657e2
        ;   XREF to: 004657e2 (CONDITIONAL_JUMP)
    MOV ESI,0x61c5a7                    ; 004657b8 | = "\n\nHit a key..." | s_Hit_a_key_0061c5a7 =

        ; Hit a key...
    LEA EDI,[EBP + -0x64]               ; 004657bd
    PUSH EDI                            ; 004657c0
    SUB ECX,ECX                         ; 004657c1
    DEC ECX                             ; 004657c3
    MOV AL,0x0                          ; 004657c4
    SCASB.REPNE ES:EDI                  ; 004657c6
    DEC EDI                             ; 004657c8
    MOV AL,byte ptr [ESI]               ; 004657c9 | = "\n\nHit a key..." | s_Hit_a_key_0061c5a7 =

        ; Hit a key...
        ;   Label: LAB_004657c9
    MOV byte ptr [EDI],AL               ; 004657cb
    CMP AL,0x0                          ; 004657cd
    JZ 0x004657e1                       ; 004657cf | LAB_004657e1
        ;   XREF to: 004657e1 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004657d1 | s_Hit_a_key..._0061c5a8
    ADD ESI,0x2                         ; 004657d4
    MOV byte ptr [EDI + 0x1],AL         ; 004657d7
    ADD EDI,0x2                         ; 004657da
    CMP AL,0x0                          ; 004657dd
    JNZ 0x004657c9                      ; 004657df | LAB_004657c9
        ;   XREF to: 004657c9 (CONDITIONAL_JUMP)
    POP EDI                             ; 004657e1
        ;   Label: LAB_004657e1
    CMP dword ptr [EBP + 0x14],0x0      ; 004657e2
        ;   Label: LAB_004657e2
    JL 0x004657fd                       ; 004657e6 | LAB_004657fd
        ;   XREF to: 004657fd (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004657e8
    PUSH 0x0                            ; 004657ea
    LEA EAX,[EBP + -0x64]               ; 004657ec
    PUSH EAX                            ; 004657ef
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004657f0 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004657f5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004657f8 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CMP dword ptr [EBP + 0x14],0x0      ; 004657fd
        ;   Label: LAB_004657fd
    JLE 0x00465808                      ; 00465801 | LAB_00465808
        ;   XREF to: 00465808 (CONDITIONAL_JUMP)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00465803 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 00465808
        ;   Label: LAB_00465808
    POP EBP                             ; 0046580a
    POP EDI                             ; 0046580b
    POP ESI                             ; 0046580c
    POP EBX                             ; 0046580d
    RET                                 ; 0046580e

