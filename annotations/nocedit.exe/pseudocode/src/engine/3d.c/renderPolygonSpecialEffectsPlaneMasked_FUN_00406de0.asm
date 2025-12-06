; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_AdvancedClippingEnabled
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_UseExternalRenderer
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960
;   engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406de0
        ;   Label: engine_3d.c_renderPolygonSpecialEffectsPlaneMasked_FUN_00406de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406de1
    CMP dword ptr [0x02d03e94],0x0      ; 00406de5 | int g_UseExternalRenderer
    JZ 0x00406f02                       ; 00406dec | LAB_00406f02
        ;   XREF to: 00406f02 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00406df2
    LEA ESI,[EBX + 0x18]                ; 00406df3
    LEA EAX,[EBX + 0x8]                 ; 00406df6
    PUSH EAX                            ; 00406df9
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406dfa | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406dff
    TEST EAX,EAX                        ; 00406e02
    JZ 0x00406e51                       ; 00406e04 | LAB_00406e51
        ;   XREF to: 00406e51 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d02578],0x0      ; 00406e06 | int g_AdvancedClippingEnabled
    JZ 0x00406e8c                       ; 00406e0d | LAB_00406e8c
        ;   XREF to: 00406e8c (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406e13 | BOOL g_MMXSupported
    JNZ 0x00406e6b                      ; 00406e1a | LAB_00406e6b
        ;   XREF to: 00406e6b (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406e1c | int g_BitsPerPixel
    JNZ 0x00406e5f                      ; 00406e23 | LAB_00406e5f
        ;   XREF to: 00406e5f (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406e25 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EAX,0x8d                        ; 00406e2f
        ;   Label: LAB_00406e2f
    PUSH ESI                            ; 00406e34
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406e35
    MOV EDX,0x4                         ; 00406e38
    PUSH ECX                            ; 00406e3d
    MOV [0x02d052a0],EAX                ; 00406e3e | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 00406e43 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406e49 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00406e4e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406e51
        ;   Label: LAB_00406e51
    LEA EAX,[EBX + 0x18]                ; 00406e54
    SHL ESI,0x2                         ; 00406e57
    ADD EAX,ESI                         ; 00406e5a
    POP ESI                             ; 00406e5c
    POP EBX                             ; 00406e5d
    RET                                 ; 00406e5e
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406e5f | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406e5f
    JMP 0x00406e2f                      ; 00406e69 | LAB_00406e2f
        ;   XREF to: 00406e2f (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406e6b | int g_BitsPerPixel
        ;   Label: LAB_00406e6b
    JNZ 0x00406e80                      ; 00406e72 | LAB_00406e80
        ;   XREF to: 00406e80 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406e74 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406e2f                      ; 00406e7e | LAB_00406e2f
        ;   XREF to: 00406e2f (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406e80 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406e80
    JMP 0x00406e2f                      ; 00406e8a | LAB_00406e2f
        ;   XREF to: 00406e2f (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406e8c | BOOL g_MMXSupported
        ;   Label: LAB_00406e8c
    JNZ 0x00406ee1                      ; 00406e93 | LAB_00406ee1
        ;   XREF to: 00406ee1 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406e95 | int g_BitsPerPixel
    JNZ 0x00406ed5                      ; 00406e9c | LAB_00406ed5
        ;   XREF to: 00406ed5 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406e9e | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EAX,0x28d                       ; 00406ea8
        ;   Label: LAB_00406ea8
    PUSH ESI                            ; 00406ead
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406eae
    XOR EDX,EDX                         ; 00406eb1
    PUSH ECX                            ; 00406eb3
    MOV [0x02d052a0],EAX                ; 00406eb4 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 00406eb9 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00406ebf | void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00406ec4
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406ec7
    LEA EAX,[EBX + 0x18]                ; 00406eca
    SHL ESI,0x2                         ; 00406ecd
    ADD EAX,ESI                         ; 00406ed0
    POP ESI                             ; 00406ed2
    POP EBX                             ; 00406ed3
    RET                                 ; 00406ed4
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406ed5 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406ed5
    JMP 0x00406ea8                      ; 00406edf | LAB_00406ea8
        ;   XREF to: 00406ea8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406ee1 | int g_BitsPerPixel
        ;   Label: LAB_00406ee1
    JNZ 0x00406ef6                      ; 00406ee8 | LAB_00406ef6
        ;   XREF to: 00406ef6 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406eea | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406ea8                      ; 00406ef4 | LAB_00406ea8
        ;   XREF to: 00406ea8 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406ef6 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406ef6
    JMP 0x00406ea8                      ; 00406f00 | LAB_00406ea8
        ;   XREF to: 00406ea8 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00406f02
        ;   Label: LAB_00406f02
    CALL engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 ; 00406f03 | SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405960 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406f08
    PUSH EBX                            ; 00406f0b
    CALL engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690 ; 00406f0c | SMRGLHeaderExtended * engine_3d.c_renderPolygonEnginePlaneMaskedEffect_FUN_00405690(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405690 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406f11
    POP EBX                             ; 00406f14
    RET                                 ; 00406f15

