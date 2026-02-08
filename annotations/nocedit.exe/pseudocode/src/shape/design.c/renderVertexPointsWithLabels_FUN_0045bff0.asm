; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_renderVertexPointsWithLabels_FUN_0045bff0(void)
;
; Local Variables:
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f557
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045ca4e
;
; Referenced Globals:
;   float g_VertexDisplayScale = 256
;   TerminatedCString s_d_0061b31a
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 DAT_00688024+3
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   int g_PolygonCount
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   ... and 8 more
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

    PUSH EBX                            ; 0045bff0
        ;   Label: shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
    PUSH ESI                            ; 0045bff1
    PUSH EDI                            ; 0045bff2
    PUSH EBP                            ; 0045bff3
    MOV EBP,ESP                         ; 0045bff4
    SUB ESP,0x78                        ; 0045bff6
    CMP byte ptr [0x02d03ec7],0x0       ; 0045bffc | CHAR_ARRAY_02d03ec7
    JZ 0x0045c00e                       ; 0045c003
        ;   XREF to: 0045c00e (CONDITIONAL_JUMP)  ; LAB_0045c00e
    CMP byte ptr [0x02d03eb5],0x0       ; 0045c005 | CHAR_ARRAY_02d03eb5
    JZ 0x0045c010                       ; 0045c00c
        ;   XREF to: 0045c010 (CONDITIONAL_JUMP)  ; LAB_0045c010
    JMP 0x0045c01e                      ; 0045c00e
        ;   XREF to: 0045c01e (UNCONDITIONAL_JUMP)  ; LAB_0045c01e
        ;   Label: LAB_0045c00e
    MOV byte ptr [0x02d03ec7],0x0       ; 0045c010 | CHAR_ARRAY_02d03ec7
        ;   Label: LAB_0045c010
    XOR byte ptr [0x01e66154],0x1       ; 0045c017 | g_VertexDisplayEnabled
    CMP dword ptr [0x01e66154],0x0      ; 0045c01e | g_VertexDisplayEnabled
        ;   Label: LAB_0045c01e
    JNZ 0x0045c02c                      ; 0045c025
        ;   XREF to: 0045c02c (CONDITIONAL_JUMP)  ; LAB_0045c02c
    JMP 0x0045c2db                      ; 0045c027
        ;   XREF to: 0045c2db (UNCONDITIONAL_JUMP)  ; LAB_0045c2db
    MOV dword ptr [EBP + -0x14],0x0     ; 0045c02c
        ;   Label: LAB_0045c02c
    JMP 0x0045c03b                      ; 0045c033
        ;   XREF to: 0045c03b (UNCONDITIONAL_JUMP)  ; LAB_0045c03b
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c035
        ;   Label: LAB_0045c035
    INC dword ptr [EBP + -0x14]         ; 0045c038
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c03b
        ;   Label: LAB_0045c03b
    CMP EAX,dword ptr [0x01626408]      ; 0045c03e | g_VertexCount
    JGE 0x0045c0af                      ; 0045c044
        ;   XREF to: 0045c0af (CONDITIONAL_JUMP)  ; LAB_0045c0af
    IMUL EAX,dword ptr [EBP + -0x14],0x14 ; 0045c046
    FLD float ptr [EAX + 0x162640c]     ; 0045c04a | g_LoadedVertices
    FMUL float ptr [0x0061b316]         ; 0045c050 | g_VertexDisplayScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045c056
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x28]       ; 0045c05b
    IMUL EAX,dword ptr [EBP + -0x14],0x14 ; 0045c05e
    FLD float ptr [EAX + 0x1626410]     ; 0045c062 | DAT_01626410
    FMUL float ptr [0x0061b316]         ; 0045c068 | g_VertexDisplayScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045c06e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x24]       ; 0045c073
    IMUL EAX,dword ptr [EBP + -0x14],0x14 ; 0045c076
    FLD float ptr [EAX + 0x1626414]     ; 0045c07a | g_LoadedVertices[0].vertex.z
    FMUL float ptr [0x0061b316]         ; 0045c080 | g_VertexDisplayScale
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045c086
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x20]       ; 0045c08b
    LEA EAX,[EBP + -0x28]               ; 0045c08e
    PUSH EAX                            ; 0045c091
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c092
    PUSH EAX                            ; 0045c095
    CALL engine_matrix.c_transformToCache_FUN_0050cd70 ; 0045c096
        ;   XREF to: 0050cd70 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0045c09b
    MOV EDX,dword ptr [EBP + -0x14]     ; 0045c09e
    SHL EDX,0x2                         ; 0045c0a1
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c0a4
    MOV dword ptr [EDX + 0x1e528cc],EAX ; 0045c0a7 | g_VertexDepthSortedIndices
    JMP 0x0045c035                      ; 0045c0ad
        ;   XREF to: 0045c035 (UNCONDITIONAL_JUMP)  ; LAB_0045c035
    MOV dword ptr [EBP + -0x14],0x0     ; 0045c0af
        ;   Label: LAB_0045c0af
    JMP 0x0045c0be                      ; 0045c0b6
        ;   XREF to: 0045c0be (UNCONDITIONAL_JUMP)  ; LAB_0045c0be
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c0b8
        ;   Label: LAB_0045c0b8
    INC dword ptr [EBP + -0x14]         ; 0045c0bb
    MOV EAX,[0x01626408]                ; 0045c0be | g_VertexCount
        ;   Label: LAB_0045c0be
    DEC EAX                             ; 0045c0c3
    CMP EAX,dword ptr [EBP + -0x14]     ; 0045c0c4
    JLE 0x0045c14f                      ; 0045c0c7
        ;   XREF to: 0045c14f (CONDITIONAL_JUMP)  ; LAB_0045c14f
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c0cd
    INC EAX                             ; 0045c0d0
    MOV dword ptr [EBP + -0x10],EAX     ; 0045c0d1
    JMP 0x0045c0dc                      ; 0045c0d4
        ;   XREF to: 0045c0dc (UNCONDITIONAL_JUMP)  ; LAB_0045c0dc
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c0d6
        ;   Label: LAB_0045c0d6
    INC dword ptr [EBP + -0x10]         ; 0045c0d9
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c0dc
        ;   Label: LAB_0045c0dc
    CMP EAX,dword ptr [0x01626408]      ; 0045c0df | g_VertexCount
    JGE 0x0045c14a                      ; 0045c0e5
        ;   XREF to: 0045c14a (CONDITIONAL_JUMP)  ; LAB_0045c14a
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c0e7
    SHL EAX,0x2                         ; 0045c0ea
    IMUL EDX,dword ptr [EAX + 0x1e528cc],0x14 ; 0045c0ed | g_VertexDepthSortedIndices
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c0f4
    SHL EAX,0x2                         ; 0045c0f7
    IMUL EAX,dword ptr [EAX + 0x1e528cc],0x14 ; 0045c0fa | g_VertexDepthSortedIndices
    FLD float ptr [EDX + 0x1626414]     ; 0045c101 | g_LoadedVertices[0].vertex.z
    FCOMP float ptr [EAX + 0x1626414]   ; 0045c107 | g_LoadedVertices[0].vertex.z
    FNSTSW AX                           ; 0045c10d
    SAHF                                ; 0045c10f
    JNC 0x0045c148                      ; 0045c110
        ;   XREF to: 0045c148 (CONDITIONAL_JUMP)  ; LAB_0045c148
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c112
    SHL EAX,0x2                         ; 0045c115
    MOV EAX,dword ptr [EAX + 0x1e528cc] ; 0045c118 | g_VertexDepthSortedIndices
    MOV dword ptr [EBP + -0x4],EAX      ; 0045c11e
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c121
    SHL EAX,0x2                         ; 0045c124
    MOV EDX,dword ptr [EBP + -0x14]     ; 0045c127
    SHL EDX,0x2                         ; 0045c12a
    MOV EAX,dword ptr [EAX + 0x1e528cc] ; 0045c12d | g_VertexDepthSortedIndices
    MOV dword ptr [EDX + 0x1e528cc],EAX ; 0045c133 | g_VertexDepthSortedIndices
    MOV EDX,dword ptr [EBP + -0x10]     ; 0045c139
    SHL EDX,0x2                         ; 0045c13c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c13f
    MOV dword ptr [EDX + 0x1e528cc],EAX ; 0045c142 | g_VertexDepthSortedIndices
    JMP 0x0045c0d6                      ; 0045c148
        ;   XREF to: 0045c0d6 (UNCONDITIONAL_JUMP)  ; LAB_0045c0d6
        ;   Label: LAB_0045c148
    JMP 0x0045c0b8                      ; 0045c14a
        ;   XREF to: 0045c0b8 (UNCONDITIONAL_JUMP)  ; LAB_0045c0b8
        ;   Label: LAB_0045c14a
    MOV dword ptr [EBP + -0x14],0x0     ; 0045c14f
        ;   Label: LAB_0045c14f
    JMP 0x0045c15e                      ; 0045c156
        ;   XREF to: 0045c15e (UNCONDITIONAL_JUMP)  ; LAB_0045c15e
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c158
        ;   Label: LAB_0045c158
    INC dword ptr [EBP + -0x14]         ; 0045c15b
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c15e
        ;   Label: LAB_0045c15e
    CMP EAX,dword ptr [0x01626408]      ; 0045c161 | g_VertexCount
    JGE 0x0045c2db                      ; 0045c167
        ;   XREF to: 0045c2db (CONDITIONAL_JUMP)  ; LAB_0045c2db
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045c16d
    SHL EAX,0x2                         ; 0045c170
    MOV EAX,dword ptr [EAX + 0x1e528cc] ; 0045c173 | g_VertexDepthSortedIndices
    MOV dword ptr [EBP + -0x10],EAX     ; 0045c179
    CMP dword ptr [0x01e66158],0x0      ; 0045c17c | g_WireframeMode
    JZ 0x0045c18e                       ; 0045c183
        ;   XREF to: 0045c18e (CONDITIONAL_JUMP)  ; LAB_0045c18e
    CMP dword ptr [0x01e6614c],-0x1     ; 0045c185 | g_CurrentPartIndex
    JNZ 0x0045c193                      ; 0045c18c
        ;   XREF to: 0045c193 (CONDITIONAL_JUMP)  ; LAB_0045c193
    JMP 0x0045c20a                      ; 0045c18e
        ;   XREF to: 0045c20a (UNCONDITIONAL_JUMP)  ; LAB_0045c20a
        ;   Label: LAB_0045c18e
    MOV dword ptr [EBP + -0x1c],0x0     ; 0045c193
        ;   Label: LAB_0045c193
    JMP 0x0045c1a2                      ; 0045c19a
        ;   XREF to: 0045c1a2 (UNCONDITIONAL_JUMP)  ; LAB_0045c1a2
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045c19c
        ;   Label: LAB_0045c19c
    INC dword ptr [EBP + -0x1c]         ; 0045c19f
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045c1a2
        ;   Label: LAB_0045c1a2
    CMP EAX,dword ptr [0x016e990c]      ; 0045c1a5 | g_PolygonCount
    JGE 0x0045c205                      ; 0045c1ab
        ;   XREF to: 0045c205 (CONDITIONAL_JUMP)  ; LAB_0045c205
    IMUL EAX,dword ptr [EBP + -0x1c],0x184 ; 0045c1ad
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 0045c1b4 | DAT_016e9a88
    CMP EAX,dword ptr [0x01e6614c]      ; 0045c1ba | g_CurrentPartIndex
    JZ 0x0045c1c4                       ; 0045c1c0
        ;   XREF to: 0045c1c4 (CONDITIONAL_JUMP)  ; LAB_0045c1c4
    JMP 0x0045c203                      ; 0045c1c2
        ;   XREF to: 0045c203 (UNCONDITIONAL_JUMP)  ; LAB_0045c203
    MOV dword ptr [EBP + -0x18],0x0     ; 0045c1c4
        ;   Label: LAB_0045c1c4
    JMP 0x0045c1d3                      ; 0045c1cb
        ;   XREF to: 0045c1d3 (UNCONDITIONAL_JUMP)  ; LAB_0045c1d3
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045c1cd
        ;   Label: LAB_0045c1cd
    INC dword ptr [EBP + -0x18]         ; 0045c1d0
    IMUL EDX,dword ptr [EBP + -0x1c],0x184 ; 0045c1d3
        ;   Label: LAB_0045c1d3
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045c1da
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045c1dd | DAT_016e99b4
    JGE 0x0045c203                      ; 0045c1e3
        ;   XREF to: 0045c203 (CONDITIONAL_JUMP)  ; LAB_0045c203
    IMUL EDX,dword ptr [EBP + -0x1c],0x184 ; 0045c1e5
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045c1ec
    SHL EAX,0x2                         ; 0045c1ef
    ADD EAX,EDX                         ; 0045c1f2
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045c1f4 | DAT_016e99c8
    CMP EAX,dword ptr [EBP + -0x10]     ; 0045c1fa
    JNZ 0x0045c201                      ; 0045c1fd
        ;   XREF to: 0045c201 (CONDITIONAL_JUMP)  ; LAB_0045c201
    JMP 0x0045c20a                      ; 0045c1ff
        ;   XREF to: 0045c20a (UNCONDITIONAL_JUMP)  ; LAB_0045c20a
    JMP 0x0045c1cd                      ; 0045c201
        ;   XREF to: 0045c1cd (UNCONDITIONAL_JUMP)  ; LAB_0045c1cd
        ;   Label: LAB_0045c201
    JMP 0x0045c19c                      ; 0045c203
        ;   XREF to: 0045c19c (UNCONDITIONAL_JUMP)  ; LAB_0045c19c
        ;   Label: LAB_0045c203
    JMP 0x0045c2d6                      ; 0045c205
        ;   XREF to: 0045c2d6 (UNCONDITIONAL_JUMP)  ; LAB_0045c2d6
        ;   Label: LAB_0045c205
    MOV dword ptr [0x02d02570],0x7      ; 0045c20a | g_ActiveRenderColor
        ;   Label: LAB_0045c20a
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c214
    MOV EAX,dword ptr [EAX + 0x688024]  ; 0045c218 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SAR EAX,0x10                        ; 0045c21e
    MOV dword ptr [EBP + -0xc],EAX      ; 0045c221
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c224
    MOV EAX,dword ptr [EAX + 0x688028]  ; 0045c228 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR EAX,0x10                        ; 0045c22e
    MOV dword ptr [EBP + -0x8],EAX      ; 0045c231
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c234
    TEST byte ptr [EAX + 0x688027],0x80 ; 0045c238 | DAT_00688024+3
    JZ 0x0045c246                       ; 0045c23f
        ;   XREF to: 0045c246 (CONDITIONAL_JUMP)  ; LAB_0045c246
    JMP 0x0045c2d6                      ; 0045c241
        ;   XREF to: 0045c2d6 (UNCONDITIONAL_JUMP)  ; LAB_0045c2d6
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c246
        ;   Label: LAB_0045c246
    CMP EAX,dword ptr [0x00679394]      ; 0045c249 | g_WindowWidth
    JNC 0x0045c25c                      ; 0045c24f
        ;   XREF to: 0045c25c (CONDITIONAL_JUMP)  ; LAB_0045c25c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c251
    CMP EAX,dword ptr [0x00679398]      ; 0045c254 | g_WindowHeight
    JC 0x0045c25e                       ; 0045c25a
        ;   XREF to: 0045c25e (CONDITIONAL_JUMP)  ; LAB_0045c25e
    JMP 0x0045c26b                      ; 0045c25c
        ;   XREF to: 0045c26b (UNCONDITIONAL_JUMP)  ; LAB_0045c26b
        ;   Label: LAB_0045c25c
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c25e
        ;   Label: LAB_0045c25e
    CMP dword ptr [EAX + 0x68801c],0x0  ; 0045c262 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    JG 0x0045c26d                       ; 0045c269
        ;   XREF to: 0045c26d (CONDITIONAL_JUMP)  ; LAB_0045c26d
    JMP 0x0045c27d                      ; 0045c26b
        ;   XREF to: 0045c27d (UNCONDITIONAL_JUMP)  ; LAB_0045c27d
        ;   Label: LAB_0045c26b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c26d
        ;   Label: LAB_0045c26d
    PUSH EAX                            ; 0045c270
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c271
    PUSH EAX                            ; 0045c274
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0045c275
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0045c27a
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c27d
        ;   Label: LAB_0045c27d
    ADD EAX,0x8                         ; 0045c280
    CMP EAX,dword ptr [0x00679394]      ; 0045c283 | g_WindowWidth
    JNC 0x0045c299                      ; 0045c289
        ;   XREF to: 0045c299 (CONDITIONAL_JUMP)  ; LAB_0045c299
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c28b
    ADD EAX,0xc                         ; 0045c28e
    CMP EAX,dword ptr [0x00679398]      ; 0045c291 | g_WindowHeight
    JC 0x0045c29b                       ; 0045c297
        ;   XREF to: 0045c29b (CONDITIONAL_JUMP)  ; LAB_0045c29b
    JMP 0x0045c2a8                      ; 0045c299
        ;   XREF to: 0045c2a8 (UNCONDITIONAL_JUMP)  ; LAB_0045c2a8
        ;   Label: LAB_0045c299
    IMUL EAX,dword ptr [EBP + -0x10],0x30 ; 0045c29b
        ;   Label: LAB_0045c29b
    CMP dword ptr [EAX + 0x68801c],0x0  ; 0045c29f | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    JG 0x0045c2aa                       ; 0045c2a6
        ;   XREF to: 0045c2aa (CONDITIONAL_JUMP)  ; LAB_0045c2aa
    JMP 0x0045c2d6                      ; 0045c2a8
        ;   XREF to: 0045c2d6 (UNCONDITIONAL_JUMP)  ; LAB_0045c2d6
        ;   Label: LAB_0045c2a8
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045c2aa
        ;   Label: LAB_0045c2aa
    PUSH EAX                            ; 0045c2ad
    MOV EAX,0x61b31a                    ; 0045c2ae | = "%d"
    PUSH EAX                            ; 0045c2b3 | = "%d"
    LEA EAX,[EBP + -0x78]               ; 0045c2b4
    PUSH EAX                            ; 0045c2b7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045c2b8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0045c2bd
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c2c0
    INC EAX                             ; 0045c2c3
    PUSH EAX                            ; 0045c2c4
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c2c5
    INC EAX                             ; 0045c2c8
    PUSH EAX                            ; 0045c2c9
    LEA EAX,[EBP + -0x78]               ; 0045c2ca
    PUSH EAX                            ; 0045c2cd
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 0045c2ce
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045c2d3
    JMP 0x0045c158                      ; 0045c2d6
        ;   XREF to: 0045c158 (UNCONDITIONAL_JUMP)  ; LAB_0045c158
        ;   Label: LAB_0045c2d6
    MOV ESP,EBP                         ; 0045c2db
        ;   Label: LAB_0045c2db
    POP EBP                             ; 0045c2dd
    POP EDI                             ; 0045c2de
    POP ESI                             ; 0045c2df
    POP EBX                             ; 0045c2e0
    RET                                 ; 0045c2e1

