; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_complexPolygonReduction_FUN_00463b30(int selected_polygon_index)
;
; Parameters:
; int              Stack[0x4]:4   selected_polygon_index
; Local Variables:
; SShapeEditorPolygon Stack[-0x2e4]:388  local_2e4
; int[20]          Stack[-0x160]:80  local_160
; float[16]        Stack[-0x110]:64  afStack_110
; uint[16]         Stack[-0xd0]:64  auStack_d0
; float[17]        Stack[-0x90]:68  afStack_90
; int              Stack[-0x4c]:4  local_4c
; uint             Stack[-0x48]:4  local_48
; uint             Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; uint             Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; void *           Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int *            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464bf0
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061c0aa
;   TerminatedCString s_shape_design_c_0061c0bc
;   TerminatedCString s_Unable_to_get_mem_in_whe_0061c0ce
;   TerminatedCString s_The_wheel_polygon_reduce_0061c0fa
;   TerminatedCString s_Invalid_polygon_selected_0061c13a
;   TerminatedCString s_Invalid_polygon_selected_0061c16d
;   TerminatedCString s_Invalid_polygon_selected_0061c1a0
;   TerminatedCString s_Max_points_exceeded_in_w_0061c1d3
;   double g_CoplanarityTolerance = -0.100000000000000
;   TerminatedCString s_All_polys_on_selected_pl_0061c20e
;   TerminatedCString s_shape_design_c_0061c246
;   TerminatedCString s_shape_design_c_0061c258
;   TerminatedCString s_Unable_to_get_mem_in_whe_0061c26a
;   TerminatedCString s_shape_design_c_0061c296
;   TerminatedCString s_shape_design_c_0061c2a8
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_design.c_arePolygonsCoplanar_FUN_00461b70
;   shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
;   shape_design.c_comparePolygonIndices_FUN_00463800
;   shape_design.c_findSharedEdge_FUN_004635b0
;   shape_design.c_removeUnusedVertices_FUN_00463830
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463b30
        ;   Label: shape_design.c_complexPolygonReduction_FUN_00463b30
    PUSH ESI                            ; 00463b31
    PUSH EDI                            ; 00463b32
    PUSH EBP                            ; 00463b33
    MOV EBP,ESP                         ; 00463b34
    SUB ESP,0x2ec                       ; 00463b36
    MOV dword ptr [EBP + -0x18],0x0     ; 00463b3c
    MOV dword ptr [EBP + -0x14],0x0     ; 00463b43
    MOV ECX,0x14                        ; 00463b4a
    LEA EDI,[EBP + 0xfffffeb0]          ; 00463b4f
    MOV ESI,0x66eea8                    ; 00463b55 | g_PolygonReductionParams
    MOVSD.REP ES:EDI,ESI                ; 00463b5a | g_PolygonReductionParams | DAT_0066eeac
    MOV dword ptr [EBP + -0x4],0x0      ; 00463b5c
    PUSH 0x1921                         ; 00463b63
    MOV EAX,0x61c0aa                    ; 00463b68 | = "..\\shape\\design.c"
    PUSH EAX                            ; 00463b6d | = "..\\shape\\design.c"
    IMUL EAX,dword ptr [0x016e990c],0xc ; 00463b6e | g_PolygonCount
    PUSH EAX                            ; 00463b75
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00463b76
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00463b7b
    MOV dword ptr [EBP + -0x4],EAX      ; 00463b7e
    CMP dword ptr [EBP + -0x4],0x0      ; 00463b81
    JNZ 0x00463ba9                      ; 00463b85
        ;   XREF to: 00463ba9 (CONDITIONAL_JUMP)  ; LAB_00463ba9
    MOV dword ptr [0x02f0ca48],0x61c0bc ; 00463b87 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x1922   ; 00463b91 | g_CurrentLineNumber
    MOV EAX,0x61c0ce                    ; 00463b9b | = "Unable to get mem in wheel polygon re..."
    PUSH EAX                            ; 00463ba0 | = "Unable to get mem in wheel polygon re..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00463ba1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00463ba6
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463ba9
        ;   Label: LAB_00463ba9
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00463bb0 | DAT_016e99b4
    JL 0x00463bc9                       ; 00463bb7
        ;   XREF to: 00463bc9 (CONDITIONAL_JUMP)  ; LAB_00463bc9
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463bb9
    CMP dword ptr [EAX + 0x16e99b4],0x4 ; 00463bc0 | DAT_016e99b4
    JLE 0x00463bf9                      ; 00463bc7
        ;   XREF to: 00463bf9 (CONDITIONAL_JUMP)  ; LAB_00463bf9
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00463bc9
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00463bc9
    PUSH 0x0                            ; 00463bce
    PUSH 0x0                            ; 00463bd0
    MOV EAX,0x61c0fa                    ; 00463bd2 | = "The wheel polygon reducer only handle..."
    PUSH EAX                            ; 00463bd7 | = "The wheel polygon reducer only handle..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00463bd8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463bdd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00463be0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463be5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00463bea
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463bef
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00464840                      ; 00463bf4
        ;   XREF to: 00464840 (UNCONDITIONAL_JUMP)  ; LAB_00464840
    MOV dword ptr [EBP + -0x38],0x1     ; 00463bf9
        ;   Label: LAB_00463bf9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00463c00
    MOV EDX,dword ptr [EBP + -0x4]      ; 00463c03
    MOV dword ptr [EDX],EAX             ; 00463c06
    MOV dword ptr [EBP + -0x3c],0x0     ; 00463c08
    JMP 0x00463c17                      ; 00463c0f
        ;   XREF to: 00463c17 (UNCONDITIONAL_JUMP)  ; LAB_00463c17
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463c11
        ;   Label: LAB_00463c11
    INC dword ptr [EBP + -0x3c]         ; 00463c14
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463c17
        ;   Label: LAB_00463c17
    CMP EAX,dword ptr [0x016e990c]      ; 00463c1a | g_PolygonCount
    JGE 0x00463c98                      ; 00463c20
        ;   XREF to: 00463c98 (CONDITIONAL_JUMP)  ; LAB_00463c98
    PUSH 0x8                            ; 00463c26
    PUSH 0x100                          ; 00463c28
    IMUL EDX,dword ptr [EBP + -0x3c],0x184 ; 00463c2d
    MOV EAX,0x16e9910                   ; 00463c34 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00463c39
    PUSH EAX                            ; 00463c3b
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00463c3c
    MOV EAX,0x16e9910                   ; 00463c43 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00463c48
    PUSH EAX                            ; 00463c4a
    CALL shape_design.c_arePolygonsCoplanar_FUN_00461b70 ; 00463c4b
        ;   XREF to: 00461b70 (UNCONDITIONAL_CALL)  ; int shape_design.c_arePolygonsCoplanar_FUN_00461b70(SShapeEditorPolygon * polygon1_ptr, SShapeEditorPolygon * polygon2_ptr, float scale_factor, int tolerance)
    ADD ESP,0x10                        ; 00463c50
    TEST EAX,EAX                        ; 00463c53
    JZ 0x00463c73                       ; 00463c55
        ;   XREF to: 00463c73 (CONDITIONAL_JUMP)  ; LAB_00463c73
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463c57
    IMUL EDX,dword ptr [EBP + -0x3c],0x184 ; 00463c5e
    MOV EAX,dword ptr [EAX + 0x16e99b4] ; 00463c65 | DAT_016e99b4
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 00463c6b | DAT_016e99b4
    JZ 0x00463c75                       ; 00463c71
        ;   XREF to: 00463c75 (CONDITIONAL_JUMP)  ; LAB_00463c75
    JMP 0x00463c7d                      ; 00463c73
        ;   XREF to: 00463c7d (UNCONDITIONAL_JUMP)  ; LAB_00463c7d
        ;   Label: LAB_00463c73
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463c75
        ;   Label: LAB_00463c75
    CMP EAX,dword ptr [EBP + 0x14]      ; 00463c78
    JNZ 0x00463c7f                      ; 00463c7b
        ;   XREF to: 00463c7f (CONDITIONAL_JUMP)  ; LAB_00463c7f
    JMP 0x00463c93                      ; 00463c7d
        ;   XREF to: 00463c93 (UNCONDITIONAL_JUMP)  ; LAB_00463c93
        ;   Label: LAB_00463c7d
    IMUL EAX,dword ptr [EBP + -0x38],0xc ; 00463c7f
        ;   Label: LAB_00463c7f
    MOV EDX,dword ptr [EBP + -0x4]      ; 00463c83
    ADD EDX,EAX                         ; 00463c86
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463c88
    MOV dword ptr [EDX],EAX             ; 00463c8b
    MOV EAX,dword ptr [EBP + -0x38]     ; 00463c8d
    INC dword ptr [EBP + -0x38]         ; 00463c90
    JMP 0x00463c11                      ; 00463c93
        ;   XREF to: 00463c11 (UNCONDITIONAL_JUMP)  ; LAB_00463c11
        ;   Label: LAB_00463c93
    MOV EAX,dword ptr [EBP + -0x38]     ; 00463c98
        ;   Label: LAB_00463c98
    MOV dword ptr [EBP + -0x30],EAX     ; 00463c9b
    MOV dword ptr [EBP + -0x3c],0x0     ; 00463c9e
    JMP 0x00463cad                      ; 00463ca5
        ;   XREF to: 00463cad (UNCONDITIONAL_JUMP)  ; LAB_00463cad
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463ca7
        ;   Label: LAB_00463ca7
    INC dword ptr [EBP + -0x3c]         ; 00463caa
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463cad
        ;   Label: LAB_00463cad
    CMP EAX,dword ptr [EBP + -0x30]     ; 00463cb0
    JGE 0x00463cd2                      ; 00463cb3
        ;   XREF to: 00463cd2 (CONDITIONAL_JUMP)  ; LAB_00463cd2
    IMUL EAX,dword ptr [EBP + -0x3c],0xc ; 00463cb5
    ADD EAX,dword ptr [EBP + -0x4]      ; 00463cb9
    MOV dword ptr [EAX + 0x8],0xffffffff ; 00463cbc
    IMUL EDX,dword ptr [EBP + -0x3c],0xc ; 00463cc3
    ADD EDX,dword ptr [EBP + -0x4]      ; 00463cc7
    MOV EAX,dword ptr [EAX + 0x8]       ; 00463cca
    MOV dword ptr [EDX + 0x4],EAX       ; 00463ccd
    JMP 0x00463ca7                      ; 00463cd0
        ;   XREF to: 00463ca7 (UNCONDITIONAL_JUMP)  ; LAB_00463ca7
    MOV dword ptr [EBP + -0x2c],0x0     ; 00463cd2
        ;   Label: LAB_00463cd2
    MOV dword ptr [EBP + -0x20],0xffffffff ; 00463cd9
    MOV dword ptr [EBP + -0x3c],0x0     ; 00463ce0
    JMP 0x00463cef                      ; 00463ce7
        ;   XREF to: 00463cef (UNCONDITIONAL_JUMP)  ; LAB_00463cef
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463ce9
        ;   Label: LAB_00463ce9
    INC dword ptr [EBP + -0x3c]         ; 00463cec
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463cef
        ;   Label: LAB_00463cef
    CMP EAX,dword ptr [EBP + -0x38]     ; 00463cf2
    JGE 0x00463da1                      ; 00463cf5
        ;   XREF to: 00463da1 (CONDITIONAL_JUMP)  ; LAB_00463da1
    MOV dword ptr [EBP + -0xc],0x0      ; 00463cfb
    JMP 0x00463d0a                      ; 00463d02
        ;   XREF to: 00463d0a (UNCONDITIONAL_JUMP)  ; LAB_00463d0a
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463d04
        ;   Label: LAB_00463d04
    INC dword ptr [EBP + -0xc]          ; 00463d07
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463d0a
        ;   Label: LAB_00463d0a
    CMP EAX,dword ptr [EBP + -0x38]     ; 00463d0d
    JGE 0x00463d9c                      ; 00463d10
        ;   XREF to: 00463d9c (CONDITIONAL_JUMP)  ; LAB_00463d9c
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463d16
    CMP EAX,dword ptr [EBP + -0x3c]     ; 00463d19
    JZ 0x00463d6f                       ; 00463d1c
        ;   XREF to: 00463d6f (CONDITIONAL_JUMP)  ; LAB_00463d6f
    LEA EAX,[EBP + -0x20]               ; 00463d1e
    PUSH EAX                            ; 00463d21
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463d22
    PUSH dword ptr [EAX + 0x16e99b4]    ; 00463d29 | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00463d2f
    ADD EAX,dword ptr [EBP + -0x4]      ; 00463d33
    IMUL EAX,dword ptr [EAX],0x184      ; 00463d36
    MOV EDX,0x16e9910                   ; 00463d3c | g_ModelPolygonData
    ADD EAX,EDX                         ; 00463d41
    ADD EAX,0xb8                        ; 00463d43
    PUSH EAX                            ; 00463d48
    IMUL EAX,dword ptr [EBP + -0x3c],0xc ; 00463d49
    ADD EAX,dword ptr [EBP + -0x4]      ; 00463d4d
    IMUL EAX,dword ptr [EAX],0x184      ; 00463d50
    MOV EDX,0x16e9910                   ; 00463d56 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00463d5b
    ADD EAX,0xb8                        ; 00463d5d
    PUSH EAX                            ; 00463d62
    CALL shape_design.c_findSharedEdge_FUN_004635b0 ; 00463d63
        ;   XREF to: 004635b0 (UNCONDITIONAL_CALL)  ; int shape_design.c_findSharedEdge_FUN_004635b0(int * edge1_vertices, int * edge2_vertices, int vertex_count, int * shared_edge_type)
    ADD ESP,0x10                        ; 00463d68
    TEST EAX,EAX                        ; 00463d6b
    JNZ 0x00463d71                      ; 00463d6d
        ;   XREF to: 00463d71 (CONDITIONAL_JUMP)  ; LAB_00463d71
    JMP 0x00463d97                      ; 00463d6f
        ;   XREF to: 00463d97 (UNCONDITIONAL_JUMP)  ; LAB_00463d97
        ;   Label: LAB_00463d6f
    IMUL EAX,dword ptr [EBP + -0x3c],0xc ; 00463d71
        ;   Label: LAB_00463d71
    MOV EDX,dword ptr [EBP + -0x4]      ; 00463d75
    ADD EDX,EAX                         ; 00463d78
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463d7a
    MOV dword ptr [EDX + 0x8],EAX       ; 00463d7d
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00463d80
    MOV EDX,dword ptr [EBP + -0x4]      ; 00463d84
    ADD EDX,EAX                         ; 00463d87
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463d89
    MOV dword ptr [EDX + 0x4],EAX       ; 00463d8c
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00463d8f
    INC dword ptr [EBP + -0x2c]         ; 00463d92
    JMP 0x00463d9c                      ; 00463d95
        ;   XREF to: 00463d9c (UNCONDITIONAL_JUMP)  ; LAB_00463d9c
    JMP 0x00463d04                      ; 00463d97
        ;   XREF to: 00463d04 (UNCONDITIONAL_JUMP)  ; LAB_00463d04
        ;   Label: LAB_00463d97
    JMP 0x00463ce9                      ; 00463d9c
        ;   XREF to: 00463ce9 (UNCONDITIONAL_JUMP)  ; LAB_00463ce9
        ;   Label: LAB_00463d9c
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00463da1
        ;   Label: LAB_00463da1
    MOV dword ptr [EBP + -0x38],EAX     ; 00463da4
    CMP dword ptr [EBP + -0x20],0x0     ; 00463da7
    JNZ 0x00463db6                      ; 00463dab
        ;   XREF to: 00463db6 (CONDITIONAL_JUMP)  ; LAB_00463db6
    MOV dword ptr [EBP + -0x18],0x1     ; 00463dad
    JMP 0x00463ddf                      ; 00463db4
        ;   XREF to: 00463ddf (UNCONDITIONAL_JUMP)  ; LAB_00463ddf
    CMP dword ptr [EBP + -0x20],0x1     ; 00463db6
        ;   Label: LAB_00463db6
    JZ 0x00463dc2                       ; 00463dba
        ;   XREF to: 00463dc2 (CONDITIONAL_JUMP)  ; LAB_00463dc2
    CMP dword ptr [EBP + -0x20],0x2     ; 00463dbc
    JNZ 0x00463dc4                      ; 00463dc0
        ;   XREF to: 00463dc4 (CONDITIONAL_JUMP)  ; LAB_00463dc4
    JMP 0x00463dca                      ; 00463dc2
        ;   XREF to: 00463dca (UNCONDITIONAL_JUMP)  ; LAB_00463dca
        ;   Label: LAB_00463dc2
    CMP dword ptr [EBP + -0x20],0x3     ; 00463dc4
        ;   Label: LAB_00463dc4
    JNZ 0x00463dcc                      ; 00463dc8
        ;   XREF to: 00463dcc (CONDITIONAL_JUMP)  ; LAB_00463dcc
    JMP 0x00463dd2                      ; 00463dca
        ;   XREF to: 00463dd2 (UNCONDITIONAL_JUMP)  ; LAB_00463dd2
        ;   Label: LAB_00463dca
    CMP dword ptr [EBP + -0x20],0x4     ; 00463dcc
        ;   Label: LAB_00463dcc
    JNZ 0x00463ddf                      ; 00463dd0
        ;   XREF to: 00463ddf (CONDITIONAL_JUMP)  ; LAB_00463ddf
    MOV dword ptr [EBP + -0x14],0x1     ; 00463dd2
        ;   Label: LAB_00463dd2
    MOV EAX,dword ptr [EBP + -0x38]     ; 00463dd9
    INC dword ptr [EBP + -0x38]         ; 00463ddc
    MOV dword ptr [EBP + -0x28],0x0     ; 00463ddf
        ;   Label: LAB_00463ddf
    CMP dword ptr [EBP + -0x14],0x0     ; 00463de6
    JZ 0x00463e27                       ; 00463dea
        ;   XREF to: 00463e27 (CONDITIONAL_JUMP)  ; LAB_00463e27
    MOV dword ptr [EBP + -0x3c],0x0     ; 00463dec
    MOV dword ptr [EBP + -0xc],0x0      ; 00463df3
    JMP 0x00463e02                      ; 00463dfa
        ;   XREF to: 00463e02 (UNCONDITIONAL_JUMP)  ; LAB_00463e02
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463dfc
        ;   Label: LAB_00463dfc
    INC dword ptr [EBP + -0x3c]         ; 00463dff
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463e02
        ;   Label: LAB_00463e02
    CMP EAX,dword ptr [EBP + -0x38]     ; 00463e05
    JGE 0x00463e27                      ; 00463e08
        ;   XREF to: 00463e27 (CONDITIONAL_JUMP)  ; LAB_00463e27
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463e0a
    MOV dword ptr [EBP + -0x28],EAX     ; 00463e0d
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00463e10
    ADD EAX,dword ptr [EBP + -0x4]      ; 00463e14
    MOV EAX,dword ptr [EAX + 0x4]       ; 00463e17
    MOV dword ptr [EBP + -0xc],EAX      ; 00463e1a
    CMP dword ptr [EBP + -0xc],-0x1     ; 00463e1d
    JNZ 0x00463e25                      ; 00463e21
        ;   XREF to: 00463e25 (CONDITIONAL_JUMP)  ; LAB_00463e25
    JMP 0x00463e27                      ; 00463e23
        ;   XREF to: 00463e27 (UNCONDITIONAL_JUMP)  ; LAB_00463e27
    JMP 0x00463dfc                      ; 00463e25
        ;   XREF to: 00463dfc (UNCONDITIONAL_JUMP)  ; LAB_00463dfc
        ;   Label: LAB_00463e25
    MOV EAX,dword ptr [EBP + -0x28]     ; 00463e27
        ;   Label: LAB_00463e27
    MOV dword ptr [EBP + -0xc],EAX      ; 00463e2a
    MOV dword ptr [EBP + -0x2c],0x0     ; 00463e2d
    MOV dword ptr [EBP + -0x1c],0x0     ; 00463e34
    MOV dword ptr [EBP + -0x3c],0x0     ; 00463e3b
    JMP 0x00463e4a                      ; 00463e42
        ;   XREF to: 00463e4a (UNCONDITIONAL_JUMP)  ; LAB_00463e4a
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463e44
        ;   Label: LAB_00463e44
    INC dword ptr [EBP + -0x3c]         ; 00463e47
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463e4a
        ;   Label: LAB_00463e4a
    CMP EAX,dword ptr [EBP + -0x38]     ; 00463e4d
    JGE 0x00463ec1                      ; 00463e50
        ;   XREF to: 00463ec1 (CONDITIONAL_JUMP)  ; LAB_00463ec1
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00463e56
    ADD EAX,dword ptr [EBP + -0x4]      ; 00463e5a
    MOV EAX,dword ptr [EAX + 0x8]       ; 00463e5d
    MOV dword ptr [EBP + -0xc],EAX      ; 00463e60
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00463e63
    INC dword ptr [EBP + -0x2c]         ; 00463e66
    CMP dword ptr [EBP + -0xc],0x0      ; 00463e69
    JNZ 0x00463e75                      ; 00463e6d
        ;   XREF to: 00463e75 (CONDITIONAL_JUMP)  ; LAB_00463e75
    CMP dword ptr [EBP + -0x18],0x0     ; 00463e6f
    JNZ 0x00463e77                      ; 00463e73
        ;   XREF to: 00463e77 (CONDITIONAL_JUMP)  ; LAB_00463e77
    JMP 0x00463e80                      ; 00463e75
        ;   XREF to: 00463e80 (UNCONDITIONAL_JUMP)  ; LAB_00463e80
        ;   Label: LAB_00463e75
    MOV dword ptr [EBP + -0x1c],0x1     ; 00463e77
        ;   Label: LAB_00463e77
    JMP 0x00463ec1                      ; 00463e7e
        ;   XREF to: 00463ec1 (UNCONDITIONAL_JUMP)  ; LAB_00463ec1
    CMP dword ptr [EBP + -0xc],-0x1     ; 00463e80
        ;   Label: LAB_00463e80
    JL 0x00463e8f                       ; 00463e84
        ;   XREF to: 00463e8f (CONDITIONAL_JUMP)  ; LAB_00463e8f
    MOV EAX,dword ptr [EBP + -0x30]     ; 00463e86
    DEC EAX                             ; 00463e89
    CMP EAX,dword ptr [EBP + -0xc]      ; 00463e8a
    JGE 0x00463ebf                      ; 00463e8d
        ;   XREF to: 00463ebf (CONDITIONAL_JUMP)  ; LAB_00463ebf
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00463e8f
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00463e8f
    PUSH 0x0                            ; 00463e94
    PUSH 0x0                            ; 00463e96
    MOV EAX,0x61c13a                    ; 00463e98 | = "Invalid polygon selected in wheel pol..."
    PUSH EAX                            ; 00463e9d | = "Invalid polygon selected in wheel pol..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00463e9e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463ea3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00463ea6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463eab
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00463eb0
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463eb5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00464840                      ; 00463eba
        ;   XREF to: 00464840 (UNCONDITIONAL_JUMP)  ; LAB_00464840
    JMP 0x00463e44                      ; 00463ebf
        ;   XREF to: 00463e44 (UNCONDITIONAL_JUMP)  ; LAB_00463e44
        ;   Label: LAB_00463ebf
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00463ec1
        ;   Label: LAB_00463ec1
    MOV dword ptr [EBP + -0x38],EAX     ; 00463ec4
    CMP dword ptr [EBP + -0x38],0x2     ; 00463ec7
    JGE 0x00463efd                      ; 00463ecb
        ;   XREF to: 00463efd (CONDITIONAL_JUMP)  ; LAB_00463efd
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00463ecd
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00463ed2
    PUSH 0x0                            ; 00463ed4
    MOV EAX,0x61c16d                    ; 00463ed6 | = "Invalid polygon selected in wheel pol..."
    PUSH EAX                            ; 00463edb | = "Invalid polygon selected in wheel pol..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00463edc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463ee1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00463ee4
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463ee9
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00463eee
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463ef3
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00464840                      ; 00463ef8
        ;   XREF to: 00464840 (UNCONDITIONAL_JUMP)  ; LAB_00464840
    CMP dword ptr [EBP + -0x18],0x0     ; 00463efd
        ;   Label: LAB_00463efd
    JZ 0x00463f09                       ; 00463f01
        ;   XREF to: 00463f09 (CONDITIONAL_JUMP)  ; LAB_00463f09
    CMP dword ptr [EBP + -0x1c],0x0     ; 00463f03
    JZ 0x00463f0b                       ; 00463f07
        ;   XREF to: 00463f0b (CONDITIONAL_JUMP)  ; LAB_00463f0b
    JMP 0x00463f3b                      ; 00463f09
        ;   XREF to: 00463f3b (UNCONDITIONAL_JUMP)  ; LAB_00463f3b
        ;   Label: LAB_00463f09
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00463f0b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00463f0b
    PUSH 0x0                            ; 00463f10
    PUSH 0x0                            ; 00463f12
    MOV EAX,0x61c1a0                    ; 00463f14 | = "Invalid polygon selected in wheel pol..."
    PUSH EAX                            ; 00463f19 | = "Invalid polygon selected in wheel pol..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00463f1a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463f1f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00463f22
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463f27
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00463f2c
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463f31
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00464840                      ; 00463f36
        ;   XREF to: 00464840 (UNCONDITIONAL_JUMP)  ; LAB_00464840
    MOV dword ptr [EBP + -0x34],0x0     ; 00463f3b
        ;   Label: LAB_00463f3b
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463f42
    CMP dword ptr [EAX + 0x16e99b4],0x4 ; 00463f49 | DAT_016e99b4
    JNZ 0x00463f5c                      ; 00463f50
        ;   XREF to: 00463f5c (CONDITIONAL_JUMP)  ; LAB_00463f5c
    MOV EAX,dword ptr [EBP + -0x38]     ; 00463f52
    ADD EAX,EAX                         ; 00463f55
    MOV dword ptr [EBP + -0x34],EAX     ; 00463f57
    JMP 0x00463f72                      ; 00463f5a
        ;   XREF to: 00463f72 (UNCONDITIONAL_JUMP)  ; LAB_00463f72
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463f5c
        ;   Label: LAB_00463f5c
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00463f63 | DAT_016e99b4
    JNZ 0x00463f72                      ; 00463f6a
        ;   XREF to: 00463f72 (CONDITIONAL_JUMP)  ; LAB_00463f72
    MOV EAX,dword ptr [EBP + -0x38]     ; 00463f6c
    MOV dword ptr [EBP + -0x34],EAX     ; 00463f6f
    CMP dword ptr [EBP + -0x14],0x0     ; 00463f72
        ;   Label: LAB_00463f72
    JZ 0x00463f7c                       ; 00463f76
        ;   XREF to: 00463f7c (CONDITIONAL_JUMP)  ; LAB_00463f7c
    ADD dword ptr [EBP + -0x34],0x2     ; 00463f78
    CMP dword ptr [EBP + -0x34],0x10    ; 00463f7c
        ;   Label: LAB_00463f7c
    JLE 0x00463fb2                      ; 00463f80
        ;   XREF to: 00463fb2 (CONDITIONAL_JUMP)  ; LAB_00463fb2
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00463f82
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00463f87
    PUSH 0x0                            ; 00463f89
    MOV EAX,0x61c1d3                    ; 00463f8b | = "Max points exceeded in wheel polygon ..."
    PUSH EAX                            ; 00463f90 | = "Max points exceeded in wheel polygon ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00463f91
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00463f96
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00463f99
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463f9e
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00463fa3
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00463fa8
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00464840                      ; 00463fad
        ;   XREF to: 00464840 (UNCONDITIONAL_JUMP)  ; LAB_00464840
    MOV EAX,dword ptr [EBP + -0x28]     ; 00463fb2
        ;   Label: LAB_00463fb2
    MOV dword ptr [EBP + -0xc],EAX      ; 00463fb5
    MOV dword ptr [EBP + -0x3c],0x0     ; 00463fb8
    JMP 0x00463fc7                      ; 00463fbf
        ;   XREF to: 00463fc7 (UNCONDITIONAL_JUMP)  ; LAB_00463fc7
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463fc1
        ;   Label: LAB_00463fc1
    INC dword ptr [EBP + -0x3c]         ; 00463fc4
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00463fc7
        ;   Label: LAB_00463fc7
    CMP EAX,dword ptr [EBP + -0x38]     ; 00463fca
    JGE 0x004643ca                      ; 00463fcd
        ;   XREF to: 004643ca (CONDITIONAL_JUMP)  ; LAB_004643ca
    CMP dword ptr [EBP + -0x20],0x0     ; 00463fd3
    JNZ 0x004641ce                      ; 00463fd7
        ;   XREF to: 004641ce (CONDITIONAL_JUMP)  ; LAB_004641ce
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00463fdd
    CMP dword ptr [EAX + 0x16e99b4],0x4 ; 00463fe4 | DAT_016e99b4
    JNZ 0x00464122                      ; 00463feb
        ;   XREF to: 00464122 (CONDITIONAL_JUMP)  ; LAB_00464122
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00463ff1
    ADD EAX,dword ptr [EBP + -0x4]      ; 00463ff5
    IMUL EDX,dword ptr [EAX],0x184      ; 00463ff8
    MOV EAX,dword ptr [EBP + -0x20]     ; 00463ffe
    SHL EAX,0x4                         ; 00464001
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464004
    SHL EAX,0x2                         ; 0046400b
    ADD EAX,EDX                         ; 0046400e
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464010
    SHL EDX,0x3                         ; 00464013
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00464016 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX ; 0046401c
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464023
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464027
    IMUL EDX,dword ptr [EAX],0x184      ; 0046402a
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464030
    SHL EAX,0x4                         ; 00464033
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464036
    SHL EAX,0x2                         ; 0046403d
    ADD EDX,EAX                         ; 00464040
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00464042
    SHL EAX,0x3                         ; 00464045
    FLD float ptr [EDX + 0x16e9a08]     ; 00464048 | DAT_016e9a08
    FSTP float ptr [EAX + EBP*0x1 + -0x80] ; 0046404e
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464052
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464056
    IMUL EDX,dword ptr [EAX],0x184      ; 00464059
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046405f
    SHL EAX,0x4                         ; 00464062
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464065
    SHL EAX,0x2                         ; 0046406c
    ADD EAX,EDX                         ; 0046406f
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464071
    SHL EDX,0x3                         ; 00464074
    FLD float ptr [EAX + 0x16e9a48]     ; 00464077 | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + 0xffffff00] ; 0046407d
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464084
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464088
    IMUL EDX,dword ptr [EAX],0x184      ; 0046408b
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464091
    SHL EAX,0x4                         ; 00464094
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4] ; 00464097
    SHL EAX,0x2                         ; 0046409e
    ADD EDX,EAX                         ; 004640a1
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004640a3
    ADD EAX,EAX                         ; 004640a6
    SHL EAX,0x2                         ; 004640a8
    MOV EDX,dword ptr [EDX + 0x16e99c8] ; 004640ab | DAT_016e99c8
    MOV dword ptr [EAX + EBP*0x1 + 0xffffff44],EDX ; 004640b1
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004640b8
    ADD EAX,dword ptr [EBP + -0x4]      ; 004640bc
    IMUL EDX,dword ptr [EAX],0x184      ; 004640bf
    MOV EAX,dword ptr [EBP + -0x20]     ; 004640c5
    SHL EAX,0x4                         ; 004640c8
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4] ; 004640cb
    SHL EAX,0x2                         ; 004640d2
    ADD EDX,EAX                         ; 004640d5
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004640d7
    ADD EAX,EAX                         ; 004640da
    SHL EAX,0x2                         ; 004640dc
    FLD float ptr [EDX + 0x16e9a08]     ; 004640df | DAT_016e9a08
    FSTP float ptr [EAX + EBP*0x1 + -0x7c] ; 004640e5
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004640e9
    ADD EAX,dword ptr [EBP + -0x4]      ; 004640ed
    IMUL EDX,dword ptr [EAX],0x184      ; 004640f0
    MOV EAX,dword ptr [EBP + -0x20]     ; 004640f6
    SHL EAX,0x4                         ; 004640f9
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4] ; 004640fc
    SHL EAX,0x2                         ; 00464103
    ADD EDX,EAX                         ; 00464106
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00464108
    ADD EAX,EAX                         ; 0046410b
    SHL EAX,0x2                         ; 0046410d
    FLD float ptr [EDX + 0x16e9a48]     ; 00464110 | DAT_016e9a48
    FSTP float ptr [EAX + EBP*0x1 + 0xffffff04] ; 00464116
    JMP 0x004641c9                      ; 0046411d
        ;   XREF to: 004641c9 (UNCONDITIONAL_JUMP)  ; LAB_004641c9
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00464122
        ;   Label: LAB_00464122
    CMP dword ptr [EAX + 0x16e99b4],0x3 ; 00464129 | DAT_016e99b4
    JNZ 0x004641c9                      ; 00464130
        ;   XREF to: 004641c9 (CONDITIONAL_JUMP)  ; LAB_004641c9
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464136
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046413a
    IMUL EDX,dword ptr [EAX],0x184      ; 0046413d
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464143
    SHL EAX,0x4                         ; 00464146
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464149
    SHL EAX,0x2                         ; 00464150
    ADD EAX,EDX                         ; 00464153
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464155
    SHL EDX,0x2                         ; 00464158
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0046415b | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX ; 00464161
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464168
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046416c
    IMUL EDX,dword ptr [EAX],0x184      ; 0046416f
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464175
    SHL EAX,0x4                         ; 00464178
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 0046417b
    SHL EAX,0x2                         ; 00464182
    ADD EAX,EDX                         ; 00464185
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464187
    SHL EDX,0x2                         ; 0046418a
    FLD float ptr [EAX + 0x16e9a08]     ; 0046418d | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 00464193
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464197
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046419b
    IMUL EDX,dword ptr [EAX],0x184      ; 0046419e
    MOV EAX,dword ptr [EBP + -0x20]     ; 004641a4
    SHL EAX,0x4                         ; 004641a7
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 004641aa
    SHL EAX,0x2                         ; 004641b1
    ADD EAX,EDX                         ; 004641b4
    MOV EDX,dword ptr [EBP + -0x3c]     ; 004641b6
    SHL EDX,0x2                         ; 004641b9
    FLD float ptr [EAX + 0x16e9a48]     ; 004641bc | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + 0xffffff00] ; 004641c2
    JMP 0x004643b2                      ; 004641c9
        ;   XREF to: 004643b2 (UNCONDITIONAL_JUMP)  ; LAB_004643b2
        ;   Label: LAB_004641c9
    CMP dword ptr [EBP + -0x20],0x1     ; 004641ce
        ;   Label: LAB_004641ce
    JZ 0x004641de                       ; 004641d2
        ;   XREF to: 004641de (CONDITIONAL_JUMP)  ; LAB_004641de
    CMP dword ptr [EBP + -0x20],0x2     ; 004641d4
    JNZ 0x00464276                      ; 004641d8
        ;   XREF to: 00464276 (CONDITIONAL_JUMP)  ; LAB_00464276
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004641de
        ;   Label: LAB_004641de
    ADD EAX,dword ptr [EBP + -0x4]      ; 004641e2
    IMUL EDX,dword ptr [EAX],0x184      ; 004641e5
    MOV EAX,dword ptr [EBP + -0x20]     ; 004641eb
    SHL EAX,0x4                         ; 004641ee
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 004641f1
    SHL EAX,0x2                         ; 004641f8
    ADD EAX,EDX                         ; 004641fb
    MOV EDX,dword ptr [EBP + -0x3c]     ; 004641fd
    SHL EDX,0x2                         ; 00464200
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00464203 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX ; 00464209
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464210
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464214
    IMUL EDX,dword ptr [EAX],0x184      ; 00464217
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046421d
    SHL EAX,0x4                         ; 00464220
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464223
    SHL EAX,0x2                         ; 0046422a
    ADD EAX,EDX                         ; 0046422d
    MOV EDX,dword ptr [EBP + -0x3c]     ; 0046422f
    SHL EDX,0x2                         ; 00464232
    FLD float ptr [EAX + 0x16e9a08]     ; 00464235 | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 0046423b
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 0046423f
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464243
    IMUL EDX,dword ptr [EAX],0x184      ; 00464246
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046424c
    SHL EAX,0x4                         ; 0046424f
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464252
    SHL EAX,0x2                         ; 00464259
    ADD EAX,EDX                         ; 0046425c
    MOV EDX,dword ptr [EBP + -0x3c]     ; 0046425e
    SHL EDX,0x2                         ; 00464261
    FLD float ptr [EAX + 0x16e9a48]     ; 00464264 | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + 0xffffff00] ; 0046426a
    JMP 0x004643b2                      ; 00464271
        ;   XREF to: 004643b2 (UNCONDITIONAL_JUMP)  ; LAB_004643b2
    CMP dword ptr [EBP + -0x20],0x3     ; 00464276
        ;   Label: LAB_00464276
    JZ 0x00464286                       ; 0046427a
        ;   XREF to: 00464286 (CONDITIONAL_JUMP)  ; LAB_00464286
    CMP dword ptr [EBP + -0x20],0x4     ; 0046427c
    JNZ 0x004643b2                      ; 00464280
        ;   XREF to: 004643b2 (CONDITIONAL_JUMP)  ; LAB_004643b2
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464286
        ;   Label: LAB_00464286
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046428a
    IMUL EDX,dword ptr [EAX],0x184      ; 0046428d
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464293
    SHL EAX,0x4                         ; 00464296
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 00464299
    SHL EAX,0x2                         ; 004642a0
    ADD EAX,EDX                         ; 004642a3
    MOV EDX,dword ptr [EBP + -0x3c]     ; 004642a5
    SHL EDX,0x3                         ; 004642a8
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 004642ab | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX ; 004642b1
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004642b8
    ADD EAX,dword ptr [EBP + -0x4]      ; 004642bc
    IMUL EDX,dword ptr [EAX],0x184      ; 004642bf
    MOV EAX,dword ptr [EBP + -0x20]     ; 004642c5
    SHL EAX,0x4                         ; 004642c8
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 004642cb
    SHL EAX,0x2                         ; 004642d2
    ADD EDX,EAX                         ; 004642d5
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004642d7
    SHL EAX,0x3                         ; 004642da
    FLD float ptr [EDX + 0x16e9a08]     ; 004642dd | DAT_016e9a08
    FSTP float ptr [EAX + EBP*0x1 + -0x80] ; 004642e3
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004642e7
    ADD EAX,dword ptr [EBP + -0x4]      ; 004642eb
    IMUL EDX,dword ptr [EAX],0x184      ; 004642ee
    MOV EAX,dword ptr [EBP + -0x20]     ; 004642f4
    SHL EAX,0x4                         ; 004642f7
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb0] ; 004642fa
    SHL EAX,0x2                         ; 00464301
    ADD EAX,EDX                         ; 00464304
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464306
    SHL EDX,0x3                         ; 00464309
    FLD float ptr [EAX + 0x16e9a48]     ; 0046430c | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + 0xffffff00] ; 00464312
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 00464319
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046431d
    IMUL EDX,dword ptr [EAX],0x184      ; 00464320
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464326
    SHL EAX,0x4                         ; 00464329
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4] ; 0046432c
    SHL EAX,0x2                         ; 00464333
    ADD EDX,EAX                         ; 00464336
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00464338
    ADD EAX,EAX                         ; 0046433b
    SHL EAX,0x2                         ; 0046433d
    MOV EDX,dword ptr [EDX + 0x16e99c8] ; 00464340 | DAT_016e99c8
    MOV dword ptr [EAX + EBP*0x1 + 0xffffff44],EDX ; 00464346
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 0046434d
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464351
    IMUL EDX,dword ptr [EAX],0x184      ; 00464354
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046435a
    SHL EAX,0x4                         ; 0046435d
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4] ; 00464360
    SHL EAX,0x2                         ; 00464367
    ADD EDX,EAX                         ; 0046436a
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046436c
    ADD EAX,EAX                         ; 0046436f
    SHL EAX,0x2                         ; 00464371
    FLD float ptr [EDX + 0x16e9a08]     ; 00464374 | DAT_016e9a08
    FSTP float ptr [EAX + EBP*0x1 + -0x7c] ; 0046437a
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 0046437e
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464382
    IMUL EDX,dword ptr [EAX],0x184      ; 00464385
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046438b
    SHL EAX,0x4                         ; 0046438e
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb4] ; 00464391
    SHL EAX,0x2                         ; 00464398
    ADD EDX,EAX                         ; 0046439b
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046439d
    ADD EAX,EAX                         ; 004643a0
    SHL EAX,0x2                         ; 004643a2
    FLD float ptr [EDX + 0x16e9a48]     ; 004643a5 | DAT_016e9a48
    FSTP float ptr [EAX + EBP*0x1 + 0xffffff04] ; 004643ab
    MOV EAX,dword ptr [EBP + -0xc]      ; 004643b2
        ;   Label: LAB_004643b2
    MOV dword ptr [EBP + -0x24],EAX     ; 004643b5
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004643b8
    ADD EAX,dword ptr [EBP + -0x4]      ; 004643bc
    MOV EAX,dword ptr [EAX + 0x8]       ; 004643bf
    MOV dword ptr [EBP + -0xc],EAX      ; 004643c2
    JMP 0x00463fc1                      ; 004643c5
        ;   XREF to: 00463fc1 (UNCONDITIONAL_JUMP)  ; LAB_00463fc1
    CMP dword ptr [EBP + -0x14],0x0     ; 004643ca
        ;   Label: LAB_004643ca
    JZ 0x00464509                       ; 004643ce
        ;   XREF to: 00464509 (CONDITIONAL_JUMP)  ; LAB_00464509
    CMP dword ptr [EBP + -0x20],0x3     ; 004643d4
    JZ 0x004643e0                       ; 004643d8
        ;   XREF to: 004643e0 (CONDITIONAL_JUMP)  ; LAB_004643e0
    CMP dword ptr [EBP + -0x20],0x4     ; 004643da
    JNZ 0x004643e3                      ; 004643de
        ;   XREF to: 004643e3 (CONDITIONAL_JUMP)  ; LAB_004643e3
    SHL dword ptr [EBP + -0x3c],0x1     ; 004643e0
        ;   Label: LAB_004643e0
    IMUL EAX,dword ptr [EBP + -0x24],0xc ; 004643e3
        ;   Label: LAB_004643e3
    ADD EAX,dword ptr [EBP + -0x4]      ; 004643e7
    IMUL EDX,dword ptr [EAX],0x184      ; 004643ea
    MOV EAX,dword ptr [EBP + -0x20]     ; 004643f0
    SHL EAX,0x4                         ; 004643f3
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb8] ; 004643f6
    SHL EAX,0x2                         ; 004643fd
    ADD EAX,EDX                         ; 00464400
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464402
    SHL EDX,0x2                         ; 00464405
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 00464408 | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff40],EAX ; 0046440e
    IMUL EAX,dword ptr [EBP + -0x24],0xc ; 00464415
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464419
    IMUL EDX,dword ptr [EAX],0x184      ; 0046441c
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464422
    SHL EAX,0x4                         ; 00464425
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb8] ; 00464428
    SHL EAX,0x2                         ; 0046442f
    ADD EAX,EDX                         ; 00464432
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464434
    SHL EDX,0x2                         ; 00464437
    FLD float ptr [EAX + 0x16e9a08]     ; 0046443a | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x80] ; 00464440
    IMUL EAX,dword ptr [EBP + -0x24],0xc ; 00464444
    ADD EAX,dword ptr [EBP + -0x4]      ; 00464448
    IMUL EDX,dword ptr [EAX],0x184      ; 0046444b
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464451
    SHL EAX,0x4                         ; 00464454
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffeb8] ; 00464457
    SHL EAX,0x2                         ; 0046445e
    ADD EDX,EAX                         ; 00464461
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00464463
    SHL EAX,0x2                         ; 00464466
    FLD float ptr [EDX + 0x16e9a48]     ; 00464469 | DAT_016e9a48
    FSTP float ptr [EAX + EBP*0x1 + 0xffffff00] ; 0046446f
    IMUL EAX,dword ptr [EBP + -0x24],0xc ; 00464476
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046447a
    IMUL EDX,dword ptr [EAX],0x184      ; 0046447d
    MOV EAX,dword ptr [EBP + -0x20]     ; 00464483
    SHL EAX,0x4                         ; 00464486
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffebc] ; 00464489
    SHL EAX,0x2                         ; 00464490
    ADD EAX,EDX                         ; 00464493
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464495
    SHL EDX,0x2                         ; 00464498
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0046449b | DAT_016e99c8
    MOV dword ptr [EDX + EBP*0x1 + 0xffffff44],EAX ; 004644a1
    IMUL EAX,dword ptr [EBP + -0x24],0xc ; 004644a8
    ADD EAX,dword ptr [EBP + -0x4]      ; 004644ac
    IMUL EDX,dword ptr [EAX],0x184      ; 004644af
    MOV EAX,dword ptr [EBP + -0x20]     ; 004644b5
    SHL EAX,0x4                         ; 004644b8
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffebc] ; 004644bb
    SHL EAX,0x2                         ; 004644c2
    ADD EAX,EDX                         ; 004644c5
    MOV EDX,dword ptr [EBP + -0x3c]     ; 004644c7
    SHL EDX,0x2                         ; 004644ca
    FLD float ptr [EAX + 0x16e9a08]     ; 004644cd | DAT_016e9a08
    FSTP float ptr [EDX + EBP*0x1 + -0x7c] ; 004644d3
    IMUL EAX,dword ptr [EBP + -0x24],0xc ; 004644d7
    ADD EAX,dword ptr [EBP + -0x4]      ; 004644db
    IMUL EDX,dword ptr [EAX],0x184      ; 004644de
    MOV EAX,dword ptr [EBP + -0x20]     ; 004644e4
    SHL EAX,0x4                         ; 004644e7
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xfffffebc] ; 004644ea
    SHL EAX,0x2                         ; 004644f1
    ADD EAX,EDX                         ; 004644f4
    MOV EDX,dword ptr [EBP + -0x3c]     ; 004644f6
    SHL EDX,0x2                         ; 004644f9
    FLD float ptr [EAX + 0x16e9a48]     ; 004644fc | DAT_016e9a48
    FSTP float ptr [EDX + EBP*0x1 + 0xffffff04] ; 00464502
    MOV EAX,dword ptr [EBP + -0x34]     ; 00464509
        ;   Label: LAB_00464509
    MOV dword ptr [EBP + 0xfffffdd0],EAX ; 0046450c
    MOV dword ptr [EBP + -0x3c],0x0     ; 00464512
    JMP 0x00464521                      ; 00464519
        ;   XREF to: 00464521 (UNCONDITIONAL_JUMP)  ; LAB_00464521
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046451b
        ;   Label: LAB_0046451b
    INC dword ptr [EBP + -0x3c]         ; 0046451e
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00464521
        ;   Label: LAB_00464521
    CMP EAX,dword ptr [EBP + 0xfffffdd0] ; 00464524
    JGE 0x00464548                      ; 0046452a
        ;   XREF to: 00464548 (CONDITIONAL_JUMP)  ; LAB_00464548
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046452c
    SHL EAX,0x2                         ; 0046452f
    MOV EDX,dword ptr [EBP + -0x3c]     ; 00464532
    SHL EDX,0x2                         ; 00464535
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0xffffff40] ; 00464538
    MOV dword ptr [EDX + EBP*0x1 + 0xfffffde4],EAX ; 0046453f
    JMP 0x0046451b                      ; 00464546
        ;   XREF to: 0046451b (UNCONDITIONAL_JUMP)  ; LAB_0046451b
    MOV EAX,dword ptr [EBP + 0xfffffdd0] ; 00464548
        ;   Label: LAB_00464548
    SUB EAX,0x2                         ; 0046454e
    IMUL EAX,EAX,0xb4                   ; 00464551
    MOV dword ptr [EBP + 0xfffffd28],EAX ; 00464557
    FILD dword ptr [EBP + 0xfffffd28]   ; 0046455d
    FADD double ptr [0x0061c206]        ; 00464563 | g_CoplanarityTolerance
    FSTP double ptr [EBP + 0xfffffd20]  ; 00464569
    LEA EAX,[EBP + 0xfffffd2c]          ; 0046456f
    PUSH EAX                            ; 00464575
    CALL shape_design.c_calculatePolygonAngularArea_FUN_00461ee0 ; 00464576
        ;   XREF to: 00461ee0 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculatePolygonAngularArea_FUN_00461ee0(SShapeEditorPolygon * polygon_ptr)
    MOV dword ptr [EBP + 0xfffffd18],EAX ; 0046457b
    MOV dword ptr [EBP + 0xfffffd1c],EDX ; 00464581
    FLD double ptr [EBP + 0xfffffd18]   ; 00464587
    ADD ESP,0x4                         ; 0046458d
    FCOMP double ptr [EBP + 0xfffffd20] ; 00464590
    FNSTSW AX                           ; 00464596
    SAHF                                ; 00464598
    JNC 0x004645cb                      ; 00464599
        ;   XREF to: 004645cb (CONDITIONAL_JUMP)  ; LAB_004645cb
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046459b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004645a0
    PUSH 0x0                            ; 004645a2
    MOV EAX,0x61c20e                    ; 004645a4 | = "All polys on selected plane must form..."
    PUSH EAX                            ; 004645a9 | = "All polys on selected plane must form..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004645aa
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004645af
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004645b2
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004645b7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 004645bc
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004645c1
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00464840                      ; 004645c6
        ;   XREF to: 00464840 (UNCONDITIONAL_JUMP)  ; LAB_00464840
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004645cb
        ;   Label: LAB_004645cb
    MOV EAX,dword ptr [EBP + -0x34]     ; 004645d2
    MOV dword ptr [EDX + 0x16e99b4],EAX ; 004645d5 | DAT_016e99b4
    MOV dword ptr [EBP + -0x3c],0x0     ; 004645db
    JMP 0x004645ea                      ; 004645e2
        ;   XREF to: 004645ea (UNCONDITIONAL_JUMP)  ; LAB_004645ea
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004645e4
        ;   Label: LAB_004645e4
    INC dword ptr [EBP + -0x3c]         ; 004645e7
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 004645ea
        ;   Label: LAB_004645ea
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004645f1
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 004645f4 | DAT_016e99b4
    JGE 0x00464661                      ; 004645fa
        ;   XREF to: 00464661 (CONDITIONAL_JUMP)  ; LAB_00464661
    MOV ECX,dword ptr [EBP + -0x3c]     ; 004645fc
    SHL ECX,0x2                         ; 004645ff
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00464602
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00464609
    SHL EAX,0x2                         ; 0046460c
    ADD EDX,EAX                         ; 0046460f
    MOV EAX,dword ptr [ECX + EBP*0x1 + 0xffffff40] ; 00464611
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 00464618 | DAT_016e99c8
    MOV ECX,dword ptr [EBP + -0x3c]     ; 0046461e
    SHL ECX,0x2                         ; 00464621
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00464624
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046462b
    SHL EAX,0x2                         ; 0046462e
    ADD EAX,EDX                         ; 00464631
    FLD float ptr [ECX + EBP*0x1 + -0x80] ; 00464633
    FSTP float ptr [EAX + 0x16e9a08]    ; 00464637 | DAT_016e9a08
    MOV ECX,dword ptr [EBP + -0x3c]     ; 0046463d
    SHL ECX,0x2                         ; 00464640
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00464643
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046464a
    SHL EAX,0x2                         ; 0046464d
    ADD EAX,EDX                         ; 00464650
    FLD float ptr [ECX + EBP*0x1 + 0xffffff00] ; 00464652
    FSTP float ptr [EAX + 0x16e9a48]    ; 00464659 | DAT_016e9a48
    JMP 0x004645e4                      ; 0046465f
        ;   XREF to: 004645e4 (UNCONDITIONAL_JUMP)  ; LAB_004645e4
    PUSH 0x1a1b                         ; 00464661
        ;   Label: LAB_00464661
    MOV EAX,0x61c246                    ; 00464666 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046466b | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x38]     ; 0046466c
    SHL EAX,0x2                         ; 0046466f
    SUB EAX,0x4                         ; 00464672
    PUSH EAX                            ; 00464675
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00464676
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046467b
    MOV dword ptr [EBP + -0x10],EAX     ; 0046467e
    CMP dword ptr [EBP + -0x10],0x0     ; 00464681
    JNZ 0x004646a9                      ; 00464685
        ;   XREF to: 004646a9 (CONDITIONAL_JUMP)  ; LAB_004646a9
    MOV dword ptr [0x02f0ca48],0x61c258 ; 00464687 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x1a1c   ; 00464691 | g_CurrentLineNumber
    MOV EAX,0x61c26a                    ; 0046469b | = "Unable to get mem in wheel polygon re..."
    PUSH EAX                            ; 004646a0 | = "Unable to get mem in wheel polygon re..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004646a1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004646a6
    MOV EAX,dword ptr [EBP + -0x28]     ; 004646a9
        ;   Label: LAB_004646a9
    MOV dword ptr [EBP + -0xc],EAX      ; 004646ac
    MOV dword ptr [EBP + -0x3c],0x0     ; 004646af
    MOV dword ptr [EBP + -0x8],0x0      ; 004646b6
    JMP 0x004646c5                      ; 004646bd
        ;   XREF to: 004646c5 (UNCONDITIONAL_JUMP)  ; LAB_004646c5
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004646bf
        ;   Label: LAB_004646bf
    INC dword ptr [EBP + -0x3c]         ; 004646c2
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004646c5
        ;   Label: LAB_004646c5
    CMP EAX,dword ptr [EBP + -0x38]     ; 004646c8
    JGE 0x00464700                      ; 004646cb
        ;   XREF to: 00464700 (CONDITIONAL_JUMP)  ; LAB_00464700
    CMP dword ptr [EBP + -0xc],0x0      ; 004646cd
    JZ 0x004646f1                       ; 004646d1
        ;   XREF to: 004646f1 (CONDITIONAL_JUMP)  ; LAB_004646f1
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004646d3
    MOV EDX,dword ptr [EBP + -0x4]      ; 004646d7
    ADD EDX,EAX                         ; 004646da
    MOV EAX,dword ptr [EBP + -0x8]      ; 004646dc
    SHL EAX,0x2                         ; 004646df
    MOV ECX,dword ptr [EBP + -0x10]     ; 004646e2
    ADD ECX,EAX                         ; 004646e5
    MOV EAX,dword ptr [EDX]             ; 004646e7
    MOV dword ptr [ECX],EAX             ; 004646e9
    MOV EAX,dword ptr [EBP + -0x8]      ; 004646eb
    INC dword ptr [EBP + -0x8]          ; 004646ee
    IMUL EAX,dword ptr [EBP + -0xc],0xc ; 004646f1
        ;   Label: LAB_004646f1
    ADD EAX,dword ptr [EBP + -0x4]      ; 004646f5
    MOV EAX,dword ptr [EAX + 0x8]       ; 004646f8
    MOV dword ptr [EBP + -0xc],EAX      ; 004646fb
    JMP 0x004646bf                      ; 004646fe
        ;   XREF to: 004646bf (UNCONDITIONAL_JUMP)  ; LAB_004646bf
    MOV EAX,dword ptr [EBP + -0x38]     ; 00464700
        ;   Label: LAB_00464700
    SUB EAX,0x2                         ; 00464703
    MOV dword ptr [EBP + -0x3c],EAX     ; 00464706
    JMP 0x0046470f                      ; 00464709
        ;   XREF to: 0046470f (UNCONDITIONAL_JUMP)  ; LAB_0046470f
    ADD dword ptr [EBP + -0x3c],-0x1    ; 0046470b
        ;   Label: LAB_0046470b
    CMP dword ptr [EBP + -0x3c],0x0     ; 0046470f
        ;   Label: LAB_0046470f
    JL 0x00464797                       ; 00464713
        ;   XREF to: 00464797 (CONDITIONAL_JUMP)  ; LAB_00464797
    MOV dword ptr [EBP + -0xc],0x0      ; 00464719
    JMP 0x00464725                      ; 00464720
        ;   XREF to: 00464725 (UNCONDITIONAL_JUMP)  ; LAB_00464725
    INC dword ptr [EBP + -0xc]          ; 00464722
        ;   Label: LAB_00464722
    MOV EAX,dword ptr [EBP + -0xc]      ; 00464725
        ;   Label: LAB_00464725
    CMP EAX,dword ptr [EBP + -0x3c]     ; 00464728
    JGE 0x00464792                      ; 0046472b
        ;   XREF to: 00464792 (CONDITIONAL_JUMP)  ; LAB_00464792
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046472d
    SHL EAX,0x2                         ; 00464730
    ADD EAX,0x4                         ; 00464733
    ADD EAX,dword ptr [EBP + -0x10]     ; 00464736
    PUSH EAX                            ; 00464739
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046473a
    SHL EAX,0x2                         ; 0046473d
    ADD EAX,dword ptr [EBP + -0x10]     ; 00464740
    PUSH EAX                            ; 00464743
    CALL shape_design.c_comparePolygonIndices_FUN_00463800 ; 00464744
        ;   XREF to: 00463800 (UNCONDITIONAL_CALL)  ; int shape_design.c_comparePolygonIndices_FUN_00463800(int * first_value_ptr, int * second_value_ptr)
    ADD ESP,0x8                         ; 00464749
    TEST EAX,EAX                        ; 0046474c
    JLE 0x00464790                      ; 0046474e
        ;   XREF to: 00464790 (CONDITIONAL_JUMP)  ; LAB_00464790
    MOV EAX,dword ptr [EBP + -0xc]      ; 00464750
    SHL EAX,0x2                         ; 00464753
    ADD EAX,dword ptr [EBP + -0x10]     ; 00464756
    MOV EAX,dword ptr [EAX]             ; 00464759
    MOV dword ptr [EBP + 0xfffffd14],EAX ; 0046475b
    MOV EAX,dword ptr [EBP + -0xc]      ; 00464761
    SHL EAX,0x2                         ; 00464764
    MOV EDX,dword ptr [EBP + -0x10]     ; 00464767
    ADD EDX,EAX                         ; 0046476a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046476c
    SHL EAX,0x2                         ; 0046476f
    MOV ECX,dword ptr [EBP + -0x10]     ; 00464772
    ADD ECX,EAX                         ; 00464775
    MOV EAX,dword ptr [EDX + 0x4]       ; 00464777
    MOV dword ptr [ECX],EAX             ; 0046477a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046477c
    SHL EAX,0x2                         ; 0046477f
    MOV EDX,dword ptr [EBP + -0x10]     ; 00464782
    ADD EDX,EAX                         ; 00464785
    MOV EAX,dword ptr [EBP + 0xfffffd14] ; 00464787
    MOV dword ptr [EDX + 0x4],EAX       ; 0046478d
    JMP 0x00464722                      ; 00464790
        ;   XREF to: 00464722 (UNCONDITIONAL_JUMP)  ; LAB_00464722
        ;   Label: LAB_00464790
    JMP 0x0046470b                      ; 00464792
        ;   XREF to: 0046470b (UNCONDITIONAL_JUMP)  ; LAB_0046470b
        ;   Label: LAB_00464792
    MOV dword ptr [EBP + -0x3c],0x0     ; 00464797
        ;   Label: LAB_00464797
    JMP 0x004647a6                      ; 0046479e
        ;   XREF to: 004647a6 (UNCONDITIONAL_JUMP)  ; LAB_004647a6
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004647a0
        ;   Label: LAB_004647a0
    INC dword ptr [EBP + -0x3c]         ; 004647a3
    MOV EAX,dword ptr [EBP + -0x38]     ; 004647a6
        ;   Label: LAB_004647a6
    DEC EAX                             ; 004647a9
    CMP EAX,dword ptr [EBP + -0x3c]     ; 004647aa
    JLE 0x004647f8                      ; 004647ad
        ;   XREF to: 004647f8 (CONDITIONAL_JUMP)  ; LAB_004647f8
    MOV EAX,dword ptr [EBP + -0x3c]     ; 004647af
    SHL EAX,0x2                         ; 004647b2
    ADD EAX,dword ptr [EBP + -0x10]     ; 004647b5
    MOV EAX,dword ptr [EAX]             ; 004647b8
    MOV dword ptr [EBP + -0xc],EAX      ; 004647ba
    JMP 0x004647c5                      ; 004647bd
        ;   XREF to: 004647c5 (UNCONDITIONAL_JUMP)  ; LAB_004647c5
    MOV EAX,dword ptr [EBP + -0xc]      ; 004647bf
        ;   Label: LAB_004647bf
    INC dword ptr [EBP + -0xc]          ; 004647c2
    MOV EAX,[0x016e990c]                ; 004647c5 | g_PolygonCount
        ;   Label: LAB_004647c5
    DEC EAX                             ; 004647ca
    CMP EAX,dword ptr [EBP + -0xc]      ; 004647cb
    JLE 0x004647f6                      ; 004647ce
        ;   XREF to: 004647f6 (CONDITIONAL_JUMP)  ; LAB_004647f6
    MOV EAX,dword ptr [EBP + -0xc]      ; 004647d0
    INC EAX                             ; 004647d3
    IMUL EAX,EAX,0x184                  ; 004647d4
    IMUL ESI,dword ptr [EBP + -0xc],0x184 ; 004647da
    MOV ECX,0x61                        ; 004647e1
    LEA EDI,[ESI + 0x16e9910]           ; 004647e6 | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 004647ec | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 004647f2 | g_ModelPolygonData | DAT_016e9914
    JMP 0x004647bf                      ; 004647f4
        ;   XREF to: 004647bf (UNCONDITIONAL_JUMP)  ; LAB_004647bf
    JMP 0x004647a0                      ; 004647f6
        ;   XREF to: 004647a0 (UNCONDITIONAL_JUMP)  ; LAB_004647a0
        ;   Label: LAB_004647f6
    MOV EAX,dword ptr [EBP + -0x38]     ; 004647f8
        ;   Label: LAB_004647f8
    SHL EAX,0x2                         ; 004647fb
    MOV EDX,dword ptr [EBP + -0x10]     ; 004647fe
    ADD EDX,EAX                         ; 00464801
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464803
    CMP EAX,dword ptr [EDX + -0x8]      ; 00464806
    JLE 0x0046481a                      ; 00464809
        ;   XREF to: 0046481a (CONDITIONAL_JUMP)  ; LAB_0046481a
    MOV EAX,dword ptr [EBP + -0x38]     ; 0046480b
    SHL EAX,0x2                         ; 0046480e
    ADD EAX,dword ptr [EBP + -0x10]     ; 00464811
    MOV EAX,dword ptr [EAX + -0x8]      ; 00464814
    MOV dword ptr [EBP + 0x14],EAX      ; 00464817
    PUSH 0x1a4d                         ; 0046481a
        ;   Label: LAB_0046481a
    MOV EAX,0x61c296                    ; 0046481f | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464824 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x10]     ; 00464825
    PUSH EAX                            ; 00464828
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00464829
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046482e
    MOV EAX,dword ptr [EBP + -0x38]     ; 00464831
    DEC EAX                             ; 00464834
    SUB dword ptr [0x016e990c],EAX      ; 00464835 | g_PolygonCount
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 0046483b
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeUnusedVertices_FUN_00463830()
    CMP dword ptr [EBP + -0x4],0x0      ; 00464840
        ;   Label: LAB_00464840
    JZ 0x0046485d                       ; 00464844
        ;   XREF to: 0046485d (CONDITIONAL_JUMP)  ; LAB_0046485d
    PUSH 0x1a59                         ; 00464846
    MOV EAX,0x61c2a8                    ; 0046484b | = "..\\shape\\design.c"
    PUSH EAX                            ; 00464850 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00464851
    PUSH EAX                            ; 00464854
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00464855
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046485a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046485d
        ;   Label: LAB_0046485d
    MOV dword ptr [EBP + -0x40],EAX     ; 00464860
    MOV EAX,dword ptr [EBP + -0x40]     ; 00464863
    MOV ESP,EBP                         ; 00464866
    POP EBP                             ; 00464868
    POP EDI                             ; 00464869
    POP ESI                             ; 0046486a
    POP EBX                             ; 0046486b
    RET                                 ; 0046486c

