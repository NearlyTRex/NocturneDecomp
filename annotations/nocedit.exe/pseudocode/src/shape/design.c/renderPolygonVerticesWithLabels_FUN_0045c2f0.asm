; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_renderPolygonVerticesWithLabels_FUN_0045c2f0(int polygon_index)
;
; Parameters:
; int              Stack[0x4]:4   polygon_index
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f562
;
; Referenced Globals:
;   float g_PolygonVertexDisplayScale = 256
;   TerminatedCString s_d_0061b322
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 DAT_00688024+3
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_PolygonVertexDisplayEnabled
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_plotPixel_FUN_00401140
;   engine_matrix.c_transformToCache_FUN_0050cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c2f0
        ;   Label: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
    PUSH ESI                            ; 0045c2f1
    PUSH EDI                            ; 0045c2f2
    PUSH EBP                            ; 0045c2f3
    MOV EBP,ESP                         ; 0045c2f4
    SUB ESP,0x6c                        ; 0045c2f6
    CMP byte ptr [0x02d03ec7],0x0       ; 0045c2fc | CHAR_ARRAY_02d03ec7
    JZ 0x0045c30e                       ; 0045c303
        ;   XREF to: 0045c30e (CONDITIONAL_JUMP)  ; LAB_0045c30e
    CMP byte ptr [0x02d03eb5],0x0       ; 0045c305 | CHAR_ARRAY_02d03eb5
    JNZ 0x0045c310                      ; 0045c30c
        ;   XREF to: 0045c310 (CONDITIONAL_JUMP)  ; LAB_0045c310
    JMP 0x0045c31e                      ; 0045c30e
        ;   XREF to: 0045c31e (UNCONDITIONAL_JUMP)  ; LAB_0045c31e
        ;   Label: LAB_0045c30e
    MOV byte ptr [0x02d03ec7],0x0       ; 0045c310 | CHAR_ARRAY_02d03ec7
        ;   Label: LAB_0045c310
    XOR byte ptr [0x015c4830],0x1       ; 0045c317 | g_PolygonVertexDisplayEnabled
    CMP dword ptr [0x015c4830],0x0      ; 0045c31e | g_PolygonVertexDisplayEnabled
        ;   Label: LAB_0045c31e
    JNZ 0x0045c32c                      ; 0045c325
        ;   XREF to: 0045c32c (CONDITIONAL_JUMP)  ; LAB_0045c32c
    JMP 0x0045c4df                      ; 0045c327
        ;   XREF to: 0045c4df (UNCONDITIONAL_JUMP)  ; LAB_0045c4df
    CMP dword ptr [EBP + 0x14],0x0      ; 0045c32c
        ;   Label: LAB_0045c32c
    JL 0x0045c33d                       ; 0045c330
        ;   XREF to: 0045c33d (CONDITIONAL_JUMP)  ; LAB_0045c33d
    MOV EAX,[0x016e990c]                ; 0045c332 | g_PolygonCount
    DEC EAX                             ; 0045c337
    CMP EAX,dword ptr [EBP + 0x14]      ; 0045c338
    JGE 0x0045c342                      ; 0045c33b
        ;   XREF to: 0045c342 (CONDITIONAL_JUMP)  ; LAB_0045c342
    JMP 0x0045c4df                      ; 0045c33d
        ;   XREF to: 0045c4df (UNCONDITIONAL_JUMP)  ; LAB_0045c4df
        ;   Label: LAB_0045c33d
    MOV dword ptr [EBP + -0x10],0x0     ; 0045c342
        ;   Label: LAB_0045c342
    JMP 0x0045c351                      ; 0045c349
        ;   XREF to: 0045c351 (UNCONDITIONAL_JUMP)  ; LAB_0045c351
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c34b
        ;   Label: LAB_0045c34b
    INC dword ptr [EBP + -0x10]         ; 0045c34e
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045c351
        ;   Label: LAB_0045c351
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c358
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045c35b | DAT_016e99b4
    JGE 0x0045c3d8                      ; 0045c361
        ;   XREF to: 0045c3d8 (CONDITIONAL_JUMP)  ; LAB_0045c3d8
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045c363
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c36a
    SHL EAX,0x2                         ; 0045c36d
    ADD EAX,EDX                         ; 0045c370
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045c372 | DAT_016e99c8
    MOV dword ptr [EBP + -0x4],EAX      ; 0045c378
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045c37b
    FLD float ptr [EAX + 0x162640c]     ; 0045c37f | g_LoadedVertices
    FMUL float ptr [0x0061b31e]         ; 0045c385 | g_PolygonVertexDisplayScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045c38b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x1c]       ; 0045c390
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045c393
    FLD float ptr [EAX + 0x1626410]     ; 0045c397 | DAT_01626410
    FMUL float ptr [0x0061b31e]         ; 0045c39d | g_PolygonVertexDisplayScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045c3a3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x18]       ; 0045c3a8
    IMUL EAX,dword ptr [EBP + -0x4],0x14 ; 0045c3ab
    FLD float ptr [EAX + 0x1626414]     ; 0045c3af | g_LoadedVertices[0].vertex.z
    FMUL float ptr [0x0061b31e]         ; 0045c3b5 | g_PolygonVertexDisplayScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045c3bb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x14]       ; 0045c3c0
    LEA EAX,[EBP + -0x1c]               ; 0045c3c3
    PUSH EAX                            ; 0045c3c6
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c3c7
    PUSH EAX                            ; 0045c3ca
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 0045c3cb
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0045c3d0
    JMP 0x0045c34b                      ; 0045c3d3
        ;   XREF to: 0045c34b (UNCONDITIONAL_JUMP)  ; LAB_0045c34b
    MOV dword ptr [EBP + -0x10],0x0     ; 0045c3d8
        ;   Label: LAB_0045c3d8
    JMP 0x0045c3e7                      ; 0045c3df
        ;   XREF to: 0045c3e7 (UNCONDITIONAL_JUMP)  ; LAB_0045c3e7
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c3e1
        ;   Label: LAB_0045c3e1
    INC dword ptr [EBP + -0x10]         ; 0045c3e4
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045c3e7
        ;   Label: LAB_0045c3e7
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c3ee
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045c3f1 | DAT_016e99b4
    JGE 0x0045c4df                      ; 0045c3f7
        ;   XREF to: 0045c4df (CONDITIONAL_JUMP)  ; LAB_0045c4df
    MOV dword ptr [0x02d02570],0x7      ; 0045c3fd | g_ActiveRenderColor
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c407
    MOV EAX,dword ptr [EAX + 0x688024]  ; 0045c40b | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SAR EAX,0x10                        ; 0045c411
    MOV dword ptr [EBP + -0xc],EAX      ; 0045c414
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c417
    MOV EAX,dword ptr [EAX + 0x688028]  ; 0045c41b | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR EAX,0x10                        ; 0045c421
    MOV dword ptr [EBP + -0x8],EAX      ; 0045c424
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c427
    TEST byte ptr [EAX + 0x688027],0x80 ; 0045c42b | DAT_00688024+3
    JZ 0x0045c439                       ; 0045c432
        ;   XREF to: 0045c439 (CONDITIONAL_JUMP)  ; LAB_0045c439
    JMP 0x0045c4da                      ; 0045c434
        ;   XREF to: 0045c4da (UNCONDITIONAL_JUMP)  ; LAB_0045c4da
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c439
        ;   Label: LAB_0045c439
    CMP EAX,dword ptr [0x00679394]      ; 0045c43c | g_WindowWidth
    JNC 0x0045c44f                      ; 0045c442
        ;   XREF to: 0045c44f (CONDITIONAL_JUMP)  ; LAB_0045c44f
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c444
    CMP EAX,dword ptr [0x00679398]      ; 0045c447 | g_WindowHeight
    JC 0x0045c451                       ; 0045c44d
        ;   XREF to: 0045c451 (CONDITIONAL_JUMP)  ; LAB_0045c451
    JMP 0x0045c45e                      ; 0045c44f
        ;   XREF to: 0045c45e (UNCONDITIONAL_JUMP)  ; LAB_0045c45e
        ;   Label: LAB_0045c44f
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c451
        ;   Label: LAB_0045c451
    CMP dword ptr [EAX + 0x68801c],0x0  ; 0045c455 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    JG 0x0045c460                       ; 0045c45c
        ;   XREF to: 0045c460 (CONDITIONAL_JUMP)  ; LAB_0045c460
    JMP 0x0045c470                      ; 0045c45e
        ;   XREF to: 0045c470 (UNCONDITIONAL_JUMP)  ; LAB_0045c470
        ;   Label: LAB_0045c45e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c460
        ;   Label: LAB_0045c460
    PUSH EAX                            ; 0045c463
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c464
    PUSH EAX                            ; 0045c467
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0045c468
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0045c46d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c470
        ;   Label: LAB_0045c470
    ADD EAX,0x8                         ; 0045c473
    CMP EAX,dword ptr [0x00679394]      ; 0045c476 | g_WindowWidth
    JNC 0x0045c48c                      ; 0045c47c
        ;   XREF to: 0045c48c (CONDITIONAL_JUMP)  ; LAB_0045c48c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c47e
    ADD EAX,0xc                         ; 0045c481
    CMP EAX,dword ptr [0x00679398]      ; 0045c484 | g_WindowHeight
    JC 0x0045c48e                       ; 0045c48a
        ;   XREF to: 0045c48e (CONDITIONAL_JUMP)  ; LAB_0045c48e
    JMP 0x0045c49b                      ; 0045c48c
        ;   XREF to: 0045c49b (UNCONDITIONAL_JUMP)  ; LAB_0045c49b
        ;   Label: LAB_0045c48c
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c48e
        ;   Label: LAB_0045c48e
    CMP dword ptr [EAX + 0x68801c],0x0  ; 0045c492 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    JG 0x0045c49d                       ; 0045c499
        ;   XREF to: 0045c49d (CONDITIONAL_JUMP)  ; LAB_0045c49d
    JMP 0x0045c4da                      ; 0045c49b
        ;   XREF to: 0045c4da (UNCONDITIONAL_JUMP)  ; LAB_0045c4da
        ;   Label: LAB_0045c49b
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 0045c49d
        ;   Label: LAB_0045c49d
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c4a4
    SHL EAX,0x2                         ; 0045c4a7
    ADD EAX,EDX                         ; 0045c4aa
    PUSH dword ptr [EAX + 0x16e99c8]    ; 0045c4ac | DAT_016e99c8
    MOV EAX,0x61b322                    ; 0045c4b2 | = "%d"
    PUSH EAX                            ; 0045c4b7 | = "%d"
    LEA EAX,[EBP + -0x6c]               ; 0045c4b8
    PUSH EAX                            ; 0045c4bb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045c4bc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045c4c1
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c4c4
    INC EAX                             ; 0045c4c7
    PUSH EAX                            ; 0045c4c8
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c4c9
    INC EAX                             ; 0045c4cc
    PUSH EAX                            ; 0045c4cd
    LEA EAX,[EBP + -0x6c]               ; 0045c4ce
    PUSH EAX                            ; 0045c4d1
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045c4d2
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045c4d7
    JMP 0x0045c3e1                      ; 0045c4da
        ;   XREF to: 0045c3e1 (UNCONDITIONAL_JUMP)  ; LAB_0045c3e1
        ;   Label: LAB_0045c4da
    MOV ESP,EBP                         ; 0045c4df
        ;   Label: LAB_0045c4df
    POP EBP                             ; 0045c4e1
    POP EDI                             ; 0045c4e2
    POP ESI                             ; 0045c4e3
    POP EBX                             ; 0045c4e4
    RET                                 ; 0045c4e5

