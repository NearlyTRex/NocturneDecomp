; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count, int triangle_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   triangle_count
; Local Variables:
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
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 at 0048a7fc
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d4ec
;
; Referenced Globals:
;   uint g_VertexProcessingEnabled = 0x1
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_RasterizerDepthBias
;   int g_RenderAbortFlag
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_UseExternalRenderer
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;   int g_RenderedTriangleCount
;   int g_RasterizerEdgeCount
;   SEdgeData[16] g_RasterizerEdgeArray
;   ... and 8 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   wincore_windll.cpp_drawPolygon_FUN_005b75e0
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fcfc0
        ;   Label: engine_3d.c_rasterizeTriangle_FUN_005fcfc0
    PUSH ESI                            ; 005fcfc1
    PUSH EDI                            ; 005fcfc2
    PUSH EBP                            ; 005fcfc3
    SUB ESP,0x20                        ; 005fcfc4
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fcfc7 | int g_RasterizerEdgeCount
    CMP dword ptr [0x006793bc],0x0      ; 005fcfcd | uint g_VertexProcessingEnabled
    JZ 0x005fd083                       ; 005fcfd4 | LAB_005fd083
        ;   XREF to: 005fd083 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x38]      ; 005fcfda
    MOV ECX,dword ptr [ESP + 0x34]      ; 005fcfde
    XOR ESI,ESI                         ; 005fcfe2
    TEST EBX,EBX                        ; 005fcfe4
    JLE 0x005fd083                      ; 005fcfe6 | LAB_005fd083
        ;   XREF to: 005fd083 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x38]      ; 005fcfec
    MOV AH,byte ptr [ECX + 0x13]        ; 005fcff0
        ;   Label: LAB_005fcff0
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fcff3 | int g_RasterizerEdgeCount
    TEST AH,0x80                        ; 005fcff9
    JZ 0x005fd071                       ; 005fcffc | LAB_005fd071
        ;   XREF to: 005fd071 (CONDITIONAL_JUMP)
    TEST byte ptr [0x02d052a4],0x6      ; 005fcffe | int g_RenderStateFlag2
    JZ 0x005fd019                       ; 005fd005 | LAB_005fd019
        ;   XREF to: 005fd019 (CONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 005fd007
    MOV EDX,EAX                         ; 005fd00c
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd00e
    SAR EDX,0x1f                        ; 005fd011
    IDIV EBX                            ; 005fd014
    MOV dword ptr [ECX + 0xc],EAX       ; 005fd016
    MOV DH,byte ptr [0x02d052a4]        ; 005fd019 | int g_RenderStateFlag2
        ;   Label: LAB_005fd019
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd01f | int g_RasterizerEdgeCount
    TEST DH,0x1                         ; 005fd025
    JZ 0x005fd03c                       ; 005fd028 | LAB_005fd03c
        ;   XREF to: 005fd03c (CONDITIONAL_JUMP)
    MOV EAX,0x7fffffff                  ; 005fd02a
    MOV EDX,EAX                         ; 005fd02f
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd031
    SAR EDX,0x1f                        ; 005fd034
    IDIV EBX                            ; 005fd037
    MOV dword ptr [ECX + 0xc],EAX       ; 005fd039
    MOV EDX,dword ptr [0x02d02548]      ; 005fd03c | int g_ViewportCenterXFixed
        ;   Label: LAB_005fd03c
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd042
    MOV EAX,dword ptr [ECX]             ; 005fd045
    IMUL EDX                            ; 005fd047
    IDIV EBX                            ; 005fd049
    MOV EDX,dword ptr [0x02d02550]      ; 005fd04b | int g_ViewportRightFixed
    ADD EAX,EDX                         ; 005fd051
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd053
    MOV dword ptr [ECX + 0x10],EAX      ; 005fd056
    MOV EDX,dword ptr [0x02d0254c]      ; 005fd059 | int g_ViewportCenterYFixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 005fd05f
    IMUL EDX                            ; 005fd062
    IDIV EBX                            ; 005fd064
    MOV EDX,dword ptr [0x02d02554]      ; 005fd066 | int g_ViewportBottomFixed
    ADD EAX,EDX                         ; 005fd06c
    MOV dword ptr [ECX + 0x14],EAX      ; 005fd06e
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd071 | int g_RasterizerEdgeCount
        ;   Label: LAB_005fd071
    INC ESI                             ; 005fd077
    ADD ECX,0x30                        ; 005fd078
    CMP ESI,EDI                         ; 005fd07b
    JL 0x005fcff0                       ; 005fd07d | LAB_005fcff0
        ;   XREF to: 005fcff0 (CONDITIONAL_JUMP)
    MOV EAX,[0x00772a7c]                ; 005fd083 | int g_CullingMode
        ;   Label: LAB_005fd083
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd088 | int g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd08e
    JNZ 0x005fd26c                      ; 005fd090 | LAB_005fd26c
        ;   XREF to: 005fd26c (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x030e56b8]      ; 005fd096 | int g_RenderedTriangleCount
        ;   Label: LAB_005fd096
    INC ECX                             ; 005fd09c
    MOV EBX,dword ptr [0x02d03e94]      ; 005fd09d | int g_UseExternalRenderer
    MOV dword ptr [0x030e56b8],ECX      ; 005fd0a3 | int g_RenderedTriangleCount
    TEST EBX,EBX                        ; 005fd0a9
    JZ 0x005fd0ba                       ; 005fd0ab | LAB_005fd0ba
        ;   XREF to: 005fd0ba (CONDITIONAL_JUMP)
    CMP dword ptr [0x00772a74],0x0      ; 005fd0ad | int g_TexturesDisabled
    JZ 0x005fd29f                       ; 005fd0b4 | LAB_005fd29f
        ;   XREF to: 005fd29f (CONDITIONAL_JUMP)
    MOV EAX,[0x02d052a4]                ; 005fd0ba | int g_RenderStateFlag2
        ;   Label: LAB_005fd0ba
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd0bf | int g_RasterizerEdgeCount
    CMP EAX,0x1                         ; 005fd0c5
    JNC 0x005fd2f4                      ; 005fd0c8 | LAB_005fd2f4
        ;   XREF to: 005fd2f4 (CONDITIONAL_JUMP)
    MOV ECX,0x4b0                       ; 005fd0ce
        ;   Label: LAB_005fd0ce
    MOV ESI,dword ptr [ESP + 0x38]      ; 005fd0d3
    XOR EBX,EBX                         ; 005fd0d7
    XOR EBP,EBP                         ; 005fd0d9
    XOR EDI,EDI                         ; 005fd0db
    MOV dword ptr [0x03f9b1e4],EBX      ; 005fd0dd | int g_RasterizerMaxY
    MOV dword ptr [0x03f9b1e0],ECX      ; 005fd0e3 | int g_RasterizerMinY
    TEST ESI,ESI                        ; 005fd0e9
    JLE 0x005fd13b                      ; 005fd0eb | LAB_005fd13b
        ;   XREF to: 005fd13b (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x38]      ; 005fd0ed
        ;   Label: LAB_005fd0ed
    LEA EAX,[EDI + 0x1]                 ; 005fd0f1
    CMP EAX,ESI                         ; 005fd0f4
    JL 0x005fd0fa                       ; 005fd0f6 | LAB_005fd0fa
        ;   XREF to: 005fd0fa (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005fd0f8
    IMUL EAX,EAX,0x30                   ; 005fd0fa
        ;   Label: LAB_005fd0fa
    MOV EDX,dword ptr [ESP + 0x34]      ; 005fd0fd
    ADD EDX,EAX                         ; 005fd101
    IMUL EAX,EDI,0x30                   ; 005fd103
    MOV dword ptr [ESP + 0xc],EDX       ; 005fd106
    MOV EDX,dword ptr [ESP + 0x34]      ; 005fd10a
    ADD EDX,EAX                         ; 005fd10e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fd110
    MOV dword ptr [ESP + 0x8],EDX       ; 005fd114
    MOV ESI,EDX                         ; 005fd118
    MOV dword ptr [ESP + 0x10],EAX      ; 005fd11a
    MOV EDX,dword ptr [EDX + 0x14]      ; 005fd11e
    MOV EAX,dword ptr [EAX + 0x14]      ; 005fd121
    SAR EDX,0x10                        ; 005fd124
    SAR EAX,0x10                        ; 005fd127
    CMP EDX,EAX                         ; 005fd12a
    JNZ 0x005fd300                      ; 005fd12c | LAB_005fd300
        ;   XREF to: 005fd300 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x38]      ; 005fd132
        ;   Label: LAB_005fd132
    INC EDI                             ; 005fd136
    CMP EDI,ECX                         ; 005fd137
    JL 0x005fd0ed                       ; 005fd139 | LAB_005fd0ed
        ;   XREF to: 005fd0ed (CONDITIONAL_JUMP)
    MOV ESI,0x3f9ad60                   ; 005fd13b | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd13b
    MOV EDI,dword ptr [0x03f9b1e0]      ; 005fd140 | int g_RasterizerMinY
    XOR EBX,EBX                         ; 005fd146
    XOR EAX,EAX                         ; 005fd148
    MOV dword ptr [0x02c6d5a8],EBX      ; 005fd14a | int g_RenderAbortFlag
    TEST EBP,EBP                        ; 005fd150
    JLE 0x005fd40e                      ; 005fd152 | LAB_005fd40e
        ;   XREF to: 005fd40e (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [ESI]             ; 005fd158 | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd158
    JNZ 0x005fd402                      ; 005fd15a | LAB_005fd402
        ;   XREF to: 005fd402 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 005fd160
    JZ 0x005fd402                       ; 005fd162 | LAB_005fd402
        ;   XREF to: 005fd402 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x1c],ESI      ; 005fd168 | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd168
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd16c | int g_RasterizerEdgeCount
    TEST ESI,ESI                        ; 005fd172
    JZ 0x005fd25e                       ; 005fd174 | LAB_005fd25e
        ;   XREF to: 005fd25e (CONDITIONAL_JUMP)
    MOV EAX,0x3f9ad60                   ; 005fd17a | SEdgeData[16] g_RasterizerEdgeArray
    MOV EBX,dword ptr [0x03f9b1e0]      ; 005fd17f | int g_RasterizerMinY
    MOV ECX,ESI                         ; 005fd185 | SEdgeData[16] g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fd187
    TEST EBP,EBP                        ; 005fd189
    JLE 0x005fd421                      ; 005fd18b | LAB_005fd421
        ;   XREF to: 005fd421 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EAX]             ; 005fd191 | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd191
    JNZ 0x005fd415                      ; 005fd193 | LAB_005fd415
        ;   XREF to: 005fd415 (CONDITIONAL_JUMP)
    CMP EAX,ECX                         ; 005fd199
    JZ 0x005fd415                       ; 005fd19b | LAB_005fd415
        ;   XREF to: 005fd415 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x18],EAX      ; 005fd1a1 | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd1a1
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd1a5 | int g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd1ab
    JZ 0x005fd25e                       ; 005fd1ad | LAB_005fd25e
        ;   XREF to: 005fd25e (CONDITIONAL_JUMP)
    MOV EAX,[0x03f9b1e0]                ; 005fd1b3 | int g_RasterizerMinY
    MOV dword ptr [ESP + 0x14],EAX      ; 005fd1b8
        ;   Label: LAB_005fd1b8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005fd1bc
    MOV EAX,dword ptr [ESP + 0x14]      ; 005fd1c0
    MOV EDI,dword ptr [EDX + 0x4]       ; 005fd1c4 | g_RasterizerEdgeArray[0].y_end
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd1c7 | int g_RasterizerEdgeCount
    CMP EAX,EDI                         ; 005fd1cd
    JL 0x005fd20a                       ; 005fd1cf | LAB_005fd20a
        ;   XREF to: 005fd20a (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x18]      ; 005fd1d1
    MOV EBX,EAX                         ; 005fd1d5
    MOV dword ptr [EDX],0xffffffff      ; 005fd1d7 | SEdgeData[16] g_RasterizerEdgeArray
    MOV EAX,0x3f9ad60                   ; 005fd1dd | SEdgeData[16] g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fd1e2
    TEST EBP,EBP                        ; 005fd1e4
    JLE 0x005fd434                      ; 005fd1e6 | LAB_005fd434
        ;   XREF to: 005fd434 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EAX]             ; 005fd1ec | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd1ec
    JNZ 0x005fd428                      ; 005fd1ee | LAB_005fd428
        ;   XREF to: 005fd428 (CONDITIONAL_JUMP)
    CMP EAX,ECX                         ; 005fd1f4
    JZ 0x005fd428                       ; 005fd1f6 | LAB_005fd428
        ;   XREF to: 005fd428 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005fd1fc | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd1fc
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd200 | int g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd206
    JZ 0x005fd25e                       ; 005fd208 | LAB_005fd25e
        ;   XREF to: 005fd25e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x18]      ; 005fd20a | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd20a
    MOV EAX,dword ptr [ESP + 0x14]      ; 005fd20e
    CMP EAX,dword ptr [EDX + 0x4]       ; 005fd212 | g_RasterizerEdgeArray[0].y_end
    JL 0x005fd44e                       ; 005fd215 | LAB_005fd44e
        ;   XREF to: 005fd44e (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005fd21b
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd21f | int g_RasterizerEdgeCount
    MOV EBX,EAX                         ; 005fd225
    MOV dword ptr [EDX],0xffffffff      ; 005fd227 | SEdgeData[16] g_RasterizerEdgeArray
    MOV EAX,0x3f9ad60                   ; 005fd22d | SEdgeData[16] g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fd232
    TEST EBP,EBP                        ; 005fd234
    JLE 0x005fd447                      ; 005fd236 | LAB_005fd447
        ;   XREF to: 005fd447 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [EAX]             ; 005fd23c | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd23c
    JNZ 0x005fd43b                      ; 005fd23e | LAB_005fd43b
        ;   XREF to: 005fd43b (CONDITIONAL_JUMP)
    CMP EAX,ECX                         ; 005fd244
    JZ 0x005fd43b                       ; 005fd246 | LAB_005fd43b
        ;   XREF to: 005fd43b (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x18],EAX      ; 005fd24c | SEdgeData[16] g_RasterizerEdgeArray
        ;   Label: LAB_005fd24c
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd250 | int g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd256
    JNZ 0x005fd44e                      ; 005fd258 | LAB_005fd44e
        ;   XREF to: 005fd44e (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd25e | int g_RasterizerEdgeCount
        ;   Label: LAB_005fd25e
    ADD ESP,0x20                        ; 005fd264
    POP EBP                             ; 005fd267
    POP EDI                             ; 005fd268
    POP ESI                             ; 005fd269
    POP EBX                             ; 005fd26a
    RET                                 ; 005fd26b
    MOV EAX,dword ptr [ESP + 0x34]      ; 005fd26c
        ;   Label: LAB_005fd26c
    ADD EAX,0x60                        ; 005fd270
    PUSH EAX                            ; 005fd273
    MOV EAX,dword ptr [ESP + 0x38]      ; 005fd274
    ADD EAX,0x30                        ; 005fd278
    PUSH EAX                            ; 005fd27b
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005fd27c
    PUSH EDX                            ; 005fd280
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 005fd281 | int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005fd286
    TEST EAX,EAX                        ; 005fd289
    JNZ 0x005fd096                      ; 005fd28b | LAB_005fd096
        ;   XREF to: 005fd096 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd291 | int g_RasterizerEdgeCount
    ADD ESP,0x20                        ; 005fd297
    POP EBP                             ; 005fd29a
    POP EDI                             ; 005fd29b
    POP ESI                             ; 005fd29c
    POP EBX                             ; 005fd29d
    RET                                 ; 005fd29e
    MOV EDI,dword ptr [0x02d052a0]      ; 005fd29f | int g_RenderStateFlags
        ;   Label: LAB_005fd29f
    PUSH EDI                            ; 005fd2a5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005fd2a6
    PUSH EAX                            ; 005fd2aa
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005fd2ab
    PUSH EDX                            ; 005fd2af
    CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0 ; 005fd2b0 | int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)
        ;   XREF to: 005b75e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005fd2b5
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd2b8 | int g_RasterizerEdgeCount
    ADD ESP,0x20                        ; 005fd2be
    POP EBP                             ; 005fd2c1
    POP EDI                             ; 005fd2c2
    POP ESI                             ; 005fd2c3
    POP EBX                             ; 005fd2c4
    RET                                 ; 005fd2c5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005fd2c6
        ;   Label: LAB_005fd2c6
    PUSH EAX                            ; 005fd2ca
    MOV EDX,dword ptr [ESP + 0x38]      ; 005fd2cb
    PUSH EDX                            ; 005fd2cf
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 005fd2d0 | void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005fd2d5
    JMP 0x005fd0ce                      ; 005fd2d8 | LAB_005fd0ce
        ;   XREF to: 005fd0ce (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x38]      ; 005fd2dd
        ;   Label: LAB_005fd2dd
    PUSH EDI                            ; 005fd2e1
    MOV EBP,dword ptr [ESP + 0x38]      ; 005fd2e2
    PUSH EBP                            ; 005fd2e6
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 005fd2e7 | void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005fd2ec
    JMP 0x005fd0ce                      ; 005fd2ef | LAB_005fd0ce
        ;   XREF to: 005fd0ce (UNCONDITIONAL_JUMP)
    JBE 0x005fd2c6                      ; 005fd2f4 | LAB_005fd2c6
        ;   Label: LAB_005fd2f4
        ;   XREF to: 005fd2c6 (CONDITIONAL_JUMP)
    CMP EAX,0x6                         ; 005fd2f6
    JZ 0x005fd2dd                       ; 005fd2f9 | LAB_005fd2dd
        ;   XREF to: 005fd2dd (CONDITIONAL_JUMP)
    JMP 0x005fd0ce                      ; 005fd2fb | LAB_005fd0ce
        ;   XREF to: 005fd0ce (UNCONDITIONAL_JUMP)
    MOV ECX,ESI                         ; 005fd300
        ;   Label: LAB_005fd300
    MOV ECX,dword ptr [ECX + 0x14]      ; 005fd302
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fd305
    CMP ECX,dword ptr [EBX + 0x14]      ; 005fd309
    JLE 0x005fd31e                      ; 005fd30c | LAB_005fd31e
        ;   XREF to: 005fd31e (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x8]       ; 005fd30e
    MOV ESI,EBX                         ; 005fd312
    MOV dword ptr [ESP + 0x10],ECX      ; 005fd314
    MOV ECX,EDX                         ; 005fd318
    MOV EDX,EAX                         ; 005fd31a
    MOV EAX,ECX                         ; 005fd31c
    IMUL EBX,EBP,0x48                   ; 005fd31e
        ;   Label: LAB_005fd31e
    ADD EBX,0x3f9ad60                   ; 005fd321 | SEdgeData[16] g_RasterizerEdgeArray
    MOV dword ptr [EBX],EDX             ; 005fd327 | SEdgeData[16] g_RasterizerEdgeArray
    MOV ECX,dword ptr [0x03f9b1e0]      ; 005fd329 | int g_RasterizerMinY
    MOV dword ptr [EBX + 0x4],EAX       ; 005fd32f | g_RasterizerEdgeArray[0].y_end
    CMP EDX,ECX                         ; 005fd332
    JGE 0x005fd33c                      ; 005fd334 | LAB_005fd33c
        ;   XREF to: 005fd33c (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f9b1e0],EDX      ; 005fd336 | int g_RasterizerMinY
    CMP EAX,dword ptr [0x03f9b1e4]      ; 005fd33c | int g_RasterizerMaxY
        ;   Label: LAB_005fd33c
    JLE 0x005fd349                      ; 005fd342 | LAB_005fd349
        ;   XREF to: 005fd349 (CONDITIONAL_JUMP)
    MOV [0x03f9b1e4],EAX                ; 005fd344 | int g_RasterizerMaxY
    MOV ECX,dword ptr [ESP + 0x10]      ; 005fd349
        ;   Label: LAB_005fd349
    MOV EAX,dword ptr [ESI + 0x14]      ; 005fd34d
    MOV ECX,dword ptr [ECX + 0x14]      ; 005fd350
    SUB ECX,EAX                         ; 005fd353
    CMP ECX,0x10000                     ; 005fd355
    JNC 0x005fd3f2                      ; 005fd35b | LAB_005fd3f2
        ;   XREF to: 005fd3f2 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005fd361
    MOV EAX,dword ptr [ESI + 0x14]      ; 005fd363
        ;   Label: LAB_005fd363
    AND EAX,0xffff                      ; 005fd366
    XOR AX,0xffff                       ; 005fd36b
    MOV dword ptr [ESP],EAX             ; 005fd36f
    MOV EAX,dword ptr [ESP + 0x10]      ; 005fd372
    MOV EDX,dword ptr [ESI + 0x10]      ; 005fd376
    MOV EAX,dword ptr [EAX + 0x10]      ; 005fd379
    SUB EAX,EDX                         ; 005fd37c
    MOV EDX,EAX                         ; 005fd37e
    MOV EAX,ECX                         ; 005fd380
    MOV dword ptr [0x03f9ad5c],EBP      ; 005fd382 | int g_RasterizerEdgeCount
    IMUL EDX                            ; 005fd388
    SHRD EAX,EDX,0x10                   ; 005fd38a
    MOV EDX,EAX                         ; 005fd38e
    MOV dword ptr [EBX + 0xc],EAX       ; 005fd390 | g_RasterizerEdgeArray[0].x_delta
    MOV EAX,dword ptr [ESP]             ; 005fd393
    IMUL EDX                            ; 005fd396
    SHRD EAX,EDX,0x10                   ; 005fd398
    MOV dword ptr [ESP + 0x4],EAX       ; 005fd39c
    MOV EDX,dword ptr [ESP + 0x4]       ; 005fd3a0
    MOV EAX,dword ptr [ESI + 0x10]      ; 005fd3a4
    ADD EAX,EDX                         ; 005fd3a7
    MOV dword ptr [EBX + 0x8],EAX       ; 005fd3a9 | g_RasterizerEdgeArray[0].x_current
    MOV EAX,dword ptr [ESP + 0x10]      ; 005fd3ac
    MOV EDX,dword ptr [ESI + 0x8]       ; 005fd3b0
    MOV EAX,dword ptr [EAX + 0x8]       ; 005fd3b3
    SUB EAX,EDX                         ; 005fd3b6
    MOV EDX,EAX                         ; 005fd3b8
    SHL EDX,0x8                         ; 005fd3ba
    MOV EAX,ECX                         ; 005fd3bd
    IMUL EDX                            ; 005fd3bf
    SHRD EAX,EDX,0x10                   ; 005fd3c1
    MOV EDX,EAX                         ; 005fd3c5
    MOV dword ptr [EBX + 0x2c],EAX      ; 005fd3c7 | g_RasterizerEdgeArray[0].z_delta
    MOV EAX,dword ptr [ESP]             ; 005fd3ca
    MOV ECX,dword ptr [ESI + 0x8]       ; 005fd3cd
    MOV ESI,dword ptr [0x02c6d03c]      ; 005fd3d0 | int g_RasterizerDepthBias
    SHL ECX,0x8                         ; 005fd3d6
    IMUL EDX                            ; 005fd3d9
    SHRD EAX,EDX,0x10                   ; 005fd3db
    SUB ECX,ESI                         ; 005fd3df
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd3e1 | int g_RasterizerEdgeCount
    ADD ECX,EAX                         ; 005fd3e7
    INC EBP                             ; 005fd3e9
    MOV dword ptr [EBX + 0x28],ECX      ; 005fd3ea | g_RasterizerEdgeArray[0].z_current
    JMP 0x005fd132                      ; 005fd3ed | LAB_005fd132
        ;   XREF to: 005fd132 (UNCONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005fd3f2
        ;   Label: LAB_005fd3f2
    XOR EDX,EDX                         ; 005fd3f7
    DIV ECX                             ; 005fd3f9
    MOV ECX,EAX                         ; 005fd3fb
    JMP 0x005fd363                      ; 005fd3fd | LAB_005fd363
        ;   XREF to: 005fd363 (UNCONDITIONAL_JUMP)
    INC EAX                             ; 005fd402
        ;   Label: LAB_005fd402
    ADD ESI,0x48                        ; 005fd403
    CMP EAX,EBP                         ; 005fd406
    JL 0x005fd158                       ; 005fd408 | LAB_005fd158
        ;   XREF to: 005fd158 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005fd40e
        ;   Label: LAB_005fd40e
    JMP 0x005fd168                      ; 005fd410 | LAB_005fd168
        ;   XREF to: 005fd168 (UNCONDITIONAL_JUMP)
    INC EDX                             ; 005fd415
        ;   Label: LAB_005fd415
    ADD EAX,0x48                        ; 005fd416
    CMP EDX,EBP                         ; 005fd419
    JL 0x005fd191                       ; 005fd41b | LAB_005fd191
        ;   XREF to: 005fd191 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005fd421
        ;   Label: LAB_005fd421
    JMP 0x005fd1a1                      ; 005fd423 | LAB_005fd1a1
        ;   XREF to: 005fd1a1 (UNCONDITIONAL_JUMP)
    INC EDX                             ; 005fd428
        ;   Label: LAB_005fd428
    ADD EAX,0x48                        ; 005fd429
    CMP EDX,EBP                         ; 005fd42c
    JL 0x005fd1ec                       ; 005fd42e | LAB_005fd1ec
        ;   XREF to: 005fd1ec (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005fd434
        ;   Label: LAB_005fd434
    JMP 0x005fd1fc                      ; 005fd436 | LAB_005fd1fc
        ;   XREF to: 005fd1fc (UNCONDITIONAL_JUMP)
    INC EDX                             ; 005fd43b
        ;   Label: LAB_005fd43b
    ADD EAX,0x48                        ; 005fd43c | g_RasterizerEdgeArray[1].y_start
    CMP EDX,EBP                         ; 005fd43f
    JL 0x005fd23c                       ; 005fd441 | LAB_005fd23c
        ;   XREF to: 005fd23c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005fd447
        ;   Label: LAB_005fd447
    JMP 0x005fd24c                      ; 005fd449 | LAB_005fd24c
        ;   XREF to: 005fd24c (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x18]      ; 005fd44e
        ;   Label: LAB_005fd44e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005fd452
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fd456
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 005fd45a | void wincore_windll.cpp_renderScanline_FUN_005b5710(void * left_data, void * right_data, int scanline_y)
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)
    CMP dword ptr [0x02c6d5a8],0x0      ; 005fd45f | int g_RenderAbortFlag
    JNZ 0x005fd25e                      ; 005fd466 | LAB_005fd25e
        ;   XREF to: 005fd25e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005fd46c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005fd470
    MOV ECX,dword ptr [EDX + 0x8]       ; 005fd474
    MOV EAX,dword ptr [EAX + 0xc]       ; 005fd477
    MOV EBX,dword ptr [EDX + 0x28]      ; 005fd47a
    ADD ECX,EAX                         ; 005fd47d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005fd47f
    MOV dword ptr [EDX + 0x8],ECX       ; 005fd482
    ADD EBX,EAX                         ; 005fd485
    MOV EAX,dword ptr [ESP + 0x18]      ; 005fd487
    MOV dword ptr [EDX + 0x28],EBX      ; 005fd48b
    MOV EDX,dword ptr [ESP + 0x18]      ; 005fd48e
    MOV EAX,dword ptr [EAX + 0xc]       ; 005fd492
    MOV ESI,dword ptr [EDX + 0x8]       ; 005fd495
    MOV EDI,dword ptr [EDX + 0x28]      ; 005fd498
    ADD ESI,EAX                         ; 005fd49b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005fd49d
    MOV EBP,dword ptr [0x03f9ad5c]      ; 005fd4a0 | int g_RasterizerEdgeCount
    ADD EDI,EAX                         ; 005fd4a6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005fd4a8
    MOV dword ptr [EDX + 0x8],ESI       ; 005fd4ac
    INC EAX                             ; 005fd4af
    MOV dword ptr [EDX + 0x28],EDI      ; 005fd4b0
    JMP 0x005fd1b8                      ; 005fd4b3 | LAB_005fd1b8
        ;   XREF to: 005fd1b8 (UNCONDITIONAL_JUMP)

