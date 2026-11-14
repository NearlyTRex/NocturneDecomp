; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipAndRasterize_FUN_0043cbf0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; XREF[58]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10 at 00407052
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a10
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280 at 004064ed
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 004048b5
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406dd9
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406c99
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 0040553d
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 0040565d
;   engine_3d.c_renderPolygonAlphaTexturedNearPlane_FUN_00404c90 at 00404ce2
;   engine_3d.c_renderPolygonAlphaTexturedNormalized2_FUN_00404e70 at 00404ec2
;   ... and 48 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;
; Called Functions:
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650
;   engine_prim.c_renderPolygonSoftware_FUN_0053e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cbf0
        ;   Label: engine_clipper.c_clipAndRasterize_FUN_0043cbf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043cbf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cbf5
    CMP dword ptr [0x0061b4c0],0x0      ; 0043cbf9 | DAT_0061b4c0
    JZ 0x0043cc1d                       ; 0043cc00
        ;   XREF to: 0043cc1d (CONDITIONAL_JUMP)  ; LAB_0043cc1d
    PUSH EDX                            ; 0043cc02
    PUSH EAX                            ; 0043cc03
    CALL engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 ; 0043cc04
        ;   XREF to: 0043c190 (UNCONDITIONAL_CALL)  ; int engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0043cc09
    TEST EAX,EAX                        ; 0043cc0c
    JNZ 0x0043cc1b                      ; 0043cc0e
        ;   XREF to: 0043cc1b (CONDITIONAL_JUMP)  ; LAB_0043cc1b
    MOV EBX,dword ptr [0x007c7554]      ; 0043cc10 | DAT_007c7554
    CMP EBX,0x2                         ; 0043cc16
    JG 0x0043cc29                       ; 0043cc19
        ;   XREF to: 0043cc29 (CONDITIONAL_JUMP)  ; LAB_0043cc29
    POP EBX                             ; 0043cc1b
        ;   Label: LAB_0043cc1b
    RET                                 ; 0043cc1c
    PUSH EAX                            ; 0043cc1d
        ;   Label: LAB_0043cc1d
    PUSH EDX                            ; 0043cc1e
    CALL engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650 ; 0043cc1f
        ;   XREF to: 0053e650 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0043cc24
    POP EBX                             ; 0043cc27
    RET                                 ; 0043cc28
    PUSH EBX                            ; 0043cc29
        ;   Label: LAB_0043cc29
    PUSH 0x7c7558                       ; 0043cc2a | DAT_007c7558
    CALL engine_prim.c_renderPolygonSoftware_FUN_0053e120 ; 0043cc2f
        ;   XREF to: 0053e120 (UNCONDITIONAL_CALL)  ; void engine_prim.c_renderPolygonSoftware_FUN_0053e120(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0043cc34
    POP EBX                             ; 0043cc37
    RET                                 ; 0043cc38

