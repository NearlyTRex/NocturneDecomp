; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_renderTriangleSimple_FUN_004839f0(CVector3i *vertex_indices,int vertex_count)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; SRenderVertex *[16] Stack[-0x74]:64  local_74
; uint             Stack[-0x34]:4  local_34
; CVector3i *      Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; SRenderVertex *  Stack[-0x28]:4  local_28
; SRenderVertex *  Stack[-0x24]:4  local_24
; SRenderVertex *  Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; SSoftwareEdge *  Stack[-0x18]:4  local_18
; SSoftwareEdge *  Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 at 0048a776
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d352
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d544
;   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 at 0048cfad
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_RenderTriangleEdgeCount
;   SSoftwareEdge[16] g_EdgeInterpolationArray
;   undefined4 DAT_02c6cb78
;   undefined4 DAT_02c6cb7c
;   undefined4 DAT_02c6cb80
;   undefined4 DAT_02c6cb9c
;   undefined4 DAT_02c6cba0
;   undefined4 DAT_02c6cbbc
;   int g_RenderTriangleMinScanlineY
;   ... and 7 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   wincore_windll.cpp_drawPolygon2_FUN_005b7610
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004839f0
        ;   Label: engine_drender.cpp_renderTriangleSimple_FUN_004839f0
    PUSH ESI                            ; 004839f1
    PUSH EDI                            ; 004839f2
    PUSH EBP                            ; 004839f3
    SUB ESP,0x64                        ; 004839f4
    MOV EBP,dword ptr [0x02c6cb70]      ; 004839f7 | g_RenderTriangleEdgeCount
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004839fd
    CMP dword ptr [0x00772a7c],0x0      ; 00483a01 | g_CullingMode
    JNZ 0x00483a83                      ; 00483a08
        ;   XREF to: 00483a83 (CONDITIONAL_JUMP)  ; LAB_00483a83
    MOV ECX,dword ptr [0x030e56b8]      ; 00483a0e | g_RenderedTriangleCount
        ;   Label: LAB_00483a0e
    MOV EBX,dword ptr [0x02d03e94]      ; 00483a14 | g_UseExternalRenderer
    INC ECX                             ; 00483a1a
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483a1b | g_RenderTriangleEdgeCount
    MOV dword ptr [0x030e56b8],ECX      ; 00483a21 | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 00483a27
    JZ 0x00483d78                       ; 00483a29
        ;   XREF to: 00483d78 (CONDITIONAL_JUMP)  ; LAB_00483d78
    MOV ESI,dword ptr [0x00772a74]      ; 00483a2f | g_TexturesDisabled
    TEST ESI,ESI                        ; 00483a35
    JNZ 0x00483d78                      ; 00483a37
        ;   XREF to: 00483d78 (CONDITIONAL_JUMP)  ; LAB_00483d78
    TEST EDI,EDI                        ; 00483a3d
    JLE 0x00483a60                      ; 00483a3f
        ;   XREF to: 00483a60 (CONDITIONAL_JUMP)  ; LAB_00483a60
    MOV EAX,dword ptr [ESP + 0x78]      ; 00483a41
    IMUL EDX,dword ptr [EAX],0x30       ; 00483a45
        ;   Label: LAB_00483a45
    INC ESI                             ; 00483a48
    ADD EDX,0x688014                    ; 00483a49 | g_RenderVertexBuffer
    ADD EAX,0x4                         ; 00483a4f
    MOV dword ptr [ESP + ESI*0x4 + -0x4],EDX ; 00483a52
    CMP ESI,EDI                         ; 00483a56
    JL 0x00483a45                       ; 00483a58
        ;   XREF to: 00483a45 (CONDITIONAL_JUMP)  ; LAB_00483a45
    LEA EAX,[EAX]                       ; 00483a5a
    MOV EBX,dword ptr [0x02d052a0]      ; 00483a60 | g_RenderStateFlags
        ;   Label: LAB_00483a60
    PUSH EBX                            ; 00483a66
    PUSH EDI                            ; 00483a67
    LEA EAX,[ESP + 0x8]                 ; 00483a68
    PUSH EAX                            ; 00483a6c
    CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610 ; 00483a6d
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00483a72
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483a75 | g_RenderTriangleEdgeCount
        ;   Label: LAB_00483a75
    ADD ESP,0x64                        ; 00483a7b
    POP EBP                             ; 00483a7e
    POP EDI                             ; 00483a7f
    POP ESI                             ; 00483a80
    POP EBX                             ; 00483a81
    RET                                 ; 00483a82
    MOV EDX,dword ptr [ESP + 0x78]      ; 00483a83
        ;   Label: LAB_00483a83
    MOV EDX,dword ptr [EDX + 0x8]       ; 00483a87
    LEA EAX,[EDX*0x4 + 0x0]             ; 00483a8a
    SUB EAX,EDX                         ; 00483a91
    SHL EAX,0x4                         ; 00483a93
    MOV EDX,dword ptr [ESP + 0x78]      ; 00483a96
    ADD EAX,0x688014                    ; 00483a9a | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX + 0x4]       ; 00483a9f
    PUSH EAX                            ; 00483aa2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00483aa3
    SUB EAX,EDX                         ; 00483aaa
    SHL EAX,0x4                         ; 00483aac
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00483aaf
    ADD EAX,0x688014                    ; 00483ab3 | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX]             ; 00483ab8
    PUSH EAX                            ; 00483aba
    LEA EAX,[EDX*0x4 + 0x0]             ; 00483abb
    SUB EAX,EDX                         ; 00483ac2
    SHL EAX,0x4                         ; 00483ac4
    ADD EAX,0x688014                    ; 00483ac7 | g_RenderVertexBuffer
    PUSH EAX                            ; 00483acc
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00483acd
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00483ad2
    TEST EAX,EAX                        ; 00483ad5
    JNZ 0x00483a0e                      ; 00483ad7
        ;   XREF to: 00483a0e (CONDITIONAL_JUMP)  ; LAB_00483a0e
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483add | g_RenderTriangleEdgeCount
    ADD ESP,0x64                        ; 00483ae3
    POP EBP                             ; 00483ae6
    POP EDI                             ; 00483ae7
    POP ESI                             ; 00483ae8
    POP EBX                             ; 00483ae9
    RET                                 ; 00483aea
    XOR ESI,ESI                         ; 00483aeb
        ;   Label: LAB_00483aeb
    TEST EDI,EDI                        ; 00483aed
    JLE 0x00483b20                      ; 00483aef
        ;   XREF to: 00483b20 (CONDITIONAL_JUMP)  ; LAB_00483b20
    MOV EBX,dword ptr [ESP + 0x78]      ; 00483af1
    MOV dword ptr [0x02c6cb70],EBP      ; 00483af5 | g_RenderTriangleEdgeCount
    IMUL EAX,dword ptr [EBX],0x30       ; 00483afb
        ;   Label: LAB_00483afb
    PUSH 0x1                            ; 00483afe
    ADD EAX,0x688014                    ; 00483b00 | g_RenderVertexBuffer
    PUSH EAX                            ; 00483b05
    ADD EBX,0x4                         ; 00483b06
    INC ESI                             ; 00483b09
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 00483b0a
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00483b0f
    CMP ESI,EDI                         ; 00483b12
    JL 0x00483afb                       ; 00483b14
        ;   XREF to: 00483afb (CONDITIONAL_JUMP)  ; LAB_00483afb
    LEA EAX,[EAX]                       ; 00483b16
    LEA EDX,[EDX]                       ; 00483b1c
    MOV EBX,0x4b0                       ; 00483b20
        ;   Label: LAB_00483b20
    XOR ESI,ESI                         ; 00483b25
    XOR EBP,EBP                         ; 00483b27
    MOV dword ptr [0x02c6cff8],ESI      ; 00483b29 | g_RenderTriangleMaxScanlineY
    MOV dword ptr [ESP + 0x48],ESI      ; 00483b2f
    MOV dword ptr [0x02c6cff4],EBX      ; 00483b33 | g_RenderTriangleMinScanlineY
    TEST EDI,EDI                        ; 00483b39
    JLE 0x00483bb7                      ; 00483b3b
        ;   XREF to: 00483bb7 (CONDITIONAL_JUMP)  ; LAB_00483bb7
    MOV EAX,dword ptr [ESP + 0x78]      ; 00483b41
    MOV dword ptr [ESP + 0x44],EAX      ; 00483b45
    MOV EAX,dword ptr [ESP + 0x48]      ; 00483b49
        ;   Label: LAB_00483b49
    INC EAX                             ; 00483b4d
    CMP EAX,EDI                         ; 00483b4e
    JL 0x00483b54                       ; 00483b50
        ;   XREF to: 00483b54 (CONDITIONAL_JUMP)  ; LAB_00483b54
    XOR EAX,EAX                         ; 00483b52
    MOV EDX,dword ptr [ESP + 0x78]      ; 00483b54
        ;   Label: LAB_00483b54
    SHL EAX,0x2                         ; 00483b58
    ADD EAX,EDX                         ; 00483b5b
    IMUL EAX,dword ptr [EAX],0x30       ; 00483b5d
    MOV EDX,0x688014                    ; 00483b60 | g_RenderVertexBuffer
    ADD EDX,EAX                         ; 00483b65
    MOV EAX,dword ptr [ESP + 0x44]      ; 00483b67
    IMUL EAX,dword ptr [EAX],0x30       ; 00483b6b
    MOV dword ptr [ESP + 0x54],EDX      ; 00483b6e
    MOV EDX,0x688014                    ; 00483b72 | g_RenderVertexBuffer
    ADD EDX,EAX                         ; 00483b77
    MOV EAX,dword ptr [ESP + 0x54]      ; 00483b79
    MOV dword ptr [ESP + 0x50],EDX      ; 00483b7d
    MOV ESI,EDX                         ; 00483b81
    MOV dword ptr [ESP + 0x4c],EAX      ; 00483b83
    MOV EAX,dword ptr [EDX + 0x14]      ; 00483b87 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EDX,dword ptr [ESP + 0x54]      ; 00483b8a
    MOV EDX,dword ptr [EDX + 0x14]      ; 00483b8e | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR EAX,0x10                        ; 00483b91
    SAR EDX,0x10                        ; 00483b94
    CMP EAX,EDX                         ; 00483b97
    JNZ 0x00483d96                      ; 00483b99
        ;   XREF to: 00483d96 (CONDITIONAL_JUMP)  ; LAB_00483d96
    MOV EDX,dword ptr [ESP + 0x44]      ; 00483b9f
        ;   Label: LAB_00483b9f
    MOV ECX,dword ptr [ESP + 0x48]      ; 00483ba3
    ADD EDX,0x4                         ; 00483ba7
    INC ECX                             ; 00483baa
    MOV dword ptr [ESP + 0x44],EDX      ; 00483bab
    MOV dword ptr [ESP + 0x48],ECX      ; 00483baf
    CMP EDI,ECX                         ; 00483bb3
    JG 0x00483b49                       ; 00483bb5
        ;   XREF to: 00483b49 (CONDITIONAL_JUMP)  ; LAB_00483b49
    MOV EDI,dword ptr [0x02c6cff4]      ; 00483bb7 | g_RenderTriangleMinScanlineY
        ;   Label: LAB_00483bb7
    XOR ESI,ESI                         ; 00483bbd
    XOR EAX,EAX                         ; 00483bbf
    MOV dword ptr [0x02c6d5a8],ESI      ; 00483bc1 | g_RenderAbortFlag
    MOV ESI,0x2c6cb74                   ; 00483bc7 | g_EdgeInterpolationArray
    TEST EBP,EBP                        ; 00483bcc
    JLE 0x00483ea1                      ; 00483bce
        ;   XREF to: 00483ea1 (CONDITIONAL_JUMP)  ; LAB_00483ea1
    CMP EDI,dword ptr [ESI]             ; 00483bd4 | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483bd4
    JNZ 0x00483e95                      ; 00483bd6
        ;   XREF to: 00483e95 (CONDITIONAL_JUMP)  ; LAB_00483e95
    TEST ESI,ESI                        ; 00483bdc
    JZ 0x00483e95                       ; 00483bde
        ;   XREF to: 00483e95 (CONDITIONAL_JUMP)  ; LAB_00483e95
    MOV dword ptr [ESP + 0x60],ESI      ; 00483be4 | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483be4
    MOV dword ptr [0x02c6cb70],EBP      ; 00483be8 | g_RenderTriangleEdgeCount
    TEST ESI,ESI                        ; 00483bee
    JZ 0x00483a75                       ; 00483bf0
        ;   XREF to: 00483a75 (CONDITIONAL_JUMP)  ; LAB_00483a75
    MOV EAX,0x2c6cb74                   ; 00483bf6 | g_EdgeInterpolationArray
    MOV EBX,dword ptr [0x02c6cff4]      ; 00483bfb | g_RenderTriangleMinScanlineY
    MOV ECX,ESI                         ; 00483c01 | g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 00483c03
    TEST EBP,EBP                        ; 00483c05
    JLE 0x00483eb4                      ; 00483c07
        ;   XREF to: 00483eb4 (CONDITIONAL_JUMP)  ; LAB_00483eb4
    CMP EBX,dword ptr [EAX]             ; 00483c0d | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483c0d
    JNZ 0x00483ea8                      ; 00483c0f
        ;   XREF to: 00483ea8 (CONDITIONAL_JUMP)  ; LAB_00483ea8
    CMP EAX,ECX                         ; 00483c15
    JZ 0x00483ea8                       ; 00483c17
        ;   XREF to: 00483ea8 (CONDITIONAL_JUMP)  ; LAB_00483ea8
    MOV dword ptr [ESP + 0x5c],EAX      ; 00483c1d | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483c1d
    MOV dword ptr [0x02c6cb70],EBP      ; 00483c21 | g_RenderTriangleEdgeCount
    TEST EAX,EAX                        ; 00483c27
    JZ 0x00483a75                       ; 00483c29
        ;   XREF to: 00483a75 (CONDITIONAL_JUMP)  ; LAB_00483a75
    MOV EAX,[0x02c6cff4]                ; 00483c2f | g_RenderTriangleMinScanlineY
    MOV dword ptr [ESP + 0x58],EAX      ; 00483c34
        ;   Label: LAB_00483c34
    MOV EDX,dword ptr [ESP + 0x60]      ; 00483c38
    MOV EAX,dword ptr [ESP + 0x58]      ; 00483c3c
    MOV ESI,dword ptr [EDX + 0x4]       ; 00483c40 | DAT_02c6cb78
    MOV dword ptr [0x02c6cb70],EBP      ; 00483c43 | g_RenderTriangleEdgeCount
    CMP EAX,ESI                         ; 00483c49
    JL 0x00483c8a                       ; 00483c4b
        ;   XREF to: 00483c8a (CONDITIONAL_JUMP)  ; LAB_00483c8a
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00483c4d
    MOV EBX,EAX                         ; 00483c51
    MOV dword ptr [EDX],0xffffffff      ; 00483c53 | g_EdgeInterpolationArray
    MOV EAX,0x2c6cb74                   ; 00483c59 | g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 00483c5e
    TEST EBP,EBP                        ; 00483c60
    JLE 0x00483ec7                      ; 00483c62
        ;   XREF to: 00483ec7 (CONDITIONAL_JUMP)  ; LAB_00483ec7
    CMP EBX,dword ptr [EAX]             ; 00483c68 | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483c68
    JNZ 0x00483ebb                      ; 00483c6a
        ;   XREF to: 00483ebb (CONDITIONAL_JUMP)  ; LAB_00483ebb
    CMP EAX,ECX                         ; 00483c70
    JZ 0x00483ebb                       ; 00483c72
        ;   XREF to: 00483ebb (CONDITIONAL_JUMP)  ; LAB_00483ebb
    MOV dword ptr [ESP + 0x60],EAX      ; 00483c78 | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483c78
    MOV dword ptr [0x02c6cb70],EBP      ; 00483c7c | g_RenderTriangleEdgeCount
    TEST EAX,EAX                        ; 00483c82
    JZ 0x00483a75                       ; 00483c84
        ;   XREF to: 00483a75 (CONDITIONAL_JUMP)  ; LAB_00483a75
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00483c8a | g_EdgeInterpolationArray
        ;   Label: LAB_00483c8a
    MOV EAX,dword ptr [ESP + 0x58]      ; 00483c8e
    CMP EAX,dword ptr [EDX + 0x4]       ; 00483c92 | DAT_02c6cb78
    JL 0x00483cda                       ; 00483c95
        ;   XREF to: 00483cda (CONDITIONAL_JUMP)  ; LAB_00483cda
    MOV EBX,dword ptr [ESP + 0x60]      ; 00483c97
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483c9b | g_RenderTriangleEdgeCount
    MOV ECX,EAX                         ; 00483ca1
    MOV dword ptr [EDX],0xffffffff      ; 00483ca3 | g_EdgeInterpolationArray
    MOV EAX,0x2c6cb74                   ; 00483ca9 | g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 00483cae
    TEST EBP,EBP                        ; 00483cb0
    JLE 0x00483eda                      ; 00483cb2
        ;   XREF to: 00483eda (CONDITIONAL_JUMP)  ; LAB_00483eda
    CMP ECX,dword ptr [EAX]             ; 00483cb8 | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483cb8
    JNZ 0x00483ece                      ; 00483cba
        ;   XREF to: 00483ece (CONDITIONAL_JUMP)  ; LAB_00483ece
    CMP EAX,EBX                         ; 00483cc0
    JZ 0x00483ece                       ; 00483cc2
        ;   XREF to: 00483ece (CONDITIONAL_JUMP)  ; LAB_00483ece
    MOV dword ptr [ESP + 0x5c],EAX      ; 00483cc8 | g_EdgeInterpolationArray | DAT_02c6cbbc
        ;   Label: LAB_00483cc8
    MOV dword ptr [0x02c6cb70],EBP      ; 00483ccc | g_RenderTriangleEdgeCount
    TEST EAX,EAX                        ; 00483cd2
    JZ 0x00483a75                       ; 00483cd4
        ;   XREF to: 00483a75 (CONDITIONAL_JUMP)  ; LAB_00483a75
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00483cda
        ;   Label: LAB_00483cda
    MOV ESI,dword ptr [ESP + 0x60]      ; 00483cde
    MOV EBX,dword ptr [ESP + 0x58]      ; 00483ce2
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 00483ce6
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderScanline_FUN_005b5710(SHardwareEdge * left, SHardwareEdge * right, int scanline_y)
    CMP dword ptr [0x02c6d5a8],0x0      ; 00483ceb | g_RenderAbortFlag
    JNZ 0x00483a75                      ; 00483cf2
        ;   XREF to: 00483a75 (CONDITIONAL_JUMP)  ; LAB_00483a75
    MOV EDX,dword ptr [ESP + 0x60]      ; 00483cf8
    MOV EAX,dword ptr [ESP + 0x60]      ; 00483cfc
    MOV ECX,dword ptr [EDX + 0x8]       ; 00483d00
    MOV EAX,dword ptr [EAX + 0xc]       ; 00483d03
    MOV EBX,dword ptr [EDX + 0x28]      ; 00483d06
    ADD ECX,EAX                         ; 00483d09
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00483d0b
    MOV dword ptr [EDX + 0x8],ECX       ; 00483d0e
    ADD EBX,EAX                         ; 00483d11
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00483d13
    MOV dword ptr [EDX + 0x28],EBX      ; 00483d17
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00483d1a
    MOV EAX,dword ptr [EAX + 0xc]       ; 00483d1e
    MOV ESI,dword ptr [EDX + 0x8]       ; 00483d21
    MOV EDI,dword ptr [EDX + 0x28]      ; 00483d24
    ADD ESI,EAX                         ; 00483d27
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00483d29
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483d2c | g_RenderTriangleEdgeCount
    ADD EDI,EAX                         ; 00483d32
    MOV EAX,dword ptr [ESP + 0x58]      ; 00483d34
    MOV dword ptr [EDX + 0x8],ESI       ; 00483d38
    INC EAX                             ; 00483d3b
    MOV dword ptr [EDX + 0x28],EDI      ; 00483d3c
    JMP 0x00483c34                      ; 00483d3f
        ;   XREF to: 00483c34 (UNCONDITIONAL_JUMP)  ; LAB_00483c34
    XOR ESI,ESI                         ; 00483d44
        ;   Label: LAB_00483d44
    TEST EDI,EDI                        ; 00483d46
    JLE 0x00483b20                      ; 00483d48
        ;   XREF to: 00483b20 (CONDITIONAL_JUMP)  ; LAB_00483b20
    MOV EBX,dword ptr [ESP + 0x78]      ; 00483d4e
    MOV dword ptr [0x02c6cb70],EBP      ; 00483d52 | g_RenderTriangleEdgeCount
    IMUL EAX,dword ptr [EBX],0x30       ; 00483d58
        ;   Label: LAB_00483d58
    PUSH 0x1                            ; 00483d5b
    ADD EAX,0x688014                    ; 00483d5d | g_RenderVertexBuffer
    PUSH EAX                            ; 00483d62
    ADD EBX,0x4                         ; 00483d63
    INC ESI                             ; 00483d66
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 00483d67
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00483d6c
    CMP ESI,EDI                         ; 00483d6f
    JL 0x00483d58                       ; 00483d71
        ;   XREF to: 00483d58 (CONDITIONAL_JUMP)  ; LAB_00483d58
    JMP 0x00483b20                      ; 00483d73
        ;   XREF to: 00483b20 (UNCONDITIONAL_JUMP)  ; LAB_00483b20
    MOV EAX,[0x02d052a4]                ; 00483d78 | g_RenderStateFlag2
        ;   Label: LAB_00483d78
    CMP EAX,0x1                         ; 00483d7d
    JC 0x00483b20                       ; 00483d80
        ;   XREF to: 00483b20 (CONDITIONAL_JUMP)  ; LAB_00483b20
    JBE 0x00483aeb                      ; 00483d86
        ;   XREF to: 00483aeb (CONDITIONAL_JUMP)  ; LAB_00483aeb
    CMP EAX,0x6                         ; 00483d8c
    JZ 0x00483d44                       ; 00483d8f
        ;   XREF to: 00483d44 (CONDITIONAL_JUMP)  ; LAB_00483d44
    JMP 0x00483b20                      ; 00483d91
        ;   XREF to: 00483b20 (UNCONDITIONAL_JUMP)  ; LAB_00483b20
    MOV ECX,ESI                         ; 00483d96
        ;   Label: LAB_00483d96
    MOV ECX,dword ptr [ECX + 0x14]      ; 00483d98 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EBX,dword ptr [ESP + 0x54]      ; 00483d9b
    CMP ECX,dword ptr [EBX + 0x14]      ; 00483d9f | g_RenderVertexBuffer[0].projected_vertex.screen_y
    JLE 0x00483db4                      ; 00483da2
        ;   XREF to: 00483db4 (CONDITIONAL_JUMP)  ; LAB_00483db4
    MOV ECX,dword ptr [ESP + 0x50]      ; 00483da4
    MOV ESI,EBX                         ; 00483da8
    MOV dword ptr [ESP + 0x4c],ECX      ; 00483daa
    MOV ECX,EAX                         ; 00483dae
    MOV EAX,EDX                         ; 00483db0
    MOV EDX,ECX                         ; 00483db2
    IMUL EBX,EBP,0x48                   ; 00483db4
        ;   Label: LAB_00483db4
    ADD EBX,0x2c6cb74                   ; 00483db7 | g_EdgeInterpolationArray
    MOV dword ptr [EBX],EAX             ; 00483dbd | g_EdgeInterpolationArray
    MOV ECX,dword ptr [0x02c6cff4]      ; 00483dbf | g_RenderTriangleMinScanlineY
    MOV dword ptr [EBX + 0x4],EDX       ; 00483dc5 | DAT_02c6cb78
    CMP EAX,ECX                         ; 00483dc8
    JGE 0x00483dd1                      ; 00483dca
        ;   XREF to: 00483dd1 (CONDITIONAL_JUMP)  ; LAB_00483dd1
    MOV [0x02c6cff4],EAX                ; 00483dcc | g_RenderTriangleMinScanlineY
    CMP EDX,dword ptr [0x02c6cff8]      ; 00483dd1 | g_RenderTriangleMaxScanlineY
        ;   Label: LAB_00483dd1
    JLE 0x00483ddf                      ; 00483dd7
        ;   XREF to: 00483ddf (CONDITIONAL_JUMP)  ; LAB_00483ddf
    MOV dword ptr [0x02c6cff8],EDX      ; 00483dd9 | g_RenderTriangleMaxScanlineY
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00483ddf
        ;   Label: LAB_00483ddf
    MOV EDX,dword ptr [ESI + 0x14]      ; 00483de3 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV ECX,dword ptr [ECX + 0x14]      ; 00483de6 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB ECX,EDX                         ; 00483de9
    CMP ECX,0x10000                     ; 00483deb
    JNC 0x00483e85                      ; 00483df1
        ;   XREF to: 00483e85 (CONDITIONAL_JUMP)  ; LAB_00483e85
    XOR ECX,ECX                         ; 00483df7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00483df9
        ;   Label: LAB_00483df9
    MOV EDX,dword ptr [ESI + 0x10]      ; 00483dfd | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EAX,dword ptr [EAX + 0x10]      ; 00483e00 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    SUB EAX,EDX                         ; 00483e03
    MOV EDX,EAX                         ; 00483e05
    MOV EAX,ECX                         ; 00483e07
    MOV dword ptr [0x02c6cb70],EBP      ; 00483e09 | g_RenderTriangleEdgeCount
    IMUL EDX                            ; 00483e0f
    SHRD EAX,EDX,0x10                   ; 00483e11
    MOV dword ptr [EBX + 0xc],EAX       ; 00483e15 | DAT_02c6cb80
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00483e18
    MOV EDX,dword ptr [ESI + 0x8]       ; 00483e1c | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,dword ptr [EAX + 0x8]       ; 00483e1f | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SUB EAX,EDX                         ; 00483e22
    MOV EDX,EAX                         ; 00483e24
    SHL EDX,0x8                         ; 00483e26
    MOV EAX,ECX                         ; 00483e29
    IMUL EDX                            ; 00483e2b
    SHRD EAX,EDX,0x10                   ; 00483e2d
    MOV dword ptr [EBX + 0x2c],EAX      ; 00483e31 | DAT_02c6cba0
    MOV ECX,dword ptr [ESI + 0x14]      ; 00483e34 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    AND ECX,0xffff                      ; 00483e37
    XOR CX,0xffff                       ; 00483e3d
    MOV EDX,dword ptr [EBX + 0xc]       ; 00483e41 | DAT_02c6cb80
    MOV EAX,ECX                         ; 00483e44
    IMUL EDX                            ; 00483e46
    SHRD EAX,EDX,0x10                   ; 00483e48
    MOV dword ptr [ESP + 0x40],EAX      ; 00483e4c
    MOV EDX,dword ptr [ESP + 0x40]      ; 00483e50
    MOV EAX,dword ptr [ESI + 0x10]      ; 00483e54 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    ADD EAX,EDX                         ; 00483e57
    MOV dword ptr [EBX + 0x8],EAX       ; 00483e59 | DAT_02c6cb7c
    MOV ESI,dword ptr [ESI + 0x8]       ; 00483e5c | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,[0x02c6d03c]                ; 00483e5f | g_RasterizerDepthBias
    SHL ESI,0x8                         ; 00483e64
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00483e67 | DAT_02c6cba0
    SUB ESI,EAX                         ; 00483e6a
    MOV EAX,ECX                         ; 00483e6c
    IMUL EDX                            ; 00483e6e
    SHRD EAX,EDX,0x10                   ; 00483e70
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483e74 | g_RenderTriangleEdgeCount
    ADD ESI,EAX                         ; 00483e7a
    INC EBP                             ; 00483e7c
    MOV dword ptr [EBX + 0x28],ESI      ; 00483e7d | DAT_02c6cb9c
    JMP 0x00483b9f                      ; 00483e80
        ;   XREF to: 00483b9f (UNCONDITIONAL_JUMP)  ; LAB_00483b9f
    MOV EAX,0xffffffff                  ; 00483e85
        ;   Label: LAB_00483e85
    XOR EDX,EDX                         ; 00483e8a
    DIV ECX                             ; 00483e8c
    MOV ECX,EAX                         ; 00483e8e
    JMP 0x00483df9                      ; 00483e90
        ;   XREF to: 00483df9 (UNCONDITIONAL_JUMP)  ; LAB_00483df9
    INC EAX                             ; 00483e95
        ;   Label: LAB_00483e95
    ADD ESI,0x48                        ; 00483e96
    CMP EAX,EBP                         ; 00483e99
    JL 0x00483bd4                       ; 00483e9b
        ;   XREF to: 00483bd4 (CONDITIONAL_JUMP)  ; LAB_00483bd4
    XOR ESI,ESI                         ; 00483ea1
        ;   Label: LAB_00483ea1
    JMP 0x00483be4                      ; 00483ea3
        ;   XREF to: 00483be4 (UNCONDITIONAL_JUMP)  ; LAB_00483be4
    INC EDX                             ; 00483ea8
        ;   Label: LAB_00483ea8
    ADD EAX,0x48                        ; 00483ea9
    CMP EDX,EBP                         ; 00483eac
    JL 0x00483c0d                       ; 00483eae
        ;   XREF to: 00483c0d (CONDITIONAL_JUMP)  ; LAB_00483c0d
    XOR EAX,EAX                         ; 00483eb4
        ;   Label: LAB_00483eb4
    JMP 0x00483c1d                      ; 00483eb6
        ;   XREF to: 00483c1d (UNCONDITIONAL_JUMP)  ; LAB_00483c1d
    INC EDX                             ; 00483ebb
        ;   Label: LAB_00483ebb
    ADD EAX,0x48                        ; 00483ebc
    CMP EDX,EBP                         ; 00483ebf
    JL 0x00483c68                       ; 00483ec1
        ;   XREF to: 00483c68 (CONDITIONAL_JUMP)  ; LAB_00483c68
    XOR EAX,EAX                         ; 00483ec7
        ;   Label: LAB_00483ec7
    JMP 0x00483c78                      ; 00483ec9
        ;   XREF to: 00483c78 (UNCONDITIONAL_JUMP)  ; LAB_00483c78
    INC EDX                             ; 00483ece
        ;   Label: LAB_00483ece
    ADD EAX,0x48                        ; 00483ecf | DAT_02c6cbbc
    CMP EDX,EBP                         ; 00483ed2
    JL 0x00483cb8                       ; 00483ed4
        ;   XREF to: 00483cb8 (CONDITIONAL_JUMP)  ; LAB_00483cb8
    XOR EAX,EAX                         ; 00483eda
        ;   Label: LAB_00483eda
    JMP 0x00483cc8                      ; 00483edc
        ;   XREF to: 00483cc8 (UNCONDITIONAL_JUMP)  ; LAB_00483cc8

