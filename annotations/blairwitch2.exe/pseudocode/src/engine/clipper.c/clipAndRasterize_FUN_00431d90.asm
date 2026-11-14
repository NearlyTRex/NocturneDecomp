; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipAndRasterize_FUN_00431d90(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; XREF[58]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_004070e0 at 00407222
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404b90
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 004066bd
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 00404a35
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00406fa9
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406e69
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 0040570d
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 0040582d
;   engine_3d.c_renderPolygonAlphaTexturedNearPlane_FUN_00404e60 at 00404eb2
;   engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00405040 at 00405092
;   ... and 48 more
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;   undefined4 DAT_007bee30
;   undefined4 DAT_007bee34
;
; Called Functions:
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050
;   engine_prim.c_renderPolygonSoftware_FUN_0051cb20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431d90
        ;   Label: engine_clipper.c_clipAndRasterize_FUN_00431d90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00431d91
    MOV EDX,dword ptr [ESP + 0xc]       ; 00431d95
    CMP dword ptr [0x006141e0],0x0      ; 00431d99 | DAT_006141e0
    JZ 0x00431dbd                       ; 00431da0
        ;   XREF to: 00431dbd (CONDITIONAL_JUMP)  ; LAB_00431dbd
    PUSH EDX                            ; 00431da2
    PUSH EAX                            ; 00431da3
    CALL engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 ; 00431da4
        ;   XREF to: 00431330 (UNCONDITIONAL_CALL)  ; int engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00431da9
    TEST EAX,EAX                        ; 00431dac
    JNZ 0x00431dbb                      ; 00431dae
        ;   XREF to: 00431dbb (CONDITIONAL_JUMP)  ; LAB_00431dbb
    MOV EBX,dword ptr [0x007bee30]      ; 00431db0 | DAT_007bee30
    CMP EBX,0x2                         ; 00431db6
    JG 0x00431dc9                       ; 00431db9
        ;   XREF to: 00431dc9 (CONDITIONAL_JUMP)  ; LAB_00431dc9
    POP EBX                             ; 00431dbb
        ;   Label: LAB_00431dbb
    RET                                 ; 00431dbc
    PUSH EAX                            ; 00431dbd
        ;   Label: LAB_00431dbd
    PUSH EDX                            ; 00431dbe
    CALL engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050 ; 00431dbf
        ;   XREF to: 0051d050 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 00431dc4
    POP EBX                             ; 00431dc7
    RET                                 ; 00431dc8
    PUSH EBX                            ; 00431dc9
        ;   Label: LAB_00431dc9
    PUSH 0x7bee34                       ; 00431dca | DAT_007bee34
    CALL engine_prim.c_renderPolygonSoftware_FUN_0051cb20 ; 00431dcf
        ;   XREF to: 0051cb20 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderPolygonSoftware_FUN_0051cb20(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00431dd4
    POP EBX                             ; 00431dd7
    RET                                 ; 00431dd8

