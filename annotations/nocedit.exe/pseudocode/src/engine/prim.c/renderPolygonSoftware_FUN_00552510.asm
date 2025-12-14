; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_prim.c_renderPolygonSoftware_FUN_00552510(SRenderVertex * vertices, int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_004371b0 at 004371ef
;
; Referenced Globals:
;   void* switchdataD_005524e8 = 00552620
;   uint g_VertexProcessingEnabled = 0x1
;   int g_MaxViewportScanline = 0x4b0
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_UseExternalRenderer
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;   int g_SoftwareEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeBuffer
;   undefined4 DAT_030e5230
;   ... and 15 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_findEdgeInBuffer_FUN_00551f70
;   engine_prim.c_normalizeTextureCoords_FUN_00552020
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   wincore_windll.cpp_drawPolygon_FUN_005b75e0
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552510
        ;   Label: engine_prim.c_renderPolygonSoftware_FUN_00552510
    PUSH ESI                            ; 00552511
    PUSH EDI                            ; 00552512
    PUSH EBP                            ; 00552513
    SUB ESP,0x14                        ; 00552514
    CMP dword ptr [0x006793bc],0x0      ; 00552517 | g_VertexProcessingEnabled
    JZ 0x00552587                       ; 0055251e
        ;   XREF to: 00552587 (CONDITIONAL_JUMP)  ; LAB_00552587
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00552520
    MOV ECX,dword ptr [ESP + 0x28]      ; 00552524
    XOR ESI,ESI                         ; 00552528
    TEST EBX,EBX                        ; 0055252a
    JLE 0x00552587                      ; 0055252c
        ;   XREF to: 00552587 (CONDITIONAL_JUMP)  ; LAB_00552587
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0055252e
    TEST byte ptr [ECX + 0x13],0x80     ; 00552532
        ;   Label: LAB_00552532
    JZ 0x0055257f                       ; 00552536
        ;   XREF to: 0055257f (CONDITIONAL_JUMP)  ; LAB_0055257f
    MOV EAX,0x7fffffff                  ; 00552538
    MOV EDX,EAX                         ; 0055253d
    MOV EBX,dword ptr [ECX + 0x8]       ; 0055253f
    SAR EDX,0x1f                        ; 00552542
    IDIV EBX                            ; 00552545
    MOV dword ptr [ECX + 0xc],EAX       ; 00552547
    MOV EDX,dword ptr [0x02d02548]      ; 0055254a | g_ViewportCenterXFixed
    MOV EBX,dword ptr [ECX + 0x8]       ; 00552550
    MOV EAX,dword ptr [ECX]             ; 00552553
    IMUL EDX                            ; 00552555
    IDIV EBX                            ; 00552557
    MOV EDX,dword ptr [0x02d02550]      ; 00552559 | g_ViewportRightFixed
    ADD EAX,EDX                         ; 0055255f
    MOV EBX,dword ptr [ECX + 0x8]       ; 00552561
    MOV dword ptr [ECX + 0x10],EAX      ; 00552564
    MOV EDX,dword ptr [0x02d0254c]      ; 00552567 | g_ViewportCenterYFixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 0055256d
    IMUL EDX                            ; 00552570
    IDIV EBX                            ; 00552572
    MOV EDX,dword ptr [0x02d02554]      ; 00552574 | g_ViewportBottomFixed
    ADD EAX,EDX                         ; 0055257a
    MOV dword ptr [ECX + 0x14],EAX      ; 0055257c
    INC ESI                             ; 0055257f
        ;   Label: LAB_0055257f
    ADD ECX,0x30                        ; 00552580
    CMP ESI,EDI                         ; 00552583
    JL 0x00552532                       ; 00552585
        ;   XREF to: 00552532 (CONDITIONAL_JUMP)  ; LAB_00552532
    CMP dword ptr [0x00772a7c],0x0      ; 00552587 | g_CullingMode
        ;   Label: LAB_00552587
    JZ 0x005525ec                       ; 0055258e
        ;   XREF to: 005525ec (CONDITIONAL_JUMP)  ; LAB_005525ec
    MOV EDI,dword ptr [ESP + 0x28]      ; 00552590
    MOV EAX,dword ptr [ESP + 0x28]      ; 00552594
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00552598
    ADD EDI,0x30                        ; 0055259c
    ADD EAX,0x60                        ; 0055259f
    CMP EDX,0x3                         ; 005525a2
    JLE 0x005526b9                      ; 005525a5
        ;   XREF to: 005526b9 (CONDITIONAL_JUMP)  ; LAB_005526b9
    SUB EDX,0x2                         ; 005525ab
    MOV ESI,EAX                         ; 005525ae
    XOR EBX,EBX                         ; 005525b0
    XOR EBP,EBP                         ; 005525b2
    MOV dword ptr [ESP + 0x4],EDX       ; 005525b4
    TEST EDX,EDX                        ; 005525b8
    JLE 0x005525e2                      ; 005525ba
        ;   XREF to: 005525e2 (CONDITIONAL_JUMP)  ; LAB_005525e2
    PUSH ESI                            ; 005525bc
        ;   Label: LAB_005525bc
    PUSH EDI                            ; 005525bd
    MOV EAX,dword ptr [ESP + 0x30]      ; 005525be
    PUSH EAX                            ; 005525c2
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 005525c3
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 005525c8
    TEST EAX,EAX                        ; 005525cb
    JZ 0x005526b3                       ; 005525cd
        ;   XREF to: 005526b3 (CONDITIONAL_JUMP)  ; LAB_005526b3
    MOV EDX,dword ptr [ESP + 0x4]       ; 005525d3
        ;   Label: LAB_005525d3
    ADD EDI,0x30                        ; 005525d7
    INC EBX                             ; 005525da
    ADD ESI,0x30                        ; 005525db
    CMP EBX,EDX                         ; 005525de
    JL 0x005525bc                       ; 005525e0
        ;   XREF to: 005525bc (CONDITIONAL_JUMP)  ; LAB_005525bc
    CMP EBP,dword ptr [ESP + 0x4]       ; 005525e2
        ;   Label: LAB_005525e2
    JZ 0x005526ab                       ; 005525e6
        ;   XREF to: 005526ab (CONDITIONAL_JUMP)  ; LAB_005526ab
    CMP dword ptr [0x02d03e94],0x0      ; 005525ec | g_UseExternalRenderer
        ;   Label: LAB_005525ec
    JZ 0x00552602                       ; 005525f3
        ;   XREF to: 00552602 (CONDITIONAL_JUMP)  ; LAB_00552602
    CMP dword ptr [0x00772a74],0x0      ; 005525f5 | g_TexturesDisabled
    JZ 0x005526d8                       ; 005525fc
        ;   XREF to: 005526d8 (CONDITIONAL_JUMP)  ; LAB_005526d8
    MOV EBX,dword ptr [0x030e56b8]      ; 00552602 | g_RenderedTriangleCount
        ;   Label: LAB_00552602
    INC EBX                             ; 00552608
    MOV EAX,[0x02d052a4]                ; 00552609 | g_RenderStateFlag2
    MOV dword ptr [0x030e56b8],EBX      ; 0055260e | g_RenderedTriangleCount
    CMP EAX,0x6                         ; 00552614
    JA 0x00552620                       ; 00552617
        ;   XREF to: 00552620 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x5524e8]  ; 00552619 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 00552620
        ;   Label: caseD_4
    XOR EDX,EDX                         ; 00552625
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00552627
    MOV dword ptr [0x030e56b0],EDX      ; 0055262b | g_SoftwareMaxScanline
    MOV dword ptr [0x030e5228],EDX      ; 00552631 | g_SoftwareEdgeCount
    MOV dword ptr [ESP + 0x8],EDX       ; 00552637
    MOV [0x030e56ac],EAX                ; 0055263b | g_SoftwareMinScanline
    TEST ESI,ESI                        ; 00552640
    JLE 0x00552690                      ; 00552642
        ;   XREF to: 00552690 (CONDITIONAL_JUMP)  ; LAB_00552690
    MOV EAX,dword ptr [ESP + 0x8]       ; 00552644
        ;   Label: LAB_00552644
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00552648
    INC EAX                             ; 0055264c
    CMP EAX,ECX                         ; 0055264d
    JL 0x00552653                       ; 0055264f
        ;   XREF to: 00552653 (CONDITIONAL_JUMP)  ; LAB_00552653
    XOR EAX,EAX                         ; 00552651
    IMUL EAX,EAX,0x30                   ; 00552653
        ;   Label: LAB_00552653
    MOV EBP,dword ptr [ESP + 0x28]      ; 00552656
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055265a
    ADD EBP,EAX                         ; 0055265e
    IMUL EAX,EBX,0x30                   ; 00552660
    ADD EAX,dword ptr [ESP + 0x28]      ; 00552663
    MOV EDI,EBP                         ; 00552667
    MOV ECX,dword ptr [EAX + 0x14]      ; 00552669
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055266c
    SAR ECX,0x10                        ; 0055266f
    SAR ESI,0x10                        ; 00552672
    MOV EBX,EAX                         ; 00552675
    CMP ECX,ESI                         ; 00552677
    JNZ 0x00552781                      ; 00552679
        ;   XREF to: 00552781 (CONDITIONAL_JUMP)  ; LAB_00552781
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055267f
        ;   Label: LAB_0055267f
    INC ECX                             ; 00552683
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00552684
    MOV dword ptr [ESP + 0x8],ECX       ; 00552688
    CMP ECX,EBX                         ; 0055268c
    JL 0x00552644                       ; 0055268e
        ;   XREF to: 00552644 (CONDITIONAL_JUMP)  ; LAB_00552644
    PUSH 0x0                            ; 00552690
        ;   Label: LAB_00552690
    MOV ESI,dword ptr [0x030e56ac]      ; 00552692 | g_SoftwareMinScanline
    PUSH ESI                            ; 00552698
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552699
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0055269e
    MOV EBP,EAX                         ; 005526a1
    TEST EAX,EAX                        ; 005526a3
    JNZ 0x005528f8                      ; 005526a5
        ;   XREF to: 005528f8 (CONDITIONAL_JUMP)  ; LAB_005528f8
    ADD ESP,0x14                        ; 005526ab
        ;   Label: LAB_005526ab
    POP EBP                             ; 005526ae
    POP EDI                             ; 005526af
    POP ESI                             ; 005526b0
    POP EBX                             ; 005526b1
    RET                                 ; 005526b2
    INC EBP                             ; 005526b3
        ;   Label: LAB_005526b3
    JMP 0x005525d3                      ; 005526b4
        ;   XREF to: 005525d3 (UNCONDITIONAL_JUMP)  ; LAB_005525d3
    PUSH EAX                            ; 005526b9
        ;   Label: LAB_005526b9
    PUSH EDI                            ; 005526ba
    MOV ECX,dword ptr [ESP + 0x30]      ; 005526bb
    PUSH ECX                            ; 005526bf
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 005526c0
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 005526c5
    TEST EAX,EAX                        ; 005526c8
    JNZ 0x005525ec                      ; 005526ca
        ;   XREF to: 005525ec (CONDITIONAL_JUMP)  ; LAB_005525ec
    ADD ESP,0x14                        ; 005526d0
    POP EBP                             ; 005526d3
    POP EDI                             ; 005526d4
    POP ESI                             ; 005526d5
    POP EBX                             ; 005526d6
    RET                                 ; 005526d7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005526d8
        ;   Label: LAB_005526d8
    MOV EDI,dword ptr [0x030e56b8]      ; 005526dc | g_RenderedTriangleCount
    MOV EBP,dword ptr [0x02d052a0]      ; 005526e2 | g_RenderStateFlags
    SUB EAX,0x2                         ; 005526e8
    PUSH EBP                            ; 005526eb
    ADD EDI,EAX                         ; 005526ec
    MOV EAX,dword ptr [ESP + 0x30]      ; 005526ee
    PUSH EAX                            ; 005526f2
    MOV EDX,dword ptr [ESP + 0x30]      ; 005526f3
    PUSH EDX                            ; 005526f7
    MOV dword ptr [0x030e56b8],EDI      ; 005526f8 | g_RenderedTriangleCount
    CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0 ; 005526fe
        ;   XREF to: 005b75e0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00552703
    ADD ESP,0x14                        ; 00552706
    POP EBP                             ; 00552709
    POP EDI                             ; 0055270a
    POP ESI                             ; 0055270b
    POP EBX                             ; 0055270c
    RET                                 ; 0055270d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0055270e
        ;   Label: caseD_1
    PUSH EDI                            ; 00552712
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00552713
    PUSH EBP                            ; 00552717
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 00552718
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0055271d
    JMP 0x00552620                      ; 00552720
        ;   XREF to: 00552620 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00552725
        ;   Label: caseD_2
    PUSH EBX                            ; 00552729
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0055272a
    PUSH ESI                            ; 0055272e
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 0055272f
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00552734
    JMP 0x00552620                      ; 00552737
        ;   XREF to: 00552620 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0055273c
        ;   Label: caseD_3
    PUSH EDX                            ; 00552740
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00552741
    PUSH ECX                            ; 00552745
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0 ; 00552746
        ;   XREF to: 005520a0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0055274b
    JMP 0x00552620                      ; 0055274e
        ;   XREF to: 00552620 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00552753
        ;   Label: caseD_5
    PUSH EBP                            ; 00552757
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00552758
    PUSH EAX                            ; 0055275c
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 0055275d
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00552762
    JMP 0x00552620                      ; 00552765
        ;   XREF to: 00552620 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0055276a
        ;   Label: caseD_6
    PUSH ESI                            ; 0055276e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0055276f
    PUSH EDI                            ; 00552773
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 00552774
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00552779
    JMP 0x00552620                      ; 0055277c
        ;   XREF to: 00552620 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [EAX + 0x14]      ; 00552781
        ;   Label: LAB_00552781
    CMP EDX,dword ptr [EBP + 0x14]      ; 00552784
    JLE 0x00552793                      ; 00552787
        ;   XREF to: 00552793 (CONDITIONAL_JUMP)  ; LAB_00552793
    MOV EDI,EAX                         ; 00552789
    MOV EBX,EBP                         ; 0055278b
    MOV EAX,ECX                         ; 0055278d
    MOV ECX,ESI                         ; 0055278f
    MOV ESI,EAX                         ; 00552791
    IMUL EBP,dword ptr [0x030e5228],0x48 ; 00552793 | g_SoftwareEdgeCount
        ;   Label: LAB_00552793
    ADD EBP,0x30e522c                   ; 0055279a | g_SoftwareEdgeBuffer
    MOV dword ptr [EBP],ECX             ; 005527a0 | g_SoftwareEdgeBuffer
    MOV EDX,dword ptr [0x030e56ac]      ; 005527a3 | g_SoftwareMinScanline
    MOV dword ptr [EBP + 0x4],ESI       ; 005527a9 | DAT_030e5230
    CMP ECX,EDX                         ; 005527ac
    JGE 0x005527b6                      ; 005527ae
        ;   XREF to: 005527b6 (CONDITIONAL_JUMP)  ; LAB_005527b6
    MOV dword ptr [0x030e56ac],ECX      ; 005527b0 | g_SoftwareMinScanline
    CMP ESI,dword ptr [0x030e56b0]      ; 005527b6 | g_SoftwareMaxScanline
        ;   Label: LAB_005527b6
    JLE 0x005527c4                      ; 005527bc
        ;   XREF to: 005527c4 (CONDITIONAL_JUMP)  ; LAB_005527c4
    MOV dword ptr [0x030e56b0],ESI      ; 005527be | g_SoftwareMaxScanline
    MOV ESI,dword ptr [EBX + 0x14]      ; 005527c4
        ;   Label: LAB_005527c4
    MOV ECX,dword ptr [EDI + 0x14]      ; 005527c7
    SUB ECX,ESI                         ; 005527ca
    CMP ECX,0x10000                     ; 005527cc
    JNC 0x005528e8                      ; 005527d2
        ;   XREF to: 005528e8 (CONDITIONAL_JUMP)  ; LAB_005528e8
    XOR ECX,ECX                         ; 005527d8
    MOV EAX,dword ptr [EDI + 0x10]      ; 005527da
        ;   Label: LAB_005527da
    MOV EDX,dword ptr [EBX + 0x10]      ; 005527dd
    MOV ESI,dword ptr [EBX + 0x14]      ; 005527e0
    SUB EAX,EDX                         ; 005527e3
    AND ESI,0xffff                      ; 005527e5
    MOV EDX,EAX                         ; 005527eb
    MOV EAX,ECX                         ; 005527ed
    XOR SI,0xffff                       ; 005527ef
    IMUL EDX                            ; 005527f3
    SHRD EAX,EDX,0x10                   ; 005527f5
    MOV EDX,EAX                         ; 005527f9
    MOV dword ptr [EBP + 0xc],EAX       ; 005527fb | DAT_030e5238
    MOV EAX,ESI                         ; 005527fe
    IMUL EDX                            ; 00552800
    SHRD EAX,EDX,0x10                   ; 00552802
    MOV dword ptr [ESP],EAX             ; 00552806
    MOV EDX,dword ptr [ESP]             ; 00552809
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055280c
    ADD EAX,EDX                         ; 0055280f
    MOV dword ptr [EBP + 0x8],EAX       ; 00552811 | DAT_030e5234
    MOV EAX,dword ptr [EDI + 0x18]      ; 00552814
    MOV EDX,dword ptr [EBX + 0x18]      ; 00552817
    SUB EAX,EDX                         ; 0055281a
    MOV EDX,EAX                         ; 0055281c
    MOV EAX,ECX                         ; 0055281e
    IMUL EDX                            ; 00552820
    SHRD EAX,EDX,0x10                   ; 00552822
    MOV EDX,EAX                         ; 00552826
    MOV dword ptr [EBP + 0x1c],EAX      ; 00552828 | DAT_030e5248
    MOV EAX,ESI                         ; 0055282b
    IMUL EDX                            ; 0055282d
    SHRD EAX,EDX,0x10                   ; 0055282f
    MOV dword ptr [ESP],EAX             ; 00552833
    MOV EDX,dword ptr [ESP]             ; 00552836
    MOV EAX,dword ptr [EBX + 0x18]      ; 00552839
    ADD EAX,EDX                         ; 0055283c
    MOV dword ptr [EBP + 0x18],EAX      ; 0055283e | DAT_030e5244
    MOV EAX,dword ptr [EDI + 0x1c]      ; 00552841
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00552844
    SUB EAX,EDX                         ; 00552847
    MOV EDX,EAX                         ; 00552849
    MOV EAX,ECX                         ; 0055284b
    IMUL EDX                            ; 0055284d
    SHRD EAX,EDX,0x10                   ; 0055284f
    MOV EDX,EAX                         ; 00552853
    MOV dword ptr [EBP + 0x24],EAX      ; 00552855 | DAT_030e5250
    MOV EAX,ESI                         ; 00552858
    IMUL EDX                            ; 0055285a
    SHRD EAX,EDX,0x10                   ; 0055285c
    MOV dword ptr [ESP],EAX             ; 00552860
    MOV EDX,dword ptr [ESP]             ; 00552863
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00552866
    ADD EAX,EDX                         ; 00552869
    MOV dword ptr [EBP + 0x20],EAX      ; 0055286b | DAT_030e524c
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055286e
    MOV EDX,dword ptr [EBX + 0x20]      ; 00552871
    SUB EAX,EDX                         ; 00552874
    MOV EDX,EAX                         ; 00552876
    MOV EAX,ECX                         ; 00552878
    IMUL EDX                            ; 0055287a
    SHRD EAX,EDX,0x10                   ; 0055287c
    MOV EDX,EAX                         ; 00552880
    MOV dword ptr [EBP + 0x14],EAX      ; 00552882 | DAT_030e5240
    MOV EAX,ESI                         ; 00552885
    IMUL EDX                            ; 00552887
    SHRD EAX,EDX,0x10                   ; 00552889
    MOV EDX,dword ptr [EBX + 0x20]      ; 0055288d
    ADD EDX,EAX                         ; 00552890
    MOV dword ptr [EBP + 0x10],EDX      ; 00552892 | DAT_030e523c
    MOV EDX,dword ptr [EDI + 0x2c]      ; 00552895
    SUB EDX,dword ptr [EBX + 0x2c]      ; 00552898
    MOV EAX,ECX                         ; 0055289b
    IMUL EDX                            ; 0055289d
    SHRD EAX,EDX,0x10                   ; 0055289f
    MOV EDX,EAX                         ; 005528a3
    MOV dword ptr [EBP + 0x34],EAX      ; 005528a5 | DAT_030e5260
    MOV EAX,ESI                         ; 005528a8
    IMUL EDX                            ; 005528aa
    SHRD EAX,EDX,0x10                   ; 005528ac
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005528b0
    ADD EDX,EAX                         ; 005528b3
    MOV dword ptr [EBP + 0x30],EDX      ; 005528b5 | DAT_030e525c
    MOV EDX,dword ptr [EDI + 0x8]       ; 005528b8
    MOV EDI,dword ptr [EBX + 0x8]       ; 005528bb
    MOV EAX,ECX                         ; 005528be
    SUB EDX,EDI                         ; 005528c0
    IMUL EDX                            ; 005528c2
    SHRD EAX,EDX,0x10                   ; 005528c4
    MOV EDX,EAX                         ; 005528c8
    MOV dword ptr [EBP + 0x2c],EAX      ; 005528ca | DAT_030e5258
    MOV EAX,ESI                         ; 005528cd
    IMUL EDX                            ; 005528cf
    SHRD EAX,EDX,0x10                   ; 005528d1
    MOV EDX,dword ptr [EBX + 0x8]       ; 005528d5
    ADD EDX,EAX                         ; 005528d8
    MOV dword ptr [EBP + 0x28],EDX      ; 005528da | DAT_030e5254
    INC dword ptr [0x030e5228]          ; 005528dd | g_SoftwareEdgeCount
    JMP 0x0055267f                      ; 005528e3
        ;   XREF to: 0055267f (UNCONDITIONAL_JUMP)  ; LAB_0055267f
    MOV EAX,0xffffffff                  ; 005528e8
        ;   Label: LAB_005528e8
    XOR EDX,EDX                         ; 005528ed
    DIV ECX                             ; 005528ef
    MOV ECX,EAX                         ; 005528f1
    JMP 0x005527da                      ; 005528f3
        ;   XREF to: 005527da (UNCONDITIONAL_JUMP)  ; LAB_005527da
    PUSH EAX                            ; 005528f8
        ;   Label: LAB_005528f8
    MOV EDI,dword ptr [0x030e56ac]      ; 005528f9 | g_SoftwareMinScanline
    PUSH EDI                            ; 005528ff
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552900
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552905
    MOV dword ptr [ESP + 0x10],EAX      ; 00552908
    TEST EAX,EAX                        ; 0055290c
    JZ 0x005526ab                       ; 0055290e
        ;   XREF to: 005526ab (CONDITIONAL_JUMP)  ; LAB_005526ab
    MOV EAX,[0x030e56ac]                ; 00552914 | g_SoftwareMinScanline
    MOV EDX,dword ptr [0x00680cf4]      ; 00552919 | g_MaxViewportScanline
    MOV dword ptr [ESP + 0xc],EAX       ; 0055291f
    CMP EAX,EDX                         ; 00552923
    JGE 0x005526ab                      ; 00552925
        ;   XREF to: 005526ab (CONDITIONAL_JUMP)  ; LAB_005526ab
        ;   Label: LAB_00552925
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055292b
    CMP EAX,dword ptr [EBP + 0x4]       ; 0055292f
    JGE 0x00552a0d                      ; 00552932
        ;   XREF to: 00552a0d (CONDITIONAL_JUMP)  ; LAB_00552a0d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00552938
        ;   Label: LAB_00552938
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055293c
    CMP EAX,dword ptr [EDX + 0x4]       ; 00552940
    JL 0x00552961                       ; 00552943
        ;   XREF to: 00552961 (CONDITIONAL_JUMP)  ; LAB_00552961
    PUSH EBP                            ; 00552945
    PUSH EAX                            ; 00552946
    MOV dword ptr [EDX],0xffffffff      ; 00552947
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 0055294d
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552952
    MOV dword ptr [ESP + 0x10],EAX      ; 00552955
    TEST EAX,EAX                        ; 00552959
    JZ 0x005526ab                       ; 0055295b
        ;   XREF to: 005526ab (CONDITIONAL_JUMP)  ; LAB_005526ab
    MOV EDI,dword ptr [ESP + 0x10]      ; 00552961
        ;   Label: LAB_00552961
    MOV EBX,dword ptr [ESP + 0xc]       ; 00552965
    MOV ESI,EBP                         ; 00552969
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 0055296b
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderScanline_FUN_005b5710(void * left_data, void * right_data, int scanline_y)
    MOV EAX,dword ptr [EBP + 0xc]       ; 00552970
    ADD dword ptr [EBP + 0x8],EAX       ; 00552973
    MOV ECX,dword ptr [EBP + 0x18]      ; 00552976
    MOV EBX,dword ptr [EBP + 0x20]      ; 00552979
    MOV ESI,dword ptr [EBP + 0x10]      ; 0055297c
    MOV EDI,dword ptr [EBP + 0x28]      ; 0055297f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00552982
    MOV EDX,dword ptr [EBP + 0x30]      ; 00552985
    ADD ECX,EAX                         ; 00552988
    MOV EAX,dword ptr [EBP + 0x24]      ; 0055298a
    MOV dword ptr [EBP + 0x18],ECX      ; 0055298d
    ADD EBX,EAX                         ; 00552990
    MOV EAX,dword ptr [EBP + 0x14]      ; 00552992
    MOV dword ptr [EBP + 0x20],EBX      ; 00552995
    ADD ESI,EAX                         ; 00552998
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0055299a
    MOV dword ptr [EBP + 0x10],ESI      ; 0055299d
    ADD EDI,EAX                         ; 005529a0
    MOV EAX,dword ptr [EBP + 0x34]      ; 005529a2
    MOV dword ptr [EBP + 0x28],EDI      ; 005529a5
    ADD EDX,EAX                         ; 005529a8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005529aa
    MOV dword ptr [EBP + 0x30],EDX      ; 005529ae
    MOV EDX,dword ptr [ESP + 0x10]      ; 005529b1
    MOV EAX,dword ptr [EAX + 0xc]       ; 005529b5
    MOV ECX,dword ptr [EDX + 0x8]       ; 005529b8
    MOV EBX,dword ptr [EDX + 0x18]      ; 005529bb
    ADD ECX,EAX                         ; 005529be
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005529c0
    MOV dword ptr [EDX + 0x8],ECX       ; 005529c3
    ADD EBX,EAX                         ; 005529c6
    MOV dword ptr [EDX + 0x18],EBX      ; 005529c8
    MOV ESI,dword ptr [EDX + 0x20]      ; 005529cb
    MOV EDI,dword ptr [EDX + 0x10]      ; 005529ce
    MOV ECX,dword ptr [EDX + 0x28]      ; 005529d1
    MOV EAX,dword ptr [EDX + 0x24]      ; 005529d4
    MOV EBX,dword ptr [EDX + 0x30]      ; 005529d7
    ADD ESI,EAX                         ; 005529da
    MOV EAX,dword ptr [EDX + 0x14]      ; 005529dc
    MOV dword ptr [EDX + 0x20],ESI      ; 005529df
    MOV ESI,dword ptr [ESP + 0xc]       ; 005529e2
    ADD EDI,EAX                         ; 005529e6
    INC ESI                             ; 005529e8
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005529e9
    MOV dword ptr [EDX + 0x10],EDI      ; 005529ec
    MOV EDI,dword ptr [0x00680cf4]      ; 005529ef | g_MaxViewportScanline
    ADD ECX,EAX                         ; 005529f5
    MOV EAX,dword ptr [EDX + 0x34]      ; 005529f7
    MOV dword ptr [EDX + 0x28],ECX      ; 005529fa
    ADD EBX,EAX                         ; 005529fd
    MOV dword ptr [ESP + 0xc],ESI       ; 005529ff
    MOV dword ptr [EDX + 0x30],EBX      ; 00552a03
    CMP ESI,EDI                         ; 00552a06
    JMP 0x00552925                      ; 00552a08
        ;   XREF to: 00552925 (UNCONDITIONAL_JUMP)  ; LAB_00552925
    MOV ECX,dword ptr [ESP + 0x10]      ; 00552a0d
        ;   Label: LAB_00552a0d
    PUSH ECX                            ; 00552a11
    PUSH EAX                            ; 00552a12
    MOV dword ptr [EBP],0xffffffff      ; 00552a13
    CALL engine_prim.c_findEdgeInBuffer_FUN_00551f70 ; 00552a1a
        ;   XREF to: 00551f70 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_findEdgeInBuffer_FUN_00551f70(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 00552a1f
    MOV EBP,EAX                         ; 00552a22
    TEST EAX,EAX                        ; 00552a24
    JZ 0x005526ab                       ; 00552a26
        ;   XREF to: 005526ab (CONDITIONAL_JUMP)  ; LAB_005526ab
    JMP 0x00552938                      ; 00552a2c
        ;   XREF to: 00552938 (UNCONDITIONAL_JUMP)  ; LAB_00552938

