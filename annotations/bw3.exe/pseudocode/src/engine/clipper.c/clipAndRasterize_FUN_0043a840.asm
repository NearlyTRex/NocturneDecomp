; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipAndRasterize_FUN_0043a840(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; XREF[58]:
;   engine_3d.c_FUN_00404dd0 at 00404e22
;   engine_3d.c_FUN_00404e70 at 00404ec2
;   engine_3d.c_FUN_00405280 at 0040530c
;   engine_3d.c_FUN_004075b0 at 00407682
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30 at 00407072
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a10
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 0040650d
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 004048b5
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406df9
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406cb9
;   ... and 48 more
;
; Referenced Globals:
;   undefined4 DAT_005fba40
;   undefined4 DAT_007e3e88
;   undefined4 DAT_007e3e8c
;
; Called Functions:
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0
;   engine_prim.c_FUN_00515e80
;   engine_prim.c_FUN_005163b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a840
        ;   Label: engine_clipper.c_clipAndRasterize_FUN_0043a840
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043a841
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043a845
    CMP dword ptr [0x005fba40],0x0      ; 0043a849 | DAT_005fba40
    JZ 0x0043a86d                       ; 0043a850
        ;   XREF to: 0043a86d (CONDITIONAL_JUMP)  ; LAB_0043a86d
    PUSH EDX                            ; 0043a852
    PUSH EAX                            ; 0043a853
    CALL engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0 ; 0043a854
        ;   XREF to: 00439da0 (UNCONDITIONAL_CALL)  ; int engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0043a859
    TEST EAX,EAX                        ; 0043a85c
    JNZ 0x0043a86b                      ; 0043a85e
        ;   XREF to: 0043a86b (CONDITIONAL_JUMP)  ; LAB_0043a86b
    MOV EBX,dword ptr [0x007e3e88]      ; 0043a860 | DAT_007e3e88
    CMP EBX,0x2                         ; 0043a866
    JG 0x0043a879                       ; 0043a869
        ;   XREF to: 0043a879 (CONDITIONAL_JUMP)  ; LAB_0043a879
    POP EBX                             ; 0043a86b
        ;   Label: LAB_0043a86b
    RET                                 ; 0043a86c
    PUSH EAX                            ; 0043a86d
        ;   Label: LAB_0043a86d
    PUSH EDX                            ; 0043a86e
    CALL engine_prim.c_FUN_005163b0     ; 0043a86f
        ;   XREF to: 005163b0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_005163b0(int * vertex_indices, int vertex_count)
    ADD ESP,0x8                         ; 0043a874
    POP EBX                             ; 0043a877
    RET                                 ; 0043a878
    PUSH EBX                            ; 0043a879
        ;   Label: LAB_0043a879
    PUSH 0x7e3e8c                       ; 0043a87a | DAT_007e3e8c
    CALL engine_prim.c_FUN_00515e80     ; 0043a87f
        ;   XREF to: 00515e80 (UNCONDITIONAL_CALL)  ; void engine_prim.c_FUN_00515e80(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0043a884
    POP EBX                             ; 0043a887
    RET                                 ; 0043a888

