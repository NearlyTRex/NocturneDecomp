; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d0d9
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   float g_PerspectiveReciprocal
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404c60
        ;   Label: engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60
    PUSH ESI                            ; 00404c61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00404c62
    LEA ESI,[EBX + 0x18]                ; 00404c66
    LEA EAX,[EBX + 0x8]                 ; 00404c69
    PUSH EAX                            ; 00404c6c
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404c6d
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404c72
    TEST EAX,EAX                        ; 00404c75
    JZ 0x00404cce                       ; 00404c77
        ;   XREF to: 00404cce (CONDITIONAL_JUMP)  ; LAB_00404cce
    CMP dword ptr [0x02d051f4],0x0      ; 00404c79 | g_PerspectiveReciprocal
    JZ 0x00404d09                       ; 00404c80
        ;   XREF to: 00404d09 (CONDITIONAL_JUMP)  ; LAB_00404d09
    CMP dword ptr [0x02d05248],0x0      ; 00404c86 | g_MMXSupported
    JNZ 0x00404ce8                      ; 00404c8d
        ;   XREF to: 00404ce8 (CONDITIONAL_JUMP)  ; LAB_00404ce8
    CMP dword ptr [0x0067939c],0x20     ; 00404c8f | g_BitsPerPixel
    JNZ 0x00404cdc                      ; 00404c96
        ;   XREF to: 00404cdc (CONDITIONAL_JUMP)  ; LAB_00404cdc
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404c98 | g_ScanlineRenderFunc
        ;   Label: LAB_00404c98
    MOV EDX,0xd9                        ; 00404ca2
        ;   Label: LAB_00404ca2
    MOV ECX,0x1                         ; 00404ca7
    PUSH EBX                            ; 00404cac
    MOV dword ptr [0x02d052a0],EDX      ; 00404cad | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 00404cb3 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00404cb9
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00404cbe
    PUSH ESI                            ; 00404cc1
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404cc2
    PUSH ESI                            ; 00404cc5
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404cc6
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404ccb
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404cce
        ;   Label: LAB_00404cce
    LEA EAX,[EBX + 0x18]                ; 00404cd1
    SHL ESI,0x2                         ; 00404cd4
    ADD EAX,ESI                         ; 00404cd7
    POP ESI                             ; 00404cd9
    POP EBX                             ; 00404cda
    RET                                 ; 00404cdb
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404cdc | g_ScanlineRenderFunc
        ;   Label: LAB_00404cdc
    JMP 0x00404ca2                      ; 00404ce6
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)  ; LAB_00404ca2
    CMP dword ptr [0x0067939c],0x20     ; 00404ce8 | g_BitsPerPixel
        ;   Label: LAB_00404ce8
    JNZ 0x00404cfd                      ; 00404cef
        ;   XREF to: 00404cfd (CONDITIONAL_JUMP)  ; LAB_00404cfd
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404cf1 | g_ScanlineRenderFunc
    JMP 0x00404ca2                      ; 00404cfb
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)  ; LAB_00404ca2
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404cfd | g_ScanlineRenderFunc
        ;   Label: LAB_00404cfd
    JMP 0x00404ca2                      ; 00404d07
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)  ; LAB_00404ca2
    CMP dword ptr [0x02d05248],0x0      ; 00404d09 | g_MMXSupported
        ;   Label: LAB_00404d09
    JNZ 0x00404d2e                      ; 00404d10
        ;   XREF to: 00404d2e (CONDITIONAL_JUMP)  ; LAB_00404d2e
    CMP dword ptr [0x0067939c],0x20     ; 00404d12 | g_BitsPerPixel
    JZ 0x00404c98                       ; 00404d19
        ;   XREF to: 00404c98 (CONDITIONAL_JUMP)  ; LAB_00404c98
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404d1f | g_ScanlineRenderFunc
    JMP 0x00404ca2                      ; 00404d29
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)  ; LAB_00404ca2
    CMP dword ptr [0x0067939c],0x20     ; 00404d2e | g_BitsPerPixel
        ;   Label: LAB_00404d2e
    JNZ 0x00404cfd                      ; 00404d35
        ;   XREF to: 00404cfd (CONDITIONAL_JUMP)  ; LAB_00404cfd
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404d37 | g_ScanlineRenderFunc
    JMP 0x00404ca2                      ; 00404d41
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)  ; LAB_00404ca2

