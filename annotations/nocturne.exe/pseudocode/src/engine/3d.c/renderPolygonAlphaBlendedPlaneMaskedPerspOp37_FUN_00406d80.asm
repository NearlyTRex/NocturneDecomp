; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 0040863f
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_AdvancedClippingEnabled
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406d80
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80
    PUSH ESI                            ; 00406d81
    PUSH EBP                            ; 00406d82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406d83
    LEA ESI,[EBX + 0x18]                ; 00406d87
    LEA EAX,[EBX + 0x8]                 ; 00406d8a
    PUSH EAX                            ; 00406d8d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406d8e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406d93
    TEST EAX,EAX                        ; 00406d96
    JZ 0x00406de5                       ; 00406d98
        ;   XREF to: 00406de5 (CONDITIONAL_JUMP)  ; LAB_00406de5
    CMP dword ptr [0x01c00c78],0x0      ; 00406d9a | g_AdvancedClippingEnabled
    JZ 0x00406e21                       ; 00406da1
        ;   XREF to: 00406e21 (CONDITIONAL_JUMP)  ; LAB_00406e21
    CMP dword ptr [0x01c03948],0x0      ; 00406da7 | g_MMXSupported
    JNZ 0x00406e00                      ; 00406dae
        ;   XREF to: 00406e00 (CONDITIONAL_JUMP)  ; LAB_00406e00
    CMP dword ptr [0x005b7624],0x20     ; 00406db0 | g_BitsPerPixel
    JNZ 0x00406df4                      ; 00406db7
        ;   XREF to: 00406df4 (CONDITIONAL_JUMP)  ; LAB_00406df4
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406db9 | g_ScanlineRenderFunc
    MOV EBP,0xd                         ; 00406dc3
        ;   Label: LAB_00406dc3
    PUSH ESI                            ; 00406dc8
    MOV EDX,dword ptr [EBX + 0x4]       ; 00406dc9
    MOV EAX,0x5                         ; 00406dcc
    PUSH EDX                            ; 00406dd1
    MOV dword ptr [0x01c039a0],EBP      ; 00406dd2 | g_RenderStateFlags
    MOV [0x01c039a4],EAX                ; 00406dd8 | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 00406ddd
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406de2
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406de5
        ;   Label: LAB_00406de5
    LEA EAX,[EBX + 0x18]                ; 00406de8
    SHL ESI,0x2                         ; 00406deb
    ADD EAX,ESI                         ; 00406dee
    POP EBP                             ; 00406df0
    POP ESI                             ; 00406df1
    POP EBX                             ; 00406df2
    RET                                 ; 00406df3
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406df4 | g_ScanlineRenderFunc
        ;   Label: LAB_00406df4
    JMP 0x00406dc3                      ; 00406dfe
        ;   XREF to: 00406dc3 (UNCONDITIONAL_JUMP)  ; LAB_00406dc3
    CMP dword ptr [0x005b7624],0x20     ; 00406e00 | g_BitsPerPixel
        ;   Label: LAB_00406e00
    JNZ 0x00406e15                      ; 00406e07
        ;   XREF to: 00406e15 (CONDITIONAL_JUMP)  ; LAB_00406e15
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406e09 | g_ScanlineRenderFunc
    JMP 0x00406dc3                      ; 00406e13
        ;   XREF to: 00406dc3 (UNCONDITIONAL_JUMP)  ; LAB_00406dc3
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406e15 | g_ScanlineRenderFunc
        ;   Label: LAB_00406e15
    JMP 0x00406dc3                      ; 00406e1f
        ;   XREF to: 00406dc3 (UNCONDITIONAL_JUMP)  ; LAB_00406dc3
    CMP dword ptr [0x01c03948],0x0      ; 00406e21 | g_MMXSupported
        ;   Label: LAB_00406e21
    JNZ 0x00406e7a                      ; 00406e28
        ;   XREF to: 00406e7a (CONDITIONAL_JUMP)  ; LAB_00406e7a
    CMP dword ptr [0x005b7624],0x20     ; 00406e2a | g_BitsPerPixel
    JNZ 0x00406e6e                      ; 00406e31
        ;   XREF to: 00406e6e (CONDITIONAL_JUMP)  ; LAB_00406e6e
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406e33 | g_ScanlineRenderFunc
    MOV EBP,0x20d                       ; 00406e3d
        ;   Label: LAB_00406e3d
    PUSH ESI                            ; 00406e42
    MOV EDX,dword ptr [EBX + 0x4]       ; 00406e43
    MOV EAX,0x5                         ; 00406e46
    PUSH EDX                            ; 00406e4b
    MOV dword ptr [0x01c039a0],EBP      ; 00406e4c | g_RenderStateFlags
    MOV [0x01c039a4],EAX                ; 00406e52 | g_VertexPreprocessMode
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 00406e57
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_004349a0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406e5c
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406e5f
    LEA EAX,[EBX + 0x18]                ; 00406e62
    SHL ESI,0x2                         ; 00406e65
    ADD EAX,ESI                         ; 00406e68
    POP EBP                             ; 00406e6a
    POP ESI                             ; 00406e6b
    POP EBX                             ; 00406e6c
    RET                                 ; 00406e6d
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406e6e | g_ScanlineRenderFunc
        ;   Label: LAB_00406e6e
    JMP 0x00406e3d                      ; 00406e78
        ;   XREF to: 00406e3d (UNCONDITIONAL_JUMP)  ; LAB_00406e3d
    CMP dword ptr [0x005b7624],0x20     ; 00406e7a | g_BitsPerPixel
        ;   Label: LAB_00406e7a
    JNZ 0x00406e8f                      ; 00406e81
        ;   XREF to: 00406e8f (CONDITIONAL_JUMP)  ; LAB_00406e8f
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406e83 | g_ScanlineRenderFunc
    JMP 0x00406e3d                      ; 00406e8d
        ;   XREF to: 00406e3d (UNCONDITIONAL_JUMP)  ; LAB_00406e3d
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406e8f | g_ScanlineRenderFunc
        ;   Label: LAB_00406e8f
    JMP 0x00406e3d                      ; 00406e99
        ;   XREF to: 00406e3d (UNCONDITIONAL_JUMP)  ; LAB_00406e3d

