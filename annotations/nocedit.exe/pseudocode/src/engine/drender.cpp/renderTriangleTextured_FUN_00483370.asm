; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00483370(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; SRenderVertex *[16] Stack[-0x6c]:64  local_6c
; uint             Stack[-0x2c]:4  local_2c
; int *            Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; SRenderVertex *  Stack[-0x1c]:4  local_1c
; SSoftwareEdge *  Stack[-0x18]:4  local_18
; SSoftwareEdge *  Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 at 0048a7aa
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d301
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0048cf00 at 0048d0ac
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.inv_z
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_y
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[0].a
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_RenderTriangleEdgeCount
;   SSoftwareEdge[16] g_EdgeInterpolationArray
;   ... and 25 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_special.cpp_drawPolygon2_FUN_005b7610
;   engine_special.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483370
        ;   Label: engine_drender.cpp_renderTriangleTextured_FUN_00483370
    PUSH ESI                            ; 00483371
    PUSH EDI                            ; 00483372
    PUSH EBP                            ; 00483373
    SUB ESP,0x5c                        ; 00483374
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483377 | g_RenderTriangleEdgeCount
    CMP dword ptr [0x00772a7c],0x0      ; 0048337d | g_CullingMode
    JNZ 0x00483407                      ; 00483384
        ;   XREF to: 00483407 (CONDITIONAL_JUMP)  ; LAB_00483407
    MOV ECX,dword ptr [0x030e56b8]      ; 0048338a | g_RenderedTriangleCount
        ;   Label: LAB_0048338a
    MOV EBX,dword ptr [0x02d03e94]      ; 00483390 | g_UseExternalRenderer
    INC ECX                             ; 00483396
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483397 | g_RenderTriangleEdgeCount
    MOV dword ptr [0x030e56b8],ECX      ; 0048339d | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 004833a3
    JZ 0x0048346f                       ; 004833a5
        ;   XREF to: 0048346f (CONDITIONAL_JUMP)  ; LAB_0048346f
    CMP dword ptr [0x00772a74],0x0      ; 004833ab | g_TexturesDisabled
    JNZ 0x0048346f                      ; 004833b2
        ;   XREF to: 0048346f (CONDITIONAL_JUMP)  ; LAB_0048346f
    MOV ECX,dword ptr [ESP + 0x74]      ; 004833b8
    XOR EBX,EBX                         ; 004833bc
    TEST ECX,ECX                        ; 004833be
    JLE 0x004833e0                      ; 004833c0
        ;   XREF to: 004833e0 (CONDITIONAL_JUMP)  ; LAB_004833e0
    MOV EAX,dword ptr [ESP + 0x70]      ; 004833c2
    IMUL EDX,dword ptr [EAX],0x30       ; 004833c6
        ;   Label: LAB_004833c6
    INC EBX                             ; 004833c9
    ADD EDX,0x688014                    ; 004833ca | g_RenderVertexBuffer
    MOV dword ptr [ESP + EBX*0x4 + -0x4],EDX ; 004833d0
    MOV EDX,dword ptr [ESP + 0x74]      ; 004833d4
    ADD EAX,0x4                         ; 004833d8
    CMP EBX,EDX                         ; 004833db
    JL 0x004833c6                       ; 004833dd
        ;   XREF to: 004833c6 (CONDITIONAL_JUMP)  ; LAB_004833c6
    NOP                                 ; 004833df
    MOV ECX,dword ptr [0x02d052a0]      ; 004833e0 | g_RenderStateFlags
        ;   Label: LAB_004833e0
    PUSH ECX                            ; 004833e6
    MOV EBX,dword ptr [ESP + 0x78]      ; 004833e7
    PUSH EBX                            ; 004833eb
    LEA EAX,[ESP + 0x8]                 ; 004833ec
    PUSH EAX                            ; 004833f0
    CALL engine_special.cpp_drawPolygon2_FUN_005b7610 ; 004833f1
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 004833f6
    MOV EBP,dword ptr [0x02c6cb70]      ; 004833f9 | g_RenderTriangleEdgeCount
        ;   Label: LAB_004833f9
    ADD ESP,0x5c                        ; 004833ff
    POP EBP                             ; 00483402
    POP EDI                             ; 00483403
    POP ESI                             ; 00483404
    POP EBX                             ; 00483405
    RET                                 ; 00483406
    MOV EDX,dword ptr [ESP + 0x70]      ; 00483407
        ;   Label: LAB_00483407
    MOV EDX,dword ptr [EDX + 0x8]       ; 0048340b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048340e
    SUB EAX,EDX                         ; 00483415
    SHL EAX,0x4                         ; 00483417
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048341a
    ADD EAX,0x688014                    ; 0048341e | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX + 0x4]       ; 00483423
    PUSH EAX                            ; 00483426
    LEA EAX,[EDX*0x4 + 0x0]             ; 00483427
    SUB EAX,EDX                         ; 0048342e
    SHL EAX,0x4                         ; 00483430
    MOV EDX,dword ptr [ESP + 0x74]      ; 00483433
    ADD EAX,0x688014                    ; 00483437 | g_RenderVertexBuffer
    MOV EDX,dword ptr [EDX]             ; 0048343c
    PUSH EAX                            ; 0048343e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048343f
    SUB EAX,EDX                         ; 00483446
    SHL EAX,0x4                         ; 00483448
    ADD EAX,0x688014                    ; 0048344b | g_RenderVertexBuffer
    PUSH EAX                            ; 00483450
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00483451
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00483456
    TEST EAX,EAX                        ; 00483459
    JNZ 0x0048338a                      ; 0048345b
        ;   XREF to: 0048338a (CONDITIONAL_JUMP)  ; LAB_0048338a
    MOV EBP,dword ptr [0x02c6cb70]      ; 00483461 | g_RenderTriangleEdgeCount
    ADD ESP,0x5c                        ; 00483467
    POP EBP                             ; 0048346a
    POP EDI                             ; 0048346b
    POP ESI                             ; 0048346c
    POP EBX                             ; 0048346d
    RET                                 ; 0048346e
    MOV EDI,0x4b0                       ; 0048346f
        ;   Label: LAB_0048346f
    XOR EBP,EBP                         ; 00483474
    MOV EDX,dword ptr [ESP + 0x74]      ; 00483476
    MOV dword ptr [0x02c6cff8],EBP      ; 0048347a | g_RenderTriangleMaxScanlineY
    MOV dword ptr [ESP + 0x48],EBP      ; 00483480
    MOV dword ptr [0x02c6cff4],EDI      ; 00483484 | g_RenderTriangleMinScanlineY
    TEST EDX,EDX                        ; 0048348a
    JLE 0x004834fa                      ; 0048348c
        ;   XREF to: 004834fa (CONDITIONAL_JUMP)  ; LAB_004834fa
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048348e
    MOV dword ptr [ESP + 0x44],EAX      ; 00483492
    MOV EAX,dword ptr [ESP + 0x48]      ; 00483496
        ;   Label: LAB_00483496
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048349a
    INC EAX                             ; 0048349e
    CMP EAX,EDX                         ; 0048349f
    JL 0x004834a5                       ; 004834a1
        ;   XREF to: 004834a5 (CONDITIONAL_JUMP)  ; LAB_004834a5
    XOR EAX,EAX                         ; 004834a3
    MOV ECX,dword ptr [ESP + 0x70]      ; 004834a5
        ;   Label: LAB_004834a5
    SHL EAX,0x2                         ; 004834a9
    ADD EAX,ECX                         ; 004834ac
    IMUL ECX,dword ptr [EAX],0x30       ; 004834ae
    MOV EAX,dword ptr [ESP + 0x44]      ; 004834b1
    IMUL EBX,dword ptr [EAX],0x30       ; 004834b5
    ADD ECX,0x688014                    ; 004834b8 | g_RenderVertexBuffer
    ADD EBX,0x688014                    ; 004834be | g_RenderVertexBuffer
    MOV dword ptr [ESP + 0x50],ECX      ; 004834c4
    MOV EDX,dword ptr [ECX + 0x14]      ; 004834c8 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EAX,dword ptr [EBX + 0x14]      ; 004834cb | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SAR EDX,0x10                        ; 004834ce
    SAR EAX,0x10                        ; 004834d1
    MOV ESI,EBX                         ; 004834d4
    CMP EAX,EDX                         ; 004834d6
    JNZ 0x004836e8                      ; 004834d8
        ;   XREF to: 004836e8 (CONDITIONAL_JUMP)  ; LAB_004836e8
    MOV EBX,dword ptr [ESP + 0x44]      ; 004834de
        ;   Label: LAB_004834de
    MOV ESI,dword ptr [ESP + 0x48]      ; 004834e2
    MOV EDI,dword ptr [ESP + 0x74]      ; 004834e6
    ADD EBX,0x4                         ; 004834ea
    INC ESI                             ; 004834ed
    MOV dword ptr [ESP + 0x44],EBX      ; 004834ee
    MOV dword ptr [ESP + 0x48],ESI      ; 004834f2
    CMP ESI,EDI                         ; 004834f6
    JL 0x00483496                       ; 004834f8
        ;   XREF to: 00483496 (CONDITIONAL_JUMP)  ; LAB_00483496
    MOV EBX,0x2c6cb74                   ; 004834fa | g_EdgeInterpolationArray
        ;   Label: LAB_004834fa
    XOR EAX,EAX                         ; 004834ff
    MOV ESI,dword ptr [0x02c6cff4]      ; 00483501 | g_RenderTriangleMinScanlineY
    MOV [0x02c6d5a8],EAX                ; 00483507 | g_RenderAbortFlag
    TEST EBP,EBP                        ; 0048350c
    JLE 0x0048395d                      ; 0048350e
        ;   XREF to: 0048395d (CONDITIONAL_JUMP)  ; LAB_0048395d
    CMP ESI,dword ptr [EBX]             ; 00483514 | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_00483514
    JNZ 0x00483951                      ; 00483516
        ;   XREF to: 00483951 (CONDITIONAL_JUMP)  ; LAB_00483951
    TEST EBX,EBX                        ; 0048351c
    JZ 0x00483951                       ; 0048351e
        ;   XREF to: 00483951 (CONDITIONAL_JUMP)  ; LAB_00483951
    MOV dword ptr [ESP + 0x54],EBX      ; 00483524 | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_00483524
    MOV dword ptr [0x02c6cb70],EBP      ; 00483528 | g_RenderTriangleEdgeCount
    TEST EBX,EBX                        ; 0048352e
    JZ 0x004833f9                       ; 00483530
        ;   XREF to: 004833f9 (CONDITIONAL_JUMP)  ; LAB_004833f9
    MOV EAX,0x2c6cb74                   ; 00483536 | g_EdgeInterpolationArray
    MOV ECX,dword ptr [0x02c6cff4]      ; 0048353b | g_RenderTriangleMinScanlineY
    XOR EDX,EDX                         ; 00483541
    TEST EBP,EBP                        ; 00483543
    JLE 0x00483970                      ; 00483545
        ;   XREF to: 00483970 (CONDITIONAL_JUMP)  ; LAB_00483970
    CMP ECX,dword ptr [EAX]             ; 0048354b | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_0048354b
    JNZ 0x00483964                      ; 0048354d
        ;   XREF to: 00483964 (CONDITIONAL_JUMP)  ; LAB_00483964
    CMP EAX,EBX                         ; 00483553
    JZ 0x00483964                       ; 00483555
        ;   XREF to: 00483964 (CONDITIONAL_JUMP)  ; LAB_00483964
    MOV dword ptr [ESP + 0x58],EAX      ; 0048355b | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_0048355b
    MOV dword ptr [0x02c6cb70],EBP      ; 0048355f | g_RenderTriangleEdgeCount
    TEST EAX,EAX                        ; 00483565
    JZ 0x004833f9                       ; 00483567
        ;   XREF to: 004833f9 (CONDITIONAL_JUMP)  ; LAB_004833f9
    MOV EAX,[0x02c6cff4]                ; 0048356d | g_RenderTriangleMinScanlineY
    MOV dword ptr [ESP + 0x4c],EAX      ; 00483572
    MOV EDX,dword ptr [ESP + 0x54]      ; 00483576
        ;   Label: LAB_00483576
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048357a
    MOV ESI,dword ptr [EDX + 0x4]       ; 0048357e | g_EdgeInterpolationArray[0].base.y_max
    MOV dword ptr [0x02c6cb70],EBP      ; 00483581 | g_RenderTriangleEdgeCount
    CMP EAX,ESI                         ; 00483587
    JL 0x004835c8                       ; 00483589
        ;   XREF to: 004835c8 (CONDITIONAL_JUMP)  ; LAB_004835c8
    MOV ECX,dword ptr [ESP + 0x58]      ; 0048358b | g_EdgeInterpolationArray
    MOV EBX,EAX                         ; 0048358f
    MOV dword ptr [EDX],0xffffffff      ; 00483591 | g_EdgeInterpolationArray
    MOV EAX,0x2c6cb74                   ; 00483597 | g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 0048359c
    TEST EBP,EBP                        ; 0048359e
    JLE 0x00483983                      ; 004835a0
        ;   XREF to: 00483983 (CONDITIONAL_JUMP)  ; LAB_00483983
    CMP EBX,dword ptr [EAX]             ; 004835a6 | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_004835a6
    JNZ 0x00483977                      ; 004835a8
        ;   XREF to: 00483977 (CONDITIONAL_JUMP)  ; LAB_00483977
    CMP EAX,ECX                         ; 004835ae
    JZ 0x00483977                       ; 004835b0
        ;   XREF to: 00483977 (CONDITIONAL_JUMP)  ; LAB_00483977
    MOV dword ptr [ESP + 0x54],EAX      ; 004835b6 | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_004835b6
    MOV dword ptr [0x02c6cb70],EBP      ; 004835ba | g_RenderTriangleEdgeCount
    TEST EAX,EAX                        ; 004835c0
    JZ 0x004833f9                       ; 004835c2
        ;   XREF to: 004833f9 (CONDITIONAL_JUMP)  ; LAB_004833f9
    MOV EDX,dword ptr [ESP + 0x58]      ; 004835c8 | g_EdgeInterpolationArray
        ;   Label: LAB_004835c8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004835cc
    CMP EAX,dword ptr [EDX + 0x4]       ; 004835d0 | g_EdgeInterpolationArray[0].base.y_max
    JL 0x00483618                       ; 004835d3
        ;   XREF to: 00483618 (CONDITIONAL_JUMP)  ; LAB_00483618
    MOV ECX,dword ptr [ESP + 0x54]      ; 004835d5 | g_EdgeInterpolationArray
    MOV EBP,dword ptr [0x02c6cb70]      ; 004835d9 | g_RenderTriangleEdgeCount
    MOV EBX,EAX                         ; 004835df
    MOV dword ptr [EDX],0xffffffff      ; 004835e1 | g_EdgeInterpolationArray
    MOV EAX,0x2c6cb74                   ; 004835e7 | g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 004835ec
    TEST EBP,EBP                        ; 004835ee
    JLE 0x00483996                      ; 004835f0
        ;   XREF to: 00483996 (CONDITIONAL_JUMP)  ; LAB_00483996
    CMP EBX,dword ptr [EAX]             ; 004835f6 | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_004835f6
    JNZ 0x0048398a                      ; 004835f8
        ;   XREF to: 0048398a (CONDITIONAL_JUMP)  ; LAB_0048398a
    CMP EAX,ECX                         ; 004835fe
    JZ 0x0048398a                       ; 00483600
        ;   XREF to: 0048398a (CONDITIONAL_JUMP)  ; LAB_0048398a
    MOV dword ptr [ESP + 0x58],EAX      ; 00483606 | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_00483606
    MOV dword ptr [0x02c6cb70],EBP      ; 0048360a | g_RenderTriangleEdgeCount
    TEST EAX,EAX                        ; 00483610
    JZ 0x004833f9                       ; 00483612
        ;   XREF to: 004833f9 (CONDITIONAL_JUMP)  ; LAB_004833f9
    MOV EDI,dword ptr [ESP + 0x58]      ; 00483618
        ;   Label: LAB_00483618
    MOV ESI,dword ptr [ESP + 0x54]      ; 0048361c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00483620
    CALL engine_special.cpp_renderScanline_FUN_005b5710 ; 00483624
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_005b5710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    CMP dword ptr [0x02c6d5a8],0x0      ; 00483629 | g_RenderAbortFlag
    JNZ 0x004833f9                      ; 00483630
        ;   XREF to: 004833f9 (CONDITIONAL_JUMP)  ; LAB_004833f9
    MOV EDX,dword ptr [ESP + 0x54]      ; 00483636
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048363a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048363e
    MOV EAX,dword ptr [EAX + 0xc]       ; 00483641
    MOV EBX,dword ptr [EDX + 0x18]      ; 00483644
    ADD ECX,EAX                         ; 00483647
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00483649
    MOV dword ptr [EDX + 0x8],ECX       ; 0048364c
    ADD EBX,EAX                         ; 0048364f
    MOV dword ptr [EDX + 0x18],EBX      ; 00483651
    MOV ESI,dword ptr [EDX + 0x20]      ; 00483654
    MOV EDI,dword ptr [EDX + 0x10]      ; 00483657
    MOV ECX,dword ptr [EDX + 0x28]      ; 0048365a
    MOV EAX,dword ptr [EDX + 0x24]      ; 0048365d
    MOV EBX,dword ptr [EDX + 0x30]      ; 00483660
    ADD ESI,EAX                         ; 00483663
    MOV EAX,dword ptr [EDX + 0x14]      ; 00483665
    MOV dword ptr [EDX + 0x20],ESI      ; 00483668
    ADD EDI,EAX                         ; 0048366b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0048366d
    MOV dword ptr [EDX + 0x10],EDI      ; 00483670
    ADD ECX,EAX                         ; 00483673
    MOV EAX,dword ptr [EDX + 0x34]      ; 00483675
    MOV dword ptr [EDX + 0x28],ECX      ; 00483678
    ADD EBX,EAX                         ; 0048367b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0048367d
    MOV dword ptr [EDX + 0x30],EBX      ; 00483681
    MOV EDX,dword ptr [ESP + 0x58]      ; 00483684
    MOV EAX,dword ptr [EAX + 0xc]       ; 00483688
    MOV ESI,dword ptr [EDX + 0x8]       ; 0048368b
    MOV EDI,dword ptr [EDX + 0x18]      ; 0048368e
    ADD ESI,EAX                         ; 00483691
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00483693
    MOV dword ptr [EDX + 0x8],ESI       ; 00483696
    ADD EDI,EAX                         ; 00483699
    MOV dword ptr [EDX + 0x18],EDI      ; 0048369b
    MOV ECX,dword ptr [EDX + 0x20]      ; 0048369e
    MOV EBX,dword ptr [EDX + 0x10]      ; 004836a1
    MOV ESI,dword ptr [EDX + 0x28]      ; 004836a4
    MOV EAX,dword ptr [EDX + 0x24]      ; 004836a7
    MOV EDI,dword ptr [EDX + 0x30]      ; 004836aa
    ADD ECX,EAX                         ; 004836ad
    MOV EAX,dword ptr [EDX + 0x14]      ; 004836af
    MOV dword ptr [EDX + 0x20],ECX      ; 004836b2
    ADD EBX,EAX                         ; 004836b5
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004836b7
    MOV dword ptr [EDX + 0x10],EBX      ; 004836ba
    ADD ESI,EAX                         ; 004836bd
    MOV EAX,dword ptr [EDX + 0x34]      ; 004836bf
    MOV dword ptr [EDX + 0x28],ESI      ; 004836c2
    ADD EDI,EAX                         ; 004836c5
    MOV dword ptr [EDX + 0x30],EDI      ; 004836c7
    MOV DL,byte ptr [0x02d052a1]        ; 004836ca | g_RenderStateFlags+1
    MOV EBP,dword ptr [0x02c6cb70]      ; 004836d0 | g_RenderTriangleEdgeCount
    TEST DL,0x2                         ; 004836d6
    JNZ 0x0048399d                      ; 004836d9
        ;   XREF to: 0048399d (CONDITIONAL_JUMP)  ; LAB_0048399d
    INC dword ptr [ESP + 0x4c]          ; 004836df
    JMP 0x00483576                      ; 004836e3
        ;   XREF to: 00483576 (UNCONDITIONAL_JUMP)  ; LAB_00483576
    MOV EDI,dword ptr [EBX + 0x14]      ; 004836e8 | g_RenderVertexBuffer[0].projected_vertex.screen_y
        ;   Label: LAB_004836e8
    CMP EDI,dword ptr [ECX + 0x14]      ; 004836eb | g_RenderVertexBuffer[0].projected_vertex.screen_y
    JLE 0x004836fc                      ; 004836ee
        ;   XREF to: 004836fc (CONDITIONAL_JUMP)  ; LAB_004836fc
    MOV ESI,ECX                         ; 004836f0
    MOV dword ptr [ESP + 0x50],EBX      ; 004836f2
    MOV ECX,EAX                         ; 004836f6
    MOV EAX,EDX                         ; 004836f8
    MOV EDX,ECX                         ; 004836fa
    IMUL ECX,EBP,0x48                   ; 004836fc
        ;   Label: LAB_004836fc
    ADD ECX,0x2c6cb74                   ; 004836ff | g_EdgeInterpolationArray
    MOV dword ptr [ECX],EAX             ; 00483705 | g_EdgeInterpolationArray
    MOV EDI,dword ptr [0x02c6cff4]      ; 00483707 | g_RenderTriangleMinScanlineY
    MOV dword ptr [ECX + 0x4],EDX       ; 0048370d | g_EdgeInterpolationArray[0].base.y_max
    CMP EAX,EDI                         ; 00483710
    JGE 0x00483719                      ; 00483712
        ;   XREF to: 00483719 (CONDITIONAL_JUMP)  ; LAB_00483719
    MOV [0x02c6cff4],EAX                ; 00483714 | g_RenderTriangleMinScanlineY
    CMP EDX,dword ptr [0x02c6cff8]      ; 00483719 | g_RenderTriangleMaxScanlineY
        ;   Label: LAB_00483719
    JLE 0x00483727                      ; 0048371f
        ;   XREF to: 00483727 (CONDITIONAL_JUMP)  ; LAB_00483727
    MOV dword ptr [0x02c6cff8],EDX      ; 00483721 | g_RenderTriangleMaxScanlineY
    MOV EBX,dword ptr [ESP + 0x50]      ; 00483727
        ;   Label: LAB_00483727
    MOV EDX,dword ptr [ESI + 0x14]      ; 0048372b | g_RenderVertexBuffer[0].projected_vertex.screen_y
    MOV EBX,dword ptr [EBX + 0x14]      ; 0048372e | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EBX,EDX                         ; 00483731
    CMP EBX,0x10000                     ; 00483733
    JNC 0x00483908                      ; 00483739
        ;   XREF to: 00483908 (CONDITIONAL_JUMP)  ; LAB_00483908
    MOV dword ptr [0x02c6cb70],EBP      ; 0048373f | g_RenderTriangleEdgeCount
    XOR EBX,EBX                         ; 00483745
    MOV EAX,dword ptr [ESP + 0x50]      ; 00483747
        ;   Label: LAB_00483747
    MOV EDX,dword ptr [ESI + 0x10]      ; 0048374b | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EAX,dword ptr [EAX + 0x10]      ; 0048374e | g_RenderVertexBuffer[0].projected_vertex.screen_x
    MOV EDI,dword ptr [ESI + 0x14]      ; 00483751 | g_RenderVertexBuffer[0].projected_vertex.screen_y
    SUB EAX,EDX                         ; 00483754
    AND EDI,0xffff                      ; 00483756
    MOV EDX,EAX                         ; 0048375c
    MOV EAX,EBX                         ; 0048375e
    XOR DI,0xffff                       ; 00483760
    IMUL EDX                            ; 00483764
    SHRD EAX,EDX,0x10                   ; 00483766
    MOV EDX,EAX                         ; 0048376a
    MOV dword ptr [ECX + 0xc],EAX       ; 0048376c | g_EdgeInterpolationArray[0].base.x_gradient
    MOV EAX,EDI                         ; 0048376f
    IMUL EDX                            ; 00483771
    SHRD EAX,EDX,0x10                   ; 00483773
    MOV dword ptr [ESP + 0x40],EAX      ; 00483777
    MOV EDX,dword ptr [ESP + 0x40]      ; 0048377b
    MOV EAX,dword ptr [ESI + 0x10]      ; 0048377f | g_RenderVertexBuffer[0].projected_vertex.screen_x
    ADD EAX,EDX                         ; 00483782
    MOV dword ptr [ECX + 0x8],EAX       ; 00483784 | g_EdgeInterpolationArray[0].base.x_current
    MOV EAX,dword ptr [ESP + 0x50]      ; 00483787
    MOV EDX,dword ptr [ESI + 0x18]      ; 0048378b | g_RenderVertexBuffer[0].u
    MOV EAX,dword ptr [EAX + 0x18]      ; 0048378e | g_RenderVertexBuffer[0].u
    SUB EAX,EDX                         ; 00483791
    MOV EDX,EAX                         ; 00483793
    MOV EAX,EBX                         ; 00483795
    IMUL EDX                            ; 00483797
    SHRD EAX,EDX,0x10                   ; 00483799
    MOV EDX,EAX                         ; 0048379d
    MOV dword ptr [ECX + 0x1c],EAX      ; 0048379f | g_EdgeInterpolationArray[0].base.u_gradient
    MOV EAX,EDI                         ; 004837a2
    IMUL EDX                            ; 004837a4
    SHRD EAX,EDX,0x10                   ; 004837a6
    MOV dword ptr [ESP + 0x40],EAX      ; 004837aa
    MOV EDX,dword ptr [ESP + 0x40]      ; 004837ae
    MOV EAX,dword ptr [ESI + 0x18]      ; 004837b2 | g_RenderVertexBuffer[0].u
    ADD EAX,EDX                         ; 004837b5
    MOV dword ptr [ECX + 0x18],EAX      ; 004837b7 | g_EdgeInterpolationArray[0].base.u_current
    MOV EAX,dword ptr [ESP + 0x50]      ; 004837ba
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004837be | g_RenderVertexBuffer[0].v
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004837c1 | g_RenderVertexBuffer[0].v
    SUB EAX,EDX                         ; 004837c4
    MOV EDX,EAX                         ; 004837c6
    MOV EAX,EBX                         ; 004837c8
    IMUL EDX                            ; 004837ca
    SHRD EAX,EDX,0x10                   ; 004837cc
    MOV EDX,EAX                         ; 004837d0
    MOV dword ptr [ECX + 0x24],EAX      ; 004837d2 | g_EdgeInterpolationArray[0].base.v_gradient
    MOV EAX,EDI                         ; 004837d5
    IMUL EDX                            ; 004837d7
    SHRD EAX,EDX,0x10                   ; 004837d9
    MOV dword ptr [ESP + 0x40],EAX      ; 004837dd
    MOV EDX,dword ptr [ESP + 0x40]      ; 004837e1
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004837e5 | g_RenderVertexBuffer[0].v
    ADD EAX,EDX                         ; 004837e8
    MOV dword ptr [ECX + 0x20],EAX      ; 004837ea | g_EdgeInterpolationArray[0].base.v_current
    MOV EAX,dword ptr [ESP + 0x50]      ; 004837ed
    MOV EDX,dword ptr [ESI + 0x20]      ; 004837f1 | g_RenderVertexBuffer[0].r
    MOV EAX,dword ptr [EAX + 0x20]      ; 004837f4 | g_RenderVertexBuffer[0].r
    SUB EAX,EDX                         ; 004837f7
    MOV EDX,EAX                         ; 004837f9
    MOV EAX,EBX                         ; 004837fb
    IMUL EDX                            ; 004837fd
    SHRD EAX,EDX,0x10                   ; 004837ff
    MOV EDX,EAX                         ; 00483803
    MOV dword ptr [ECX + 0x14],EAX      ; 00483805 | g_EdgeInterpolationArray[0].base.red_gradient
    MOV EAX,EDI                         ; 00483808
    IMUL EDX                            ; 0048380a
    SHRD EAX,EDX,0x10                   ; 0048380c
    MOV dword ptr [ESP + 0x40],EAX      ; 00483810
    MOV EDX,dword ptr [ESP + 0x40]      ; 00483814
    MOV EAX,dword ptr [ESI + 0x20]      ; 00483818 | g_RenderVertexBuffer[0].r
    ADD EAX,EDX                         ; 0048381b
    MOV dword ptr [ECX + 0x10],EAX      ; 0048381d | g_EdgeInterpolationArray[0].base.red_current
    MOV EAX,dword ptr [ESP + 0x50]      ; 00483820
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00483824 | g_RenderVertexBuffer[0].a
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00483827 | g_RenderVertexBuffer[0].a
    SUB EAX,EDX                         ; 0048382a
    MOV EDX,EAX                         ; 0048382c
    MOV EAX,EBX                         ; 0048382e
    IMUL EDX                            ; 00483830
    SHRD EAX,EDX,0x10                   ; 00483832
    MOV EDX,EAX                         ; 00483836
    MOV dword ptr [ECX + 0x34],EAX      ; 00483838 | g_EdgeInterpolationArray[0].base.alpha_gradient
    MOV EAX,EDI                         ; 0048383b
    IMUL EDX                            ; 0048383d
    SHRD EAX,EDX,0x10                   ; 0048383f
    MOV dword ptr [ESP + 0x40],EAX      ; 00483843
    MOV EDX,dword ptr [ESP + 0x40]      ; 00483847
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0048384b | g_RenderVertexBuffer[0].a
    ADD EAX,EDX                         ; 0048384e
    MOV dword ptr [ECX + 0x30],EAX      ; 00483850 | g_EdgeInterpolationArray[0].base.alpha_current
    CMP dword ptr [0x00772a74],0x0      ; 00483853 | g_TexturesDisabled
    JZ 0x0048391e                       ; 0048385a
        ;   XREF to: 0048391e (CONDITIONAL_JUMP)  ; LAB_0048391e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00483860
    MOV EDX,dword ptr [ESI + 0x8]       ; 00483864 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    MOV EAX,dword ptr [EAX + 0x8]       ; 00483867 | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    SUB EAX,EDX                         ; 0048386a
    MOV EDX,EAX                         ; 0048386c
    MOV EAX,EBX                         ; 0048386e
    IMUL EDX                            ; 00483870
    SHRD EAX,EDX,0x10                   ; 00483872
    MOV EDX,EAX                         ; 00483876
    MOV dword ptr [ECX + 0x2c],EAX      ; 00483878 | g_EdgeInterpolationArray[0].base.depth_gradient
    MOV EAX,EDI                         ; 0048387b
    IMUL EDX                            ; 0048387d
    SHRD EAX,EDX,0x10                   ; 0048387f
    MOV dword ptr [ESP + 0x40],EAX      ; 00483883
    MOV EDX,dword ptr [ESP + 0x40]      ; 00483887
    MOV EAX,dword ptr [ESI + 0x8]       ; 0048388b | g_RenderVertexBuffer[0].projected_vertex.transformed_z
    ADD EAX,EDX                         ; 0048388e
        ;   Label: LAB_0048388e
    MOV dword ptr [ECX + 0x28],EAX      ; 00483890 | g_EdgeInterpolationArray[0].base.depth_current
    TEST byte ptr [0x02d052a1],0x2      ; 00483893 | g_RenderStateFlags+1
    JZ 0x004838fc                       ; 0048389a
        ;   XREF to: 004838fc (CONDITIONAL_JUMP)  ; LAB_004838fc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048389c
    MOV EDX,dword ptr [ESI + 0x24]      ; 004838a0 | g_RenderVertexBuffer[0].g
    MOV EAX,dword ptr [EAX + 0x24]      ; 004838a3 | g_RenderVertexBuffer[0].g
    SUB EAX,EDX                         ; 004838a6
    MOV EDX,EAX                         ; 004838a8
    MOV EAX,EBX                         ; 004838aa
    IMUL EDX                            ; 004838ac
    SHRD EAX,EDX,0x10                   ; 004838ae
    MOV EDX,EAX                         ; 004838b2
    MOV dword ptr [ECX + 0x3c],EAX      ; 004838b4 | g_EdgeInterpolationArray[0].green_gradient
    MOV EAX,EDI                         ; 004838b7
    IMUL EDX                            ; 004838b9
    SHRD EAX,EDX,0x10                   ; 004838bb
    MOV dword ptr [ESP + 0x40],EAX      ; 004838bf
    MOV EDX,dword ptr [ESP + 0x40]      ; 004838c3
    MOV EAX,dword ptr [ESI + 0x24]      ; 004838c7 | g_RenderVertexBuffer[0].g
    ADD EAX,EDX                         ; 004838ca
    MOV dword ptr [ECX + 0x38],EAX      ; 004838cc | g_EdgeInterpolationArray[0].green_current
    MOV EAX,dword ptr [ESP + 0x50]      ; 004838cf
    MOV EDX,dword ptr [ESI + 0x28]      ; 004838d3 | g_RenderVertexBuffer[0].b
    MOV EAX,dword ptr [EAX + 0x28]      ; 004838d6 | g_RenderVertexBuffer[0].b
    SUB EAX,EDX                         ; 004838d9
    MOV EDX,EAX                         ; 004838db
    MOV EAX,EBX                         ; 004838dd
    IMUL EDX                            ; 004838df
    SHRD EAX,EDX,0x10                   ; 004838e1
    MOV EDX,EAX                         ; 004838e5
    MOV dword ptr [ECX + 0x44],EAX      ; 004838e7 | g_EdgeInterpolationArray[0].blue_gradient
    MOV EAX,EDI                         ; 004838ea
    IMUL EDX                            ; 004838ec
    SHRD EAX,EDX,0x10                   ; 004838ee
    MOV EDX,EAX                         ; 004838f2
    MOV EAX,dword ptr [ESI + 0x28]      ; 004838f4 | g_RenderVertexBuffer[0].b
    ADD EAX,EDX                         ; 004838f7
    MOV dword ptr [ECX + 0x40],EAX      ; 004838f9 | g_EdgeInterpolationArray[0].blue_current
    MOV EBP,dword ptr [0x02c6cb70]      ; 004838fc | g_RenderTriangleEdgeCount
        ;   Label: LAB_004838fc
    INC EBP                             ; 00483902
    JMP 0x004834de                      ; 00483903
        ;   XREF to: 004834de (UNCONDITIONAL_JUMP)  ; LAB_004834de
    MOV EAX,0xffffffff                  ; 00483908
        ;   Label: LAB_00483908
    XOR EDX,EDX                         ; 0048390d
    DIV EBX                             ; 0048390f
    MOV dword ptr [0x02c6cb70],EBP      ; 00483911 | g_RenderTriangleEdgeCount
    MOV EBX,EAX                         ; 00483917
    JMP 0x00483747                      ; 00483919
        ;   XREF to: 00483747 (UNCONDITIONAL_JUMP)  ; LAB_00483747
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048391e
        ;   Label: LAB_0048391e
    MOV EDX,dword ptr [ESI + 0xc]       ; 00483922 | g_RenderVertexBuffer[0].projected_vertex.inv_z
    MOV EAX,dword ptr [EAX + 0xc]       ; 00483925 | g_RenderVertexBuffer[0].projected_vertex.inv_z
    SUB EAX,EDX                         ; 00483928
    MOV EDX,EAX                         ; 0048392a
    MOV EAX,EBX                         ; 0048392c
    IMUL EDX                            ; 0048392e
    SHRD EAX,EDX,0x10                   ; 00483930
    MOV EDX,EAX                         ; 00483934
    MOV dword ptr [ECX + 0x2c],EAX      ; 00483936 | g_EdgeInterpolationArray[0].base.depth_gradient
    MOV EAX,EDI                         ; 00483939
    IMUL EDX                            ; 0048393b
    SHRD EAX,EDX,0x10                   ; 0048393d
    MOV dword ptr [ESP + 0x40],EAX      ; 00483941
    MOV EDX,dword ptr [ESP + 0x40]      ; 00483945
    MOV EAX,dword ptr [ESI + 0xc]       ; 00483949 | g_RenderVertexBuffer[0].projected_vertex.inv_z
    JMP 0x0048388e                      ; 0048394c
        ;   XREF to: 0048388e (UNCONDITIONAL_JUMP)  ; LAB_0048388e
    INC EAX                             ; 00483951
        ;   Label: LAB_00483951
    ADD EBX,0x48                        ; 00483952
    CMP EAX,EBP                         ; 00483955
    JL 0x00483514                       ; 00483957
        ;   XREF to: 00483514 (CONDITIONAL_JUMP)  ; LAB_00483514
    XOR EBX,EBX                         ; 0048395d
        ;   Label: LAB_0048395d
    JMP 0x00483524                      ; 0048395f
        ;   XREF to: 00483524 (UNCONDITIONAL_JUMP)  ; LAB_00483524
    INC EDX                             ; 00483964
        ;   Label: LAB_00483964
    ADD EAX,0x48                        ; 00483965
    CMP EDX,EBP                         ; 00483968
    JL 0x0048354b                       ; 0048396a
        ;   XREF to: 0048354b (CONDITIONAL_JUMP)  ; LAB_0048354b
    XOR EAX,EAX                         ; 00483970
        ;   Label: LAB_00483970
    JMP 0x0048355b                      ; 00483972
        ;   XREF to: 0048355b (UNCONDITIONAL_JUMP)  ; LAB_0048355b
    INC EDX                             ; 00483977
        ;   Label: LAB_00483977
    ADD EAX,0x48                        ; 00483978
    CMP EDX,EBP                         ; 0048397b
    JL 0x004835a6                       ; 0048397d
        ;   XREF to: 004835a6 (CONDITIONAL_JUMP)  ; LAB_004835a6
    XOR EAX,EAX                         ; 00483983
        ;   Label: LAB_00483983
    JMP 0x004835b6                      ; 00483985
        ;   XREF to: 004835b6 (UNCONDITIONAL_JUMP)  ; LAB_004835b6
    INC EDX                             ; 0048398a
        ;   Label: LAB_0048398a
    ADD EAX,0x48                        ; 0048398b | g_EdgeInterpolationArray[1].base.y_min
    CMP EDX,EBP                         ; 0048398e
    JL 0x004835f6                       ; 00483990
        ;   XREF to: 004835f6 (CONDITIONAL_JUMP)  ; LAB_004835f6
    XOR EAX,EAX                         ; 00483996
        ;   Label: LAB_00483996
    JMP 0x00483606                      ; 00483998
        ;   XREF to: 00483606 (UNCONDITIONAL_JUMP)  ; LAB_00483606
    MOV EDX,dword ptr [ESP + 0x54]      ; 0048399d
        ;   Label: LAB_0048399d
    MOV EAX,dword ptr [ESP + 0x54]      ; 004839a1
    MOV ECX,dword ptr [EDX + 0x38]      ; 004839a5
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004839a8
    MOV EBX,dword ptr [EDX + 0x40]      ; 004839ab
    ADD ECX,EAX                         ; 004839ae
    MOV EAX,dword ptr [EDX + 0x44]      ; 004839b0
    MOV dword ptr [EDX + 0x38],ECX      ; 004839b3
    ADD EBX,EAX                         ; 004839b6
    MOV EAX,dword ptr [ESP + 0x58]      ; 004839b8
    MOV dword ptr [EDX + 0x40],EBX      ; 004839bc
    MOV EDX,dword ptr [ESP + 0x58]      ; 004839bf
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004839c3
    MOV ESI,dword ptr [EDX + 0x38]      ; 004839c6
    MOV EDI,dword ptr [EDX + 0x40]      ; 004839c9
    ADD ESI,EAX                         ; 004839cc
    MOV EAX,dword ptr [EDX + 0x44]      ; 004839ce
    MOV dword ptr [EDX + 0x38],ESI      ; 004839d1
    ADD EDI,EAX                         ; 004839d4
    MOV dword ptr [EDX + 0x40],EDI      ; 004839d6
    INC dword ptr [ESP + 0x4c]          ; 004839d9
    JMP 0x00483576                      ; 004839dd
        ;   XREF to: 00483576 (UNCONDITIONAL_JUMP)  ; LAB_00483576

