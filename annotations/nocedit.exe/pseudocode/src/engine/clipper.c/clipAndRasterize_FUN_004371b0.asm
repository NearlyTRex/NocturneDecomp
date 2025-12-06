; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; XREF[59]:
;   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 at 004040f3
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 004076a9
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 at 004077f2
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404b70
;   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 at 00405e72
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 at 00405dd2
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 at 00406052
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 at 004059b2
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 00407202
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 at 00407464
;   ... and 49 more
;
; Referenced Globals:
;   uint g_VertexProcessingEnabled = 0x1
;   int g_ClippedVertexCount
;   SRenderVertex[16] g_ClippedVertexBuffer
;
; Called Functions:
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40
;   engine_prim.c_renderPolygonSoftware_FUN_00552510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004371b0
        ;   Label: engine_clipper.c_clipAndRasterize_FUN_004371b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004371b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004371b5
    CMP dword ptr [0x006793bc],0x0      ; 004371b9 | uint g_VertexProcessingEnabled
    JZ 0x004371dd                       ; 004371c0 | LAB_004371dd
        ;   XREF to: 004371dd (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004371c2
    PUSH EAX                            ; 004371c3
    CALL engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 ; 004371c4 | int engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004366e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004371c9
    TEST EAX,EAX                        ; 004371cc
    JNZ 0x004371db                      ; 004371ce | LAB_004371db
        ;   XREF to: 004371db (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00824e24]      ; 004371d0 | int g_ClippedVertexCount
    CMP EBX,0x2                         ; 004371d6
    JG 0x004371e9                       ; 004371d9 | LAB_004371e9
        ;   XREF to: 004371e9 (CONDITIONAL_JUMP)
    POP EBX                             ; 004371db
        ;   Label: LAB_004371db
    RET                                 ; 004371dc
    PUSH EAX                            ; 004371dd
        ;   Label: LAB_004371dd
    PUSH EDX                            ; 004371de
    CALL engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 ; 004371df | void engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40(int * vertex_indices, int vertex_count)
        ;   XREF to: 00552a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004371e4
    POP EBX                             ; 004371e7
    RET                                 ; 004371e8
    PUSH EBX                            ; 004371e9
        ;   Label: LAB_004371e9
    PUSH 0x824e28                       ; 004371ea | SRenderVertex[16] g_ClippedVertexBuffer
    CALL engine_prim.c_renderPolygonSoftware_FUN_00552510 ; 004371ef | void engine_prim.c_renderPolygonSoftware_FUN_00552510(SRenderVertex * vertices, int vertex_count)
        ;   XREF to: 00552510 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004371f4
    POP EBX                             ; 004371f7
    RET                                 ; 004371f8

