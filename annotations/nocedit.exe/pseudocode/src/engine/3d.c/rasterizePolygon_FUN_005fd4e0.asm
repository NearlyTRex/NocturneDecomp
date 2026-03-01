; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_rasterizePolygon_FUN_005fd4e0(SRenderVertex *vertex_buffer,int vertex_count,RenderScanlineFunc *scanline_renderer)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; int              Stack[0x8]:4   vertex_count
; RenderScanlineFunc * Stack[0xc]:4   scanline_renderer
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 at 0048c94b
;
; Referenced Globals:
;   void* switchdataD_005fd4b8 = 005fd557
;   int g_CullingMode
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_RenderStateFlag2
;   int g_RenderedTriangleCount
;   int g_RasterizerEdgeCount
;   SSoftwareEdge[16] g_RasterizerEdgeArray
;   undefined4 g_RasterizerEdgeArray[0].base.y_max
;   undefined4 g_RasterizerEdgeArray[0].base.x_current
;   undefined4 g_RasterizerEdgeArray[0].base.x_gradient
;   undefined4 g_RasterizerEdgeArray[0].base.z_current
;   undefined4 g_RasterizerEdgeArray[0].base.z_gradient
;   ... and 5 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_normalizeTextureCoords_FUN_00552020
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fd4e0
        ;   Label: engine_3d.c_rasterizePolygon_FUN_005fd4e0
    PUSH ESI                            ; 005fd4e1
    PUSH EDI                            ; 005fd4e2
    PUSH EBP                            ; 005fd4e3
    SUB ESP,0x10                        ; 005fd4e4
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd4e7 | g_RasterizerEdgeCount
    MOV EDX,dword ptr [ESP + 0x28]      ; 005fd4ed
    MOV ECX,dword ptr [ESP + 0x24]      ; 005fd4f1
    XOR EDI,EDI                         ; 005fd4f5
    TEST EDX,EDX                        ; 005fd4f7
    JLE 0x005fd51f                      ; 005fd4f9
        ;   XREF to: 005fd51f (CONDITIONAL_JUMP)  ; LAB_005fd51f
    MOV AH,byte ptr [ECX + 0x13]        ; 005fd4fb
        ;   Label: LAB_005fd4fb
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd4fe | g_RasterizerEdgeCount
    TEST AH,0x80                        ; 005fd504
    JNZ 0x005fd6e2                      ; 005fd507
        ;   XREF to: 005fd6e2 (CONDITIONAL_JUMP)  ; LAB_005fd6e2
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd50d | g_RasterizerEdgeCount
        ;   Label: LAB_005fd50d
    MOV EBX,dword ptr [ESP + 0x28]      ; 005fd513
    INC EDI                             ; 005fd517
    ADD ECX,0x30                        ; 005fd518
    CMP EDI,EBX                         ; 005fd51b
    JL 0x005fd4fb                       ; 005fd51d
        ;   XREF to: 005fd4fb (CONDITIONAL_JUMP)  ; LAB_005fd4fb
    MOV EDI,dword ptr [0x00772a7c]      ; 005fd51f | g_CullingMode
        ;   Label: LAB_005fd51f
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd525 | g_RasterizerEdgeCount
    TEST EDI,EDI                        ; 005fd52b
    JNZ 0x005fd72e                      ; 005fd52d
        ;   XREF to: 005fd72e (CONDITIONAL_JUMP)  ; LAB_005fd72e
    MOV EDX,dword ptr [0x030e56b8]      ; 005fd533 | g_RenderedTriangleCount
        ;   Label: LAB_005fd533
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd539 | g_RasterizerEdgeCount
    INC EDX                             ; 005fd53f
    MOV EAX,[0x02d052a4]                ; 005fd540 | g_RenderStateFlag2
    MOV dword ptr [0x030e56b8],EDX      ; 005fd545 | g_RenderedTriangleCount
    CMP EAX,0x6                         ; 005fd54b
    JA 0x005fd557                       ; 005fd54e
        ;   XREF to: 005fd557 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x5fd4b8]  ; 005fd550 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDI,0x4b0                       ; 005fd557
        ;   Label: caseD_4
    MOV EDX,dword ptr [ESP + 0x28]      ; 005fd55c
    XOR EBP,EBP                         ; 005fd560
    XOR ESI,ESI                         ; 005fd562
    MOV dword ptr [0x03f9b1e4],EBP      ; 005fd564 | g_RasterizerMaxY
    MOV dword ptr [ESP + 0x8],EBP       ; 005fd56a
    MOV dword ptr [0x03f9b1e0],EDI      ; 005fd56e | g_RasterizerMinY
    TEST EDX,EDX                        ; 005fd574
    JLE 0x005fd5ce                      ; 005fd576
        ;   XREF to: 005fd5ce (CONDITIONAL_JUMP)  ; LAB_005fd5ce
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fd578
        ;   Label: LAB_005fd578
    MOV EDI,dword ptr [ESP + 0x28]      ; 005fd57c
    INC EAX                             ; 005fd580
    CMP EAX,EDI                         ; 005fd581
    JL 0x005fd587                       ; 005fd583
        ;   XREF to: 005fd587 (CONDITIONAL_JUMP)  ; LAB_005fd587
    XOR EAX,EAX                         ; 005fd585
    IMUL EAX,EAX,0x30                   ; 005fd587
        ;   Label: LAB_005fd587
    MOV EDX,dword ptr [ESP + 0x24]      ; 005fd58a
    MOV EBP,dword ptr [ESP + 0x8]       ; 005fd58e
    ADD EDX,EAX                         ; 005fd592
    IMUL EAX,EBP,0x30                   ; 005fd594
    MOV dword ptr [ESP],EDX             ; 005fd597
    MOV EDX,dword ptr [ESP + 0x24]      ; 005fd59a
    ADD EDX,EAX                         ; 005fd59e
    MOV EBP,dword ptr [ESP]             ; 005fd5a0
    MOV dword ptr [ESP + 0x4],EDX       ; 005fd5a3
    MOV EDI,EDX                         ; 005fd5a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005fd5a9
    MOV EDX,dword ptr [EDX + 0x14]      ; 005fd5ac
    SAR EAX,0x10                        ; 005fd5af
    SAR EDX,0x10                        ; 005fd5b2
    CMP EDX,EAX                         ; 005fd5b5
    JNZ 0x005fd7d4                      ; 005fd5b7
        ;   XREF to: 005fd7d4 (CONDITIONAL_JUMP)  ; LAB_005fd7d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005fd5bd
        ;   Label: LAB_005fd5bd
    INC ECX                             ; 005fd5c1
    MOV EBX,dword ptr [ESP + 0x28]      ; 005fd5c2
    MOV dword ptr [ESP + 0x8],ECX       ; 005fd5c6
    CMP ECX,EBX                         ; 005fd5ca
    JL 0x005fd578                       ; 005fd5cc
        ;   XREF to: 005fd578 (CONDITIONAL_JUMP)  ; LAB_005fd578
    MOV EAX,0x3f9ad60                   ; 005fd5ce | g_RasterizerEdgeArray
        ;   Label: LAB_005fd5ce
    MOV EDI,dword ptr [0x03f9b1e0]      ; 005fd5d3 | g_RasterizerMinY
    XOR EDX,EDX                         ; 005fd5d9
    TEST ESI,ESI                        ; 005fd5db
    JLE 0x005fd8ed                      ; 005fd5dd
        ;   XREF to: 005fd8ed (CONDITIONAL_JUMP)  ; LAB_005fd8ed
    CMP EDI,dword ptr [EAX]             ; 005fd5e3 | g_RasterizerEdgeArray | g_RasterizerEdgeArray[1].base.y_min
        ;   Label: LAB_005fd5e3
    JNZ 0x005fd8e1                      ; 005fd5e5
        ;   XREF to: 005fd8e1 (CONDITIONAL_JUMP)  ; LAB_005fd8e1
    TEST EAX,EAX                        ; 005fd5eb
    JZ 0x005fd8e1                       ; 005fd5ed
        ;   XREF to: 005fd8e1 (CONDITIONAL_JUMP)  ; LAB_005fd8e1
    MOV EBP,EAX                         ; 005fd5f3
        ;   Label: LAB_005fd5f3
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd5f5 | g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd5fb
    JZ 0x005fd6d4                       ; 005fd5fd
        ;   XREF to: 005fd6d4 (CONDITIONAL_JUMP)  ; LAB_005fd6d4
    MOV EBX,dword ptr [0x03f9b1e0]      ; 005fd603 | g_RasterizerMinY
    MOV ECX,EAX                         ; 005fd609
    XOR EDX,EDX                         ; 005fd60b
    MOV EAX,0x3f9ad60                   ; 005fd60d | g_RasterizerEdgeArray
    TEST ESI,ESI                        ; 005fd612
    JLE 0x005fd900                      ; 005fd614
        ;   XREF to: 005fd900 (CONDITIONAL_JUMP)  ; LAB_005fd900
    CMP EBX,dword ptr [EAX]             ; 005fd61a | g_RasterizerEdgeArray | g_RasterizerEdgeArray[1].base.y_min
        ;   Label: LAB_005fd61a
    JNZ 0x005fd8f4                      ; 005fd61c
        ;   XREF to: 005fd8f4 (CONDITIONAL_JUMP)  ; LAB_005fd8f4
    CMP EAX,ECX                         ; 005fd622
    JZ 0x005fd8f4                       ; 005fd624
        ;   XREF to: 005fd8f4 (CONDITIONAL_JUMP)  ; LAB_005fd8f4
    MOV EDI,EAX                         ; 005fd62a
        ;   Label: LAB_005fd62a
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd62c | g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd632
    JZ 0x005fd6d4                       ; 005fd634
        ;   XREF to: 005fd6d4 (CONDITIONAL_JUMP)  ; LAB_005fd6d4
    MOV EAX,[0x03f9b1e0]                ; 005fd63a | g_RasterizerMinY
    MOV dword ptr [ESP + 0xc],EAX       ; 005fd63f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fd643
        ;   Label: LAB_005fd643
    CMP EAX,dword ptr [EBP + 0x4]       ; 005fd647 | g_RasterizerEdgeArray[0].base.y_max
    JL 0x005fd688                       ; 005fd64a
        ;   XREF to: 005fd688 (CONDITIONAL_JUMP)  ; LAB_005fd688
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd64c | g_RasterizerEdgeCount
    MOV EBX,EAX                         ; 005fd652
    MOV ECX,EDI                         ; 005fd654
    MOV dword ptr [EBP],0xffffffff      ; 005fd656 | g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fd65d
    MOV EAX,0x3f9ad60                   ; 005fd65f | g_RasterizerEdgeArray
    TEST ESI,ESI                        ; 005fd664
    JLE 0x005fd913                      ; 005fd666
        ;   XREF to: 005fd913 (CONDITIONAL_JUMP)  ; LAB_005fd913
    CMP EBX,dword ptr [EAX]             ; 005fd66c | g_RasterizerEdgeArray | g_RasterizerEdgeArray[1].base.y_min
        ;   Label: LAB_005fd66c
    JNZ 0x005fd907                      ; 005fd66e
        ;   XREF to: 005fd907 (CONDITIONAL_JUMP)  ; LAB_005fd907
    CMP EAX,ECX                         ; 005fd674
    JZ 0x005fd907                       ; 005fd676
        ;   XREF to: 005fd907 (CONDITIONAL_JUMP)  ; LAB_005fd907
    MOV EBP,EAX                         ; 005fd67c
        ;   Label: LAB_005fd67c
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd67e | g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd684
    JZ 0x005fd6d4                       ; 005fd686
        ;   XREF to: 005fd6d4 (CONDITIONAL_JUMP)  ; LAB_005fd6d4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fd688
        ;   Label: LAB_005fd688
    CMP EAX,dword ptr [EDI + 0x4]       ; 005fd68c | g_RasterizerEdgeArray[0].base.y_max
    JL 0x005fd92d                       ; 005fd68f
        ;   XREF to: 005fd92d (CONDITIONAL_JUMP)  ; LAB_005fd92d
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd695 | g_RasterizerEdgeCount
    MOV ECX,EAX                         ; 005fd69b
    MOV EBX,EBP                         ; 005fd69d
    MOV dword ptr [EDI],0xffffffff      ; 005fd69f | g_RasterizerEdgeArray
    XOR EDX,EDX                         ; 005fd6a5
    MOV EAX,0x3f9ad60                   ; 005fd6a7 | g_RasterizerEdgeArray
    TEST ESI,ESI                        ; 005fd6ac
    JLE 0x005fd926                      ; 005fd6ae
        ;   XREF to: 005fd926 (CONDITIONAL_JUMP)  ; LAB_005fd926
    CMP ECX,dword ptr [EAX]             ; 005fd6b4 | g_RasterizerEdgeArray | g_RasterizerEdgeArray[1].base.y_min
        ;   Label: LAB_005fd6b4
    JNZ 0x005fd91a                      ; 005fd6b6
        ;   XREF to: 005fd91a (CONDITIONAL_JUMP)  ; LAB_005fd91a
    CMP EAX,EBX                         ; 005fd6bc
    JZ 0x005fd91a                       ; 005fd6be
        ;   XREF to: 005fd91a (CONDITIONAL_JUMP)  ; LAB_005fd91a
    MOV EDI,EAX                         ; 005fd6c4
        ;   Label: LAB_005fd6c4
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd6c6 | g_RasterizerEdgeCount
    TEST EAX,EAX                        ; 005fd6cc
    JNZ 0x005fd92d                      ; 005fd6ce
        ;   XREF to: 005fd92d (CONDITIONAL_JUMP)  ; LAB_005fd92d
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd6d4 | g_RasterizerEdgeCount
        ;   Label: LAB_005fd6d4
    ADD ESP,0x10                        ; 005fd6da
    POP EBP                             ; 005fd6dd
    POP EDI                             ; 005fd6de
    POP ESI                             ; 005fd6df
    POP EBX                             ; 005fd6e0
    RET                                 ; 005fd6e1
    MOV EAX,0x7fffffff                  ; 005fd6e2
        ;   Label: LAB_005fd6e2
    MOV EDX,EAX                         ; 005fd6e7
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd6e9
    SAR EDX,0x1f                        ; 005fd6ec
    IDIV EBX                            ; 005fd6ef
    MOV dword ptr [ECX + 0xc],EAX       ; 005fd6f1
    MOV EDX,dword ptr [0x02d02548]      ; 005fd6f4 | g_ViewportCenterXFixed
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd6fa
    MOV EAX,dword ptr [ECX]             ; 005fd6fd
    IMUL EDX                            ; 005fd6ff
    IDIV EBX                            ; 005fd701
    MOV EDX,dword ptr [0x02d02550]      ; 005fd703 | g_ViewportRightFixed
    ADD EAX,EDX                         ; 005fd709
    MOV EBX,dword ptr [ECX + 0x8]       ; 005fd70b
    MOV dword ptr [ECX + 0x10],EAX      ; 005fd70e
    MOV EDX,dword ptr [0x02d0254c]      ; 005fd711 | g_ViewportCenterYFixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 005fd717
    IMUL EDX                            ; 005fd71a
    IDIV EBX                            ; 005fd71c
    MOV EDX,dword ptr [0x02d02554]      ; 005fd71e | g_ViewportBottomFixed
    ADD EAX,EDX                         ; 005fd724
    MOV dword ptr [ECX + 0x14],EAX      ; 005fd726
    JMP 0x005fd50d                      ; 005fd729
        ;   XREF to: 005fd50d (UNCONDITIONAL_JUMP)  ; LAB_005fd50d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005fd72e
        ;   Label: LAB_005fd72e
    ADD EAX,0x60                        ; 005fd732
    PUSH EAX                            ; 005fd735
    MOV EAX,dword ptr [ESP + 0x28]      ; 005fd736
    ADD EAX,0x30                        ; 005fd73a
    PUSH EAX                            ; 005fd73d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005fd73e
    PUSH EBP                            ; 005fd742
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 005fd743
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 005fd748
    TEST EAX,EAX                        ; 005fd74b
    JNZ 0x005fd533                      ; 005fd74d
        ;   XREF to: 005fd533 (CONDITIONAL_JUMP)  ; LAB_005fd533
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd753 | g_RasterizerEdgeCount
    ADD ESP,0x10                        ; 005fd759
    POP EBP                             ; 005fd75c
    POP EDI                             ; 005fd75d
    POP ESI                             ; 005fd75e
    POP EBX                             ; 005fd75f
    RET                                 ; 005fd760
    MOV EBX,dword ptr [ESP + 0x28]      ; 005fd761
        ;   Label: caseD_1
    PUSH EBX                            ; 005fd765
    MOV ESI,dword ptr [ESP + 0x28]      ; 005fd766
    PUSH ESI                            ; 005fd76a
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 005fd76b
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005fd770
    JMP 0x005fd557                      ; 005fd773
        ;   XREF to: 005fd557 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0x28]      ; 005fd778
        ;   Label: caseD_2
    PUSH EDX                            ; 005fd77c
    MOV ECX,dword ptr [ESP + 0x28]      ; 005fd77d
    PUSH ECX                            ; 005fd781
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 005fd782
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005fd787
    JMP 0x005fd557                      ; 005fd78a
        ;   XREF to: 005fd557 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBP,dword ptr [ESP + 0x28]      ; 005fd78f
        ;   Label: caseD_3
    PUSH EBP                            ; 005fd793
    MOV EAX,dword ptr [ESP + 0x28]      ; 005fd794
    PUSH EAX                            ; 005fd798
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0 ; 005fd799
        ;   XREF to: 005520a0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005fd79e
    JMP 0x005fd557                      ; 005fd7a1
        ;   XREF to: 005fd557 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ESI,dword ptr [ESP + 0x28]      ; 005fd7a6
        ;   Label: caseD_5
    PUSH ESI                            ; 005fd7aa
    MOV EDI,dword ptr [ESP + 0x28]      ; 005fd7ab
    PUSH EDI                            ; 005fd7af
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 005fd7b0
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005fd7b5
    JMP 0x005fd557                      ; 005fd7b8
        ;   XREF to: 005fd557 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,dword ptr [ESP + 0x28]      ; 005fd7bd
        ;   Label: caseD_6
    PUSH ECX                            ; 005fd7c1
    MOV EBX,dword ptr [ESP + 0x28]      ; 005fd7c2
    PUSH EBX                            ; 005fd7c6
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 005fd7c7
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005fd7cc
    JMP 0x005fd557                      ; 005fd7cf
        ;   XREF to: 005fd557 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,EDI                         ; 005fd7d4
        ;   Label: LAB_005fd7d4
    MOV ECX,dword ptr [ECX + 0x14]      ; 005fd7d6
    CMP ECX,dword ptr [EBP + 0x14]      ; 005fd7d9
    JLE 0x005fd7ea                      ; 005fd7dc
        ;   XREF to: 005fd7ea (CONDITIONAL_JUMP)  ; LAB_005fd7ea
    MOV EDI,EBP                         ; 005fd7de
    MOV ECX,EDX                         ; 005fd7e0
    MOV EBP,dword ptr [ESP + 0x4]       ; 005fd7e2
    MOV EDX,EAX                         ; 005fd7e6
    MOV EAX,ECX                         ; 005fd7e8
    IMUL ECX,ESI,0x48                   ; 005fd7ea
        ;   Label: LAB_005fd7ea
    ADD ECX,0x3f9ad60                   ; 005fd7ed | g_RasterizerEdgeArray
    MOV dword ptr [ECX],EDX             ; 005fd7f3 | g_RasterizerEdgeArray
    MOV EBX,dword ptr [0x03f9b1e0]      ; 005fd7f5 | g_RasterizerMinY
    MOV dword ptr [ECX + 0x4],EAX       ; 005fd7fb | g_RasterizerEdgeArray[0].base.y_max
    CMP EDX,EBX                         ; 005fd7fe
    JGE 0x005fd808                      ; 005fd800
        ;   XREF to: 005fd808 (CONDITIONAL_JUMP)  ; LAB_005fd808
    MOV dword ptr [0x03f9b1e0],EDX      ; 005fd802 | g_RasterizerMinY
    CMP EAX,dword ptr [0x03f9b1e4]      ; 005fd808 | g_RasterizerMaxY
        ;   Label: LAB_005fd808
    JLE 0x005fd815                      ; 005fd80e
        ;   XREF to: 005fd815 (CONDITIONAL_JUMP)  ; LAB_005fd815
    MOV [0x03f9b1e4],EAX                ; 005fd810 | g_RasterizerMaxY
    MOV EAX,dword ptr [EDI + 0x10]      ; 005fd815
        ;   Label: LAB_005fd815
    MOV dword ptr [ECX + 0x8],EAX       ; 005fd818 | g_RasterizerEdgeArray[0].base.x_current
    MOV EAX,dword ptr [EDI + 0x8]       ; 005fd81b
    SHL EAX,0x8                         ; 005fd81e
    MOV dword ptr [ECX + 0x28],EAX      ; 005fd821 | g_RasterizerEdgeArray[0].base.w_current
    MOV EAX,dword ptr [EDI + 0x20]      ; 005fd824
    MOV dword ptr [ECX + 0x10],EAX      ; 005fd827 | g_RasterizerEdgeArray[0].base.z_current
    MOV EBX,dword ptr [EBP + 0x14]      ; 005fd82a
    SUB EBX,dword ptr [EDI + 0x14]      ; 005fd82d
    CMP EBX,0x10000                     ; 005fd830
    JNC 0x005fd8d1                      ; 005fd836
        ;   XREF to: 005fd8d1 (CONDITIONAL_JUMP)  ; LAB_005fd8d1
    XOR EBX,EBX                         ; 005fd83c
    MOV EAX,dword ptr [EBP + 0x10]      ; 005fd83e
        ;   Label: LAB_005fd83e
    MOV EDX,dword ptr [EDI + 0x10]      ; 005fd841
    SUB EAX,EDX                         ; 005fd844
    MOV EDX,EAX                         ; 005fd846
    MOV EAX,EBX                         ; 005fd848
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fd84a | g_RasterizerEdgeCount
    IMUL EDX                            ; 005fd850
    SHRD EAX,EDX,0x10                   ; 005fd852
    MOV dword ptr [ECX + 0xc],EAX       ; 005fd856 | g_RasterizerEdgeArray[0].base.x_gradient
    MOV EAX,dword ptr [EBP + 0x8]       ; 005fd859
    MOV EDX,dword ptr [EDI + 0x8]       ; 005fd85c
    SUB EAX,EDX                         ; 005fd85f
    MOV EDX,EAX                         ; 005fd861
    SHL EDX,0x8                         ; 005fd863
    MOV EAX,EBX                         ; 005fd866
    IMUL EDX                            ; 005fd868
    SHRD EAX,EDX,0x10                   ; 005fd86a
    MOV dword ptr [ECX + 0x2c],EAX      ; 005fd86e | g_RasterizerEdgeArray[0].base.w_gradient
    MOV EDX,dword ptr [EBP + 0x20]      ; 005fd871
    MOV EBP,dword ptr [EDI + 0x20]      ; 005fd874
    MOV EAX,EBX                         ; 005fd877
    SUB EDX,EBP                         ; 005fd879
    IMUL EDX                            ; 005fd87b
    SHRD EAX,EDX,0x10                   ; 005fd87d
    MOV dword ptr [ECX + 0x14],EAX      ; 005fd881 | g_RasterizerEdgeArray[0].base.z_gradient
    MOV EBX,dword ptr [EDI + 0x14]      ; 005fd884
    AND EBX,0xffff                      ; 005fd887
    XOR BX,0xffff                       ; 005fd88d
    MOV EDX,dword ptr [ECX + 0xc]       ; 005fd891 | g_RasterizerEdgeArray[0].base.x_gradient
    MOV EAX,EBX                         ; 005fd894
    IMUL EDX                            ; 005fd896
    SHRD EAX,EDX,0x10                   ; 005fd898
    ADD dword ptr [ECX + 0x8],EAX       ; 005fd89c | g_RasterizerEdgeArray[0].base.x_current
    MOV EAX,EBX                         ; 005fd89f
    MOV EDX,dword ptr [ECX + 0x2c]      ; 005fd8a1 | g_RasterizerEdgeArray[0].base.w_gradient
    IMUL EDX                            ; 005fd8a4
    SHRD EAX,EDX,0x10                   ; 005fd8a6
    MOV EDI,dword ptr [ECX + 0x28]      ; 005fd8aa | g_RasterizerEdgeArray[0].base.w_current
    MOV EDX,dword ptr [ECX + 0x14]      ; 005fd8ad | g_RasterizerEdgeArray[0].base.z_gradient
    ADD EDI,EAX                         ; 005fd8b0
    MOV EAX,EBX                         ; 005fd8b2
    MOV dword ptr [ECX + 0x28],EDI      ; 005fd8b4 | g_RasterizerEdgeArray[0].base.w_current
    IMUL EDX                            ; 005fd8b7
    SHRD EAX,EDX,0x10                   ; 005fd8b9
    MOV EBP,dword ptr [ECX + 0x10]      ; 005fd8bd | g_RasterizerEdgeArray[0].base.z_current
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fd8c0 | g_RasterizerEdgeCount
    ADD EBP,EAX                         ; 005fd8c6
    INC ESI                             ; 005fd8c8
    MOV dword ptr [ECX + 0x10],EBP      ; 005fd8c9 | g_RasterizerEdgeArray[0].base.z_current
    JMP 0x005fd5bd                      ; 005fd8cc
        ;   XREF to: 005fd5bd (UNCONDITIONAL_JUMP)  ; LAB_005fd5bd
    MOV EAX,0xffffffff                  ; 005fd8d1
        ;   Label: LAB_005fd8d1
    XOR EDX,EDX                         ; 005fd8d6
    DIV EBX                             ; 005fd8d8
    MOV EBX,EAX                         ; 005fd8da
    JMP 0x005fd83e                      ; 005fd8dc
        ;   XREF to: 005fd83e (UNCONDITIONAL_JUMP)  ; LAB_005fd83e
    INC EDX                             ; 005fd8e1
        ;   Label: LAB_005fd8e1
    ADD EAX,0x48                        ; 005fd8e2
    CMP EDX,ESI                         ; 005fd8e5
    JL 0x005fd5e3                       ; 005fd8e7
        ;   XREF to: 005fd5e3 (CONDITIONAL_JUMP)  ; LAB_005fd5e3
    XOR EAX,EAX                         ; 005fd8ed
        ;   Label: LAB_005fd8ed
    JMP 0x005fd5f3                      ; 005fd8ef
        ;   XREF to: 005fd5f3 (UNCONDITIONAL_JUMP)  ; LAB_005fd5f3
    INC EDX                             ; 005fd8f4
        ;   Label: LAB_005fd8f4
    ADD EAX,0x48                        ; 005fd8f5
    CMP EDX,ESI                         ; 005fd8f8
    JL 0x005fd61a                       ; 005fd8fa
        ;   XREF to: 005fd61a (CONDITIONAL_JUMP)  ; LAB_005fd61a
    XOR EAX,EAX                         ; 005fd900
        ;   Label: LAB_005fd900
    JMP 0x005fd62a                      ; 005fd902
        ;   XREF to: 005fd62a (UNCONDITIONAL_JUMP)  ; LAB_005fd62a
    INC EDX                             ; 005fd907
        ;   Label: LAB_005fd907
    ADD EAX,0x48                        ; 005fd908
    CMP EDX,ESI                         ; 005fd90b
    JL 0x005fd66c                       ; 005fd90d
        ;   XREF to: 005fd66c (CONDITIONAL_JUMP)  ; LAB_005fd66c
    XOR EAX,EAX                         ; 005fd913
        ;   Label: LAB_005fd913
    JMP 0x005fd67c                      ; 005fd915
        ;   XREF to: 005fd67c (UNCONDITIONAL_JUMP)  ; LAB_005fd67c
    INC EDX                             ; 005fd91a
        ;   Label: LAB_005fd91a
    ADD EAX,0x48                        ; 005fd91b | g_RasterizerEdgeArray[1].base.y_min
    CMP EDX,ESI                         ; 005fd91e
    JL 0x005fd6b4                       ; 005fd920
        ;   XREF to: 005fd6b4 (CONDITIONAL_JUMP)  ; LAB_005fd6b4
    XOR EAX,EAX                         ; 005fd926
        ;   Label: LAB_005fd926
    JMP 0x005fd6c4                      ; 005fd928
        ;   XREF to: 005fd6c4 (UNCONDITIONAL_JUMP)  ; LAB_005fd6c4
    PUSH EDI                            ; 005fd92d | g_RasterizerEdgeArray
        ;   Label: LAB_005fd92d
    PUSH EBP                            ; 005fd92e | g_RasterizerEdgeArray
    MOV EAX,dword ptr [ESP + 0x14]      ; 005fd92f
    PUSH EAX                            ; 005fd933
    CALL dword ptr [ESP + 0x38]         ; 005fd934
    MOV EAX,dword ptr [EBP + 0xc]       ; 005fd938 | g_RasterizerEdgeArray[0].base.x_gradient
    ADD dword ptr [EBP + 0x8],EAX       ; 005fd93b | g_RasterizerEdgeArray[0].base.x_current
    MOV EBX,dword ptr [EBP + 0x28]      ; 005fd93e | g_RasterizerEdgeArray[0].base.w_current
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005fd941 | g_RasterizerEdgeArray[0].base.w_gradient
    MOV ECX,dword ptr [EBP + 0x10]      ; 005fd944 | g_RasterizerEdgeArray[0].base.z_current
    ADD EBX,EAX                         ; 005fd947
    MOV EAX,dword ptr [EBP + 0x14]      ; 005fd949 | g_RasterizerEdgeArray[0].base.z_gradient
    MOV dword ptr [EBP + 0x28],EBX      ; 005fd94c | g_RasterizerEdgeArray[0].base.w_current
    ADD ECX,EAX                         ; 005fd94f
    MOV dword ptr [EBP + 0x10],ECX      ; 005fd951 | g_RasterizerEdgeArray[0].base.z_current
    ADD ESP,0xc                         ; 005fd954
    MOV EAX,dword ptr [EDI + 0xc]       ; 005fd957 | g_RasterizerEdgeArray[0].base.x_gradient
    MOV EBX,dword ptr [EDI + 0x8]       ; 005fd95a | g_RasterizerEdgeArray[0].base.x_current
    MOV EDX,dword ptr [EDI + 0x28]      ; 005fd95d | g_RasterizerEdgeArray[0].base.w_current
    MOV ECX,dword ptr [EDI + 0x10]      ; 005fd960 | g_RasterizerEdgeArray[0].base.z_current
    ADD EBX,EAX                         ; 005fd963
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005fd965 | g_RasterizerEdgeArray[0].base.w_gradient
    MOV dword ptr [EDI + 0x8],EBX       ; 005fd968 | g_RasterizerEdgeArray[0].base.x_current
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fd96b
    ADD EDX,EAX                         ; 005fd96f
    INC EBX                             ; 005fd971
    MOV EAX,dword ptr [EDI + 0x14]      ; 005fd972 | g_RasterizerEdgeArray[0].base.z_gradient
    MOV dword ptr [EDI + 0x28],EDX      ; 005fd975 | g_RasterizerEdgeArray[0].base.w_current
    ADD ECX,EAX                         ; 005fd978
    MOV dword ptr [ESP + 0xc],EBX       ; 005fd97a
    MOV dword ptr [EDI + 0x10],ECX      ; 005fd97e | g_RasterizerEdgeArray[0].base.z_current
    JMP 0x005fd643                      ; 005fd981
        ;   XREF to: 005fd643 (UNCONDITIONAL_JUMP)  ; LAB_005fd643

