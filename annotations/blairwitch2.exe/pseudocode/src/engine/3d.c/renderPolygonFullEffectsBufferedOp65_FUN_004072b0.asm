; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0 at 00407b97
;
; Referenced Globals:
;   int g_INT_006141c0 = 0x8
;   int g_CurrentAlphaValue = 0xff
;   SRenderVertex[20000] g_SRenderVertex_ARRAY_00622014
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].projected_vertex.transformed_y
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].v
;   uint g_ProcessedVertexOffset
;   int[24] g_ProcessedVertexIndices
;   undefined4 g_ProcessedVertexIndices[1]
;   int g_RenderBufferEnabled
;   int g_RenderBufferCount
;   SRenderBufferEntry[256] g_RenderBufferPool
;   undefined4 g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_x
;   undefined4 g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_y
;   undefined4 g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_z
;   ... and 11 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_texture.cpp_getCurrentTexture_FUN_005750e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004072b0
        ;   Label: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_004072b0
    PUSH ESI                            ; 004072b1
    PUSH EDI                            ; 004072b2
    PUSH EBP                            ; 004072b3
    SUB ESP,0x8                         ; 004072b4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004072b7
    LEA ESI,[EBP + 0x18]                ; 004072bb
    LEA EAX,[EBP + 0x8]                 ; 004072be
    PUSH EAX                            ; 004072c1
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004072c2
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 004072c7
    TEST EAX,EAX                        ; 004072ca
    JZ 0x0040745f                       ; 004072cc
        ;   XREF to: 0040745f (CONDITIONAL_JUMP)  ; LAB_0040745f
    CMP dword ptr [0x01c38b40],0x0      ; 004072d2 | g_MMXSupported
    JNZ 0x00407362                      ; 004072d9
        ;   XREF to: 00407362 (CONDITIONAL_JUMP)  ; LAB_00407362
    CMP dword ptr [0x006141c0],0x20     ; 004072df | g_INT_006141c0
    JNZ 0x00407356                      ; 004072e6
        ;   XREF to: 00407356 (CONDITIONAL_JUMP)  ; LAB_00407356
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004072e8 | g_ScanlineRenderFunc
    MOV EBX,0x1e7                       ; 004072f2
        ;   Label: LAB_004072f2
    MOV EDI,0x1                         ; 004072f7
    MOV ECX,0x70ca98                    ; 004072fc | g_ProcessedVertexIndices
    MOV EAX,ESI                         ; 00407301
    MOV dword ptr [0x01c38b54],EBX      ; 00407303 | g_RenderStateFlags
    MOV dword ptr [0x01c38b58],EDI      ; 00407309 | g_VertexPreprocessMode
    XOR EBX,EBX                         ; 0040730f
    MOV EDX,dword ptr [EBP + 0x4]       ; 00407311
        ;   Label: LAB_00407311
    LEA EDX,[EDX + EDX*0x2]             ; 00407314
    CMP EBX,EDX                         ; 00407317
    JGE 0x00407389                      ; 00407319
        ;   XREF to: 00407389 (CONDITIONAL_JUMP)  ; LAB_00407389
    MOV ESI,dword ptr [0x0070ca60]      ; 0040731b | g_ProcessedVertexOffset
    MOV EDX,dword ptr [EAX]             ; 00407321
    ADD EDX,ESI                         ; 00407323
    MOV dword ptr [ECX],EDX             ; 00407325 | g_ProcessedVertexIndices | g_ProcessedVertexIndices[1]
    MOV EDX,dword ptr [EAX]             ; 00407327
    ADD EDX,ESI                         ; 00407329
    MOV EDI,ESI                         ; 0040732b
    IMUL ESI,EDX,0x30                   ; 0040732d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00407330
    MOV dword ptr [ESI + 0x62202c],EDX  ; 00407333 | g_SRenderVertex_ARRAY_00622014[0].u
    MOV ESI,EDI                         ; 00407339
    MOV EDX,dword ptr [EAX]             ; 0040733b
    ADD EDX,ESI                         ; 0040733d
    IMUL ESI,EDX,0x30                   ; 0040733f
    ADD EAX,0xc                         ; 00407342
    ADD ECX,0x4                         ; 00407345
    MOV EDX,dword ptr [EAX + -0x4]      ; 00407348
    ADD EBX,0x3                         ; 0040734b
    MOV dword ptr [ESI + 0x622030],EDX  ; 0040734e | g_SRenderVertex_ARRAY_00622014[0].v
    JMP 0x00407311                      ; 00407354
        ;   XREF to: 00407311 (UNCONDITIONAL_JUMP)  ; LAB_00407311
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00407356 | g_ScanlineRenderFunc
        ;   Label: LAB_00407356
    JMP 0x004072f2                      ; 00407360
        ;   XREF to: 004072f2 (UNCONDITIONAL_JUMP)  ; LAB_004072f2
    CMP dword ptr [0x006141c0],0x20     ; 00407362 | g_INT_006141c0
        ;   Label: LAB_00407362
    JNZ 0x0040737a                      ; 00407369
        ;   XREF to: 0040737a (CONDITIONAL_JUMP)  ; LAB_0040737a
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040736b | g_ScanlineRenderFunc
    JMP 0x004072f2                      ; 00407375
        ;   XREF to: 004072f2 (UNCONDITIONAL_JUMP)  ; LAB_004072f2
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0040737a | g_ScanlineRenderFunc
        ;   Label: LAB_0040737a
    JMP 0x004072f2                      ; 00407384
        ;   XREF to: 004072f2 (UNCONDITIONAL_JUMP)  ; LAB_004072f2
    CMP dword ptr [0x0070caf8],0x0      ; 00407389 | g_RenderBufferEnabled
        ;   Label: LAB_00407389
    JZ 0x0040747b                       ; 00407390
        ;   XREF to: 0040747b (CONDITIONAL_JUMP)  ; LAB_0040747b
    MOV EDX,dword ptr [0x0070cafc]      ; 00407396 | g_RenderBufferCount
    CMP EDX,0x9c4                       ; 0040739c
    JGE 0x0040747b                      ; 004073a2
        ;   XREF to: 0040747b (CONDITIONAL_JUMP)  ; LAB_0040747b
    MOV ECX,dword ptr [EBP + 0x4]       ; 004073a8
    CMP ECX,0x4                         ; 004073ab
    JG 0x0040747b                       ; 004073ae
        ;   XREF to: 0040747b (CONDITIONAL_JUMP)  ; LAB_0040747b
    MOV ESI,0x7fffffff                  ; 004073b4
    LEA EAX,[EDX*0x8 + 0x0]             ; 004073b9
    MOV EDI,dword ptr [0x0070cafc]      ; 004073c0 | g_RenderBufferCount
    ADD EAX,EDX                         ; 004073c6
    XOR EBX,EBX                         ; 004073c8
    SHL EAX,0x2                         ; 004073ca
    MOV dword ptr [ESP + 0x4],ESI       ; 004073cd
    SUB EAX,EDX                         ; 004073d1
    MOV EDX,0x70cb00                    ; 004073d3 | g_RenderBufferPool
    SHL EAX,0x3                         ; 004073d8
    INC EDI                             ; 004073db
    ADD EDX,EAX                         ; 004073dc
    MOV dword ptr [0x0070cafc],EDI      ; 004073de | g_RenderBufferCount
    MOV dword ptr [ESP],EDX             ; 004073e4
    MOV dword ptr [EDX],ECX             ; 004073e7 | g_RenderBufferPool
    TEST ECX,ECX                        ; 004073e9
    JLE 0x00407425                      ; 004073eb
        ;   XREF to: 00407425 (CONDITIONAL_JUMP)  ; LAB_00407425
    MOV EAX,EDX                         ; 004073ed
    XOR EDX,EDX                         ; 004073ef
    IMUL ESI,dword ptr [EDX + 0x70ca98],0x30 ; 004073f1 | g_ProcessedVertexIndices | g_ProcessedVertexIndices[1]
        ;   Label: LAB_004073f1
    LEA EDI,[EAX + 0x4]                 ; 004073f8
    MOV ECX,0xc                         ; 004073fb
    LEA ESI,[ESI + 0x622014]            ; 00407400 | g_SRenderVertex_ARRAY_00622014
    MOVSD.REP ES:EDI,ESI                ; 00407406 | g_SRenderVertex_ARRAY_00622014 | g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_x | g_SRenderVertex_ARRAY_00622014[0].projected_vertex.transformed_y
    MOV ESI,dword ptr [ESP + 0x4]       ; 00407408
    MOV ECX,dword ptr [EAX + 0xc]       ; 0040740c | g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_z
    CMP ECX,ESI                         ; 0040740f
    JGE 0x00407417                      ; 00407411
        ;   XREF to: 00407417 (CONDITIONAL_JUMP)  ; LAB_00407417
    MOV dword ptr [ESP + 0x4],ECX       ; 00407413
    ADD EAX,0x30                        ; 00407417
        ;   Label: LAB_00407417
    INC EBX                             ; 0040741a
    MOV EDI,dword ptr [EBP + 0x4]       ; 0040741b
    ADD EDX,0x4                         ; 0040741e
    CMP EBX,EDI                         ; 00407421
    JL 0x004073f1                       ; 00407423
        ;   XREF to: 004073f1 (CONDITIONAL_JUMP)  ; LAB_004073f1
    CALL engine_texture.cpp_getCurrentTexture_FUN_005750e0 ; 00407425
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_getCurrentTexture_FUN_005750e0()
        ;   Label: LAB_00407425
    MOV EDI,dword ptr [ESP]             ; 0040742a
    MOV ECX,0x12                        ; 0040742d
    MOV ESI,EAX                         ; 00407432
    LEA EDI,[EDI + 0xc4]                ; 00407434
    MOV EDX,dword ptr [ESP]             ; 0040743a
    MOV EAX,[0x006141d8]                ; 0040743d | g_CurrentAlphaValue
    MOVSD.REP ES:EDI,ESI                ; 00407442 | g_RenderBufferPool[0].texture_data.base.type | g_RenderBufferPool[0].texture_data.base.count
    MOV dword ptr [EDX + 0x10c],EAX     ; 00407444 | g_RenderBufferPool[0].alpha_value
    MOV EAX,[0x01c38b4c]                ; 0040744a | g_BlendMode
    MOV dword ptr [EDX + 0x110],EAX     ; 0040744f | g_RenderBufferPool[0].blend_mode
    MOV EAX,dword ptr [ESP + 0x4]       ; 00407455
    MOV dword ptr [EDX + 0x114],EAX     ; 00407459 | g_RenderBufferPool[0].min_z_value
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040745f
        ;   Label: LAB_0040745f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00407462
    SUB EAX,EDX                         ; 00407469
    ADD EBP,0x18                        ; 0040746b
    SHL EAX,0x2                         ; 0040746e
    ADD EAX,EBP                         ; 00407471
    ADD ESP,0x8                         ; 00407473
    POP EBP                             ; 00407476
    POP EDI                             ; 00407477
    POP ESI                             ; 00407478
    POP EBX                             ; 00407479
    RET                                 ; 0040747a
    PUSH 0x70ca98                       ; 0040747b | g_ProcessedVertexIndices
        ;   Label: LAB_0040747b
    MOV EBX,dword ptr [EBP + 0x4]       ; 00407480
    PUSH EBX                            ; 00407483
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00407484
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407489
    JMP 0x0040745f                      ; 0040748c
        ;   XREF to: 0040745f (UNCONDITIONAL_JUMP)  ; LAB_0040745f

