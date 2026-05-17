; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer *this_ptr,int vertex_count,int *vertex_indices)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int *            Stack[0xc]:4   vertex_indices
;
; XREF[25]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0048aa50 at 0048aaf0
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0048b320 at 0048b3a1
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0048b1e0 at 0048b260
;   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 at 0048a859
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0048bdc0 at 0048be5e
;   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 at 0048bf84
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0048b420 at 0048b4a1
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0048b970 at 0048ba1e
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 at 0048b6c9
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 at 0048bd64
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_00621f62
;   TerminatedCString s_CDemonRenderer_clipAndFi_00621f78
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;   _BIT_INTEGER32 g_RenderStateFlags
;   undefined4 g_RenderStateFlags+1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_transformAndClipGeometry_FUN_005f8550
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
;   engine_drender.cpp_renderTriangleTextured_FUN_00483370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a740
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
    PUSH ESI                            ; 0048a741
    PUSH EDI                            ; 0048a742
    PUSH EBP                            ; 0048a743
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048a744
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048a748
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048a74c
    CMP dword ptr [EDI + 0x8],0x0       ; 0048a750
    JNZ 0x0048a783                      ; 0048a754
        ;   XREF to: 0048a783 (CONDITIONAL_JUMP)  ; LAB_0048a783
    CMP dword ptr [EDI + 0x10],0x0      ; 0048a756
        ;   Label: LAB_0048a756
    JNZ 0x0048a7b1                      ; 0048a75a
        ;   XREF to: 0048a7b1 (CONDITIONAL_JUMP)  ; LAB_0048a7b1
    CMP dword ptr [EDI + 0x4],0x0       ; 0048a75c
    JZ 0x0048a76b                       ; 0048a760
        ;   XREF to: 0048a76b (CONDITIONAL_JUMP)  ; LAB_0048a76b
    TEST byte ptr [0x02d052a0],0x1      ; 0048a762 | g_RenderStateFlags
    JZ 0x0048a774                       ; 0048a769
        ;   XREF to: 0048a774 (CONDITIONAL_JUMP)  ; LAB_0048a774
    TEST byte ptr [0x02d052a0],0x5      ; 0048a76b | g_RenderStateFlags
        ;   Label: LAB_0048a76b
    JNZ 0x0048a7a8                      ; 0048a772
        ;   XREF to: 0048a7a8 (CONDITIONAL_JUMP)  ; LAB_0048a7a8
    PUSH EBX                            ; 0048a774
        ;   Label: LAB_0048a774
    PUSH ESI                            ; 0048a775
    CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0 ; 0048a776
        ;   XREF to: 004839f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleSimple_FUN_004839f0(CVector3i * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0048a77b
        ;   Label: LAB_0048a77b
    POP EBP                             ; 0048a77e
        ;   Label: LAB_0048a77e
    POP EDI                             ; 0048a77f
    POP ESI                             ; 0048a780
    POP EBX                             ; 0048a781
    RET                                 ; 0048a782
    MOV ECX,0x621f62                    ; 0048a783 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_0048a783
    MOV EBP,0xad                        ; 0048a788
    PUSH 0x621f78                       ; 0048a78d | = "CDemonRenderer::clipAndFillPoly - Bad..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0048a792 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0048a798 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048a79e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048a7a3
    JMP 0x0048a756                      ; 0048a7a6
        ;   XREF to: 0048a756 (UNCONDITIONAL_JUMP)  ; LAB_0048a756
    PUSH EBX                            ; 0048a7a8
        ;   Label: LAB_0048a7a8
    PUSH ESI                            ; 0048a7a9
    CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370 ; 0048a7aa
        ;   XREF to: 00483370 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_renderTriangleTextured_FUN_00483370(int * vertex_indices, int vertex_count)
    JMP 0x0048a77b                      ; 0048a7af
        ;   XREF to: 0048a77b (UNCONDITIONAL_JUMP)  ; LAB_0048a77b
    CMP dword ptr [EDI + 0x4],0x0       ; 0048a7b1
        ;   Label: LAB_0048a7b1
    JZ 0x0048a7c0                       ; 0048a7b5
        ;   XREF to: 0048a7c0 (CONDITIONAL_JUMP)  ; LAB_0048a7c0
    TEST byte ptr [0x02d052a0],0x1      ; 0048a7b7 | g_RenderStateFlags
    JZ 0x0048a7e1                       ; 0048a7be
        ;   XREF to: 0048a7e1 (CONDITIONAL_JUMP)  ; LAB_0048a7e1
    TEST byte ptr [0x02d052a0],0x5      ; 0048a7c0 | g_RenderStateFlags
        ;   Label: LAB_0048a7c0
    JZ 0x0048a7e1                       ; 0048a7c7
        ;   XREF to: 0048a7e1 (CONDITIONAL_JUMP)  ; LAB_0048a7e1
    TEST byte ptr [0x02d052a1],0x2      ; 0048a7c9 | g_RenderStateFlags+1
    JZ 0x0048a809                       ; 0048a7d0
        ;   XREF to: 0048a809 (CONDITIONAL_JUMP)  ; LAB_0048a809
    PUSH ESI                            ; 0048a7d2
    PUSH EBX                            ; 0048a7d3
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 0048a7d4
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0048a7d9
    POP EBP                             ; 0048a7dc
    POP EDI                             ; 0048a7dd
    POP ESI                             ; 0048a7de
    POP EBX                             ; 0048a7df
    RET                                 ; 0048a7e0
    PUSH ESI                            ; 0048a7e1
        ;   Label: LAB_0048a7e1
    PUSH EBX                            ; 0048a7e2
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005f8550 ; 0048a7e3
        ;   XREF to: 005f8550 (UNCONDITIONAL_CALL)  ; SRenderVertex * core_xform.cpp_transformAndClipGeometry_FUN_005f8550(int vertex_count, int * vertex_indices)
    MOV ECX,dword ptr [0x00824e24]      ; 0048a7e8 | g_ClippedVertexCount
    ADD ESP,0x8                         ; 0048a7ee
    CMP ECX,0x2                         ; 0048a7f1
    JLE 0x0048a77e                      ; 0048a7f4
        ;   XREF to: 0048a77e (CONDITIONAL_JUMP)  ; LAB_0048a77e
    PUSH ECX                            ; 0048a7f6
    PUSH 0x824e28                       ; 0048a7f7 | g_ClippedVertexBuffer
    CALL engine_3d.c_rasterizeTriangle_FUN_005fcfc0 ; 0048a7fc
        ;   XREF to: 005fcfc0 (UNCONDITIONAL_CALL)  ; void engine_3d.c_rasterizeTriangle_FUN_005fcfc0(SRenderVertex * vertex_buffer, int vertex_count)
    ADD ESP,0x8                         ; 0048a801
    POP EBP                             ; 0048a804
    POP EDI                             ; 0048a805
    POP ESI                             ; 0048a806
    POP EBX                             ; 0048a807
    RET                                 ; 0048a808
    PUSH ESI                            ; 0048a809
        ;   Label: LAB_0048a809
    PUSH EBX                            ; 0048a80a
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0048a80b
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0048a810
    POP EBP                             ; 0048a813
    POP EDI                             ; 0048a814
    POP ESI                             ; 0048a815
    POP EBX                             ; 0048a816
    RET                                 ; 0048a817

