; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderIndexedPolygonAdvanced_FUN_00553b10(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 0043850e
;
; Referenced Globals:
;   void* switchdataD_00553aec = 00553d60
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].light
;   undefined4 g_RenderVertexBuffer[0].color
;   undefined4 g_RenderVertexBuffer[0].fog
;   undefined4 g_RenderVertexBuffer[0].w_recip
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_UseExternalRenderer
;   ... and 26 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_normalizeTextureCoords_FUN_00552020
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   wincore_windll.cpp_drawPolygon2_FUN_005b7610
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553b10
        ;   Label: engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
    PUSH ESI                            ; 00553b11
    PUSH EDI                            ; 00553b12
    PUSH EBP                            ; 00553b13
    SUB ESP,0x58                        ; 00553b14
    CMP dword ptr [0x00772a7c],0x0      ; 00553b17 | g_CullingMode
    JZ 0x00553b7d                       ; 00553b1e
        ;   XREF to: 00553b7d (CONDITIONAL_JUMP)  ; LAB_00553b7d
    MOV ECX,dword ptr [ESP + 0x70]      ; 00553b20
    CMP ECX,0x3                         ; 00553b24
    JLE 0x00553bfb                      ; 00553b27
        ;   XREF to: 00553bfb (CONDITIONAL_JUMP)  ; LAB_00553bfb
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00553b2d
    LEA EBP,[ECX + -0x2]                ; 00553b31
    XOR ESI,ESI                         ; 00553b34
    XOR EDI,EDI                         ; 00553b36
    TEST EBP,EBP                        ; 00553b38
    JLE 0x00553b75                      ; 00553b3a
        ;   XREF to: 00553b75 (CONDITIONAL_JUMP)  ; LAB_00553b75
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 00553b3c
        ;   Label: LAB_00553b3c
    ADD EAX,0x688014                    ; 00553b40 | g_RenderVertexBuffer
    MOV ECX,dword ptr [EBX + 0x4]       ; 00553b45
    PUSH EAX                            ; 00553b48
    IMUL EAX,ECX,0x30                   ; 00553b49
    ADD EAX,0x688014                    ; 00553b4c | g_RenderVertexBuffer
    MOV EDX,dword ptr [EBX]             ; 00553b51
    PUSH EAX                            ; 00553b53
    IMUL EAX,EDX,0x30                   ; 00553b54
    ADD EAX,0x688014                    ; 00553b57 | g_RenderVertexBuffer
    PUSH EAX                            ; 00553b5c
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00553b5d
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00553b62
    TEST EAX,EAX                        ; 00553b65
    JZ 0x00553bf5                       ; 00553b67
        ;   XREF to: 00553bf5 (CONDITIONAL_JUMP)  ; LAB_00553bf5
    INC ESI                             ; 00553b6d
        ;   Label: LAB_00553b6d
    ADD EBX,0x4                         ; 00553b6e
    CMP ESI,EBP                         ; 00553b71
    JL 0x00553b3c                       ; 00553b73
        ;   XREF to: 00553b3c (CONDITIONAL_JUMP)  ; LAB_00553b3c
    CMP EDI,EBP                         ; 00553b75
        ;   Label: LAB_00553b75
    JZ 0x00553bed                       ; 00553b77
        ;   XREF to: 00553bed (CONDITIONAL_JUMP)  ; LAB_00553bed
    CMP dword ptr [0x02d03e94],0x0      ; 00553b7d | g_UseExternalRenderer
        ;   Label: LAB_00553b7d
    JZ 0x00553fdf                       ; 00553b84
        ;   XREF to: 00553fdf (CONDITIONAL_JUMP)  ; LAB_00553fdf
    CMP dword ptr [0x00772a74],0x0      ; 00553b8a | g_TexturesDisabled
    JNZ 0x00553fdf                      ; 00553b91
        ;   XREF to: 00553fdf (CONDITIONAL_JUMP)  ; LAB_00553fdf
    MOV EBX,dword ptr [ESP + 0x70]      ; 00553b97
    XOR EAX,EAX                         ; 00553b9b
    TEST EBX,EBX                        ; 00553b9d
    JLE 0x00553bc0                      ; 00553b9f
        ;   XREF to: 00553bc0 (CONDITIONAL_JUMP)  ; LAB_00553bc0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00553ba1
    MOV EBP,dword ptr [ESP + 0x70]      ; 00553ba5
    IMUL ECX,dword ptr [EDX],0x30       ; 00553ba9
        ;   Label: LAB_00553ba9
    INC EAX                             ; 00553bac
    ADD ECX,0x688014                    ; 00553bad | g_RenderVertexBuffer
    ADD EDX,0x4                         ; 00553bb3
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 00553bb6
    CMP EAX,EBP                         ; 00553bba
    JL 0x00553ba9                       ; 00553bbc
        ;   XREF to: 00553ba9 (CONDITIONAL_JUMP)  ; LAB_00553ba9
    MOV EAX,EAX                         ; 00553bbe
    MOV EAX,[0x02d052a0]                ; 00553bc0 | g_RenderStateFlags
        ;   Label: LAB_00553bc0
    PUSH EAX                            ; 00553bc5
    MOV EDX,dword ptr [ESP + 0x74]      ; 00553bc6
    PUSH EDX                            ; 00553bca
    LEA EAX,[ESP + 0x8]                 ; 00553bcb
    PUSH EAX                            ; 00553bcf
    CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610 ; 00553bd0
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00553bd5
    MOV EAX,dword ptr [ESP + 0x70]      ; 00553bd8
    MOV ECX,dword ptr [0x030e56b8]      ; 00553bdc | g_RenderedTriangleCount
    SUB EAX,0x2                         ; 00553be2
    ADD ECX,EAX                         ; 00553be5
    MOV dword ptr [0x030e56b8],ECX      ; 00553be7 | g_RenderedTriangleCount
    ADD ESP,0x58                        ; 00553bed
        ;   Label: LAB_00553bed
    POP EBP                             ; 00553bf0
    POP EDI                             ; 00553bf1
    POP ESI                             ; 00553bf2
    POP EBX                             ; 00553bf3
    RET                                 ; 00553bf4
    INC EDI                             ; 00553bf5
        ;   Label: LAB_00553bf5
    JMP 0x00553b6d                      ; 00553bf6
        ;   XREF to: 00553b6d (UNCONDITIONAL_JUMP)  ; LAB_00553b6d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00553bfb
        ;   Label: LAB_00553bfb
    MOV EDX,dword ptr [EDX + 0x8]       ; 00553bff
    LEA EAX,[EDX*0x4 + 0x0]             ; 00553c02
    SUB EAX,EDX                         ; 00553c09
    SHL EAX,0x4                         ; 00553c0b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00553c0e
    ADD EAX,0x688014                    ; 00553c12 | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX + 0x4]       ; 00553c17
    PUSH EAX                            ; 00553c1a
    LEA EAX,[EDX*0x4 + 0x0]             ; 00553c1b
    SUB EAX,EDX                         ; 00553c22
    SHL EAX,0x4                         ; 00553c24
    MOV EDX,dword ptr [ESP + 0x70]      ; 00553c27
    ADD EAX,0x688014                    ; 00553c2b | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX]             ; 00553c30
    PUSH EAX                            ; 00553c32
    LEA EAX,[EDX*0x4 + 0x0]             ; 00553c33
    SUB EAX,EDX                         ; 00553c3a
    SHL EAX,0x4                         ; 00553c3c
    ADD EAX,0x688014                    ; 00553c3f | g_RenderVertexBuffer
    PUSH EAX                            ; 00553c44
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00553c45
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00553c4a
    TEST EAX,EAX                        ; 00553c4d
    JNZ 0x00553b7d                      ; 00553c4f
        ;   XREF to: 00553b7d (CONDITIONAL_JUMP)  ; LAB_00553b7d
    ADD ESP,0x58                        ; 00553c55
    POP EBP                             ; 00553c58
    POP EDI                             ; 00553c59
    POP ESI                             ; 00553c5a
    POP EBX                             ; 00553c5b
    RET                                 ; 00553c5c
    MOV ECX,dword ptr [ESP + 0x70]      ; 00553c5d
        ;   Label: caseD_1
    XOR ESI,ESI                         ; 00553c61
    TEST ECX,ECX                        ; 00553c63
    JLE 0x00553d60                      ; 00553c65
        ;   XREF to: 00553d60 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00553c6b
    MOV EBP,dword ptr [ESP + 0x70]      ; 00553c6f
    IMUL EAX,dword ptr [EBX],0x30       ; 00553c73
        ;   Label: LAB_00553c73
    PUSH 0x1                            ; 00553c76
    ADD EAX,0x688014                    ; 00553c78 | g_RenderVertexBuffer
    PUSH EAX                            ; 00553c7d
    ADD EBX,0x4                         ; 00553c7e
    INC ESI                             ; 00553c81
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 00553c82
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00553c87
    CMP ESI,EBP                         ; 00553c8a
    JL 0x00553c73                       ; 00553c8c
        ;   XREF to: 00553c73 (CONDITIONAL_JUMP)  ; LAB_00553c73
    JMP 0x00553d60                      ; 00553c8e
        ;   XREF to: 00553d60 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0x70]      ; 00553c93
        ;   Label: caseD_2
    XOR EBX,EBX                         ; 00553c97
    TEST EDX,EDX                        ; 00553c99
    JLE 0x00553d60                      ; 00553c9b
        ;   XREF to: 00553d60 (CONDITIONAL_JUMP)  ; caseD_0
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00553ca1
    IMUL EAX,dword ptr [ESI],0x30       ; 00553ca5
        ;   Label: LAB_00553ca5
    PUSH 0x1                            ; 00553ca8
    ADD EAX,0x688014                    ; 00553caa | g_RenderVertexBuffer
    PUSH EAX                            ; 00553caf
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 00553cb0
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00553cb5
    INC EBX                             ; 00553cb8
    MOV ECX,dword ptr [ESP + 0x70]      ; 00553cb9
    ADD ESI,0x4                         ; 00553cbd
    CMP EBX,ECX                         ; 00553cc0
    JL 0x00553ca5                       ; 00553cc2
        ;   XREF to: 00553ca5 (CONDITIONAL_JUMP)  ; LAB_00553ca5
    JMP 0x00553d60                      ; 00553cc4
        ;   XREF to: 00553d60 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [ESP + 0x70]      ; 00553cc9
        ;   Label: caseD_3
    XOR ESI,ESI                         ; 00553ccd
    TEST EAX,EAX                        ; 00553ccf
    JLE 0x00553d60                      ; 00553cd1
        ;   XREF to: 00553d60 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00553cd7
    MOV EBP,dword ptr [ESP + 0x70]      ; 00553cdb
    IMUL EAX,dword ptr [EBX],0x30       ; 00553cdf
        ;   Label: LAB_00553cdf
    PUSH 0x1                            ; 00553ce2
    ADD EAX,0x688014                    ; 00553ce4 | g_RenderVertexBuffer
    PUSH EAX                            ; 00553ce9
    ADD EBX,0x4                         ; 00553cea
    INC ESI                             ; 00553ced
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0 ; 00553cee
        ;   XREF to: 005520a0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00553cf3
    CMP ESI,EBP                         ; 00553cf6
    JL 0x00553cdf                       ; 00553cf8
        ;   XREF to: 00553cdf (CONDITIONAL_JUMP)  ; LAB_00553cdf
    JMP 0x00553d60                      ; 00553cfa
        ;   XREF to: 00553d60 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBP,dword ptr [ESP + 0x70]      ; 00553cff
        ;   Label: caseD_5
    XOR ESI,ESI                         ; 00553d03
    TEST EBP,EBP                        ; 00553d05
    JLE 0x00553d60                      ; 00553d07
        ;   XREF to: 00553d60 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00553d09
    IMUL EAX,dword ptr [EBX],0x30       ; 00553d0d
        ;   Label: LAB_00553d0d
    PUSH 0x1                            ; 00553d10
    ADD EAX,0x688014                    ; 00553d12 | g_RenderVertexBuffer
    PUSH EAX                            ; 00553d17
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 00553d18
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00553d1d
    INC ESI                             ; 00553d20
    MOV ECX,dword ptr [ESP + 0x70]      ; 00553d21
    ADD EBX,0x4                         ; 00553d25
    CMP ESI,ECX                         ; 00553d28
    JL 0x00553d0d                       ; 00553d2a
        ;   XREF to: 00553d0d (CONDITIONAL_JUMP)  ; LAB_00553d0d
    JMP 0x00553d60                      ; 00553d2c
        ;   XREF to: 00553d60 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,dword ptr [ESP + 0x70]      ; 00553d2e
        ;   Label: caseD_6
    XOR ESI,ESI                         ; 00553d32
    TEST EDI,EDI                        ; 00553d34
    JLE 0x00553d60                      ; 00553d36
        ;   XREF to: 00553d60 (CONDITIONAL_JUMP)  ; caseD_0
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00553d38
    MOV EBP,dword ptr [ESP + 0x70]      ; 00553d3c
    IMUL EAX,dword ptr [EBX],0x30       ; 00553d40
        ;   Label: LAB_00553d40
    PUSH 0x1                            ; 00553d43
    ADD EAX,0x688014                    ; 00553d45 | g_RenderVertexBuffer
    PUSH EAX                            ; 00553d4a
    ADD EBX,0x4                         ; 00553d4b
    INC ESI                             ; 00553d4e
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 00553d4f
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00553d54
    CMP ESI,EBP                         ; 00553d57
    JL 0x00553d40                       ; 00553d59
        ;   XREF to: 00553d40 (CONDITIONAL_JUMP)  ; LAB_00553d40
    LEA EAX,[EAX]                       ; 00553d5b
    MOV ECX,ECX                         ; 00553d5e
    MOV EAX,0x4b0                       ; 00553d60
        ;   Label: caseD_4
    XOR EDX,EDX                         ; 00553d65
    MOV ESI,dword ptr [ESP + 0x70]      ; 00553d67
    MOV dword ptr [0x030e5b44],EDX      ; 00553d6b | g_MaxScanline
    MOV dword ptr [0x030e56bc],EDX      ; 00553d71 | g_ActiveEdgeCount
    MOV dword ptr [ESP + 0x4c],EDX      ; 00553d77
    MOV [0x030e5b40],EAX                ; 00553d7b | g_MinScanline
    TEST ESI,ESI                        ; 00553d80
    JLE 0x00553dee                      ; 00553d82
        ;   XREF to: 00553dee (CONDITIONAL_JUMP)  ; LAB_00553dee
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00553d84
    MOV dword ptr [ESP + 0x44],EAX      ; 00553d88
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00553d8c
        ;   Label: LAB_00553d8c
    MOV EDI,dword ptr [ESP + 0x70]      ; 00553d90
    INC EAX                             ; 00553d94
    CMP EAX,EDI                         ; 00553d95
    JL 0x00553d9b                       ; 00553d97
        ;   XREF to: 00553d9b (CONDITIONAL_JUMP)  ; LAB_00553d9b
    XOR EAX,EAX                         ; 00553d99
    MOV EBP,dword ptr [ESP + 0x6c]      ; 00553d9b
        ;   Label: LAB_00553d9b
    SHL EAX,0x2                         ; 00553d9f
    ADD EAX,EBP                         ; 00553da2
    IMUL ECX,dword ptr [EAX],0x30       ; 00553da4
    MOV EAX,dword ptr [ESP + 0x44]      ; 00553da7
    IMUL ESI,dword ptr [EAX],0x30       ; 00553dab
    ADD ECX,0x688014                    ; 00553dae | g_RenderVertexBuffer
    ADD ESI,0x688014                    ; 00553db4 | g_RenderVertexBuffer
    MOV EDI,ECX                         ; 00553dba
    MOV EAX,dword ptr [ECX + 0x14]      ; 00553dbc | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EDX,dword ptr [ESI + 0x14]      ; 00553dbf | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR EAX,0x10                        ; 00553dc2
    SAR EDX,0x10                        ; 00553dc5
    MOV EBX,ESI                         ; 00553dc8
    CMP EDX,EAX                         ; 00553dca
    JNZ 0x00554001                      ; 00553dcc
        ;   XREF to: 00554001 (CONDITIONAL_JUMP)  ; LAB_00554001
    MOV EDI,dword ptr [ESP + 0x44]      ; 00553dd2
        ;   Label: LAB_00553dd2
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00553dd6
    MOV EDX,dword ptr [ESP + 0x70]      ; 00553dda
    ADD EDI,0x4                         ; 00553dde
    INC EBP                             ; 00553de1
    MOV dword ptr [ESP + 0x44],EDI      ; 00553de2
    MOV dword ptr [ESP + 0x4c],EBP      ; 00553de6
    CMP EBP,EDX                         ; 00553dea
    JL 0x00553d8c                       ; 00553dec
        ;   XREF to: 00553d8c (CONDITIONAL_JUMP)  ; LAB_00553d8c
    MOV EAX,0x30e56c0                   ; 00553dee | g_SoftwareEdgeTable
        ;   Label: LAB_00553dee
    MOV ESI,dword ptr [0x030e56bc]      ; 00553df3 | g_ActiveEdgeCount
    MOV EBX,dword ptr [0x030e5b40]      ; 00553df9 | g_MinScanline
    XOR ECX,ECX                         ; 00553dff
    TEST ESI,ESI                        ; 00553e01
    JLE 0x0055426f                      ; 00553e03
        ;   XREF to: 0055426f (CONDITIONAL_JUMP)  ; LAB_0055426f
    MOV EDX,dword ptr [0x030e56bc]      ; 00553e09 | g_ActiveEdgeCount
    CMP EBX,dword ptr [EAX]             ; 00553e0f | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_00553e0f
    JNZ 0x00554263                      ; 00553e11
        ;   XREF to: 00554263 (CONDITIONAL_JUMP)  ; LAB_00554263
    TEST EAX,EAX                        ; 00553e17
    JZ 0x00554263                       ; 00553e19
        ;   XREF to: 00554263 (CONDITIONAL_JUMP)  ; LAB_00554263
    MOV dword ptr [ESP + 0x54],EAX      ; 00553e1f | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_00553e1f
    TEST EAX,EAX                        ; 00553e23
    JZ 0x00553bed                       ; 00553e25
        ;   XREF to: 00553bed (CONDITIONAL_JUMP)  ; LAB_00553bed
    MOV EDI,dword ptr [0x030e56bc]      ; 00553e2b | g_ActiveEdgeCount
    MOV ECX,dword ptr [0x030e5b40]      ; 00553e31 | g_MinScanline
    MOV EBX,EAX                         ; 00553e37
    XOR EDX,EDX                         ; 00553e39
    MOV EAX,0x30e56c0                   ; 00553e3b | g_SoftwareEdgeTable
    TEST EDI,EDI                        ; 00553e40
    JLE 0x00554282                      ; 00553e42
        ;   XREF to: 00554282 (CONDITIONAL_JUMP)  ; LAB_00554282
    MOV EBP,dword ptr [0x030e56bc]      ; 00553e48 | g_ActiveEdgeCount
    CMP ECX,dword ptr [EAX]             ; 00553e4e | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_00553e4e
    JNZ 0x00554276                      ; 00553e50
        ;   XREF to: 00554276 (CONDITIONAL_JUMP)  ; LAB_00554276
    CMP EAX,EBX                         ; 00553e56
    JZ 0x00554276                       ; 00553e58
        ;   XREF to: 00554276 (CONDITIONAL_JUMP)  ; LAB_00554276
    MOV EBP,EAX                         ; 00553e5e
        ;   Label: LAB_00553e5e
    TEST EAX,EAX                        ; 00553e60
    JZ 0x00553bed                       ; 00553e62
        ;   XREF to: 00553bed (CONDITIONAL_JUMP)  ; LAB_00553bed
    MOV EAX,[0x030e5b40]                ; 00553e68 | g_MinScanline
    MOV dword ptr [ESP + 0x50],EAX      ; 00553e6d
    MOV EDX,dword ptr [ESP + 0x54]      ; 00553e71
        ;   Label: LAB_00553e71
    MOV EAX,dword ptr [ESP + 0x50]      ; 00553e75
    CMP EAX,dword ptr [EDX + 0x4]       ; 00553e79 | g_SoftwareEdgeTable[0].y_max
    JL 0x00553ebf                       ; 00553e7c
        ;   XREF to: 00553ebf (CONDITIONAL_JUMP)  ; LAB_00553ebf
    MOV ESI,dword ptr [0x030e56bc]      ; 00553e7e | g_ActiveEdgeCount
    MOV EBX,EAX                         ; 00553e84
    MOV ECX,EBP                         ; 00553e86 | g_SoftwareEdgeTable
    MOV dword ptr [EDX],0xffffffff      ; 00553e88 | g_SoftwareEdgeTable
    MOV EAX,0x30e56c0                   ; 00553e8e | g_SoftwareEdgeTable
    XOR EDX,EDX                         ; 00553e93
    TEST ESI,ESI                        ; 00553e95
    JLE 0x00554295                      ; 00553e97
        ;   XREF to: 00554295 (CONDITIONAL_JUMP)  ; LAB_00554295
    MOV EDI,dword ptr [0x030e56bc]      ; 00553e9d | g_ActiveEdgeCount
    CMP EBX,dword ptr [EAX]             ; 00553ea3 | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_00553ea3
    JNZ 0x00554289                      ; 00553ea5
        ;   XREF to: 00554289 (CONDITIONAL_JUMP)  ; LAB_00554289
    CMP EAX,ECX                         ; 00553eab
    JZ 0x00554289                       ; 00553ead
        ;   XREF to: 00554289 (CONDITIONAL_JUMP)  ; LAB_00554289
    MOV dword ptr [ESP + 0x54],EAX      ; 00553eb3 | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_00553eb3
    TEST EAX,EAX                        ; 00553eb7
    JZ 0x00553bed                       ; 00553eb9
        ;   XREF to: 00553bed (CONDITIONAL_JUMP)  ; LAB_00553bed
    MOV EAX,dword ptr [ESP + 0x50]      ; 00553ebf
        ;   Label: LAB_00553ebf
    CMP EAX,dword ptr [EBP + 0x4]       ; 00553ec3 | g_SoftwareEdgeTable[0].y_max
    JL 0x00553f0a                       ; 00553ec6
        ;   XREF to: 00553f0a (CONDITIONAL_JUMP)  ; LAB_00553f0a
    MOV EBX,dword ptr [ESP + 0x54]      ; 00553ec8
    MOV ECX,EAX                         ; 00553ecc
    MOV dword ptr [EBP],0xffffffff      ; 00553ece | g_SoftwareEdgeTable
    XOR EDX,EDX                         ; 00553ed5
    MOV EBP,dword ptr [0x030e56bc]      ; 00553ed7 | g_ActiveEdgeCount
    MOV EAX,0x30e56c0                   ; 00553edd | g_SoftwareEdgeTable
    TEST EBP,EBP                        ; 00553ee2
    JLE 0x005542a8                      ; 00553ee4
        ;   XREF to: 005542a8 (CONDITIONAL_JUMP)  ; LAB_005542a8
    MOV ESI,dword ptr [0x030e56bc]      ; 00553eea | g_ActiveEdgeCount
    CMP ECX,dword ptr [EAX]             ; 00553ef0 | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_00553ef0
    JNZ 0x0055429c                      ; 00553ef2
        ;   XREF to: 0055429c (CONDITIONAL_JUMP)  ; LAB_0055429c
    CMP EAX,EBX                         ; 00553ef8
    JZ 0x0055429c                       ; 00553efa
        ;   XREF to: 0055429c (CONDITIONAL_JUMP)  ; LAB_0055429c
    MOV EBP,EAX                         ; 00553f00
        ;   Label: LAB_00553f00
    TEST EAX,EAX                        ; 00553f02
    JZ 0x00553bed                       ; 00553f04
        ;   XREF to: 00553bed (CONDITIONAL_JUMP)  ; LAB_00553bed
    MOV ESI,dword ptr [ESP + 0x54]      ; 00553f0a
        ;   Label: LAB_00553f0a
    MOV EBX,dword ptr [ESP + 0x50]      ; 00553f0e
    MOV EDI,EBP                         ; 00553f12
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 00553f14
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderScanline_FUN_005b5710(void * left_data, void * right_data, int scanline_y)
    MOV EAX,dword ptr [ESP + 0x54]      ; 00553f19
    MOV EDX,dword ptr [ESP + 0x54]      ; 00553f1d
    MOV EAX,dword ptr [EAX + 0xc]       ; 00553f21
    MOV ECX,dword ptr [EDX + 0x8]       ; 00553f24
    MOV EBX,dword ptr [EDX + 0x18]      ; 00553f27
    MOV ESI,dword ptr [EDX + 0x20]      ; 00553f2a
    MOV EDI,dword ptr [EDX + 0x28]      ; 00553f2d
    ADD ECX,EAX                         ; 00553f30
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00553f32
    MOV dword ptr [EDX + 0x8],ECX       ; 00553f35
    ADD EBX,EAX                         ; 00553f38
    MOV EAX,dword ptr [EDX + 0x24]      ; 00553f3a
    MOV dword ptr [EDX + 0x18],EBX      ; 00553f3d
    ADD ESI,EAX                         ; 00553f40
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00553f42
    MOV dword ptr [EDX + 0x20],ESI      ; 00553f45
    ADD EDI,EAX                         ; 00553f48
    MOV dword ptr [EDX + 0x28],EDI      ; 00553f4a
    MOV ECX,dword ptr [EDX + 0x10]      ; 00553f4d
    MOV EBX,dword ptr [EDX + 0x38]      ; 00553f50
    MOV ESI,dword ptr [EDX + 0x40]      ; 00553f53
    MOV EAX,dword ptr [EDX + 0x14]      ; 00553f56
    MOV EDI,dword ptr [EDX + 0x30]      ; 00553f59
    ADD ECX,EAX                         ; 00553f5c
    MOV EAX,dword ptr [EDX + 0x3c]      ; 00553f5e
    MOV dword ptr [EDX + 0x10],ECX      ; 00553f61
    ADD EBX,EAX                         ; 00553f64
    MOV EAX,dword ptr [EDX + 0x44]      ; 00553f66
    MOV dword ptr [EDX + 0x38],EBX      ; 00553f69
    ADD ESI,EAX                         ; 00553f6c
    MOV EAX,dword ptr [EDX + 0x34]      ; 00553f6e
    MOV dword ptr [EDX + 0x40],ESI      ; 00553f71
    ADD EDI,EAX                         ; 00553f74
    MOV dword ptr [EDX + 0x30],EDI      ; 00553f76
    MOV EAX,dword ptr [EBP + 0xc]       ; 00553f79 | g_SoftwareEdgeTable[0].x_gradient
    MOV EDX,dword ptr [EBP + 0x8]       ; 00553f7c | g_SoftwareEdgeTable[0].x_current
    MOV ECX,dword ptr [EBP + 0x18]      ; 00553f7f | g_SoftwareEdgeTable[0].u_current
    MOV EBX,dword ptr [EBP + 0x20]      ; 00553f82 | g_SoftwareEdgeTable[0].v_current
    ADD EDX,EAX                         ; 00553f85
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00553f87 | g_SoftwareEdgeTable[0].u_gradient
    MOV dword ptr [EBP + 0x8],EDX       ; 00553f8a | g_SoftwareEdgeTable[0].x_current
    ADD ECX,EAX                         ; 00553f8d
    MOV EAX,dword ptr [EBP + 0x24]      ; 00553f8f | g_SoftwareEdgeTable[0].v_gradient
    MOV dword ptr [EBP + 0x18],ECX      ; 00553f92 | g_SoftwareEdgeTable[0].u_current
    ADD EBX,EAX                         ; 00553f95
    MOV dword ptr [EBP + 0x20],EBX      ; 00553f97 | g_SoftwareEdgeTable[0].v_current
    MOV ESI,dword ptr [EBP + 0x28]      ; 00553f9a | g_SoftwareEdgeTable[0].w_current
    MOV EDI,dword ptr [EBP + 0x10]      ; 00553f9d | g_SoftwareEdgeTable[0].z_current
    MOV EDX,dword ptr [EBP + 0x38]      ; 00553fa0 | g_SoftwareEdgeTable[0].r_current
    MOV ECX,dword ptr [EBP + 0x40]      ; 00553fa3 | g_SoftwareEdgeTable[0].g_current
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00553fa6 | g_SoftwareEdgeTable[0].w_gradient
    MOV EBX,dword ptr [EBP + 0x30]      ; 00553fa9 | g_SoftwareEdgeTable[0].fog_current
    ADD ESI,EAX                         ; 00553fac
    MOV EAX,dword ptr [EBP + 0x14]      ; 00553fae | g_SoftwareEdgeTable[0].z_gradient
    MOV dword ptr [EBP + 0x28],ESI      ; 00553fb1 | g_SoftwareEdgeTable[0].w_current
    MOV ESI,dword ptr [ESP + 0x50]      ; 00553fb4
    ADD EDI,EAX                         ; 00553fb8
    INC ESI                             ; 00553fba
    MOV EAX,dword ptr [EBP + 0x3c]      ; 00553fbb | g_SoftwareEdgeTable[0].r_gradient
    MOV dword ptr [EBP + 0x10],EDI      ; 00553fbe | g_SoftwareEdgeTable[0].z_current
    ADD EDX,EAX                         ; 00553fc1
    MOV EAX,dword ptr [EBP + 0x44]      ; 00553fc3 | g_SoftwareEdgeTable[0].g_gradient
    MOV dword ptr [EBP + 0x38],EDX      ; 00553fc6 | g_SoftwareEdgeTable[0].r_current
    ADD ECX,EAX                         ; 00553fc9
    MOV EAX,dword ptr [EBP + 0x34]      ; 00553fcb | g_SoftwareEdgeTable[0].fog_gradient
    MOV dword ptr [EBP + 0x40],ECX      ; 00553fce | g_SoftwareEdgeTable[0].g_current
    ADD EBX,EAX                         ; 00553fd1
    MOV dword ptr [ESP + 0x50],ESI      ; 00553fd3
    MOV dword ptr [EBP + 0x30],EBX      ; 00553fd7 | g_SoftwareEdgeTable[0].fog_current
    JMP 0x00553e71                      ; 00553fda
        ;   XREF to: 00553e71 (UNCONDITIONAL_JUMP)  ; LAB_00553e71
    MOV ESI,dword ptr [0x030e56b8]      ; 00553fdf | g_RenderedTriangleCount
        ;   Label: LAB_00553fdf
    INC ESI                             ; 00553fe5
    MOV EAX,[0x02d052a4]                ; 00553fe6 | g_RenderStateFlag2
    MOV dword ptr [0x030e56b8],ESI      ; 00553feb | g_RenderedTriangleCount
    CMP EAX,0x6                         ; 00553ff1
    JA 0x00553d60                       ; 00553ff4
        ;   XREF to: 00553d60 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x553aec]  ; 00553ffa | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EBP,dword ptr [ESI + 0x14]      ; 00554001 | g_RenderVertexBuffer[0].projected_vertex.screen_y
        ;   Label: LAB_00554001
    CMP EBP,dword ptr [ECX + 0x14]      ; 00554004 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    JLE 0x00554013                      ; 00554007
        ;   XREF to: 00554013 (CONDITIONAL_JUMP)  ; LAB_00554013
    MOV EBX,ECX                         ; 00554009
    MOV EDI,ESI                         ; 0055400b
    MOV ECX,EDX                         ; 0055400d
    MOV EDX,EAX                         ; 0055400f
    MOV EAX,ECX                         ; 00554011
    IMUL EBP,dword ptr [0x030e56bc],0x48 ; 00554013 | g_ActiveEdgeCount
        ;   Label: LAB_00554013
    ADD EBP,0x30e56c0                   ; 0055401a | g_SoftwareEdgeTable
    MOV dword ptr [EBP],EDX             ; 00554020 | g_SoftwareEdgeTable
    MOV ECX,dword ptr [0x030e5b40]      ; 00554023 | g_MinScanline
    MOV dword ptr [EBP + 0x4],EAX       ; 00554029 | g_SoftwareEdgeTable[0].y_max
    CMP EDX,ECX                         ; 0055402c
    JGE 0x00554036                      ; 0055402e
        ;   XREF to: 00554036 (CONDITIONAL_JUMP)  ; LAB_00554036
    MOV dword ptr [0x030e5b40],EDX      ; 00554030 | g_MinScanline
    CMP EAX,dword ptr [0x030e5b44]      ; 00554036 | g_MaxScanline
        ;   Label: LAB_00554036
    JLE 0x00554043                      ; 0055403c
        ;   XREF to: 00554043 (CONDITIONAL_JUMP)  ; LAB_00554043
    MOV [0x030e5b44],EAX                ; 0055403e | g_MaxScanline
    MOV EAX,dword ptr [EBX + 0x14]      ; 00554043 | g_RenderVertexBuffer[0].projected_vertex.screen_y
        ;   Label: LAB_00554043
    MOV ECX,dword ptr [EDI + 0x14]      ; 00554046 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB ECX,EAX                         ; 00554049
    CMP ECX,0x10000                     ; 0055404b
    JNC 0x00554210                      ; 00554051
        ;   XREF to: 00554210 (CONDITIONAL_JUMP)  ; LAB_00554210
    XOR ECX,ECX                         ; 00554057
    MOV EAX,dword ptr [EDI + 0x10]      ; 00554059 | g_RenderVertexBuffer[0].projected_vertex.screen_x
        ;   Label: LAB_00554059
    MOV EDX,dword ptr [EBX + 0x10]      ; 0055405c | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV ESI,dword ptr [EBX + 0x14]      ; 0055405f | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EAX,EDX                         ; 00554062
    AND ESI,0xffff                      ; 00554064
    MOV EDX,EAX                         ; 0055406a
    MOV EAX,ECX                         ; 0055406c
    XOR SI,0xffff                       ; 0055406e
    IMUL EDX                            ; 00554072
    SHRD EAX,EDX,0x10                   ; 00554074
    MOV EDX,EAX                         ; 00554078
    MOV dword ptr [EBP + 0xc],EAX       ; 0055407a | g_SoftwareEdgeTable[0].x_gradient
    MOV EAX,ESI                         ; 0055407d
    IMUL EDX                            ; 0055407f
    SHRD EAX,EDX,0x10                   ; 00554081
    MOV dword ptr [ESP + 0x40],EAX      ; 00554085
    MOV EDX,dword ptr [ESP + 0x40]      ; 00554089
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055408d | g_RenderVertexBuffer[0].projected_vertex.screen_x
    ADD EAX,EDX                         ; 00554090
    MOV dword ptr [EBP + 0x8],EAX       ; 00554092 | g_SoftwareEdgeTable[0].x_current
    MOV EAX,dword ptr [EDI + 0x18]      ; 00554095 | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EBX + 0x18]      ; 00554098 | g_RenderVertexBuffer[0].u
    SUB EAX,EDX                         ; 0055409b
    MOV EDX,EAX                         ; 0055409d
    MOV EAX,ECX                         ; 0055409f
    IMUL EDX                            ; 005540a1
    SHRD EAX,EDX,0x10                   ; 005540a3
    MOV EDX,EAX                         ; 005540a7
    MOV dword ptr [EBP + 0x1c],EAX      ; 005540a9 | g_SoftwareEdgeTable[0].u_gradient
    MOV EAX,ESI                         ; 005540ac
    IMUL EDX                            ; 005540ae
    SHRD EAX,EDX,0x10                   ; 005540b0
    MOV dword ptr [ESP + 0x40],EAX      ; 005540b4
    MOV EDX,dword ptr [ESP + 0x40]      ; 005540b8
    MOV EAX,dword ptr [EBX + 0x18]      ; 005540bc | g_RenderVertexBuffer[0].u
    ADD EAX,EDX                         ; 005540bf
    MOV dword ptr [EBP + 0x18],EAX      ; 005540c1 | g_SoftwareEdgeTable[0].u_current
    MOV EAX,dword ptr [EDI + 0x1c]      ; 005540c4 | g_RenderVertexBuffer[0].v
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005540c7 | g_RenderVertexBuffer[0].v
    SUB EAX,EDX                         ; 005540ca
    MOV EDX,EAX                         ; 005540cc
    MOV EAX,ECX                         ; 005540ce
    IMUL EDX                            ; 005540d0
    SHRD EAX,EDX,0x10                   ; 005540d2
    MOV EDX,EAX                         ; 005540d6
    MOV dword ptr [EBP + 0x24],EAX      ; 005540d8 | g_SoftwareEdgeTable[0].v_gradient
    MOV EAX,ESI                         ; 005540db
    IMUL EDX                            ; 005540dd
    SHRD EAX,EDX,0x10                   ; 005540df
    MOV dword ptr [ESP + 0x40],EAX      ; 005540e3
    MOV EDX,dword ptr [ESP + 0x40]      ; 005540e7
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005540eb | g_RenderVertexBuffer[0].v
    ADD EAX,EDX                         ; 005540ee
    MOV dword ptr [EBP + 0x20],EAX      ; 005540f0 | g_SoftwareEdgeTable[0].v_current
    MOV EAX,dword ptr [EDI + 0x20]      ; 005540f3 | g_RenderVertexBuffer[0].light
    MOV EDX,dword ptr [EBX + 0x20]      ; 005540f6 | g_RenderVertexBuffer[0].light
    SUB EAX,EDX                         ; 005540f9
    MOV EDX,EAX                         ; 005540fb
    MOV EAX,ECX                         ; 005540fd
    IMUL EDX                            ; 005540ff
    SHRD EAX,EDX,0x10                   ; 00554101
    MOV EDX,EAX                         ; 00554105
    MOV dword ptr [EBP + 0x14],EAX      ; 00554107 | g_SoftwareEdgeTable[0].z_gradient
    MOV EAX,ESI                         ; 0055410a
    IMUL EDX                            ; 0055410c
    SHRD EAX,EDX,0x10                   ; 0055410e
    MOV dword ptr [ESP + 0x40],EAX      ; 00554112
    MOV EDX,dword ptr [ESP + 0x40]      ; 00554116
    MOV EAX,dword ptr [EBX + 0x20]      ; 0055411a | g_RenderVertexBuffer[0].light
    ADD EAX,EDX                         ; 0055411d
    MOV dword ptr [EBP + 0x10],EAX      ; 0055411f | g_SoftwareEdgeTable[0].z_current
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00554122 | g_RenderVertexBuffer[0].w_recip
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00554125 | g_RenderVertexBuffer[0].w_recip
    SUB EAX,EDX                         ; 00554128
    MOV EDX,EAX                         ; 0055412a
    MOV EAX,ECX                         ; 0055412c
    IMUL EDX                            ; 0055412e
    SHRD EAX,EDX,0x10                   ; 00554130
    MOV EDX,EAX                         ; 00554134
    MOV dword ptr [EBP + 0x34],EAX      ; 00554136 | g_SoftwareEdgeTable[0].fog_gradient
    MOV EAX,ESI                         ; 00554139
    IMUL EDX                            ; 0055413b
    SHRD EAX,EDX,0x10                   ; 0055413d
    MOV dword ptr [ESP + 0x40],EAX      ; 00554141
    MOV EDX,dword ptr [ESP + 0x40]      ; 00554145
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00554149 | g_RenderVertexBuffer[0].w_recip
    ADD EAX,EDX                         ; 0055414c
    MOV dword ptr [EBP + 0x30],EAX      ; 0055414e | g_SoftwareEdgeTable[0].fog_current
    CMP dword ptr [0x02d052a4],0x1      ; 00554151 | g_RenderStateFlag2
    JNZ 0x0055422f                      ; 00554158
        ;   XREF to: 0055422f (CONDITIONAL_JUMP)  ; LAB_0055422f
    CMP dword ptr [0x02d0529c],0x0      ; 0055415e | g_ProcessorType
    JZ 0x00554220                       ; 00554165
        ;   XREF to: 00554220 (CONDITIONAL_JUMP)  ; LAB_00554220
    MOV EAX,0x7fffffff                  ; 0055416b
    MOV EDX,dword ptr [EBX + 0x8]       ; 00554170 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SUB EAX,EDX                         ; 00554173
    MOV dword ptr [ESP + 0x48],EAX      ; 00554175
    MOV EDX,dword ptr [EDI + 0x8]       ; 00554179 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,0x7fffffff                  ; 0055417c
    SUB EAX,EDX                         ; 00554181
    MOV EDX,dword ptr [ESP + 0x48]      ; 00554183
        ;   Label: LAB_00554183
    SUB EAX,EDX                         ; 00554187
    MOV dword ptr [ESP + 0x40],EAX      ; 00554189
    MOV EDX,dword ptr [ESP + 0x40]      ; 0055418d
    MOV EAX,ECX                         ; 00554191
    IMUL EDX                            ; 00554193
    SHRD EAX,EDX,0x10                   ; 00554195
    MOV EDX,EAX                         ; 00554199
    MOV dword ptr [EBP + 0x2c],EAX      ; 0055419b | g_SoftwareEdgeTable[0].w_gradient
    MOV EAX,ESI                         ; 0055419e
    IMUL EDX                            ; 005541a0
    SHRD EAX,EDX,0x10                   ; 005541a2
    MOV EDX,dword ptr [ESP + 0x48]      ; 005541a6
    ADD EDX,EAX                         ; 005541aa
    MOV dword ptr [EBP + 0x28],EDX      ; 005541ac | g_SoftwareEdgeTable[0].w_current
    MOV EAX,dword ptr [EDI + 0x24]      ; 005541af | g_RenderVertexBuffer[0].color
        ;   Label: LAB_005541af
    MOV EDX,dword ptr [EBX + 0x24]      ; 005541b2 | g_RenderVertexBuffer[0].color
    SUB EAX,EDX                         ; 005541b5
    MOV EDX,EAX                         ; 005541b7
    MOV EAX,ECX                         ; 005541b9
    IMUL EDX                            ; 005541bb
    SHRD EAX,EDX,0x10                   ; 005541bd
    MOV EDX,EAX                         ; 005541c1
    MOV dword ptr [EBP + 0x3c],EAX      ; 005541c3 | g_SoftwareEdgeTable[0].r_gradient
    MOV EAX,ESI                         ; 005541c6
    IMUL EDX                            ; 005541c8
    SHRD EAX,EDX,0x10                   ; 005541ca
    MOV dword ptr [ESP + 0x40],EAX      ; 005541ce
    MOV EDX,dword ptr [ESP + 0x40]      ; 005541d2
    MOV EAX,dword ptr [EBX + 0x24]      ; 005541d6 | g_RenderVertexBuffer[0].color
    ADD EAX,EDX                         ; 005541d9
    MOV dword ptr [EBP + 0x38],EAX      ; 005541db | g_SoftwareEdgeTable[0].r_current
    MOV EDX,dword ptr [EDI + 0x28]      ; 005541de | g_RenderVertexBuffer[0].fog
    MOV EDI,dword ptr [EBX + 0x28]      ; 005541e1 | g_RenderVertexBuffer[0].fog
    MOV EAX,ECX                         ; 005541e4
    SUB EDX,EDI                         ; 005541e6
    IMUL EDX                            ; 005541e8
    SHRD EAX,EDX,0x10                   ; 005541ea
    MOV EDX,EAX                         ; 005541ee
    MOV dword ptr [EBP + 0x44],EAX      ; 005541f0 | g_SoftwareEdgeTable[0].g_gradient
    MOV EAX,ESI                         ; 005541f3
    IMUL EDX                            ; 005541f5
    SHRD EAX,EDX,0x10                   ; 005541f7
    MOV EDX,EAX                         ; 005541fb
    MOV EAX,dword ptr [EBX + 0x28]      ; 005541fd | g_RenderVertexBuffer[0].fog
    ADD EAX,EDX                         ; 00554200
    MOV dword ptr [EBP + 0x40],EAX      ; 00554202 | g_SoftwareEdgeTable[0].g_current
    INC dword ptr [0x030e56bc]          ; 00554205 | g_ActiveEdgeCount
    JMP 0x00553dd2                      ; 0055420b
        ;   XREF to: 00553dd2 (UNCONDITIONAL_JUMP)  ; LAB_00553dd2
    MOV EAX,0xffffffff                  ; 00554210
        ;   Label: LAB_00554210
    XOR EDX,EDX                         ; 00554215
    DIV ECX                             ; 00554217
    MOV ECX,EAX                         ; 00554219
    JMP 0x00554059                      ; 0055421b
        ;   XREF to: 00554059 (UNCONDITIONAL_JUMP)  ; LAB_00554059
    MOV EAX,dword ptr [EBX + 0xc]       ; 00554220 | g_RenderVertexBuffer[0].projected_vertex.inv_z
        ;   Label: LAB_00554220
    MOV dword ptr [ESP + 0x48],EAX      ; 00554223
    MOV EAX,dword ptr [EDI + 0xc]       ; 00554227 | g_RenderVertexBuffer[0].projected_vertex.inv_z
    JMP 0x00554183                      ; 0055422a
        ;   XREF to: 00554183 (UNCONDITIONAL_JUMP)  ; LAB_00554183
    MOV EAX,dword ptr [EDI + 0x8]       ; 0055422f | g_RenderVertexBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0055422f
    MOV EDX,dword ptr [EBX + 0x8]       ; 00554232 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SUB EAX,EDX                         ; 00554235
    MOV EDX,EAX                         ; 00554237
    MOV EAX,ECX                         ; 00554239
    IMUL EDX                            ; 0055423b
    SHRD EAX,EDX,0x10                   ; 0055423d
    MOV EDX,EAX                         ; 00554241
    MOV dword ptr [EBP + 0x2c],EAX      ; 00554243 | g_SoftwareEdgeTable[0].w_gradient
    MOV EAX,ESI                         ; 00554246
    IMUL EDX                            ; 00554248
    SHRD EAX,EDX,0x10                   ; 0055424a
    MOV dword ptr [ESP + 0x40],EAX      ; 0055424e
    MOV EDX,dword ptr [ESP + 0x40]      ; 00554252
    MOV EAX,dword ptr [EBX + 0x8]       ; 00554256 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    ADD EAX,EDX                         ; 00554259
    MOV dword ptr [EBP + 0x28],EAX      ; 0055425b | g_SoftwareEdgeTable[0].w_current
    JMP 0x005541af                      ; 0055425e
        ;   XREF to: 005541af (UNCONDITIONAL_JUMP)  ; LAB_005541af
    INC ECX                             ; 00554263
        ;   Label: LAB_00554263
    ADD EAX,0x48                        ; 00554264
    CMP ECX,EDX                         ; 00554267
    JL 0x00553e0f                       ; 00554269
        ;   XREF to: 00553e0f (CONDITIONAL_JUMP)  ; LAB_00553e0f
    XOR EAX,EAX                         ; 0055426f
        ;   Label: LAB_0055426f
    JMP 0x00553e1f                      ; 00554271
        ;   XREF to: 00553e1f (UNCONDITIONAL_JUMP)  ; LAB_00553e1f
    INC EDX                             ; 00554276
        ;   Label: LAB_00554276
    ADD EAX,0x48                        ; 00554277
    CMP EDX,EBP                         ; 0055427a
    JL 0x00553e4e                       ; 0055427c
        ;   XREF to: 00553e4e (CONDITIONAL_JUMP)  ; LAB_00553e4e
    XOR EAX,EAX                         ; 00554282
        ;   Label: LAB_00554282
    JMP 0x00553e5e                      ; 00554284
        ;   XREF to: 00553e5e (UNCONDITIONAL_JUMP)  ; LAB_00553e5e
    INC EDX                             ; 00554289
        ;   Label: LAB_00554289
    ADD EAX,0x48                        ; 0055428a
    CMP EDX,EDI                         ; 0055428d
    JL 0x00553ea3                       ; 0055428f
        ;   XREF to: 00553ea3 (CONDITIONAL_JUMP)  ; LAB_00553ea3
    XOR EAX,EAX                         ; 00554295
        ;   Label: LAB_00554295
    JMP 0x00553eb3                      ; 00554297
        ;   XREF to: 00553eb3 (UNCONDITIONAL_JUMP)  ; LAB_00553eb3
    INC EDX                             ; 0055429c
        ;   Label: LAB_0055429c
    ADD EAX,0x48                        ; 0055429d | g_SoftwareEdgeTable[1].y_min
    CMP EDX,ESI                         ; 005542a0
    JL 0x00553ef0                       ; 005542a2
        ;   XREF to: 00553ef0 (CONDITIONAL_JUMP)  ; LAB_00553ef0
    XOR EAX,EAX                         ; 005542a8
        ;   Label: LAB_005542a8
    JMP 0x00553f00                      ; 005542aa
        ;   XREF to: 00553f00 (UNCONDITIONAL_JUMP)  ; LAB_00553f00

