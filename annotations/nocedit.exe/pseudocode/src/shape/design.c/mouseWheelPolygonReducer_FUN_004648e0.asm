; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_mouseWheelPolygonReducer_FUN_004648e0(int selected_polygon_index)
;
; Parameters:
; int              Stack[0x4]:4   selected_polygon_index
; Local Variables:
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 00460713
;
; Referenced Globals:
;   char s_EmptyChar_0061c2ba = \x00
;   TerminatedCString s_shape_design_c_0061c2bb
;   TerminatedCString s_shape_design_c_0061c2cd
;   TerminatedCString s_Unable_to_get_mem_for_ve_0061c2df
;   TerminatedCString s_shape_design_c_0061c31e
;   TerminatedCString s_shape_design_c_0061c330
;   TerminatedCString s_Unable_to_get_mem_for_po_0061c342
;   TerminatedCString s_shape_design_c_0061c381
;   TerminatedCString s_shape_design_c_0061c393
;   TerminatedCString s_shape_design_c_0061c3a5
;   TerminatedCString s_shape_design_c_0061c3b7
;   TerminatedCString s_Wheel_polygon_reducer_on_0061c3c9
;   char[80] g_LoadedModelName
;   undefined4 g_LoadedModelName+1
;   undefined4 g_LoadedModelName+2
;   ... and 24 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c__strcmp_FUN_005fef20
;   engine_2d.c_drawTextColor_FUN_00402430
;   shape_design.c_complexPolygonReduction_FUN_00463b30
;   shape_design.c_detectMouseButtonClick_FUN_00464870
;   shape_design.c_findClosestPolygonToMouse_FUN_00466250
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
;   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
;   wincore_windll.cpp_lockFrame_FUN_005b7210
;   wincore_windll.cpp_unlockFrame_FUN_005b7250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004648e0
        ;   Label: shape_design.c_mouseWheelPolygonReducer_FUN_004648e0
    PUSH ESI                            ; 004648e1
    PUSH EDI                            ; 004648e2
    PUSH EBP                            ; 004648e3
    MOV EBP,ESP                         ; 004648e4
    SUB ESP,0x8                         ; 004648e6
    MOV dword ptr [EBP + -0x4],0x32     ; 004648ec
    MOV EAX,0x61c2ba                    ; 004648f3 | s_EmptyChar_0061c2ba
    PUSH EAX                            ; 004648f8 | s_EmptyChar_0061c2ba
    MOV EAX,0x66eda8                    ; 004648f9 | g_LoadedModelName
    PUSH EAX                            ; 004648fe | g_LoadedModelName
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004648ff
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00464904
    TEST EAX,EAX                        ; 00464907
    JNZ 0x00464917                      ; 00464909
        ;   XREF to: 00464917 (CONDITIONAL_JUMP)  ; LAB_00464917
    MOV dword ptr [EBP + -0x8],0xffffffff ; 0046490b
    JMP 0x00464c7a                      ; 00464912
        ;   XREF to: 00464c7a (UNCONDITIONAL_JUMP)  ; LAB_00464c7a
    CMP byte ptr [0x02d03ea9],0x0       ; 00464917 | CHAR_ARRAY_02d03ea9
        ;   Label: LAB_00464917
    JZ 0x00464929                       ; 0046491e
        ;   XREF to: 00464929 (CONDITIONAL_JUMP)  ; LAB_00464929
    CMP byte ptr [0x02d03ec2],0x0       ; 00464920 | CHAR_ARRAY_02d03ec2
    JNZ 0x0046492e                      ; 00464927
        ;   XREF to: 0046492e (CONDITIONAL_JUMP)  ; LAB_0046492e
    JMP 0x00464a8c                      ; 00464929
        ;   XREF to: 00464a8c (UNCONDITIONAL_JUMP)  ; LAB_00464a8c
        ;   Label: LAB_00464929
    MOV byte ptr [0x02d03ea9],0x0       ; 0046492e | CHAR_ARRAY_02d03ea9
        ;   Label: LAB_0046492e
    XOR byte ptr [0x015c4844],0x1       ; 00464935 | g_PolygonReducerEnabled
    CMP dword ptr [0x015c4844],0x0      ; 0046493c | g_PolygonReducerEnabled
    JZ 0x00464a28                       ; 00464943
        ;   XREF to: 00464a28 (CONDITIONAL_JUMP)  ; LAB_00464a28
    PUSH 0x1a98                         ; 00464949
    MOV EAX,0x61c2bb                    ; 0046494e | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464953 | = "..\\shape\\design.c"
    MOV EAX,[0x01626408]                ; 00464954 | g_VertexCount
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464959
    IMUL EAX,EAX,0x14                   ; 0046495c
    PUSH EAX                            ; 0046495f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00464960
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00464965
    MOV [0x015c4848],EAX                ; 00464968 | g_BackupVertices
    CMP dword ptr [0x015c4848],0x0      ; 0046496d | g_BackupVertices
    JNZ 0x00464998                      ; 00464974
        ;   XREF to: 00464998 (CONDITIONAL_JUMP)  ; LAB_00464998
    MOV dword ptr [0x02f0ca48],0x61c2cd ; 00464976 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x1a9a   ; 00464980 | g_CurrentLineNumber
    MOV EAX,0x61c2df                    ; 0046498a | = "Unable to get mem for vertices in mou..."
    PUSH EAX                            ; 0046498f | = "Unable to get mem for vertices in mou..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00464990
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00464995
    PUSH 0x1a9c                         ; 00464998
        ;   Label: LAB_00464998
    MOV EAX,0x61c31e                    ; 0046499d | = "..\\shape\\design.c"
    PUSH EAX                            ; 004649a2 | = "..\\shape\\design.c"
    MOV EAX,[0x016e990c]                ; 004649a3 | g_PolygonCount
    ADD EAX,dword ptr [EBP + -0x4]      ; 004649a8
    IMUL EAX,EAX,0x184                  ; 004649ab
    PUSH EAX                            ; 004649b1
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004649b2
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004649b7
    MOV [0x015c484c],EAX                ; 004649ba | g_BackupPolygons
    CMP dword ptr [0x015c484c],0x0      ; 004649bf | g_BackupPolygons
    JNZ 0x004649ea                      ; 004649c6
        ;   XREF to: 004649ea (CONDITIONAL_JUMP)  ; LAB_004649ea
    MOV dword ptr [0x02f0ca48],0x61c330 ; 004649c8 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x1a9e   ; 004649d2 | g_CurrentLineNumber
    MOV EAX,0x61c342                    ; 004649dc | = "Unable to get mem for polygons in mou..."
    PUSH EAX                            ; 004649e1 | = "Unable to get mem for polygons in mou..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004649e2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004649e7
    MOV ESI,dword ptr [0x01626408]      ; 004649ea | g_VertexCount
        ;   Label: LAB_004649ea
    MOV dword ptr [0x015c4850],ESI      ; 004649f0 | g_BackupVertexCount
    MOV ESI,dword ptr [0x016e990c]      ; 004649f6 | g_PolygonCount
    MOV dword ptr [0x015c4854],ESI      ; 004649fc | g_BackupPolygonCount
    MOV ESI,0x66eda8                    ; 00464a02 | g_LoadedModelName
    MOV EDI,0x15c4858                   ; 00464a07 | g_BackupModelName
    PUSH EDI                            ; 00464a0c | g_BackupModelName
    MOV AL,byte ptr [ESI]               ; 00464a0d | g_LoadedModelName | g_LoadedModelName+2
        ;   Label: LAB_00464a0d
    MOV byte ptr [EDI],AL               ; 00464a0f | g_BackupModelName | DAT_015c485a
    CMP AL,0x0                          ; 00464a11
    JZ 0x00464a25                       ; 00464a13
        ;   XREF to: 00464a25 (CONDITIONAL_JUMP)  ; LAB_00464a25
    MOV AL,byte ptr [ESI + 0x1]         ; 00464a15 | g_LoadedModelName+1 | DAT_0066edab
    ADD ESI,0x2                         ; 00464a18
    MOV byte ptr [EDI + 0x1],AL         ; 00464a1b | DAT_015c4859 | DAT_015c485b
    ADD EDI,0x2                         ; 00464a1e
    CMP AL,0x0                          ; 00464a21
    JNZ 0x00464a0d                      ; 00464a23
        ;   XREF to: 00464a0d (CONDITIONAL_JUMP)  ; LAB_00464a0d
    POP EDI                             ; 00464a25
        ;   Label: LAB_00464a25
    JMP 0x00464a8c                      ; 00464a26
        ;   XREF to: 00464a8c (UNCONDITIONAL_JUMP)  ; LAB_00464a8c
    CMP dword ptr [0x015c484c],0x0      ; 00464a28 | g_BackupPolygons
        ;   Label: LAB_00464a28
    JZ 0x00464a54                       ; 00464a2f
        ;   XREF to: 00464a54 (CONDITIONAL_JUMP)  ; LAB_00464a54
    PUSH 0x1aaa                         ; 00464a31
    MOV EAX,0x61c381                    ; 00464a36 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464a3b | = "..\\shape\\design.c"
    PUSH dword ptr [0x015c484c]         ; 00464a3c | g_BackupPolygons
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00464a42
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00464a47
    MOV dword ptr [0x015c484c],0x0      ; 00464a4a | g_BackupPolygons
    CMP dword ptr [0x015c4848],0x0      ; 00464a54 | g_BackupVertices
        ;   Label: LAB_00464a54
    JZ 0x00464a80                       ; 00464a5b
        ;   XREF to: 00464a80 (CONDITIONAL_JUMP)  ; LAB_00464a80
    PUSH 0x1aae                         ; 00464a5d
    MOV EAX,0x61c393                    ; 00464a62 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464a67 | = "..\\shape\\design.c"
    PUSH dword ptr [0x015c4848]         ; 00464a68 | g_BackupVertices
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00464a6e
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00464a73
    MOV dword ptr [0x015c4848],0x0      ; 00464a76 | g_BackupVertices
    MOV dword ptr [EBP + -0x8],0xffffffff ; 00464a80
        ;   Label: LAB_00464a80
    JMP 0x00464c7a                      ; 00464a87
        ;   XREF to: 00464c7a (UNCONDITIONAL_JUMP)  ; LAB_00464c7a
    CMP dword ptr [0x015c4844],0x0      ; 00464a8c | g_PolygonReducerEnabled
        ;   Label: LAB_00464a8c
    JZ 0x00464acb                       ; 00464a93
        ;   XREF to: 00464acb (CONDITIONAL_JUMP)  ; LAB_00464acb
    MOV EAX,0x66eda8                    ; 00464a95 | g_LoadedModelName
    PUSH EAX                            ; 00464a9a | g_LoadedModelName
    MOV EAX,0x15c4858                   ; 00464a9b | g_BackupModelName
    PUSH EAX                            ; 00464aa0 | g_BackupModelName
    CALL crt_string.c__strcmp_FUN_005fef20 ; 00464aa1
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00464aa6
    TEST EAX,EAX                        ; 00464aa9
    JNZ 0x00464aba                      ; 00464aab
        ;   XREF to: 00464aba (CONDITIONAL_JUMP)  ; LAB_00464aba
    MOV EAX,[0x01626408]                ; 00464aad | g_VertexCount
    CMP EAX,dword ptr [0x015c4850]      ; 00464ab2 | g_BackupVertexCount
    JLE 0x00464abc                      ; 00464ab8
        ;   XREF to: 00464abc (CONDITIONAL_JUMP)  ; LAB_00464abc
    JMP 0x00464ac9                      ; 00464aba
        ;   XREF to: 00464ac9 (UNCONDITIONAL_JUMP)  ; LAB_00464ac9
        ;   Label: LAB_00464aba
    MOV EAX,[0x016e990c]                ; 00464abc | g_PolygonCount
        ;   Label: LAB_00464abc
    CMP EAX,dword ptr [0x015c4854]      ; 00464ac1 | g_BackupPolygonCount
    JLE 0x00464acb                      ; 00464ac7
        ;   XREF to: 00464acb (CONDITIONAL_JUMP)  ; LAB_00464acb
    JMP 0x00464acd                      ; 00464ac9
        ;   XREF to: 00464acd (UNCONDITIONAL_JUMP)  ; LAB_00464acd
        ;   Label: LAB_00464ac9
    JMP 0x00464b3b                      ; 00464acb
        ;   XREF to: 00464b3b (UNCONDITIONAL_JUMP)  ; LAB_00464b3b
        ;   Label: LAB_00464acb
    CMP dword ptr [0x015c484c],0x0      ; 00464acd | g_BackupPolygons
        ;   Label: LAB_00464acd
    JZ 0x00464af9                       ; 00464ad4
        ;   XREF to: 00464af9 (CONDITIONAL_JUMP)  ; LAB_00464af9
    PUSH 0x1ac1                         ; 00464ad6
    MOV EAX,0x61c3a5                    ; 00464adb | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464ae0 | = "..\\shape\\design.c"
    PUSH dword ptr [0x015c484c]         ; 00464ae1 | g_BackupPolygons
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00464ae7
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00464aec
    MOV dword ptr [0x015c484c],0x0      ; 00464aef | g_BackupPolygons
    CMP dword ptr [0x015c4848],0x0      ; 00464af9 | g_BackupVertices
        ;   Label: LAB_00464af9
    JZ 0x00464b25                       ; 00464b00
        ;   XREF to: 00464b25 (CONDITIONAL_JUMP)  ; LAB_00464b25
    PUSH 0x1ac5                         ; 00464b02
    MOV EAX,0x61c3b7                    ; 00464b07 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464b0c | = "..\\shape\\design.c"
    PUSH dword ptr [0x015c4848]         ; 00464b0d | g_BackupVertices
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00464b13
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00464b18
    MOV dword ptr [0x015c4848],0x0      ; 00464b1b | g_BackupVertices
    MOV dword ptr [0x015c4844],0x0      ; 00464b25 | g_PolygonReducerEnabled
        ;   Label: LAB_00464b25
    MOV dword ptr [EBP + -0x8],0xffffffff ; 00464b2f
    JMP 0x00464c7a                      ; 00464b36
        ;   XREF to: 00464c7a (UNCONDITIONAL_JUMP)  ; LAB_00464c7a
    CMP dword ptr [0x015c4844],0x0      ; 00464b3b | g_PolygonReducerEnabled
        ;   Label: LAB_00464b3b
    JNZ 0x00464b4f                      ; 00464b42
        ;   XREF to: 00464b4f (CONDITIONAL_JUMP)  ; LAB_00464b4f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464b44
    MOV dword ptr [EBP + -0x8],EAX      ; 00464b47
    JMP 0x00464c7a                      ; 00464b4a
        ;   XREF to: 00464c7a (UNCONDITIONAL_JUMP)  ; LAB_00464c7a
    CALL shape_design.c_findClosestPolygonToMouse_FUN_00466250 ; 00464b4f
        ;   XREF to: 00466250 (UNCONDITIONAL_CALL)  ; int shape_design.c_findClosestPolygonToMouse_FUN_00466250()
        ;   Label: LAB_00464b4f
    MOV dword ptr [EBP + 0x14],EAX      ; 00464b54
    MOV EAX,[0x00679398]                ; 00464b57 | g_WindowHeight
    SUB EAX,0x4d                        ; 00464b5c
    PUSH EAX                            ; 00464b5f
    PUSH 0x0                            ; 00464b60
    MOV EAX,0x61c3c9                    ; 00464b62 | = "Wheel polygon reducer on"
    PUSH EAX                            ; 00464b67 | = "Wheel polygon reducer on"
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00464b68
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 00464b6d
    PUSH 0x1                            ; 00464b70
    CALL shape_design.c_detectMouseButtonClick_FUN_00464870 ; 00464b72
        ;   XREF to: 00464870 (UNCONDITIONAL_CALL)  ; int shape_design.c_detectMouseButtonClick_FUN_00464870(int mouse_button_mask)
    ADD ESP,0x4                         ; 00464b77
    TEST EAX,EAX                        ; 00464b7a
    JZ 0x00464c05                       ; 00464b7c
        ;   XREF to: 00464c05 (CONDITIONAL_JUMP)  ; LAB_00464c05
    IMUL ECX,dword ptr [0x01626408],0x14 ; 00464b82 | g_VertexCount
    MOV ESI,0x162640c                   ; 00464b89 | g_LoadedVertices
    MOV EDI,dword ptr [0x015c4848]      ; 00464b8e | g_BackupVertices
    PUSH EDI                            ; 00464b94
    MOV EAX,ECX                         ; 00464b95
    SHR ECX,0x2                         ; 00464b97
    MOVSD.REP ES:EDI,ESI                ; 00464b9a | g_LoadedVertices | DAT_01626410
    MOV CL,AL                           ; 00464b9c
    AND CL,0x3                          ; 00464b9e
    MOVSB.REP ES:EDI,ESI                ; 00464ba1 | g_LoadedVertices | DAT_01626410 | DAT_01626410+1
    POP EDI                             ; 00464ba3
    IMUL ECX,dword ptr [0x016e990c],0x184 ; 00464ba4 | g_PolygonCount
    MOV ESI,0x16e9910                   ; 00464bae | g_ModelPolygonData
    MOV EDI,dword ptr [0x015c484c]      ; 00464bb3 | g_BackupPolygons
    PUSH EDI                            ; 00464bb9
    MOV EAX,ECX                         ; 00464bba
    SHR ECX,0x2                         ; 00464bbc
    MOVSD.REP ES:EDI,ESI                ; 00464bbf | g_ModelPolygonData | DAT_016e9914
    MOV CL,AL                           ; 00464bc1
    AND CL,0x3                          ; 00464bc3
    MOVSB.REP ES:EDI,ESI                ; 00464bc6 | g_ModelPolygonData | DAT_016e9914 | DAT_016e9915
    POP EDI                             ; 00464bc8
    MOV EAX,[0x01626408]                ; 00464bc9 | g_VertexCount
    MOV [0x015c4850],EAX                ; 00464bce | g_BackupVertexCount
    MOV EAX,[0x016e990c]                ; 00464bd3 | g_PolygonCount
    MOV [0x015c4854],EAX                ; 00464bd8 | g_BackupPolygonCount
    PUSH 0x0                            ; 00464bdd
    CALL wincore_windll.cpp_unlockFrame_FUN_005b7250 ; 00464bdf
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 00464be4
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 00464be7
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464bec
    PUSH EAX                            ; 00464bef
    CALL shape_design.c_complexPolygonReduction_FUN_00463b30 ; 00464bf0
        ;   XREF to: 00463b30 (UNCONDITIONAL_CALL)  ; int shape_design.c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index)
    ADD ESP,0x4                         ; 00464bf5
    MOV dword ptr [EBP + 0x14],EAX      ; 00464bf8
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 00464bfb
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    CALL wincore_windll.cpp_lockFrame_FUN_005b7210 ; 00464c00
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_lockFrame_FUN_005b7210()
    CMP byte ptr [0x02d03eae],0x0       ; 00464c05 | CHAR_ARRAY_02d03eae
        ;   Label: LAB_00464c05
    JZ 0x00464c74                       ; 00464c0c
        ;   XREF to: 00464c74 (CONDITIONAL_JUMP)  ; LAB_00464c74
    MOV byte ptr [0x02d03eae],0x0       ; 00464c0e | CHAR_ARRAY_02d03eae
    IMUL ECX,dword ptr [0x015c4850],0x14 ; 00464c15 | g_BackupVertexCount
    MOV ESI,dword ptr [0x015c4848]      ; 00464c1c | g_BackupVertices
    MOV EDI,0x162640c                   ; 00464c22 | g_LoadedVertices
    PUSH EDI                            ; 00464c27 | g_LoadedVertices
    MOV EAX,ECX                         ; 00464c28
    SHR ECX,0x2                         ; 00464c2a
    MOVSD.REP ES:EDI,ESI                ; 00464c2d | g_LoadedVertices | DAT_01626410
    MOV CL,AL                           ; 00464c2f
    AND CL,0x3                          ; 00464c31
    MOVSB.REP ES:EDI,ESI                ; 00464c34 | g_LoadedVertices | DAT_01626410 | DAT_01626410+1
    POP EDI                             ; 00464c36
    IMUL ECX,dword ptr [0x015c4854],0x184 ; 00464c37 | g_BackupPolygonCount
    MOV ESI,dword ptr [0x015c484c]      ; 00464c41 | g_BackupPolygons
    MOV EDI,0x16e9910                   ; 00464c47 | g_ModelPolygonData
    PUSH EDI                            ; 00464c4c | g_ModelPolygonData
    MOV EAX,ECX                         ; 00464c4d
    SHR ECX,0x2                         ; 00464c4f
    MOVSD.REP ES:EDI,ESI                ; 00464c52 | g_ModelPolygonData | DAT_016e9914
    MOV CL,AL                           ; 00464c54
    AND CL,0x3                          ; 00464c56
    MOVSB.REP ES:EDI,ESI                ; 00464c59 | g_ModelPolygonData | DAT_016e9914 | DAT_016e9915
    POP EDI                             ; 00464c5b
    MOV ECX,dword ptr [0x015c4850]      ; 00464c5c | g_BackupVertexCount
    MOV dword ptr [0x01626408],ECX      ; 00464c62 | g_VertexCount
    MOV ECX,dword ptr [0x015c4854]      ; 00464c68 | g_BackupPolygonCount
    MOV dword ptr [0x016e990c],ECX      ; 00464c6e | g_PolygonCount
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464c74
        ;   Label: LAB_00464c74
    MOV dword ptr [EBP + -0x8],EAX      ; 00464c77
    MOV EAX,dword ptr [EBP + -0x8]      ; 00464c7a
        ;   Label: LAB_00464c7a
    MOV ESP,EBP                         ; 00464c7d
    POP EBP                             ; 00464c7f
    POP EDI                             ; 00464c80
    POP ESI                             ; 00464c81
    POP EBX                             ; 00464c82
    RET                                 ; 00464c83

