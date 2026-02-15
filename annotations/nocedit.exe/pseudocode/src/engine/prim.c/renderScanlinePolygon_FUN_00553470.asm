; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00553470(SRenderVertex *vertices,int vertex_count)
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
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 004385d5
;
; Referenced Globals:
;   void* switchdataD_00553448 = 00553580
;   uint g_VertexProcessingEnabled = 0x1
;   int g_TexturesDisabled
;   int g_CullingMode
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_UseExternalRenderer
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;   int g_RenderedTriangleCount
;   int g_ActiveEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeTable
;   undefined4 g_SoftwareEdgeTable[0].y_max
;   ... and 19 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_normalizeTextureCoords_FUN_00552020
;   engine_prim.c_prepareDepthBuffer_FUN_00551fb0
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   wincore_windll.cpp_drawPolygon_FUN_005b75e0
;   wincore_windll.cpp_renderScanline_FUN_005b5710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553470
        ;   Label: engine_prim.c_renderScanlinePolygon_FUN_00553470
    PUSH ESI                            ; 00553471
    PUSH EDI                            ; 00553472
    PUSH EBP                            ; 00553473
    SUB ESP,0x14                        ; 00553474
    CMP dword ptr [0x006793bc],0x0      ; 00553477 | g_VertexProcessingEnabled
    JZ 0x005534e7                       ; 0055347e
        ;   XREF to: 005534e7 (CONDITIONAL_JUMP)  ; LAB_005534e7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00553480
    MOV ECX,dword ptr [ESP + 0x28]      ; 00553484
    XOR ESI,ESI                         ; 00553488
    TEST EBX,EBX                        ; 0055348a
    JLE 0x005534e7                      ; 0055348c
        ;   XREF to: 005534e7 (CONDITIONAL_JUMP)  ; LAB_005534e7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0055348e
    TEST byte ptr [ECX + 0x13],0x80     ; 00553492
        ;   Label: LAB_00553492
    JZ 0x005534df                       ; 00553496
        ;   XREF to: 005534df (CONDITIONAL_JUMP)  ; LAB_005534df
    MOV EAX,0x7fffffff                  ; 00553498
    MOV EDX,EAX                         ; 0055349d
    MOV EBX,dword ptr [ECX + 0x8]       ; 0055349f
    SAR EDX,0x1f                        ; 005534a2
    IDIV EBX                            ; 005534a5
    MOV dword ptr [ECX + 0xc],EAX       ; 005534a7
    MOV EDX,dword ptr [0x02d02548]      ; 005534aa | g_ViewportCenterXFixed
    MOV EBX,dword ptr [ECX + 0x8]       ; 005534b0
    MOV EAX,dword ptr [ECX]             ; 005534b3
    IMUL EDX                            ; 005534b5
    IDIV EBX                            ; 005534b7
    MOV EDX,dword ptr [0x02d02550]      ; 005534b9 | g_ViewportRightFixed
    ADD EAX,EDX                         ; 005534bf
    MOV EBX,dword ptr [ECX + 0x8]       ; 005534c1
    MOV dword ptr [ECX + 0x10],EAX      ; 005534c4
    MOV EDX,dword ptr [0x02d0254c]      ; 005534c7 | g_ViewportCenterYFixed
    MOV EAX,dword ptr [ECX + 0x4]       ; 005534cd
    IMUL EDX                            ; 005534d0
    IDIV EBX                            ; 005534d2
    MOV EDX,dword ptr [0x02d02554]      ; 005534d4 | g_ViewportBottomFixed
    ADD EAX,EDX                         ; 005534da
    MOV dword ptr [ECX + 0x14],EAX      ; 005534dc
    INC ESI                             ; 005534df
        ;   Label: LAB_005534df
    ADD ECX,0x30                        ; 005534e0
    CMP ESI,EDI                         ; 005534e3
    JL 0x00553492                       ; 005534e5
        ;   XREF to: 00553492 (CONDITIONAL_JUMP)  ; LAB_00553492
    CMP dword ptr [0x00772a7c],0x0      ; 005534e7 | g_CullingMode
        ;   Label: LAB_005534e7
    JZ 0x0055354c                       ; 005534ee
        ;   XREF to: 0055354c (CONDITIONAL_JUMP)  ; LAB_0055354c
    MOV EAX,dword ptr [ESP + 0x28]      ; 005534f0
    MOV EBX,dword ptr [ESP + 0x28]      ; 005534f4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005534f8
    ADD EAX,0x30                        ; 005534fc
    ADD EBX,0x60                        ; 005534ff
    CMP EDX,0x3                         ; 00553502
    JLE 0x00553718                      ; 00553505
        ;   XREF to: 00553718 (CONDITIONAL_JUMP)  ; LAB_00553718
    SUB EDX,0x2                         ; 0055350b
    MOV EDI,EAX                         ; 0055350e
    XOR ESI,ESI                         ; 00553510
    XOR EBP,EBP                         ; 00553512
    MOV dword ptr [ESP + 0x4],EDX       ; 00553514
    TEST EDX,EDX                        ; 00553518
    JLE 0x00553542                      ; 0055351a
        ;   XREF to: 00553542 (CONDITIONAL_JUMP)  ; LAB_00553542
    PUSH EBX                            ; 0055351c
        ;   Label: LAB_0055351c
    PUSH EDI                            ; 0055351d
    MOV EAX,dword ptr [ESP + 0x30]      ; 0055351e
    PUSH EAX                            ; 00553522
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 00553523
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00553528
    TEST EAX,EAX                        ; 0055352b
    JZ 0x00553712                       ; 0055352d
        ;   XREF to: 00553712 (CONDITIONAL_JUMP)  ; LAB_00553712
    MOV EDX,dword ptr [ESP + 0x4]       ; 00553533
        ;   Label: LAB_00553533
    ADD EDI,0x30                        ; 00553537
    INC ESI                             ; 0055353a
    ADD EBX,0x30                        ; 0055353b
    CMP ESI,EDX                         ; 0055353e
    JL 0x0055351c                       ; 00553540
        ;   XREF to: 0055351c (CONDITIONAL_JUMP)  ; LAB_0055351c
    CMP EBP,dword ptr [ESP + 0x4]       ; 00553542
        ;   Label: LAB_00553542
    JZ 0x0055370a                       ; 00553546
        ;   XREF to: 0055370a (CONDITIONAL_JUMP)  ; LAB_0055370a
    CMP dword ptr [0x02d03e94],0x0      ; 0055354c | g_UseExternalRenderer
        ;   Label: LAB_0055354c
    JZ 0x00553562                       ; 00553553
        ;   XREF to: 00553562 (CONDITIONAL_JUMP)  ; LAB_00553562
    CMP dword ptr [0x00772a74],0x0      ; 00553555 | g_TexturesDisabled
    JZ 0x00553737                       ; 0055355c
        ;   XREF to: 00553737 (CONDITIONAL_JUMP)  ; LAB_00553737
    MOV EBX,dword ptr [0x030e56b8]      ; 00553562 | g_RenderedTriangleCount
        ;   Label: LAB_00553562
    INC EBX                             ; 00553568
    MOV EAX,[0x02d052a4]                ; 00553569 | g_RenderStateFlag2
    MOV dword ptr [0x030e56b8],EBX      ; 0055356e | g_RenderedTriangleCount
    CMP EAX,0x6                         ; 00553574
    JA 0x00553580                       ; 00553577
        ;   XREF to: 00553580 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x553448]  ; 00553579 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 00553580
        ;   Label: caseD_4
    XOR EDX,EDX                         ; 00553585
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00553587
    MOV dword ptr [0x030e5b44],EDX      ; 0055358b | g_MaxScanline
    MOV dword ptr [0x030e56bc],EDX      ; 00553591 | g_ActiveEdgeCount
    MOV dword ptr [ESP + 0x8],EDX       ; 00553597
    MOV [0x030e5b40],EAX                ; 0055359b | g_MinScanline
    TEST ESI,ESI                        ; 005535a0
    JLE 0x005535ee                      ; 005535a2
        ;   XREF to: 005535ee (CONDITIONAL_JUMP)  ; LAB_005535ee
    MOV EAX,dword ptr [ESP + 0x8]       ; 005535a4
        ;   Label: LAB_005535a4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005535a8
    INC EAX                             ; 005535ac
    CMP EAX,EDI                         ; 005535ad
    JL 0x005535b3                       ; 005535af
        ;   XREF to: 005535b3 (CONDITIONAL_JUMP)  ; LAB_005535b3
    XOR EAX,EAX                         ; 005535b1
    IMUL EAX,EAX,0x30                   ; 005535b3
        ;   Label: LAB_005535b3
    IMUL ESI,dword ptr [ESP + 0x8],0x30 ; 005535b6
    MOV ECX,dword ptr [ESP + 0x28]      ; 005535bb
    ADD ECX,EAX                         ; 005535bf
    ADD ESI,dword ptr [ESP + 0x28]      ; 005535c1
    MOV EDI,ECX                         ; 005535c5
    MOV EDX,dword ptr [ESI + 0x14]      ; 005535c7
    MOV EAX,dword ptr [ECX + 0x14]      ; 005535ca
    SAR EDX,0x10                        ; 005535cd
    SAR EAX,0x10                        ; 005535d0
    MOV EBX,ESI                         ; 005535d3
    CMP EDX,EAX                         ; 005535d5
    JNZ 0x005537dc                      ; 005535d7
        ;   XREF to: 005537dc (CONDITIONAL_JUMP)  ; LAB_005537dc
    MOV ECX,dword ptr [ESP + 0x8]       ; 005535dd
        ;   Label: LAB_005535dd
    INC ECX                             ; 005535e1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005535e2
    MOV dword ptr [ESP + 0x8],ECX       ; 005535e6
    CMP ECX,EBX                         ; 005535ea
    JL 0x005535a4                       ; 005535ec
        ;   XREF to: 005535a4 (CONDITIONAL_JUMP)  ; LAB_005535a4
    MOV EAX,0x30e56c0                   ; 005535ee | g_SoftwareEdgeTable
        ;   Label: LAB_005535ee
    MOV ESI,dword ptr [0x030e56bc]      ; 005535f3 | g_ActiveEdgeCount
    MOV EBX,dword ptr [0x030e5b40]      ; 005535f9 | g_MinScanline
    XOR ECX,ECX                         ; 005535ff
    TEST ESI,ESI                        ; 00553601
    JLE 0x005539ca                      ; 00553603
        ;   XREF to: 005539ca (CONDITIONAL_JUMP)  ; LAB_005539ca
    MOV EDX,dword ptr [0x030e56bc]      ; 00553609 | g_ActiveEdgeCount
    CMP EBX,dword ptr [EAX]             ; 0055360f | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_0055360f
    JNZ 0x005539be                      ; 00553611
        ;   XREF to: 005539be (CONDITIONAL_JUMP)  ; LAB_005539be
    TEST EAX,EAX                        ; 00553617
    JZ 0x005539be                       ; 00553619
        ;   XREF to: 005539be (CONDITIONAL_JUMP)  ; LAB_005539be
    MOV EBP,EAX                         ; 0055361f
        ;   Label: LAB_0055361f
    TEST EAX,EAX                        ; 00553621
    JZ 0x0055370a                       ; 00553623
        ;   XREF to: 0055370a (CONDITIONAL_JUMP)  ; LAB_0055370a
    MOV EDI,dword ptr [0x030e56bc]      ; 00553629 | g_ActiveEdgeCount
    MOV EBX,dword ptr [0x030e5b40]      ; 0055362f | g_MinScanline
    MOV ECX,EAX                         ; 00553635 | g_SoftwareEdgeTable
    XOR EDX,EDX                         ; 00553637
    MOV EAX,0x30e56c0                   ; 00553639 | g_SoftwareEdgeTable
    TEST EDI,EDI                        ; 0055363e
    JLE 0x005539dd                      ; 00553640
        ;   XREF to: 005539dd (CONDITIONAL_JUMP)  ; LAB_005539dd
    MOV ESI,dword ptr [0x030e56bc]      ; 00553646 | g_ActiveEdgeCount
    CMP EBX,dword ptr [EAX]             ; 0055364c | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_0055364c
    JNZ 0x005539d1                      ; 0055364e
        ;   XREF to: 005539d1 (CONDITIONAL_JUMP)  ; LAB_005539d1
    CMP EAX,ECX                         ; 00553654
    JZ 0x005539d1                       ; 00553656
        ;   XREF to: 005539d1 (CONDITIONAL_JUMP)  ; LAB_005539d1
    MOV dword ptr [ESP + 0x10],EAX      ; 0055365c | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_0055365c
    TEST EAX,EAX                        ; 00553660
    JZ 0x0055370a                       ; 00553662
        ;   XREF to: 0055370a (CONDITIONAL_JUMP)  ; LAB_0055370a
    MOV EAX,[0x030e5b40]                ; 00553668 | g_MinScanline
    MOV dword ptr [ESP + 0xc],EAX       ; 0055366d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00553671
        ;   Label: LAB_00553671
    CMP EAX,dword ptr [EBP + 0x4]       ; 00553675 | g_SoftwareEdgeTable[0].y_max
    JL 0x005536b8                       ; 00553678
        ;   XREF to: 005536b8 (CONDITIONAL_JUMP)  ; LAB_005536b8
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055367a
    MOV ESI,dword ptr [0x030e56bc]      ; 0055367e | g_ActiveEdgeCount
    MOV ECX,EAX                         ; 00553684
    MOV dword ptr [EBP],0xffffffff      ; 00553686 | g_SoftwareEdgeTable
    XOR EDX,EDX                         ; 0055368d
    MOV EAX,0x30e56c0                   ; 0055368f | g_SoftwareEdgeTable
    TEST ESI,ESI                        ; 00553694
    JLE 0x005539f0                      ; 00553696
        ;   XREF to: 005539f0 (CONDITIONAL_JUMP)  ; LAB_005539f0
    MOV EDI,dword ptr [0x030e56bc]      ; 0055369c | g_ActiveEdgeCount
    CMP ECX,dword ptr [EAX]             ; 005536a2 | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_005536a2
    JNZ 0x005539e4                      ; 005536a4
        ;   XREF to: 005539e4 (CONDITIONAL_JUMP)  ; LAB_005539e4
    CMP EAX,EBX                         ; 005536aa
    JZ 0x005539e4                       ; 005536ac
        ;   XREF to: 005539e4 (CONDITIONAL_JUMP)  ; LAB_005539e4
    MOV EBP,EAX                         ; 005536b2
        ;   Label: LAB_005536b2
    TEST EAX,EAX                        ; 005536b4
    JZ 0x0055370a                       ; 005536b6
        ;   XREF to: 0055370a (CONDITIONAL_JUMP)  ; LAB_0055370a
    MOV EDX,dword ptr [ESP + 0x10]      ; 005536b8 | g_SoftwareEdgeTable
        ;   Label: LAB_005536b8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005536bc
    CMP EAX,dword ptr [EDX + 0x4]       ; 005536c0 | g_SoftwareEdgeTable[0].y_max
    JL 0x00553a15                       ; 005536c3
        ;   XREF to: 00553a15 (CONDITIONAL_JUMP)  ; LAB_00553a15
    MOV ESI,dword ptr [0x030e56bc]      ; 005536c9 | g_ActiveEdgeCount
    MOV EBX,EAX                         ; 005536cf
    MOV ECX,EBP                         ; 005536d1 | g_SoftwareEdgeTable
    MOV dword ptr [EDX],0xffffffff      ; 005536d3 | g_SoftwareEdgeTable
    MOV EAX,0x30e56c0                   ; 005536d9 | g_SoftwareEdgeTable
    XOR EDX,EDX                         ; 005536de
    TEST ESI,ESI                        ; 005536e0
    JLE 0x00553a03                      ; 005536e2
        ;   XREF to: 00553a03 (CONDITIONAL_JUMP)  ; LAB_00553a03
    MOV EDI,dword ptr [0x030e56bc]      ; 005536e8 | g_ActiveEdgeCount
    CMP EBX,dword ptr [EAX]             ; 005536ee | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
        ;   Label: LAB_005536ee
    JNZ 0x005539f7                      ; 005536f0
        ;   XREF to: 005539f7 (CONDITIONAL_JUMP)  ; LAB_005539f7
    CMP EAX,ECX                         ; 005536f6
    JZ 0x005539f7                       ; 005536f8
        ;   XREF to: 005539f7 (CONDITIONAL_JUMP)  ; LAB_005539f7
    MOV dword ptr [ESP + 0x10],EAX      ; 005536fe | g_SoftwareEdgeTable | g_SoftwareEdgeTable[1].y_min
    TEST EAX,EAX                        ; 00553702
    JNZ 0x00553a15                      ; 00553704
        ;   XREF to: 00553a15 (CONDITIONAL_JUMP)  ; LAB_00553a15
    ADD ESP,0x14                        ; 0055370a
        ;   Label: LAB_0055370a
    POP EBP                             ; 0055370d
    POP EDI                             ; 0055370e
    POP ESI                             ; 0055370f
    POP EBX                             ; 00553710
    RET                                 ; 00553711
    INC EBP                             ; 00553712
        ;   Label: LAB_00553712
    JMP 0x00553533                      ; 00553713
        ;   XREF to: 00553533 (UNCONDITIONAL_JUMP)  ; LAB_00553533
    PUSH EBX                            ; 00553718
        ;   Label: LAB_00553718
    PUSH EAX                            ; 00553719
    MOV ECX,dword ptr [ESP + 0x30]      ; 0055371a
    PUSH ECX                            ; 0055371e
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0055371f
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00553724
    TEST EAX,EAX                        ; 00553727
    JNZ 0x0055354c                      ; 00553729
        ;   XREF to: 0055354c (CONDITIONAL_JUMP)  ; LAB_0055354c
    ADD ESP,0x14                        ; 0055372f
    POP EBP                             ; 00553732
    POP EDI                             ; 00553733
    POP ESI                             ; 00553734
    POP EBX                             ; 00553735
    RET                                 ; 00553736
    MOV EDI,dword ptr [0x02d052a0]      ; 00553737 | g_RenderStateFlags
        ;   Label: LAB_00553737
    PUSH EDI                            ; 0055373d
    MOV EBP,dword ptr [ESP + 0x30]      ; 0055373e
    PUSH EBP                            ; 00553742
    MOV EAX,dword ptr [ESP + 0x30]      ; 00553743
    PUSH EAX                            ; 00553747
    CALL wincore_windll.cpp_drawPolygon_FUN_005b75e0 ; 00553748
        ;   XREF to: 005b75e0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon_FUN_005b75e0(SRenderVertex * vertices, int vertex_count, int render_flags)
    MOV EDX,dword ptr [0x030e56b8]      ; 0055374d | g_RenderedTriangleCount
    LEA EAX,[EBP + -0x2]                ; 00553753
    ADD EDX,EAX                         ; 00553756
    ADD ESP,0xc                         ; 00553758
    MOV dword ptr [0x030e56b8],EDX      ; 0055375b | g_RenderedTriangleCount
    ADD ESP,0x14                        ; 00553761
    POP EBP                             ; 00553764
    POP EDI                             ; 00553765
    POP ESI                             ; 00553766
    POP EBX                             ; 00553767
    RET                                 ; 00553768
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00553769
        ;   Label: caseD_1
    PUSH EDI                            ; 0055376d
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0055376e
    PUSH EBP                            ; 00553772
    CALL engine_prim.c_prepareDepthBuffer_FUN_00551fb0 ; 00553773
        ;   XREF to: 00551fb0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00553778
    JMP 0x00553580                      ; 0055377b
        ;   XREF to: 00553580 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00553780
        ;   Label: caseD_2
    PUSH EBX                            ; 00553784
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00553785
    PUSH ESI                            ; 00553789
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 0055378a
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0055378f
    JMP 0x00553580                      ; 00553792
        ;   XREF to: 00553580 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00553797
        ;   Label: caseD_3
    PUSH EDX                            ; 0055379b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0055379c
    PUSH ECX                            ; 005537a0
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0 ; 005537a1
        ;   XREF to: 005520a0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_adjustNearPlaneTextureCoords_FUN_005520a0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005537a6
    JMP 0x00553580                      ; 005537a9
        ;   XREF to: 00553580 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005537ae
        ;   Label: caseD_5
    PUSH EBP                            ; 005537b2
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005537b3
    PUSH EAX                            ; 005537b7
    CALL engine_prim.c_normalizeTextureCoords_FUN_00552020 ; 005537b8
        ;   XREF to: 00552020 (UNCONDITIONAL_CALL)  ; void engine_prim.c_normalizeTextureCoords_FUN_00552020(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005537bd
    JMP 0x00553580                      ; 005537c0
        ;   XREF to: 00553580 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005537c5
        ;   Label: caseD_6
    PUSH ESI                            ; 005537c9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005537ca
    PUSH EDI                            ; 005537ce
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 005537cf
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 005537d4
    JMP 0x00553580                      ; 005537d7
        ;   XREF to: 00553580 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EBP,dword ptr [ESI + 0x14]      ; 005537dc
        ;   Label: LAB_005537dc
    CMP EBP,dword ptr [ECX + 0x14]      ; 005537df
    JLE 0x005537ee                      ; 005537e2
        ;   XREF to: 005537ee (CONDITIONAL_JUMP)  ; LAB_005537ee
    MOV EBX,ECX                         ; 005537e4
    MOV EDI,ESI                         ; 005537e6
    MOV ECX,EDX                         ; 005537e8
    MOV EDX,EAX                         ; 005537ea
    MOV EAX,ECX                         ; 005537ec
    IMUL EBP,dword ptr [0x030e56bc],0x48 ; 005537ee | g_ActiveEdgeCount
        ;   Label: LAB_005537ee
    ADD EBP,0x30e56c0                   ; 005537f5 | g_SoftwareEdgeTable
    MOV dword ptr [EBP],EDX             ; 005537fb | g_SoftwareEdgeTable
    MOV ESI,dword ptr [0x030e5b40]      ; 005537fe | g_MinScanline
    MOV dword ptr [EBP + 0x4],EAX       ; 00553804 | g_SoftwareEdgeTable[0].y_max
    CMP EDX,ESI                         ; 00553807
    JGE 0x00553811                      ; 00553809
        ;   XREF to: 00553811 (CONDITIONAL_JUMP)  ; LAB_00553811
    MOV dword ptr [0x030e5b40],EDX      ; 0055380b | g_MinScanline
    CMP EAX,dword ptr [0x030e5b44]      ; 00553811 | g_MaxScanline
        ;   Label: LAB_00553811
    JLE 0x0055381e                      ; 00553817
        ;   XREF to: 0055381e (CONDITIONAL_JUMP)  ; LAB_0055381e
    MOV [0x030e5b44],EAX                ; 00553819 | g_MaxScanline
    MOV ESI,dword ptr [EBX + 0x14]      ; 0055381e
        ;   Label: LAB_0055381e
    MOV ECX,dword ptr [EDI + 0x14]      ; 00553821
    SUB ECX,ESI                         ; 00553824
    CMP ECX,0x10000                     ; 00553826
    JNC 0x005539ae                      ; 0055382c
        ;   XREF to: 005539ae (CONDITIONAL_JUMP)  ; LAB_005539ae
    XOR ECX,ECX                         ; 00553832
    MOV EAX,dword ptr [EDI + 0x10]      ; 00553834
        ;   Label: LAB_00553834
    MOV EDX,dword ptr [EBX + 0x10]      ; 00553837
    MOV ESI,dword ptr [EBX + 0x14]      ; 0055383a
    SUB EAX,EDX                         ; 0055383d
    AND ESI,0xffff                      ; 0055383f
    MOV EDX,EAX                         ; 00553845
    MOV EAX,ECX                         ; 00553847
    XOR SI,0xffff                       ; 00553849
    IMUL EDX                            ; 0055384d
    SHRD EAX,EDX,0x10                   ; 0055384f
    MOV EDX,EAX                         ; 00553853
    MOV dword ptr [EBP + 0xc],EAX       ; 00553855 | g_SoftwareEdgeTable[0].x_gradient
    MOV EAX,ESI                         ; 00553858
    IMUL EDX                            ; 0055385a
    SHRD EAX,EDX,0x10                   ; 0055385c
    MOV dword ptr [ESP],EAX             ; 00553860
    MOV EDX,dword ptr [ESP]             ; 00553863
    MOV EAX,dword ptr [EBX + 0x10]      ; 00553866
    ADD EAX,EDX                         ; 00553869
    MOV dword ptr [EBP + 0x8],EAX       ; 0055386b | g_SoftwareEdgeTable[0].x_current
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055386e
    MOV EDX,dword ptr [EBX + 0x18]      ; 00553871
    SUB EAX,EDX                         ; 00553874
    MOV EDX,EAX                         ; 00553876
    MOV EAX,ECX                         ; 00553878
    IMUL EDX                            ; 0055387a
    SHRD EAX,EDX,0x10                   ; 0055387c
    MOV EDX,EAX                         ; 00553880
    MOV dword ptr [EBP + 0x1c],EAX      ; 00553882 | g_SoftwareEdgeTable[0].u_gradient
    MOV EAX,ESI                         ; 00553885
    IMUL EDX                            ; 00553887
    SHRD EAX,EDX,0x10                   ; 00553889
    MOV dword ptr [ESP],EAX             ; 0055388d
    MOV EDX,dword ptr [ESP]             ; 00553890
    MOV EAX,dword ptr [EBX + 0x18]      ; 00553893
    ADD EAX,EDX                         ; 00553896
    MOV dword ptr [EBP + 0x18],EAX      ; 00553898 | g_SoftwareEdgeTable[0].u_current
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0055389b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0055389e
    SUB EAX,EDX                         ; 005538a1
    MOV EDX,EAX                         ; 005538a3
    MOV EAX,ECX                         ; 005538a5
    IMUL EDX                            ; 005538a7
    SHRD EAX,EDX,0x10                   ; 005538a9
    MOV EDX,EAX                         ; 005538ad
    MOV dword ptr [EBP + 0x24],EAX      ; 005538af | g_SoftwareEdgeTable[0].v_gradient
    MOV EAX,ESI                         ; 005538b2
    IMUL EDX                            ; 005538b4
    SHRD EAX,EDX,0x10                   ; 005538b6
    MOV dword ptr [ESP],EAX             ; 005538ba
    MOV EDX,dword ptr [ESP]             ; 005538bd
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005538c0
    ADD EAX,EDX                         ; 005538c3
    MOV dword ptr [EBP + 0x20],EAX      ; 005538c5 | g_SoftwareEdgeTable[0].v_current
    MOV EAX,dword ptr [EDI + 0x20]      ; 005538c8
    MOV EDX,dword ptr [EBX + 0x20]      ; 005538cb
    SUB EAX,EDX                         ; 005538ce
    MOV EDX,EAX                         ; 005538d0
    MOV EAX,ECX                         ; 005538d2
    IMUL EDX                            ; 005538d4
    SHRD EAX,EDX,0x10                   ; 005538d6
    MOV EDX,EAX                         ; 005538da
    MOV dword ptr [EBP + 0x14],EAX      ; 005538dc | g_SoftwareEdgeTable[0].z_gradient
    MOV EAX,ESI                         ; 005538df
    IMUL EDX                            ; 005538e1
    SHRD EAX,EDX,0x10                   ; 005538e3
    MOV dword ptr [ESP],EAX             ; 005538e7
    MOV EDX,dword ptr [ESP]             ; 005538ea
    MOV EAX,dword ptr [EBX + 0x20]      ; 005538ed
    ADD EAX,EDX                         ; 005538f0
    MOV dword ptr [EBP + 0x10],EAX      ; 005538f2 | g_SoftwareEdgeTable[0].z_current
    MOV EAX,dword ptr [EDI + 0x2c]      ; 005538f5
    MOV EDX,dword ptr [EBX + 0x2c]      ; 005538f8
    SUB EAX,EDX                         ; 005538fb
    MOV EDX,EAX                         ; 005538fd
    MOV EAX,ECX                         ; 005538ff
    IMUL EDX                            ; 00553901
    SHRD EAX,EDX,0x10                   ; 00553903
    MOV EDX,EAX                         ; 00553907
    MOV dword ptr [EBP + 0x34],EAX      ; 00553909 | g_SoftwareEdgeTable[0].fog_gradient
    MOV EAX,ESI                         ; 0055390c
    IMUL EDX                            ; 0055390e
    SHRD EAX,EDX,0x10                   ; 00553910
    MOV dword ptr [ESP],EAX             ; 00553914
    MOV EDX,dword ptr [ESP]             ; 00553917
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0055391a
    ADD EAX,EDX                         ; 0055391d
    MOV dword ptr [EBP + 0x30],EAX      ; 0055391f | g_SoftwareEdgeTable[0].fog_current
    MOV EAX,dword ptr [EDI + 0x8]       ; 00553922
    MOV EDX,dword ptr [EBX + 0x8]       ; 00553925
    SUB EAX,EDX                         ; 00553928
    MOV EDX,EAX                         ; 0055392a
    MOV EAX,ECX                         ; 0055392c
    IMUL EDX                            ; 0055392e
    SHRD EAX,EDX,0x10                   ; 00553930
    MOV EDX,EAX                         ; 00553934
    MOV dword ptr [EBP + 0x2c],EAX      ; 00553936 | g_SoftwareEdgeTable[0].w_gradient
    MOV EAX,ESI                         ; 00553939
    IMUL EDX                            ; 0055393b
    SHRD EAX,EDX,0x10                   ; 0055393d
    MOV dword ptr [ESP],EAX             ; 00553941
    MOV EDX,dword ptr [ESP]             ; 00553944
    MOV EAX,dword ptr [EBX + 0x8]       ; 00553947
    ADD EAX,EDX                         ; 0055394a
    MOV dword ptr [EBP + 0x28],EAX      ; 0055394c | g_SoftwareEdgeTable[0].w_current
    MOV EAX,dword ptr [EDI + 0x24]      ; 0055394f
    MOV EDX,dword ptr [EBX + 0x24]      ; 00553952
    SUB EAX,EDX                         ; 00553955
    MOV EDX,EAX                         ; 00553957
    MOV EAX,ECX                         ; 00553959
    IMUL EDX                            ; 0055395b
    SHRD EAX,EDX,0x10                   ; 0055395d
    MOV EDX,EAX                         ; 00553961
    MOV dword ptr [EBP + 0x3c],EAX      ; 00553963 | g_SoftwareEdgeTable[0].r_gradient
    MOV EAX,ESI                         ; 00553966
    IMUL EDX                            ; 00553968
    SHRD EAX,EDX,0x10                   ; 0055396a
    MOV dword ptr [ESP],EAX             ; 0055396e
    MOV EDX,dword ptr [ESP]             ; 00553971
    MOV EAX,dword ptr [EBX + 0x24]      ; 00553974
    ADD EAX,EDX                         ; 00553977
    MOV dword ptr [EBP + 0x38],EAX      ; 00553979 | g_SoftwareEdgeTable[0].r_current
    MOV EDX,dword ptr [EDI + 0x28]      ; 0055397c
    MOV EDI,dword ptr [EBX + 0x28]      ; 0055397f
    MOV EAX,ECX                         ; 00553982
    SUB EDX,EDI                         ; 00553984
    IMUL EDX                            ; 00553986
    SHRD EAX,EDX,0x10                   ; 00553988
    MOV EDX,EAX                         ; 0055398c
    MOV dword ptr [EBP + 0x44],EAX      ; 0055398e | g_SoftwareEdgeTable[0].g_gradient
    MOV EAX,ESI                         ; 00553991
    IMUL EDX                            ; 00553993
    SHRD EAX,EDX,0x10                   ; 00553995
    MOV EDX,EAX                         ; 00553999
    MOV EAX,dword ptr [EBX + 0x28]      ; 0055399b
    ADD EAX,EDX                         ; 0055399e
    MOV dword ptr [EBP + 0x40],EAX      ; 005539a0 | g_SoftwareEdgeTable[0].g_current
    INC dword ptr [0x030e56bc]          ; 005539a3 | g_ActiveEdgeCount
    JMP 0x005535dd                      ; 005539a9
        ;   XREF to: 005535dd (UNCONDITIONAL_JUMP)  ; LAB_005535dd
    MOV EAX,0xffffffff                  ; 005539ae
        ;   Label: LAB_005539ae
    XOR EDX,EDX                         ; 005539b3
    DIV ECX                             ; 005539b5
    MOV ECX,EAX                         ; 005539b7
    JMP 0x00553834                      ; 005539b9
        ;   XREF to: 00553834 (UNCONDITIONAL_JUMP)  ; LAB_00553834
    INC ECX                             ; 005539be
        ;   Label: LAB_005539be
    ADD EAX,0x48                        ; 005539bf
    CMP ECX,EDX                         ; 005539c2
    JL 0x0055360f                       ; 005539c4
        ;   XREF to: 0055360f (CONDITIONAL_JUMP)  ; LAB_0055360f
    XOR EAX,EAX                         ; 005539ca
        ;   Label: LAB_005539ca
    JMP 0x0055361f                      ; 005539cc
        ;   XREF to: 0055361f (UNCONDITIONAL_JUMP)  ; LAB_0055361f
    INC EDX                             ; 005539d1
        ;   Label: LAB_005539d1
    ADD EAX,0x48                        ; 005539d2
    CMP EDX,ESI                         ; 005539d5
    JL 0x0055364c                       ; 005539d7
        ;   XREF to: 0055364c (CONDITIONAL_JUMP)  ; LAB_0055364c
    XOR EAX,EAX                         ; 005539dd
        ;   Label: LAB_005539dd
    JMP 0x0055365c                      ; 005539df
        ;   XREF to: 0055365c (UNCONDITIONAL_JUMP)  ; LAB_0055365c
    INC EDX                             ; 005539e4
        ;   Label: LAB_005539e4
    ADD EAX,0x48                        ; 005539e5
    CMP EDX,EDI                         ; 005539e8
    JL 0x005536a2                       ; 005539ea
        ;   XREF to: 005536a2 (CONDITIONAL_JUMP)  ; LAB_005536a2
    XOR EAX,EAX                         ; 005539f0
        ;   Label: LAB_005539f0
    JMP 0x005536b2                      ; 005539f2
        ;   XREF to: 005536b2 (UNCONDITIONAL_JUMP)  ; LAB_005536b2
    INC EDX                             ; 005539f7
        ;   Label: LAB_005539f7
    ADD EAX,0x48                        ; 005539f8 | g_SoftwareEdgeTable[1].y_min
    CMP EDX,EDI                         ; 005539fb
    JL 0x005536ee                       ; 005539fd
        ;   XREF to: 005536ee (CONDITIONAL_JUMP)  ; LAB_005536ee
    XOR EAX,EAX                         ; 00553a03
        ;   Label: LAB_00553a03
    MOV dword ptr [ESP + 0x10],EAX      ; 00553a05
    TEST EAX,EAX                        ; 00553a09
    JNZ 0x00553a15                      ; 00553a0b
        ;   XREF to: 00553a15 (CONDITIONAL_JUMP)  ; LAB_00553a15
    ADD ESP,0x14                        ; 00553a0d
    POP EBP                             ; 00553a10
    POP EDI                             ; 00553a11
    POP ESI                             ; 00553a12
    POP EBX                             ; 00553a13
    RET                                 ; 00553a14
    MOV EDI,dword ptr [ESP + 0x10]      ; 00553a15
        ;   Label: LAB_00553a15
    MOV EBX,dword ptr [ESP + 0xc]       ; 00553a19
    MOV ESI,EBP                         ; 00553a1d
    CALL wincore_windll.cpp_renderScanline_FUN_005b5710 ; 00553a1f
        ;   XREF to: 005b5710 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_renderScanline_FUN_005b5710(void * left_data, void * right_data, int scanline_y)
    MOV EAX,dword ptr [EBP + 0xc]       ; 00553a24 | g_SoftwareEdgeTable[0].x_gradient
    MOV EDI,dword ptr [EBP + 0x8]       ; 00553a27 | g_SoftwareEdgeTable[0].x_current
    MOV EDX,dword ptr [EBP + 0x18]      ; 00553a2a | g_SoftwareEdgeTable[0].u_current
    MOV ECX,dword ptr [EBP + 0x20]      ; 00553a2d | g_SoftwareEdgeTable[0].v_current
    ADD EDI,EAX                         ; 00553a30
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00553a32 | g_SoftwareEdgeTable[0].u_gradient
    MOV dword ptr [EBP + 0x8],EDI       ; 00553a35 | g_SoftwareEdgeTable[0].x_current
    ADD EDX,EAX                         ; 00553a38
    MOV EAX,dword ptr [EBP + 0x24]      ; 00553a3a | g_SoftwareEdgeTable[0].v_gradient
    MOV dword ptr [EBP + 0x18],EDX      ; 00553a3d | g_SoftwareEdgeTable[0].u_current
    ADD ECX,EAX                         ; 00553a40
    MOV dword ptr [EBP + 0x20],ECX      ; 00553a42 | g_SoftwareEdgeTable[0].v_current
    MOV EBX,dword ptr [EBP + 0x28]      ; 00553a45 | g_SoftwareEdgeTable[0].w_current
    MOV ESI,dword ptr [EBP + 0x10]      ; 00553a48 | g_SoftwareEdgeTable[0].z_current
    MOV EDI,dword ptr [EBP + 0x38]      ; 00553a4b | g_SoftwareEdgeTable[0].r_current
    MOV EDX,dword ptr [EBP + 0x40]      ; 00553a4e | g_SoftwareEdgeTable[0].g_current
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00553a51 | g_SoftwareEdgeTable[0].w_gradient
    MOV ECX,dword ptr [EBP + 0x30]      ; 00553a54 | g_SoftwareEdgeTable[0].fog_current
    ADD EBX,EAX                         ; 00553a57
    MOV EAX,dword ptr [EBP + 0x14]      ; 00553a59 | g_SoftwareEdgeTable[0].z_gradient
    MOV dword ptr [EBP + 0x28],EBX      ; 00553a5c | g_SoftwareEdgeTable[0].w_current
    ADD ESI,EAX                         ; 00553a5f
    MOV EAX,dword ptr [EBP + 0x3c]      ; 00553a61 | g_SoftwareEdgeTable[0].r_gradient
    MOV dword ptr [EBP + 0x10],ESI      ; 00553a64 | g_SoftwareEdgeTable[0].z_current
    ADD EDI,EAX                         ; 00553a67
    MOV EAX,dword ptr [EBP + 0x44]      ; 00553a69 | g_SoftwareEdgeTable[0].g_gradient
    MOV dword ptr [EBP + 0x38],EDI      ; 00553a6c | g_SoftwareEdgeTable[0].r_current
    ADD EDX,EAX                         ; 00553a6f
    MOV EAX,dword ptr [EBP + 0x34]      ; 00553a71 | g_SoftwareEdgeTable[0].fog_gradient
    MOV dword ptr [EBP + 0x40],EDX      ; 00553a74 | g_SoftwareEdgeTable[0].g_current
    ADD ECX,EAX                         ; 00553a77
    MOV EAX,dword ptr [ESP + 0x10]      ; 00553a79
    MOV dword ptr [EBP + 0x30],ECX      ; 00553a7d | g_SoftwareEdgeTable[0].fog_current
    MOV EDX,dword ptr [ESP + 0x10]      ; 00553a80
    MOV EAX,dword ptr [EAX + 0xc]       ; 00553a84
    MOV EBX,dword ptr [EDX + 0x8]       ; 00553a87
    MOV ESI,dword ptr [EDX + 0x18]      ; 00553a8a
    MOV EDI,dword ptr [EDX + 0x20]      ; 00553a8d
    MOV ECX,dword ptr [EDX + 0x28]      ; 00553a90
    ADD EBX,EAX                         ; 00553a93
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00553a95
    MOV dword ptr [EDX + 0x8],EBX       ; 00553a98
    ADD ESI,EAX                         ; 00553a9b
    MOV EAX,dword ptr [EDX + 0x24]      ; 00553a9d
    MOV dword ptr [EDX + 0x18],ESI      ; 00553aa0
    ADD EDI,EAX                         ; 00553aa3
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00553aa5
    MOV dword ptr [EDX + 0x20],EDI      ; 00553aa8
    ADD ECX,EAX                         ; 00553aab
    MOV dword ptr [EDX + 0x28],ECX      ; 00553aad
    MOV EBX,dword ptr [EDX + 0x10]      ; 00553ab0
    MOV ESI,dword ptr [EDX + 0x38]      ; 00553ab3
    MOV EDI,dword ptr [EDX + 0x40]      ; 00553ab6
    MOV EAX,dword ptr [EDX + 0x14]      ; 00553ab9
    MOV ECX,dword ptr [EDX + 0x30]      ; 00553abc
    ADD EBX,EAX                         ; 00553abf
    MOV EAX,dword ptr [EDX + 0x3c]      ; 00553ac1
    MOV dword ptr [EDX + 0x10],EBX      ; 00553ac4
    MOV EBX,dword ptr [ESP + 0xc]       ; 00553ac7
    ADD ESI,EAX                         ; 00553acb
    INC EBX                             ; 00553acd
    MOV EAX,dword ptr [EDX + 0x44]      ; 00553ace
    MOV dword ptr [EDX + 0x38],ESI      ; 00553ad1
    ADD EDI,EAX                         ; 00553ad4
    MOV EAX,dword ptr [EDX + 0x34]      ; 00553ad6
    MOV dword ptr [EDX + 0x40],EDI      ; 00553ad9
    ADD ECX,EAX                         ; 00553adc
    MOV dword ptr [ESP + 0xc],EBX       ; 00553ade
    MOV dword ptr [EDX + 0x30],ECX      ; 00553ae2
    JMP 0x00553671                      ; 00553ae5
        ;   XREF to: 00553671 (UNCONDITIONAL_JUMP)  ; LAB_00553671

