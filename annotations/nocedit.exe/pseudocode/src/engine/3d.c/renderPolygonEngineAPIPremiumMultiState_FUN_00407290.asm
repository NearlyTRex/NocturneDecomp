; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407c47
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   uint g_ProcessedVertexOffset
;   int[24] g_ProcessedVertexIndices
;   undefined4 g_ProcessedVertexIndices[1]
;   int g_RenderBufferEnabled
;   int g_RenderBufferCount
;   SRenderBufferEntry[256] g_RenderBufferPool
;   undefined4 g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_z
;   undefined4 g_RenderBufferPool[0].vertices[1].projected_vertex.transformed_z
;   undefined4 g_RenderBufferPool[0].texture_data[0]
;   undefined4 g_RenderBufferPool[0].texture_data[1]
;   undefined4 g_RenderBufferPool[0].alpha_value
;   ... and 7 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407290
        ;   Label: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290
    PUSH ESI                            ; 00407291
    PUSH EDI                            ; 00407292
    PUSH EBP                            ; 00407293
    SUB ESP,0x8                         ; 00407294
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00407297
    LEA ESI,[EBP + 0x18]                ; 0040729b
    LEA EAX,[EBP + 0x8]                 ; 0040729e
    PUSH EAX                            ; 004072a1
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004072a2
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004072a7
    TEST EAX,EAX                        ; 004072aa
    JZ 0x0040743f                       ; 004072ac
        ;   XREF to: 0040743f (CONDITIONAL_JUMP)  ; LAB_0040743f
    CMP dword ptr [0x02d05248],0x0      ; 004072b2 | g_MMXSupported
    JNZ 0x00407342                      ; 004072b9
        ;   XREF to: 00407342 (CONDITIONAL_JUMP)  ; LAB_00407342
    CMP dword ptr [0x0067939c],0x20     ; 004072bf | g_BitsPerPixel
    JNZ 0x00407336                      ; 004072c6
        ;   XREF to: 00407336 (CONDITIONAL_JUMP)  ; LAB_00407336
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004072c8 | g_ScanlineRenderFunc
    MOV EBX,0x1e7                       ; 004072d2
        ;   Label: LAB_004072d2
    MOV EDI,0x1                         ; 004072d7
    MOV ECX,0x772a98                    ; 004072dc | g_ProcessedVertexIndices
    MOV EAX,ESI                         ; 004072e1
    MOV dword ptr [0x02d052a0],EBX      ; 004072e3 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 004072e9 | g_RenderStateFlag2
    XOR EBX,EBX                         ; 004072ef
    MOV EDX,dword ptr [EBP + 0x4]       ; 004072f1
        ;   Label: LAB_004072f1
    LEA EDX,[EDX + EDX*0x2]             ; 004072f4
    CMP EBX,EDX                         ; 004072f7
    JGE 0x00407369                      ; 004072f9
        ;   XREF to: 00407369 (CONDITIONAL_JUMP)  ; LAB_00407369
    MOV ESI,dword ptr [0x00772a60]      ; 004072fb | g_ProcessedVertexOffset
    MOV EDX,dword ptr [EAX]             ; 00407301
    ADD EDX,ESI                         ; 00407303
    MOV dword ptr [ECX],EDX             ; 00407305 | g_ProcessedVertexIndices | g_ProcessedVertexIndices[1]
    MOV EDX,dword ptr [EAX]             ; 00407307
    ADD EDX,ESI                         ; 00407309
    MOV EDI,ESI                         ; 0040730b
    IMUL ESI,EDX,0x30                   ; 0040730d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00407310
    MOV dword ptr [ESI + 0x68802c],EDX  ; 00407313 | g_RenderVertexBuffer[0].u
    MOV ESI,EDI                         ; 00407319
    MOV EDX,dword ptr [EAX]             ; 0040731b
    ADD EDX,ESI                         ; 0040731d
    IMUL ESI,EDX,0x30                   ; 0040731f
    ADD EAX,0xc                         ; 00407322
    ADD ECX,0x4                         ; 00407325 | g_ProcessedVertexIndices[1]
    MOV EDX,dword ptr [EAX + -0x4]      ; 00407328
    ADD EBX,0x3                         ; 0040732b
    MOV dword ptr [ESI + 0x688030],EDX  ; 0040732e | g_RenderVertexBuffer[0].v
    JMP 0x004072f1                      ; 00407334
        ;   XREF to: 004072f1 (UNCONDITIONAL_JUMP)  ; LAB_004072f1
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00407336 | g_ScanlineRenderFunc
        ;   Label: LAB_00407336
    JMP 0x004072d2                      ; 00407340
        ;   XREF to: 004072d2 (UNCONDITIONAL_JUMP)  ; LAB_004072d2
    CMP dword ptr [0x0067939c],0x20     ; 00407342 | g_BitsPerPixel
        ;   Label: LAB_00407342
    JNZ 0x0040735a                      ; 00407349
        ;   XREF to: 0040735a (CONDITIONAL_JUMP)  ; LAB_0040735a
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040734b | g_ScanlineRenderFunc
    JMP 0x004072d2                      ; 00407355
        ;   XREF to: 004072d2 (UNCONDITIONAL_JUMP)  ; LAB_004072d2
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040735a | g_ScanlineRenderFunc
        ;   Label: LAB_0040735a
    JMP 0x004072d2                      ; 00407364
        ;   XREF to: 004072d2 (UNCONDITIONAL_JUMP)  ; LAB_004072d2
    CMP dword ptr [0x00772af8],0x0      ; 00407369 | g_RenderBufferEnabled
        ;   Label: LAB_00407369
    JZ 0x0040745b                       ; 00407370
        ;   XREF to: 0040745b (CONDITIONAL_JUMP)  ; LAB_0040745b
    MOV EDX,dword ptr [0x00772afc]      ; 00407376 | g_RenderBufferCount
    CMP EDX,0x9c4                       ; 0040737c
    JGE 0x0040745b                      ; 00407382
        ;   XREF to: 0040745b (CONDITIONAL_JUMP)  ; LAB_0040745b
    MOV ECX,dword ptr [EBP + 0x4]       ; 00407388
    CMP ECX,0x4                         ; 0040738b
    JG 0x0040745b                       ; 0040738e
        ;   XREF to: 0040745b (CONDITIONAL_JUMP)  ; LAB_0040745b
    MOV ESI,0x7fffffff                  ; 00407394
    LEA EAX,[EDX*0x8 + 0x0]             ; 00407399
    MOV EDI,dword ptr [0x00772afc]      ; 004073a0 | g_RenderBufferCount
    ADD EAX,EDX                         ; 004073a6
    XOR EBX,EBX                         ; 004073a8
    SHL EAX,0x2                         ; 004073aa
    MOV dword ptr [ESP + 0x4],ESI       ; 004073ad
    SUB EAX,EDX                         ; 004073b1
    MOV EDX,0x772b00                    ; 004073b3 | g_RenderBufferPool
    SHL EAX,0x3                         ; 004073b8
    INC EDI                             ; 004073bb
    ADD EDX,EAX                         ; 004073bc
    MOV dword ptr [0x00772afc],EDI      ; 004073be | g_RenderBufferCount
    MOV dword ptr [ESP],EDX             ; 004073c4
    MOV dword ptr [EDX],ECX             ; 004073c7 | g_RenderBufferPool
    TEST ECX,ECX                        ; 004073c9
    JLE 0x00407405                      ; 004073cb
        ;   XREF to: 00407405 (CONDITIONAL_JUMP)  ; LAB_00407405
    MOV EAX,EDX                         ; 004073cd
    XOR EDX,EDX                         ; 004073cf
    IMUL ESI,dword ptr [EDX + 0x772a98],0x30 ; 004073d1 | g_ProcessedVertexIndices | g_ProcessedVertexIndices[1]
        ;   Label: LAB_004073d1
    LEA EDI,[EAX + 0x4]                 ; 004073d8
    JMP 0x03fc3820                      ; 004073db
        ;   XREF to: 03fc3820 (UNCONDITIONAL_JUMP)  ; LAB_03fc3820
    MOV ESI,dword ptr [ESP + 0x4]       ; 004073e8
        ;   Label: LAB_004073e8
    MOV ECX,dword ptr [EAX + 0xc]       ; 004073ec | g_RenderBufferPool[0].vertices[0].projected_vertex.transformed_z | g_RenderBufferPool[0].vertices[1].projected_vertex.transformed_z
    CMP ECX,ESI                         ; 004073ef
    JGE 0x004073f7                      ; 004073f1
        ;   XREF to: 004073f7 (CONDITIONAL_JUMP)  ; LAB_004073f7
    MOV dword ptr [ESP + 0x4],ECX       ; 004073f3
    ADD EAX,0x30                        ; 004073f7
        ;   Label: LAB_004073f7
    INC EBX                             ; 004073fa
    MOV EDI,dword ptr [EBP + 0x4]       ; 004073fb
    ADD EDX,0x4                         ; 004073fe
    CMP EBX,EDI                         ; 00407401
    JL 0x004073d1                       ; 00407403
        ;   XREF to: 004073d1 (CONDITIONAL_JUMP)  ; LAB_004073d1
    CALL engine_texture.cpp_getCurrentTexture_FUN_005dd9c0 ; 00407405
        ;   XREF to: 005dd9c0 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_getCurrentTexture_FUN_005dd9c0()
        ;   Label: LAB_00407405
    MOV EDI,dword ptr [ESP]             ; 0040740a
    MOV ECX,0x12                        ; 0040740d
    MOV ESI,EAX                         ; 00407412
    LEA EDI,[EDI + 0xc4]                ; 00407414
    MOV EDX,dword ptr [ESP]             ; 0040741a
    MOV EAX,[0x006793b4]                ; 0040741d | g_CurrentAlphaValue
    MOVSD.REP ES:EDI,ESI                ; 00407422 | g_RenderBufferPool[0].texture_data[0] | g_RenderBufferPool[0].texture_data[1]
    MOV dword ptr [EDX + 0x10c],EAX     ; 00407424 | g_RenderBufferPool[0].alpha_value
    MOV EAX,[0x02d05298]                ; 0040742a | g_BlendMode
    MOV dword ptr [EDX + 0x110],EAX     ; 0040742f | g_RenderBufferPool[0].blend_mode
    MOV EAX,dword ptr [ESP + 0x4]       ; 00407435
    MOV dword ptr [EDX + 0x114],EAX     ; 00407439 | g_RenderBufferPool[0].min_z_value
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040743f
        ;   Label: LAB_0040743f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00407442
    SUB EAX,EDX                         ; 00407449
    ADD EBP,0x18                        ; 0040744b
    SHL EAX,0x2                         ; 0040744e
    ADD EAX,EBP                         ; 00407451
    ADD ESP,0x8                         ; 00407453
    POP EBP                             ; 00407456
    POP EDI                             ; 00407457
    POP ESI                             ; 00407458
    POP EBX                             ; 00407459
    RET                                 ; 0040745a
    PUSH 0x772a98                       ; 0040745b | g_ProcessedVertexIndices
        ;   Label: LAB_0040745b
    MOV EBX,dword ptr [EBP + 0x4]       ; 00407460
    PUSH EBX                            ; 00407463
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00407464
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407469
    JMP 0x0040743f                      ; 0040746c
        ;   XREF to: 0040743f (UNCONDITIONAL_JUMP)  ; LAB_0040743f
    MOV ECX,0xc                         ; 03fc3820
        ;   Label: LAB_03fc3820
    LEA ESI,[ESI + 0x688014]            ; 03fc3825
    MOV ECX,dword ptr [ESI]             ; 03fc382b
    MOV dword ptr [EDI],ECX             ; 03fc382d
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc382f
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3832
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3835
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3838
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc383b
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc383e
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3841
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3844
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3847
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc384a
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc384d
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3850
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3853
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3856
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3859
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc385c
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc385f
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3862
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3865
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3868
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc386b
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc386e
    ADD ESI,0x30                        ; 03fc3871
    ADD EDI,0x30                        ; 03fc3874
    XOR ECX,ECX                         ; 03fc3877
    JMP 0x004073e8                      ; 03fc3879
        ;   XREF to: 004073e8 (UNCONDITIONAL_JUMP)  ; LAB_004073e8

