; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_showPointEditor_FUN_0045c6c0(void)
;
; Local Variables:
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f67d
;
; Referenced Globals:
;   TerminatedCString s_Insert_at_end_0061b349
;   TerminatedCString s_Move_point_d_0061b357
;   TerminatedCString s_from_f_f_f_0061b367
;   TerminatedCString s_c_0061b375
;   TerminatedCString s_c_0061b378
;   TerminatedCString s_c_0061b37b
;   TerminatedCString s_d_d_d_0061b37e
;   TerminatedCString s_point_hlp_0061b387
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 g_PolygonScreenCache[19999].view_mode
;   int g_ZoomLevel
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   ... and 13 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_design.c_doNothing_FUN_0045c4f0
;   shape_design.c_doNothing_FUN_0045c510
;   shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
;   shape_design.c_handleEditorHotkeys_FUN_0045b990
;   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
;   shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
;   shape_design.c_selectVertexToDelete_FUN_0045c5b0
;   shape_design.c_selectVertexToMove_FUN_0045c530
;   shape_design.c_setupViewMatrix_FUN_0045ba60
;   shape_design.c_showHelpFile_FUN_00457f00
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c6c0
        ;   Label: shape_design.c_showPointEditor_FUN_0045c6c0
    PUSH ESI                            ; 0045c6c1
    PUSH EDI                            ; 0045c6c2
    PUSH EBP                            ; 0045c6c3
    MOV EBP,ESP                         ; 0045c6c4
    SUB ESP,0x80                        ; 0045c6c6
    MOV dword ptr [0x01626344],0x10000  ; 0045c6cc | g_ZoomLevel
    CALL wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0 ; 0045c6d6
        ;   XREF to: 005f30c0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearMouseClicks_FUN_005f30c0()
    MOV dword ptr [0x01e528b0],0x0      ; 0045c6db | g_PointEditorMode
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045c6e5
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045c6ea
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045c6ef
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0045c6ef
    CALL shape_design.c_setupViewMatrix_FUN_0045ba60 ; 0045c6f4
        ;   XREF to: 0045ba60 (UNCONDITIONAL_CALL)  ; void shape_design.c_setupViewMatrix_FUN_0045ba60()
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0045c6f9
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
    CMP byte ptr [0x02d03eaf],0x0       ; 0045c6fe | CHAR_ARRAY_02d03eaf
    JZ 0x0045c727                       ; 0045c705
        ;   XREF to: 0045c727 (CONDITIONAL_JUMP)  ; LAB_0045c727
    MOV byte ptr [0x02d03eaf],0x0       ; 0045c707 | CHAR_ARRAY_02d03eaf
    INC dword ptr [0x01626340]          ; 0045c70e | g_PolygonScreenCache[19999].view_mode
    CMP dword ptr [0x01626340],0x2      ; 0045c714 | g_PolygonScreenCache[19999].view_mode
    JLE 0x0045c727                      ; 0045c71b
        ;   XREF to: 0045c727 (CONDITIONAL_JUMP)  ; LAB_0045c727
    MOV dword ptr [0x01626340],0x0      ; 0045c71d | g_PolygonScreenCache[19999].view_mode
    CMP byte ptr [0x02d03ea4],0x0       ; 0045c727 | CHAR_ARRAY_02d03ea4
        ;   Label: LAB_0045c727
    JZ 0x0045c741                       ; 0045c72e
        ;   XREF to: 0045c741 (CONDITIONAL_JUMP)  ; LAB_0045c741
    MOV byte ptr [0x02d03ea4],0x0       ; 0045c730 | CHAR_ARRAY_02d03ea4
    ADD dword ptr [0x01626344],0x400    ; 0045c737 | g_ZoomLevel
    CMP byte ptr [0x02d03ea5],0x0       ; 0045c741 | CHAR_ARRAY_02d03ea5
        ;   Label: LAB_0045c741
    JZ 0x0045c771                       ; 0045c748
        ;   XREF to: 0045c771 (CONDITIONAL_JUMP)  ; LAB_0045c771
    MOV byte ptr [0x02d03ea5],0x0       ; 0045c74a | CHAR_ARRAY_02d03ea5
    SUB dword ptr [0x01626344],0x400    ; 0045c751 | g_ZoomLevel
    CMP dword ptr [0x01626344],0x400    ; 0045c75b | g_ZoomLevel
    JGE 0x0045c771                      ; 0045c765
        ;   XREF to: 0045c771 (CONDITIONAL_JUMP)  ; LAB_0045c771
    MOV dword ptr [0x01626344],0x400    ; 0045c767 | g_ZoomLevel
    MOV EAX,[0x01e528b0]                ; 0045c771 | g_PointEditorMode
        ;   Label: LAB_0045c771
    MOV dword ptr [EBP + -0x78],EAX     ; 0045c776
    JMP 0x0045c82c                      ; 0045c779
        ;   XREF to: 0045c82c (UNCONDITIONAL_JUMP)  ; LAB_0045c82c
    MOV EAX,0x61b349                    ; 0045c77e | = "Insert at end"
        ;   Label: LAB_0045c77e
    PUSH EAX                            ; 0045c783 | = "Insert at end"
    LEA EAX,[EBP + -0x74]               ; 0045c784
    PUSH EAX                            ; 0045c787
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045c788
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0045c78d
    PUSH 0xb                            ; 0045c790
    PUSH 0x0                            ; 0045c792
    LEA EAX,[EBP + -0x74]               ; 0045c794
    PUSH EAX                            ; 0045c797
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045c798
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045c79d
    JMP 0x0045c844                      ; 0045c7a0
        ;   XREF to: 0045c844 (UNCONDITIONAL_JUMP)  ; LAB_0045c844
    PUSH dword ptr [0x01e528b4]         ; 0045c7a5 | g_SelectedPointIndex
        ;   Label: LAB_0045c7a5
    MOV EAX,0x61b357                    ; 0045c7ab | = "Move point : %d"
    PUSH EAX                            ; 0045c7b0 | = "Move point : %d"
    LEA EAX,[EBP + -0x74]               ; 0045c7b1
    PUSH EAX                            ; 0045c7b4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045c7b5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045c7ba
    PUSH 0xb                            ; 0045c7bd
    PUSH 0x0                            ; 0045c7bf
    LEA EAX,[EBP + -0x74]               ; 0045c7c1
    PUSH EAX                            ; 0045c7c4
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045c7c5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045c7ca
    IMUL EAX,dword ptr [0x01e528b4],0x14 ; 0045c7cd | g_SelectedPointIndex
    FLD float ptr [EAX + 0x1626414]     ; 0045c7d4 | g_LoadedVertices[0].vertex.z
    SUB ESP,0x8                         ; 0045c7da
    FSTP double ptr [ESP]               ; 0045c7dd
    IMUL EAX,dword ptr [0x01e528b4],0x14 ; 0045c7e0 | g_SelectedPointIndex
    FLD float ptr [EAX + 0x1626410]     ; 0045c7e7 | DAT_01626410
    SUB ESP,0x8                         ; 0045c7ed
    FSTP double ptr [ESP]               ; 0045c7f0
    IMUL EAX,dword ptr [0x01e528b4],0x14 ; 0045c7f3 | g_SelectedPointIndex
    FLD float ptr [EAX + 0x162640c]     ; 0045c7fa | g_LoadedVertices
    SUB ESP,0x8                         ; 0045c800
    FSTP double ptr [ESP]               ; 0045c803
    MOV EAX,0x61b367                    ; 0045c806 | = "from %f,%f,%f"
    PUSH EAX                            ; 0045c80b | = "from %f,%f,%f"
    LEA EAX,[EBP + -0x74]               ; 0045c80c
    PUSH EAX                            ; 0045c80f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045c810
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0045c815
    PUSH 0x16                           ; 0045c818
    PUSH 0x0                            ; 0045c81a
    LEA EAX,[EBP + -0x74]               ; 0045c81c
    PUSH EAX                            ; 0045c81f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045c820
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045c825
    JMP 0x0045c844                      ; 0045c828
        ;   XREF to: 0045c844 (UNCONDITIONAL_JUMP)  ; LAB_0045c844
    JMP 0x0045c844                      ; 0045c82a
        ;   XREF to: 0045c844 (UNCONDITIONAL_JUMP)  ; LAB_0045c844
        ;   Label: LAB_0045c82a
    CMP dword ptr [EBP + -0x78],0x0     ; 0045c82c
        ;   Label: LAB_0045c82c
    JBE 0x0045c77e                      ; 0045c830
        ;   XREF to: 0045c77e (CONDITIONAL_JUMP)  ; LAB_0045c77e
    CMP dword ptr [EBP + -0x78],0x1     ; 0045c836
    JZ 0x0045c7a5                       ; 0045c83a
        ;   XREF to: 0045c7a5 (CONDITIONAL_JUMP)  ; LAB_0045c7a5
    JMP 0x0045c82a                      ; 0045c840
        ;   XREF to: 0045c82a (UNCONDITIONAL_JUMP)  ; LAB_0045c82a
    CMP byte ptr [0x02d03eb8],0x0       ; 0045c844 | CHAR_ARRAY_02d03eb8
        ;   Label: LAB_0045c844
    JZ 0x0045c859                       ; 0045c84b
        ;   XREF to: 0045c859 (CONDITIONAL_JUMP)  ; LAB_0045c859
    MOV byte ptr [0x02d03eb8],0x0       ; 0045c84d | CHAR_ARRAY_02d03eb8
    CALL shape_design.c_selectVertexToDelete_FUN_0045c5b0 ; 0045c854
        ;   XREF to: 0045c5b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_selectVertexToDelete_FUN_0045c5b0()
    CMP byte ptr [0x02d03eca],0x0       ; 0045c859 | CHAR_ARRAY_02d03eca
        ;   Label: LAB_0045c859
    JZ 0x0045c86e                       ; 0045c860
        ;   XREF to: 0045c86e (CONDITIONAL_JUMP)  ; LAB_0045c86e
    MOV byte ptr [0x02d03eca],0x0       ; 0045c862 | CHAR_ARRAY_02d03eca
    CALL shape_design.c_selectVertexToMove_FUN_0045c530 ; 0045c869
        ;   XREF to: 0045c530 (UNCONDITIONAL_CALL)  ; void shape_design.c_selectVertexToMove_FUN_0045c530()
    CALL shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0 ; 0045c86e
        ;   XREF to: 0045bbc0 (UNCONDITIONAL_CALL)  ; void shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0()
        ;   Label: LAB_0045c86e
    MOV dword ptr [0x02d02570],0x10     ; 0045c873 | g_ActiveRenderColor
    MOV EAX,[0x00679398]                ; 0045c87d | g_WindowHeight
    DEC EAX                             ; 0045c882
    PUSH EAX                            ; 0045c883
    MOV EAX,[0x00679394]                ; 0045c884 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045c889 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045c88f
    SUB EAX,EDX                         ; 0045c892
    SAR EAX,0x1                         ; 0045c894
    PUSH EAX                            ; 0045c896
    PUSH 0x0                            ; 0045c897
    MOV EAX,[0x00679394]                ; 0045c899 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045c89e | g_WindowWidth
    SAR EDX,0x1f                        ; 0045c8a4
    SUB EAX,EDX                         ; 0045c8a7
    SAR EAX,0x1                         ; 0045c8a9
    PUSH EAX                            ; 0045c8ab
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0045c8ac
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0045c8b1
    MOV EAX,[0x00679398]                ; 0045c8b4 | g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045c8b9 | g_WindowHeight
    SAR EDX,0x1f                        ; 0045c8bf
    SUB EAX,EDX                         ; 0045c8c2
    SAR EAX,0x1                         ; 0045c8c4
    PUSH EAX                            ; 0045c8c6
    MOV EAX,[0x00679394]                ; 0045c8c7 | g_WindowWidth
    DEC EAX                             ; 0045c8cc
    PUSH EAX                            ; 0045c8cd
    MOV EAX,[0x00679398]                ; 0045c8ce | g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045c8d3 | g_WindowHeight
    SAR EDX,0x1f                        ; 0045c8d9
    SUB EAX,EDX                         ; 0045c8dc
    SAR EAX,0x1                         ; 0045c8de
    PUSH EAX                            ; 0045c8e0
    PUSH 0x0                            ; 0045c8e1
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0045c8e3
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0045c8e8
    MOV EAX,[0x01626340]                ; 0045c8eb | g_PolygonScreenCache[19999].view_mode
    MOV dword ptr [EBP + -0x7c],EAX     ; 0045c8f0
    JMP 0x0045c921                      ; 0045c8f3
        ;   XREF to: 0045c921 (UNCONDITIONAL_JUMP)  ; LAB_0045c921
    MOV byte ptr [EBP + -0x8],0x58      ; 0045c8f5
        ;   Label: LAB_0045c8f5
    MOV byte ptr [EBP + -0x4],0x5a      ; 0045c8f9
    MOV byte ptr [EBP + -0xc],0x59      ; 0045c8fd
    JMP 0x0045c93d                      ; 0045c901
        ;   XREF to: 0045c93d (UNCONDITIONAL_JUMP)  ; LAB_0045c93d
    MOV byte ptr [EBP + -0x8],0x5a      ; 0045c903
        ;   Label: LAB_0045c903
    MOV byte ptr [EBP + -0x4],0x59      ; 0045c907
    MOV byte ptr [EBP + -0xc],0x58      ; 0045c90b
    JMP 0x0045c93d                      ; 0045c90f
        ;   XREF to: 0045c93d (UNCONDITIONAL_JUMP)  ; LAB_0045c93d
    MOV byte ptr [EBP + -0x8],0x58      ; 0045c911
        ;   Label: LAB_0045c911
    MOV byte ptr [EBP + -0x4],0x59      ; 0045c915
    MOV byte ptr [EBP + -0xc],0x5a      ; 0045c919
    JMP 0x0045c93d                      ; 0045c91d
        ;   XREF to: 0045c93d (UNCONDITIONAL_JUMP)  ; LAB_0045c93d
    JMP 0x0045c93d                      ; 0045c91f
        ;   XREF to: 0045c93d (UNCONDITIONAL_JUMP)  ; LAB_0045c93d
        ;   Label: LAB_0045c91f
    CMP dword ptr [EBP + -0x7c],0x1     ; 0045c921
        ;   Label: LAB_0045c921
    JC 0x0045c935                       ; 0045c925
        ;   XREF to: 0045c935 (CONDITIONAL_JUMP)  ; LAB_0045c935
    CMP dword ptr [EBP + -0x7c],0x1     ; 0045c927
    JBE 0x0045c903                      ; 0045c92b
        ;   XREF to: 0045c903 (CONDITIONAL_JUMP)  ; LAB_0045c903
    CMP dword ptr [EBP + -0x7c],0x2     ; 0045c92d
    JZ 0x0045c911                       ; 0045c931
        ;   XREF to: 0045c911 (CONDITIONAL_JUMP)  ; LAB_0045c911
    JMP 0x0045c91f                      ; 0045c933
        ;   XREF to: 0045c91f (UNCONDITIONAL_JUMP)  ; LAB_0045c91f
    CMP dword ptr [EBP + -0x7c],0x0     ; 0045c935
        ;   Label: LAB_0045c935
    JZ 0x0045c8f5                       ; 0045c939
        ;   XREF to: 0045c8f5 (CONDITIONAL_JUMP)  ; LAB_0045c8f5
    JMP 0x0045c91f                      ; 0045c93b
        ;   XREF to: 0045c91f (UNCONDITIONAL_JUMP)  ; LAB_0045c91f
    XOR EAX,EAX                         ; 0045c93d
        ;   Label: LAB_0045c93d
    MOV AL,byte ptr [EBP + -0x4]        ; 0045c93f
    PUSH EAX                            ; 0045c942
    MOV EAX,0x61b375                    ; 0045c943 | = "%c"
    PUSH EAX                            ; 0045c948 | = "%c"
    LEA EAX,[EBP + -0x74]               ; 0045c949
    PUSH EAX                            ; 0045c94c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045c94d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045c952
    PUSH 0x0                            ; 0045c955
    MOV EAX,[0x00679394]                ; 0045c957 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045c95c | g_WindowWidth
    SAR EDX,0x1f                        ; 0045c962
    SUB EAX,EDX                         ; 0045c965
    SAR EAX,0x1                         ; 0045c967
    ADD EAX,0x2                         ; 0045c969
    PUSH EAX                            ; 0045c96c
    LEA EAX,[EBP + -0x74]               ; 0045c96d
    PUSH EAX                            ; 0045c970
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045c971
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045c976
    XOR EAX,EAX                         ; 0045c979
    MOV AL,byte ptr [EBP + -0x8]        ; 0045c97b
    PUSH EAX                            ; 0045c97e
    MOV EAX,0x61b378                    ; 0045c97f | = "%c"
    PUSH EAX                            ; 0045c984 | = "%c"
    LEA EAX,[EBP + -0x74]               ; 0045c985
    PUSH EAX                            ; 0045c988
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045c989
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045c98e
    MOV EAX,[0x00679398]                ; 0045c991 | g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045c996 | g_WindowHeight
    SAR EDX,0x1f                        ; 0045c99c
    SUB EAX,EDX                         ; 0045c99f
    SAR EAX,0x1                         ; 0045c9a1
    SUB EAX,0xb                         ; 0045c9a3
    PUSH EAX                            ; 0045c9a6
    MOV EAX,[0x00679394]                ; 0045c9a7 | g_WindowWidth
    SUB EAX,0x7                         ; 0045c9ac
    PUSH EAX                            ; 0045c9af
    LEA EAX,[EBP + -0x74]               ; 0045c9b0
    PUSH EAX                            ; 0045c9b3
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045c9b4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045c9b9
    XOR EAX,EAX                         ; 0045c9bc
    MOV AL,byte ptr [EBP + -0xc]        ; 0045c9be
    PUSH EAX                            ; 0045c9c1
    MOV EAX,0x61b37b                    ; 0045c9c2 | = "%c"
    PUSH EAX                            ; 0045c9c7 | = "%c"
    LEA EAX,[EBP + -0x74]               ; 0045c9c8
    PUSH EAX                            ; 0045c9cb
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045c9cc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045c9d1
    PUSH 0x0                            ; 0045c9d4
    PUSH 0x0                            ; 0045c9d6
    LEA EAX,[EBP + -0x74]               ; 0045c9d8
    PUSH EAX                            ; 0045c9db
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045c9dc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045c9e1
    PUSH dword ptr [0x02cf6a94]         ; 0045c9e4 | g_MouseButtonFlags
    PUSH dword ptr [0x02cf6a90]         ; 0045c9ea | g_MouseY
    PUSH dword ptr [0x02cf6a8c]         ; 0045c9f0 | g_MouseX
    MOV EAX,0x61b37e                    ; 0045c9f6 | = "%d,%d,%d"
    PUSH EAX                            ; 0045c9fb | = "%d,%d,%d"
    LEA EAX,[EBP + -0x74]               ; 0045c9fc
    PUSH EAX                            ; 0045c9ff
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0045ca00
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0045ca05
    MOV EAX,[0x00679398]                ; 0045ca08 | g_WindowHeight
    SUB EAX,0xb                         ; 0045ca0d
    PUSH EAX                            ; 0045ca10
    PUSH 0x0                            ; 0045ca11
    LEA EAX,[EBP + -0x74]               ; 0045ca13
    PUSH EAX                            ; 0045ca16
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045ca17
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045ca1c
    MOV EAX,[0x01e528b0]                ; 0045ca1f | g_PointEditorMode
    MOV dword ptr [EBP + -0x80],EAX     ; 0045ca24
    JMP 0x0045ca39                      ; 0045ca27
        ;   XREF to: 0045ca39 (UNCONDITIONAL_JUMP)  ; LAB_0045ca39
    CALL shape_design.c_doNothing_FUN_0045c4f0 ; 0045ca29
        ;   XREF to: 0045c4f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_doNothing_FUN_0045c4f0()
        ;   Label: LAB_0045ca29
    JMP 0x0045ca49                      ; 0045ca2e
        ;   XREF to: 0045ca49 (UNCONDITIONAL_JUMP)  ; LAB_0045ca49
    CALL shape_design.c_doNothing_FUN_0045c510 ; 0045ca30
        ;   XREF to: 0045c510 (UNCONDITIONAL_CALL)  ; void shape_design.c_doNothing_FUN_0045c510()
        ;   Label: LAB_0045ca30
    JMP 0x0045ca49                      ; 0045ca35
        ;   XREF to: 0045ca49 (UNCONDITIONAL_JUMP)  ; LAB_0045ca49
    JMP 0x0045ca49                      ; 0045ca37
        ;   XREF to: 0045ca49 (UNCONDITIONAL_JUMP)  ; LAB_0045ca49
        ;   Label: LAB_0045ca37
    CMP dword ptr [EBP + -0x80],0x0     ; 0045ca39
        ;   Label: LAB_0045ca39
    JBE 0x0045ca29                      ; 0045ca3d
        ;   XREF to: 0045ca29 (CONDITIONAL_JUMP)  ; LAB_0045ca29
    CMP dword ptr [EBP + -0x80],0x1     ; 0045ca3f
    JZ 0x0045ca30                       ; 0045ca43
        ;   XREF to: 0045ca30 (CONDITIONAL_JUMP)  ; LAB_0045ca30
    JMP 0x0045ca37                      ; 0045ca45
        ;   XREF to: 0045ca37 (UNCONDITIONAL_JUMP)  ; LAB_0045ca37
    CALL shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 ; 0045ca49
        ;   XREF to: 0045d5d0 (UNCONDITIONAL_CALL)  ; void shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0()
        ;   Label: LAB_0045ca49
    CALL shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 ; 0045ca4e
        ;   XREF to: 0045bff0 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0()
    CALL shape_design.c_handleEditorHotkeys_FUN_0045b990 ; 0045ca53
        ;   XREF to: 0045b990 (UNCONDITIONAL_CALL)  ; void shape_design.c_handleEditorHotkeys_FUN_0045b990()
    CMP byte ptr [0x02d03ebb],0x0       ; 0045ca58 | CHAR_ARRAY_02d03ebb
    JZ 0x0045ca76                       ; 0045ca5f
        ;   XREF to: 0045ca76 (CONDITIONAL_JUMP)  ; LAB_0045ca76
    MOV byte ptr [0x02d03ebb],0x0       ; 0045ca61 | CHAR_ARRAY_02d03ebb
    MOV EAX,0x61b387                    ; 0045ca68 | = "point.hlp"
    PUSH EAX                            ; 0045ca6d | = "point.hlp"
    CALL shape_design.c_showHelpFile_FUN_00457f00 ; 0045ca6e
        ;   XREF to: 00457f00 (UNCONDITIONAL_CALL)  ; void shape_design.c_showHelpFile_FUN_00457f00(char * help_filename)
    ADD ESP,0x4                         ; 0045ca73
    CALL wincore_winrun.cpp_doNothing_FUN_005f2f80 ; 0045ca76
        ;   XREF to: 005f2f80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing_FUN_005f2f80()
        ;   Label: LAB_0045ca76
    CALL wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 ; 0045ca7b
        ;   XREF to: 005f2fd0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045ca80
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CMP byte ptr [0x02d03e99],0x0       ; 0045ca85 | CHAR_ARRAY_02d03e99
    JNZ 0x0045ca93                      ; 0045ca8c
        ;   XREF to: 0045ca93 (CONDITIONAL_JUMP)  ; LAB_0045ca93
    JMP 0x0045c6ef                      ; 0045ca8e
        ;   XREF to: 0045c6ef (UNCONDITIONAL_JUMP)  ; LAB_0045c6ef
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045ca93
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0045ca93
    MOV ESP,EBP                         ; 0045ca98
    POP EBP                             ; 0045ca9a
    POP EDI                             ; 0045ca9b
    POP ESI                             ; 0045ca9c
    POP EBX                             ; 0045ca9d
    RET                                 ; 0045ca9e

