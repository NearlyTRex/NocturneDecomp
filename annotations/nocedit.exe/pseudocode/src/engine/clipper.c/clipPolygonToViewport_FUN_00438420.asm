; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_00438420(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[10]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f20 at 00407002
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406de0 at 00406ebf
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00405690 at 00405764
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057b0 at 00405887
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406c80 at 00406d45
;   engine_3d.c_renderPolygonFogColorOp6_FUN_00403ba0 at 00403c71
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407720 at 0040785d
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00407620 at 00407706
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 at 0048a7d4
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d5ce
;
; Referenced Globals:
;   void* switchdataD_004383d8 = 004386ac
;   void* PTR_caseD_3_004383e4 = 004386d6
;   void* PTR_caseD_1_004383ec = 004389bf
;   void* PTR_caseD_3_004383f4 = 00438785
;   void* switchdataD_004383f8 = 00438805
;   void* PTR_caseD_3_00438404 = 0043882f
;   void* PTR_caseD_1_0043840c = 00438abd
;   void* PTR_caseD_3_00438414 = 004388df
;   uint g_VertexProcessingEnabled = 0x1
;   SRenderVertex[20000] g_RenderVertexBuffer
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
;   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
;   int g_CullingMode
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   ... and 39 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00552150
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10
;   engine_prim.c_renderScanlinePolygon_FUN_00553470
;   wincore_windll.cpp_drawPolygon2_FUN_005b7610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438420
        ;   Label: engine_clipper.c_clipPolygonToViewport_FUN_00438420
    PUSH ESI                            ; 00438421
    PUSH EDI                            ; 00438422
    PUSH EBP                            ; 00438423
    SUB ESP,0x20                        ; 00438424
    MOV EBX,dword ptr [ESP + 0x34]      ; 00438427
    MOV EDX,dword ptr [ESP + 0x38]      ; 0043842b
    CMP dword ptr [0x006793bc],0x0      ; 0043842f | g_VertexProcessingEnabled
    JZ 0x0043850c                       ; 00438436
        ;   XREF to: 0043850c (CONDITIONAL_JUMP)  ; LAB_0043850c
    MOV ECX,0xffffffff                  ; 0043843c
    MOV dword ptr [ESP + 0x4],EDX       ; 00438441
    MOV EBP,EBX                         ; 00438445
    XOR ESI,ESI                         ; 00438447
    XOR EAX,EAX                         ; 00438449
    TEST EBX,EBX                        ; 0043844b
    JLE 0x0043846b                      ; 0043844d
        ;   XREF to: 0043846b (CONDITIONAL_JUMP)  ; LAB_0043846b
    IMUL EBX,dword ptr [EDX],0x30       ; 0043844f
        ;   Label: LAB_0043844f
    MOV EBX,dword ptr [EBX + 0x688024]  ; 00438452 | g_RenderVertexBuffer[0].projected_vertex.screen_x
    TEST EBX,0x80000000                 ; 00438458
    JZ 0x00438461                       ; 0043845e
        ;   XREF to: 00438461 (CONDITIONAL_JUMP)  ; LAB_00438461
    INC ESI                             ; 00438460
    ADD EDX,0x4                         ; 00438461
        ;   Label: LAB_00438461
    INC EAX                             ; 00438464
    AND ECX,EBX                         ; 00438465
    CMP EAX,EBP                         ; 00438467
    JL 0x0043844f                       ; 00438469
        ;   XREF to: 0043844f (CONDITIONAL_JUMP)  ; LAB_0043844f
    CMP ESI,EBP                         ; 0043846b
        ;   Label: LAB_0043846b
    JNZ 0x00438478                      ; 0043846d
        ;   XREF to: 00438478 (CONDITIONAL_JUMP)  ; LAB_00438478
    TEST CL,0xff                        ; 0043846f
    JNZ 0x00438518                      ; 00438472
        ;   XREF to: 00438518 (CONDITIONAL_JUMP)  ; LAB_00438518
    TEST ESI,ESI                        ; 00438478
        ;   Label: LAB_00438478
    JNZ 0x004385e5                      ; 0043847a
        ;   XREF to: 004385e5 (CONDITIONAL_JUMP)  ; LAB_004385e5
    CMP dword ptr [0x02d03e94],0x0      ; 00438480 | g_UseExternalRenderer
    JZ 0x00438574                       ; 00438487
        ;   XREF to: 00438574 (CONDITIONAL_JUMP)  ; LAB_00438574
    XOR EAX,EAX                         ; 0043848d
    TEST EBP,EBP                        ; 0043848f
    JLE 0x004384b0                      ; 00438491
        ;   XREF to: 004384b0 (CONDITIONAL_JUMP)  ; LAB_004384b0
    MOV EBX,dword ptr [ESP + 0x4]       ; 00438493
    IMUL ECX,dword ptr [EBX],0x30       ; 00438497
        ;   Label: LAB_00438497
    INC EAX                             ; 0043849a
    ADD ECX,0x688014                    ; 0043849b | g_RenderVertexBuffer
    ADD EBX,0x4                         ; 004384a1
    MOV dword ptr [EAX*0x4 + 0x825424],ECX ; 004384a4 | g_ClipperCullingPointers | g_ClipperCullingPointers[1]
    CMP EAX,EBP                         ; 004384ab
    JL 0x00438497                       ; 004384ad
        ;   XREF to: 00438497 (CONDITIONAL_JUMP)  ; LAB_00438497
    NOP                                 ; 004384af
    CMP dword ptr [0x00772a7c],0x0      ; 004384b0 | g_CullingMode
        ;   Label: LAB_004384b0
    JZ 0x00438546                       ; 004384b7
        ;   XREF to: 00438546 (CONDITIONAL_JUMP)  ; LAB_00438546
    CMP EBP,0x3                         ; 004384bd
    JLE 0x00438525                      ; 004384c0
        ;   XREF to: 00438525 (CONDITIONAL_JUMP)  ; LAB_00438525
    LEA EAX,[EBP + -0x2]                ; 004384c2
    XOR EBX,EBX                         ; 004384c5
    MOV dword ptr [ESP],EAX             ; 004384c7
    LEA EDI,[EAX*0x4 + 0x0]             ; 004384ca
    XOR ESI,ESI                         ; 004384d1
    TEST EDI,EDI                        ; 004384d3
    JLE 0x004384ff                      ; 004384d5
        ;   XREF to: 004384ff (CONDITIONAL_JUMP)  ; LAB_004384ff
    MOV EAX,dword ptr [EBX + 0x825430]  ; 004384d7 | g_ClipperCullingPointers[2] | g_ClipperCullingPointers[3]
        ;   Label: LAB_004384d7
    PUSH EAX                            ; 004384dd
    MOV EDX,dword ptr [EBX + 0x82542c]  ; 004384de | g_ClipperCullingPointers[1] | g_ClipperCullingPointers[2]
    PUSH EDX                            ; 004384e4
    MOV ECX,dword ptr [0x00825428]      ; 004384e5 | g_ClipperCullingPointers
    PUSH ECX                            ; 004384eb
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 004384ec
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004384f1
    TEST EAX,EAX                        ; 004384f4
    JZ 0x00438522                       ; 004384f6
        ;   XREF to: 00438522 (CONDITIONAL_JUMP)  ; LAB_00438522
    ADD EBX,0x4                         ; 004384f8
        ;   Label: LAB_004384f8
    CMP EBX,EDI                         ; 004384fb
    JL 0x004384d7                       ; 004384fd
        ;   XREF to: 004384d7 (CONDITIONAL_JUMP)  ; LAB_004384d7
    CMP ESI,dword ptr [ESP]             ; 004384ff
        ;   Label: LAB_004384ff
    JNZ 0x00438546                      ; 00438502
        ;   XREF to: 00438546 (CONDITIONAL_JUMP)  ; LAB_00438546
    ADD ESP,0x20                        ; 00438504
        ;   Label: LAB_00438504
    POP EBP                             ; 00438507
    POP EDI                             ; 00438508
    POP ESI                             ; 00438509
    POP EBX                             ; 0043850a
    RET                                 ; 0043850b
    PUSH EBX                            ; 0043850c
        ;   Label: LAB_0043850c
    PUSH EDX                            ; 0043850d
    CALL engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 ; 0043850e
        ;   XREF to: 00553b10 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00438513
    JMP 0x00438504                      ; 00438516
        ;   XREF to: 00438504 (UNCONDITIONAL_JUMP)  ; LAB_00438504
    XOR ESI,EBP                         ; 00438518
        ;   Label: LAB_00438518
    MOV dword ptr [0x00824e24],ESI      ; 0043851a | g_ClippedVertexCount
    JMP 0x00438504                      ; 00438520
        ;   XREF to: 00438504 (UNCONDITIONAL_JUMP)  ; LAB_00438504
    INC ESI                             ; 00438522
        ;   Label: LAB_00438522
    JMP 0x004384f8                      ; 00438523
        ;   XREF to: 004384f8 (UNCONDITIONAL_JUMP)  ; LAB_004384f8
    MOV EDX,dword ptr [0x00825430]      ; 00438525 | g_ClipperCullingPointers[2]
        ;   Label: LAB_00438525
    PUSH EDX                            ; 0043852b
    MOV ECX,dword ptr [0x0082542c]      ; 0043852c | g_ClipperCullingPointers[1]
    PUSH ECX                            ; 00438532
    MOV EBX,dword ptr [0x00825428]      ; 00438533 | g_ClipperCullingPointers
    PUSH EBX                            ; 00438539
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00552150 ; 0043853a
        ;   XREF to: 00552150 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00552150(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043853f
    TEST EAX,EAX                        ; 00438542
    JZ 0x00438504                       ; 00438544
        ;   XREF to: 00438504 (CONDITIONAL_JUMP)  ; LAB_00438504
    MOV ESI,dword ptr [0x02d052a0]      ; 00438546 | g_RenderStateFlags
        ;   Label: LAB_00438546
    PUSH ESI                            ; 0043854c
    LEA EAX,[EBP + -0x2]                ; 0043854d
    MOV EBX,dword ptr [0x030e56b8]      ; 00438550 | g_RenderedTriangleCount
    PUSH EBP                            ; 00438556
    ADD EBX,EAX                         ; 00438557
    PUSH 0x825428                       ; 00438559 | g_ClipperCullingPointers
    MOV dword ptr [0x030e56b8],EBX      ; 0043855e | g_RenderedTriangleCount
    CALL wincore_windll.cpp_drawPolygon2_FUN_005b7610 ; 00438564
        ;   XREF to: 005b7610 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_drawPolygon2_FUN_005b7610(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00438569
    ADD ESP,0x20                        ; 0043856c
    POP EBP                             ; 0043856f
    POP EDI                             ; 00438570
    POP ESI                             ; 00438571
    POP EBX                             ; 00438572
    RET                                 ; 00438573
    MOV dword ptr [ESP + 0x8],ESI       ; 00438574
        ;   Label: LAB_00438574
    MOV dword ptr [0x00824e24],EBP      ; 00438578 | g_ClippedVertexCount
    TEST EBP,EBP                        ; 0043857e
    JLE 0x004385c0                      ; 00438580
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    MOV EBX,dword ptr [ESP + 0x4]       ; 00438582
    MOV EDX,0x824e28                    ; 00438586 | g_ClippedVertexBuffer
    IMUL ESI,dword ptr [EBX],0x30       ; 0043858b
        ;   Label: LAB_0043858b
    MOV ECX,0x30                        ; 0043858e
    ADD ESI,0x688014                    ; 00438593 | g_RenderVertexBuffer
    MOV EDI,EDX                         ; 00438599
    PUSH EDI                            ; 0043859b | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 0043859c
    SHR ECX,0x2                         ; 0043859e
    MOVSD.REP ES:EDI,ESI                ; 004385a1 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV CL,AL                           ; 004385a3
    AND CL,0x3                          ; 004385a5
    MOVSB.REP ES:EDI,ESI                ; 004385a8 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    POP EDI                             ; 004385aa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004385ab
    ADD EBX,0x4                         ; 004385af
    INC EAX                             ; 004385b2
    ADD EDX,0x30                        ; 004385b3 | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [ESP + 0x8],EAX       ; 004385b6
    CMP EBP,EAX                         ; 004385ba
    JG 0x0043858b                       ; 004385bc
        ;   XREF to: 0043858b (CONDITIONAL_JUMP)  ; LAB_0043858b
    MOV EAX,EAX                         ; 004385be
    MOV EBX,dword ptr [0x00824e24]      ; 004385c0 | g_ClippedVertexCount
        ;   Label: LAB_004385c0
    CMP EBX,0x2                         ; 004385c6
    JLE 0x00438504                      ; 004385c9
        ;   XREF to: 00438504 (CONDITIONAL_JUMP)  ; LAB_00438504
    PUSH EBX                            ; 004385cf
    PUSH 0x824e28                       ; 004385d0 | g_ClippedVertexBuffer
    CALL engine_prim.c_renderScanlinePolygon_FUN_00553470 ; 004385d5
        ;   XREF to: 00553470 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderScanlinePolygon_FUN_00553470(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004385da
    ADD ESP,0x20                        ; 004385dd
    POP EBP                             ; 004385e0
    POP EDI                             ; 004385e1
    POP ESI                             ; 004385e2
    POP EBX                             ; 004385e3
    RET                                 ; 004385e4
    XOR EBX,EBX                         ; 004385e5
        ;   Label: LAB_004385e5
    MOV dword ptr [0x00825cf0],EBP      ; 004385e7 | g_InputVertexCount
    MOV dword ptr [0x00825cf4],EBX      ; 004385ed | g_OutputVertexCount
    MOV dword ptr [0x00825cf8],EBX      ; 004385f3 | g_TempVertexCount
    MOV dword ptr [0x00825cfc],EBX      ; 004385f9 | g_IntermediateVertexCount
    MOV dword ptr [0x00824e24],EBX      ; 004385ff | g_ClippedVertexCount
    MOV dword ptr [ESP + 0xc],EBX       ; 00438605
    TEST EBP,EBP                        ; 00438609
    JLE 0x00438650                      ; 0043860b
        ;   XREF to: 00438650 (CONDITIONAL_JUMP)  ; LAB_00438650
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043860d
    MOV EDX,0x826300                    ; 00438611 | g_ClipperInputBuffer
    IMUL ESI,dword ptr [EBX],0x30       ; 00438616
        ;   Label: LAB_00438616
    MOV ECX,0x30                        ; 00438619
    MOV EDI,EDX                         ; 0043861e
    ADD ESI,0x688014                    ; 00438620 | g_RenderVertexBuffer
    PUSH EDI                            ; 00438626 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV EAX,ECX                         ; 00438627
    SHR ECX,0x2                         ; 00438629
    MOVSD.REP ES:EDI,ESI                ; 0043862c | g_ClipperInputBuffer | g_ClipperInputBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV CL,AL                           ; 0043862e
    AND CL,0x3                          ; 00438630
    MOVSB.REP ES:EDI,ESI                ; 00438633 | g_ClipperInputBuffer | g_ClipperInputBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    POP EDI                             ; 00438635
    MOV ECX,dword ptr [ESP + 0xc]       ; 00438636
    ADD EBX,0x4                         ; 0043863a
    INC ECX                             ; 0043863d
    ADD EDX,0x30                        ; 0043863e
    MOV dword ptr [ESP + 0xc],ECX       ; 00438641
    CMP EBP,ECX                         ; 00438645
    JG 0x00438616                       ; 00438647
        ;   XREF to: 00438616 (CONDITIONAL_JUMP)  ; LAB_00438616
    LEA EAX,[EAX]                       ; 00438649
    NOP                                 ; 0043864f
    XOR EDI,EDI                         ; 00438650
        ;   Label: LAB_00438650
    MOV EBP,dword ptr [0x00825cf0]      ; 00438652 | g_InputVertexCount
    MOV dword ptr [ESP + 0x10],EDI      ; 00438658
    TEST EBP,EBP                        ; 0043865c
    JLE 0x004386f0                      ; 0043865e
        ;   XREF to: 004386f0 (CONDITIONAL_JUMP)  ; LAB_004386f0
    MOV EBX,0x826300                    ; 00438664 | g_ClipperInputBuffer
    MOV EAX,dword ptr [ESP + 0x10]      ; 00438669
        ;   Label: LAB_00438669
    MOV EDI,dword ptr [0x00825cf0]      ; 0043866d | g_InputVertexCount
    INC EAX                             ; 00438673
    CMP EAX,EDI                         ; 00438674
    JNZ 0x0043867a                      ; 00438676
        ;   XREF to: 0043867a (CONDITIONAL_JUMP)  ; LAB_0043867a
    XOR EAX,EDI                         ; 00438678
    IMUL EAX,EAX,0x30                   ; 0043867a
        ;   Label: LAB_0043867a
    MOV EBP,0x826300                    ; 0043867d | g_ClipperInputBuffer
    MOV EDX,EBX                         ; 00438682 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV ECX,dword ptr [EBX]             ; 00438684 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV ESI,dword ptr [EBX + 0x8]       ; 00438686 | g_ClipperInputBuffer[0].projected_vertex.transformed_z | g_ClipperInputBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 00438689
    XOR EAX,EAX                         ; 0043868b
    CMP ECX,ESI                         ; 0043868d
    JL 0x00438696                       ; 0043868f
        ;   XREF to: 00438696 (CONDITIONAL_JUMP)  ; LAB_00438696
    MOV EAX,0x1                         ; 00438691
    MOV EDI,dword ptr [EBP + 0x8]       ; 00438696 | g_ClipperInputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00438696
    CMP EDI,dword ptr [EBP]             ; 00438699 | g_ClipperInputBuffer
    JG 0x004386a0                       ; 0043869c
        ;   XREF to: 004386a0 (CONDITIONAL_JUMP)  ; LAB_004386a0
    OR AL,0x2                           ; 0043869e
    CMP EAX,0x3                         ; 004386a0
        ;   Label: LAB_004386a0
    JA 0x004386d6                       ; 004386a3
        ;   XREF to: 004386d6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4383d8]  ; 004386a5 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf4],0x30 ; 004386ac | g_OutputVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004386b3
    MOV ESI,EDX                         ; 004386b8
    ADD EDI,0x825d00                    ; 004386ba | g_ClipperOutputBuffer
    PUSH EDI                            ; 004386c0 | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 004386c1
    SHR ECX,0x2                         ; 004386c3
    MOVSD.REP ES:EDI,ESI                ; 004386c6 | g_ClipperOutputBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer
    MOV CL,AL                           ; 004386c8
    AND CL,0x3                          ; 004386ca
    MOVSB.REP ES:EDI,ESI                ; 004386cd | g_ClipperOutputBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer
    POP EDI                             ; 004386cf
    INC dword ptr [0x00825cf4]          ; 004386d0 | g_OutputVertexCount
    MOV EAX,dword ptr [ESP + 0x10]      ; 004386d6
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x00825cf0]      ; 004386da | g_InputVertexCount
    INC EAX                             ; 004386e0
    ADD EBX,0x30                        ; 004386e1 | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [ESP + 0x10],EAX      ; 004386e4
    CMP EAX,EDX                         ; 004386e8
    JL 0x00438669                       ; 004386ea
        ;   XREF to: 00438669 (CONDITIONAL_JUMP)  ; LAB_00438669
    MOV ECX,dword ptr [0x00825cf4]      ; 004386f0 | g_OutputVertexCount
        ;   Label: LAB_004386f0
    CMP ECX,0x3                         ; 004386f6
    JL 0x004385c0                       ; 004386f9
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    XOR EBX,EBX                         ; 004386ff
    MOV dword ptr [ESP + 0x18],EBX      ; 00438701
    TEST ECX,ECX                        ; 00438705
    JLE 0x0043879f                      ; 00438707
        ;   XREF to: 0043879f (CONDITIONAL_JUMP)  ; LAB_0043879f
    MOV EBX,0x825d00                    ; 0043870d | g_ClipperOutputBuffer
    MOV EAX,dword ptr [ESP + 0x18]      ; 00438712
        ;   Label: LAB_00438712
    MOV EBP,dword ptr [0x00825cf4]      ; 00438716 | g_OutputVertexCount
    INC EAX                             ; 0043871c
    CMP EAX,EBP                         ; 0043871d
    JNZ 0x00438723                      ; 0043871f
        ;   XREF to: 00438723 (CONDITIONAL_JUMP)  ; LAB_00438723
    XOR EAX,EBP                         ; 00438721
    IMUL EAX,EAX,0x30                   ; 00438723
        ;   Label: LAB_00438723
    MOV EBP,0x825d00                    ; 00438726 | g_ClipperOutputBuffer
    MOV EDX,EBX                         ; 0043872b | g_ClipperOutputBuffer
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043872d | g_ClipperOutputBuffer[0].projected_vertex.transformed_z | g_ClipperOutputBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX]             ; 00438730 | g_ClipperOutputBuffer | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    NEG ECX                             ; 00438732
    ADD EBP,EAX                         ; 00438734
    XOR EAX,EAX                         ; 00438736
    CMP ECX,ESI                         ; 00438738
    JL 0x00438741                       ; 0043873a
        ;   XREF to: 00438741 (CONDITIONAL_JUMP)  ; LAB_00438741
    MOV EAX,0x1                         ; 0043873c
    MOV ECX,dword ptr [EBP + 0x8]       ; 00438741 | g_ClipperOutputBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_00438741
    MOV EDI,dword ptr [EBP]             ; 00438744 | g_ClipperOutputBuffer
    NEG ECX                             ; 00438747
    CMP ECX,EDI                         ; 00438749
    JL 0x0043874f                       ; 0043874b
        ;   XREF to: 0043874f (CONDITIONAL_JUMP)  ; LAB_0043874f
    OR AL,0x2                           ; 0043874d
    CMP EAX,0x3                         ; 0043874f
        ;   Label: LAB_0043874f
    JA 0x00438785                       ; 00438752
        ;   XREF to: 00438785 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4383e8]  ; 00438754 | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 0043875b | g_TempVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00438762
    MOV ESI,EDX                         ; 00438767
    ADD EDI,0x826900                    ; 00438769 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 0043876f | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 00438770
    SHR ECX,0x2                         ; 00438772
    MOVSD.REP ES:EDI,ESI                ; 00438775 | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperOutputBuffer
    MOV CL,AL                           ; 00438777
    AND CL,0x3                          ; 00438779
    MOVSB.REP ES:EDI,ESI                ; 0043877c | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperOutputBuffer
    POP EDI                             ; 0043877e
    INC dword ptr [0x00825cf8]          ; 0043877f | g_TempVertexCount
    MOV EDX,dword ptr [ESP + 0x18]      ; 00438785
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00825cf4]      ; 00438789 | g_OutputVertexCount
    INC EDX                             ; 0043878f
    ADD EBX,0x30                        ; 00438790
    MOV dword ptr [ESP + 0x18],EDX      ; 00438793
    CMP EDX,ECX                         ; 00438797
    JL 0x00438712                       ; 00438799
        ;   XREF to: 00438712 (CONDITIONAL_JUMP)  ; LAB_00438712
    MOV EBX,dword ptr [0x00825cf8]      ; 0043879f | g_TempVertexCount
        ;   Label: LAB_0043879f
    CMP EBX,0x3                         ; 004387a5
    JL 0x004385c0                       ; 004387a8
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    XOR ESI,ESI                         ; 004387ae
    MOV dword ptr [ESP + 0x1c],ESI      ; 004387b0
    TEST EBX,EBX                        ; 004387b4
    JLE 0x00438849                      ; 004387b6
        ;   XREF to: 00438849 (CONDITIONAL_JUMP)  ; LAB_00438849
    MOV EBX,0x826900                    ; 004387bc | g_ClipperWorkingBuffer
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004387c1
        ;   Label: LAB_004387c1
    MOV EBP,dword ptr [0x00825cf8]      ; 004387c5 | g_TempVertexCount
    INC EAX                             ; 004387cb
    CMP EAX,EBP                         ; 004387cc
    JNZ 0x004387d2                      ; 004387ce
        ;   XREF to: 004387d2 (CONDITIONAL_JUMP)  ; LAB_004387d2
    XOR EAX,EBP                         ; 004387d0
    IMUL EAX,EAX,0x30                   ; 004387d2
        ;   Label: LAB_004387d2
    MOV EBP,0x826900                    ; 004387d5 | g_ClipperWorkingBuffer
    MOV EDX,EBX                         ; 004387da | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    MOV ECX,dword ptr [EBX + 0x4]       ; 004387dc | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer[1].projected_vertex.transformed_y
    MOV ESI,dword ptr [EBX + 0x8]       ; 004387df | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z | g_ClipperWorkingBuffer[1].projected_vertex.transformed_z
    ADD EBP,EAX                         ; 004387e2
    XOR EAX,EAX                         ; 004387e4
    CMP ECX,ESI                         ; 004387e6
    JL 0x004387ef                       ; 004387e8
        ;   XREF to: 004387ef (CONDITIONAL_JUMP)  ; LAB_004387ef
    MOV EAX,0x1                         ; 004387ea
    MOV EDI,dword ptr [EBP + 0x8]       ; 004387ef | g_ClipperWorkingBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_004387ef
    CMP EDI,dword ptr [EBP + 0x4]       ; 004387f2 | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y
    JG 0x004387f9                       ; 004387f5
        ;   XREF to: 004387f9 (CONDITIONAL_JUMP)  ; LAB_004387f9
    OR AL,0x2                           ; 004387f7
    CMP EAX,0x3                         ; 004387f9
        ;   Label: LAB_004387f9
    JA 0x0043882f                       ; 004387fc
        ;   XREF to: 0043882f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4383f8]  ; 004387fe | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00825cfc],0x30 ; 00438805 | g_IntermediateVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043880c
    MOV ESI,EDX                         ; 00438811
    ADD EDI,0x826f00                    ; 00438813 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 00438819 | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 0043881a
    SHR ECX,0x2                         ; 0043881c
    MOVSD.REP ES:EDI,ESI                ; 0043881f | g_ClipperIntermediateBuffer | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer
    MOV CL,AL                           ; 00438821
    AND CL,0x3                          ; 00438823
    MOVSB.REP ES:EDI,ESI                ; 00438826 | g_ClipperIntermediateBuffer | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer
    POP EDI                             ; 00438828
    INC dword ptr [0x00825cfc]          ; 00438829 | g_IntermediateVertexCount
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043882f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00825cf8]      ; 00438833 | g_TempVertexCount
    INC EDX                             ; 00438839
    ADD EBX,0x30                        ; 0043883a | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [ESP + 0x1c],EDX      ; 0043883d
    CMP EDX,ECX                         ; 00438841
    JL 0x004387c1                       ; 00438843
        ;   XREF to: 004387c1 (CONDITIONAL_JUMP)  ; LAB_004387c1
    MOV EBX,dword ptr [0x00825cfc]      ; 00438849 | g_IntermediateVertexCount
        ;   Label: LAB_00438849
    CMP EBX,0x3                         ; 0043884f
    JL 0x004385c0                       ; 00438852
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    XOR ESI,ESI                         ; 00438858
    MOV dword ptr [ESP + 0x14],ESI      ; 0043885a
    TEST EBX,EBX                        ; 0043885e
    JLE 0x004388f9                      ; 00438860
        ;   XREF to: 004388f9 (CONDITIONAL_JUMP)  ; LAB_004388f9
    MOV EBX,0x826f00                    ; 00438866 | g_ClipperIntermediateBuffer
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043886b
        ;   Label: LAB_0043886b
    MOV EDI,dword ptr [0x00825cfc]      ; 0043886f | g_IntermediateVertexCount
    INC EAX                             ; 00438875
    CMP EAX,EDI                         ; 00438876
    JNZ 0x0043887c                      ; 00438878
        ;   XREF to: 0043887c (CONDITIONAL_JUMP)  ; LAB_0043887c
    XOR EAX,EDI                         ; 0043887a
    IMUL EAX,EAX,0x30                   ; 0043887c
        ;   Label: LAB_0043887c
    MOV EBP,0x826f00                    ; 0043887f | g_ClipperIntermediateBuffer
    MOV EDX,EBX                         ; 00438884 | g_ClipperIntermediateBuffer
    MOV ECX,dword ptr [EBX + 0x8]       ; 00438886 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_z
    MOV ESI,dword ptr [EBX + 0x4]       ; 00438889 | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_y
    NEG ECX                             ; 0043888c
    ADD EBP,EAX                         ; 0043888e
    XOR EAX,EAX                         ; 00438890
    CMP ECX,ESI                         ; 00438892
    JL 0x0043889b                       ; 00438894
        ;   XREF to: 0043889b (CONDITIONAL_JUMP)  ; LAB_0043889b
    MOV EAX,0x1                         ; 00438896
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043889b | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_z
        ;   Label: LAB_0043889b
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043889e | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y
    NEG ECX                             ; 004388a1
    CMP ECX,EDI                         ; 004388a3
    JL 0x004388a9                       ; 004388a5
        ;   XREF to: 004388a9 (CONDITIONAL_JUMP)  ; LAB_004388a9
    OR AL,0x2                           ; 004388a7
    CMP EAX,0x3                         ; 004388a9
        ;   Label: LAB_004388a9
    JA 0x004388df                       ; 004388ac
        ;   XREF to: 004388df (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x438408]  ; 004388ae | caseD_0 | caseD_3 | caseD_1
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 004388b5 | g_ClippedVertexCount
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004388bc
    MOV ESI,EDX                         ; 004388c1
    ADD EDI,0x824e28                    ; 004388c3 | g_ClippedVertexBuffer
    PUSH EDI                            ; 004388c9 | g_ClippedVertexBuffer
    MOV EAX,ECX                         ; 004388ca
    SHR ECX,0x2                         ; 004388cc
    MOVSD.REP ES:EDI,ESI                ; 004388cf | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer
    MOV CL,AL                           ; 004388d1
    AND CL,0x3                          ; 004388d3
    MOVSB.REP ES:EDI,ESI                ; 004388d6 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer
    POP EDI                             ; 004388d8
    INC dword ptr [0x00824e24]          ; 004388d9 | g_ClippedVertexCount
    MOV EDX,dword ptr [ESP + 0x14]      ; 004388df
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00825cfc]      ; 004388e3 | g_IntermediateVertexCount
    INC EDX                             ; 004388e9
    ADD EBX,0x30                        ; 004388ea
    MOV dword ptr [ESP + 0x14],EDX      ; 004388ed
    CMP EDX,ECX                         ; 004388f1
    JL 0x0043886b                       ; 004388f3
        ;   XREF to: 0043886b (CONDITIONAL_JUMP)  ; LAB_0043886b
    MOV EBX,dword ptr [0x00824e24]      ; 004388f9 | g_ClippedVertexCount
        ;   Label: LAB_004388f9
    CMP EBX,0x3                         ; 004388ff
    JL 0x004385c0                       ; 00438902
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    MOV EAX,0x824e28                    ; 00438908 | g_ClippedVertexBuffer
    XOR EBP,EBP                         ; 0043890d
    TEST EBX,EBX                        ; 0043890f
    JLE 0x004385c0                      ; 00438911
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    MOV ECX,dword ptr [EAX + 0x8]       ; 00438917 | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_00438917
    TEST ECX,ECX                        ; 0043891a
    JZ 0x00438b3c                       ; 0043891c
        ;   XREF to: 00438b3c (CONDITIONAL_JUMP)  ; LAB_00438b3c
    CMP ECX,dword ptr [EAX]             ; 00438922 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JGE 0x00438b4d                      ; 00438924
        ;   XREF to: 00438b4d (CONDITIONAL_JUMP)  ; LAB_00438b4d
    MOV dword ptr [EAX],ECX             ; 0043892a | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV EDX,dword ptr [0x00824e24]      ; 0043892c | g_ClippedVertexCount
        ;   Label: LAB_0043892c
    INC EBP                             ; 00438932
    ADD EAX,0x30                        ; 00438933
    CMP EBP,EDX                         ; 00438936
    JGE 0x004385c0                      ; 00438938
        ;   XREF to: 004385c0 (CONDITIONAL_JUMP)  ; LAB_004385c0
    JMP 0x00438917                      ; 0043893e
        ;   XREF to: 00438917 (UNCONDITIONAL_JUMP)  ; LAB_00438917
    IMUL EAX,dword ptr [0x00825cf4],0x30 ; 00438940 | g_OutputVertexCount
        ;   Label: caseD_1
    ADD EAX,0x825d00                    ; 00438947 | g_ClipperOutputBuffer
    PUSH EAX                            ; 0043894c | g_ClipperOutputBuffer
    PUSH EDX                            ; 0043894d | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 0043894e
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230 ; 0043894f
        ;   XREF to: 00437230 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cf4]      ; 00438954 | g_OutputVertexCount
    INC ESI                             ; 0043895a
    ADD ESP,0xc                         ; 0043895b
    MOV dword ptr [0x00825cf4],ESI      ; 0043895e | g_OutputVertexCount
    JMP 0x004386d6                      ; 00438964
        ;   XREF to: 004386d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cf4],0x30 ; 00438969 | g_OutputVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00438970
    MOV ESI,EDX                         ; 00438975
    ADD EDI,0x825d00                    ; 00438977 | g_ClipperOutputBuffer
    PUSH EDI                            ; 0043897d | g_ClipperOutputBuffer
    MOV EAX,ECX                         ; 0043897e
    SHR ECX,0x2                         ; 00438980
    MOVSD.REP ES:EDI,ESI                ; 00438983 | g_ClipperOutputBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer
    MOV CL,AL                           ; 00438985
    AND CL,0x3                          ; 00438987
    MOVSB.REP ES:EDI,ESI                ; 0043898a | g_ClipperOutputBuffer | g_ClipperOutputBuffer[0].projected_vertex.transformed_y | g_ClipperInputBuffer
    POP EDI                             ; 0043898c
    MOV ECX,dword ptr [0x00825cf4]      ; 0043898d | g_OutputVertexCount
    INC ECX                             ; 00438993
    MOV dword ptr [0x00825cf4],ECX      ; 00438994 | g_OutputVertexCount
    IMUL EAX,ECX,0x30                   ; 0043899a
    ADD EAX,0x825d00                    ; 0043899d | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    PUSH EAX                            ; 004389a2 | g_ClipperOutputBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 004389a3
    PUSH EDX                            ; 004389a4 | g_ClipperInputBuffer | g_ClipperInputBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230 ; 004389a5
        ;   XREF to: 00437230 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cf4]      ; 004389aa | g_OutputVertexCount
    INC EDI                             ; 004389b0
    ADD ESP,0xc                         ; 004389b1
    MOV dword ptr [0x00825cf4],EDI      ; 004389b4 | g_OutputVertexCount
    JMP 0x004386d6                      ; 004389ba
        ;   XREF to: 004386d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00825cf8],0x30 ; 004389bf | g_TempVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826900                    ; 004389c6 | g_ClipperWorkingBuffer
    PUSH EAX                            ; 004389cb | g_ClipperWorkingBuffer
    PUSH EDX                            ; 004389cc | g_ClipperOutputBuffer
    PUSH EBP                            ; 004389cd
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 004389ce
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cf8]      ; 004389d3 | g_TempVertexCount
    INC ESI                             ; 004389d9
    ADD ESP,0xc                         ; 004389da
    MOV dword ptr [0x00825cf8],ESI      ; 004389dd | g_TempVertexCount
    JMP 0x00438785                      ; 004389e3
        ;   XREF to: 00438785 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cf8],0x30 ; 004389e8 | g_TempVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004389ef
    MOV ESI,EDX                         ; 004389f4
    ADD EDI,0x826900                    ; 004389f6 | g_ClipperWorkingBuffer
    PUSH EDI                            ; 004389fc | g_ClipperWorkingBuffer
    MOV EAX,ECX                         ; 004389fd
    SHR ECX,0x2                         ; 004389ff
    MOVSD.REP ES:EDI,ESI                ; 00438a02 | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperOutputBuffer
    MOV CL,AL                           ; 00438a04
    AND CL,0x3                          ; 00438a06
    MOVSB.REP ES:EDI,ESI                ; 00438a09 | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[0].projected_vertex.transformed_y | g_ClipperOutputBuffer
    POP EDI                             ; 00438a0b
    MOV ECX,dword ptr [0x00825cf8]      ; 00438a0c | g_TempVertexCount
    INC ECX                             ; 00438a12
    MOV dword ptr [0x00825cf8],ECX      ; 00438a13 | g_TempVertexCount
    IMUL EAX,ECX,0x30                   ; 00438a19
    ADD EAX,0x826900                    ; 00438a1c | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EAX                            ; 00438a21 | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00438a22
    PUSH EDX                            ; 00438a23 | g_ClipperOutputBuffer
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360 ; 00438a24
        ;   XREF to: 00437360 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cf8]      ; 00438a29 | g_TempVertexCount
    INC EDI                             ; 00438a2f
    ADD ESP,0xc                         ; 00438a30
    MOV dword ptr [0x00825cf8],EDI      ; 00438a33 | g_TempVertexCount
    JMP 0x00438785                      ; 00438a39
        ;   XREF to: 00438785 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00825cfc],0x30 ; 00438a3e | g_IntermediateVertexCount
        ;   Label: caseD_1
    ADD EAX,0x826f00                    ; 00438a45 | g_ClipperIntermediateBuffer
    PUSH EAX                            ; 00438a4a | g_ClipperIntermediateBuffer
    PUSH EDX                            ; 00438a4b | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00438a4c
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490 ; 00438a4d
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00825cfc]      ; 00438a52 | g_IntermediateVertexCount
    INC ESI                             ; 00438a58
    ADD ESP,0xc                         ; 00438a59
    MOV dword ptr [0x00825cfc],ESI      ; 00438a5c | g_IntermediateVertexCount
    JMP 0x0043882f                      ; 00438a62
        ;   XREF to: 0043882f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00825cfc],0x30 ; 00438a67 | g_IntermediateVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00438a6e
    MOV ESI,EDX                         ; 00438a73
    ADD EDI,0x826f00                    ; 00438a75 | g_ClipperIntermediateBuffer
    PUSH EDI                            ; 00438a7b | g_ClipperIntermediateBuffer
    MOV EAX,ECX                         ; 00438a7c
    SHR ECX,0x2                         ; 00438a7e
    MOVSD.REP ES:EDI,ESI                ; 00438a81 | g_ClipperIntermediateBuffer | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer
    MOV CL,AL                           ; 00438a83
    AND CL,0x3                          ; 00438a85
    MOVSB.REP ES:EDI,ESI                ; 00438a88 | g_ClipperIntermediateBuffer | g_ClipperIntermediateBuffer[0].projected_vertex.transformed_y | g_ClipperWorkingBuffer
    POP EDI                             ; 00438a8a
    MOV ECX,dword ptr [0x00825cfc]      ; 00438a8b | g_IntermediateVertexCount
    INC ECX                             ; 00438a91
    MOV dword ptr [0x00825cfc],ECX      ; 00438a92 | g_IntermediateVertexCount
    IMUL EAX,ECX,0x30                   ; 00438a98
    ADD EAX,0x826f00                    ; 00438a9b | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_x
    PUSH EAX                            ; 00438aa0 | g_ClipperIntermediateBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00438aa1
    PUSH EDX                            ; 00438aa2 | g_ClipperWorkingBuffer | g_ClipperWorkingBuffer[1].projected_vertex.transformed_x
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490 ; 00438aa3
        ;   XREF to: 00437490 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00825cfc]      ; 00438aa8 | g_IntermediateVertexCount
    INC EDI                             ; 00438aae
    ADD ESP,0xc                         ; 00438aaf
    MOV dword ptr [0x00825cfc],EDI      ; 00438ab2 | g_IntermediateVertexCount
    JMP 0x0043882f                      ; 00438ab8
        ;   XREF to: 0043882f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00824e24],0x30 ; 00438abd | g_ClippedVertexCount
        ;   Label: caseD_1
    ADD EAX,0x824e28                    ; 00438ac4 | g_ClippedVertexBuffer
    PUSH EAX                            ; 00438ac9 | g_ClippedVertexBuffer
    PUSH EDX                            ; 00438aca | g_ClipperIntermediateBuffer
    PUSH EBP                            ; 00438acb
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0 ; 00438acc
        ;   XREF to: 004375c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00824e24]      ; 00438ad1 | g_ClippedVertexCount
    INC ESI                             ; 00438ad7
    ADD ESP,0xc                         ; 00438ad8
    MOV dword ptr [0x00824e24],ESI      ; 00438adb | g_ClippedVertexCount
    JMP 0x004388df                      ; 00438ae1
        ;   XREF to: 004388df (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00824e24],0x30 ; 00438ae6 | g_ClippedVertexCount
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00438aed
    MOV ESI,EDX                         ; 00438af2
    ADD EDI,0x824e28                    ; 00438af4 | g_ClippedVertexBuffer
    PUSH EDI                            ; 00438afa | g_ClippedVertexBuffer
    MOV EAX,ECX                         ; 00438afb
    SHR ECX,0x2                         ; 00438afd
    MOVSD.REP ES:EDI,ESI                ; 00438b00 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer
    MOV CL,AL                           ; 00438b02
    AND CL,0x3                          ; 00438b04
    MOVSB.REP ES:EDI,ESI                ; 00438b07 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClipperIntermediateBuffer
    POP EDI                             ; 00438b09
    MOV ECX,dword ptr [0x00824e24]      ; 00438b0a | g_ClippedVertexCount
    INC ECX                             ; 00438b10
    MOV dword ptr [0x00824e24],ECX      ; 00438b11 | g_ClippedVertexCount
    IMUL EAX,ECX,0x30                   ; 00438b17
    ADD EAX,0x824e28                    ; 00438b1a | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EAX                            ; 00438b1f | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    PUSH EBP                            ; 00438b20
    PUSH EDX                            ; 00438b21 | g_ClipperIntermediateBuffer
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0 ; 00438b22
        ;   XREF to: 004375c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00824e24]      ; 00438b27 | g_ClippedVertexCount
    INC EDI                             ; 00438b2d
    ADD ESP,0xc                         ; 00438b2e
    MOV dword ptr [0x00824e24],EDI      ; 00438b31 | g_ClippedVertexCount
    JMP 0x004388df                      ; 00438b37
        ;   XREF to: 004388df (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 00438b3c | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_00438b3c
    MOV dword ptr [EAX],ECX             ; 00438b43 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    MOV dword ptr [EAX + 0x4],ECX       ; 00438b45 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x0043892c                      ; 00438b48
        ;   XREF to: 0043892c (UNCONDITIONAL_JUMP)  ; LAB_0043892c
    MOV EDX,ECX                         ; 00438b4d
        ;   Label: LAB_00438b4d
    MOV ESI,dword ptr [EAX]             ; 00438b4f | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    NEG EDX                             ; 00438b51
    CMP EDX,ESI                         ; 00438b53
    JLE 0x00438b5e                      ; 00438b55
        ;   XREF to: 00438b5e (CONDITIONAL_JUMP)  ; LAB_00438b5e
    MOV dword ptr [EAX],EDX             ; 00438b57 | g_ClippedVertexBuffer | g_ClippedVertexBuffer[1].projected_vertex.transformed_x
    JMP 0x0043892c                      ; 00438b59
        ;   XREF to: 0043892c (UNCONDITIONAL_JUMP)  ; LAB_0043892c
    MOV EDI,dword ptr [EAX + 0x8]       ; 00438b5e | g_ClippedVertexBuffer[0].projected_vertex.transformed_z | g_ClippedVertexBuffer[1].projected_vertex.transformed_z
        ;   Label: LAB_00438b5e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00438b61 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    CMP ECX,EDI                         ; 00438b64
    JLE 0x00438b70                      ; 00438b66
        ;   XREF to: 00438b70 (CONDITIONAL_JUMP)  ; LAB_00438b70
    MOV dword ptr [EAX + 0x4],EDI       ; 00438b68 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x0043892c                      ; 00438b6b
        ;   XREF to: 0043892c (UNCONDITIONAL_JUMP)  ; LAB_0043892c
    CMP EDX,ECX                         ; 00438b70
        ;   Label: LAB_00438b70
    JLE 0x0043892c                      ; 00438b72
        ;   XREF to: 0043892c (CONDITIONAL_JUMP)  ; LAB_0043892c
    MOV dword ptr [EAX + 0x4],EDX       ; 00438b78 | g_ClippedVertexBuffer[0].projected_vertex.transformed_y | g_ClippedVertexBuffer[1].projected_vertex.transformed_y
    JMP 0x0043892c                      ; 00438b7b
        ;   XREF to: 0043892c (UNCONDITIONAL_JUMP)  ; LAB_0043892c

