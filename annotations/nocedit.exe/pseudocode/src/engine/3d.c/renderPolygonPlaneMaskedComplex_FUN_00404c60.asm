; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonPlaneMaskedComplex_FUN_00404c60(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d0d9
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   float g_PerspectiveReciprocal
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
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
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404c6d | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00404c72
    TEST EAX,EAX                        ; 00404c75
    JZ 0x00404cce                       ; 00404c77 | LAB_00404cce
        ;   XREF to: 00404cce (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d051f4],0x0      ; 00404c79 | float g_PerspectiveReciprocal
    JZ 0x00404d09                       ; 00404c80 | LAB_00404d09
        ;   XREF to: 00404d09 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00404c86 | BOOL g_MMXSupported
    JNZ 0x00404ce8                      ; 00404c8d | LAB_00404ce8
        ;   XREF to: 00404ce8 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404c8f | int g_BitsPerPixel
    JNZ 0x00404cdc                      ; 00404c96 | LAB_00404cdc
        ;   XREF to: 00404cdc (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404c98 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00404c98
    MOV EDX,0xd9                        ; 00404ca2
        ;   Label: LAB_00404ca2
    MOV ECX,0x1                         ; 00404ca7
    PUSH EBX                            ; 00404cac
    MOV dword ptr [0x02d052a0],EDX      ; 00404cad | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 00404cb3 | int g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00404cb9 | void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00404cbe
    PUSH ESI                            ; 00404cc1
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404cc2
    PUSH ESI                            ; 00404cc5
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404cc6 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00404ccb
    MOV ESI,dword ptr [EBX + 0x4]       ; 00404cce
        ;   Label: LAB_00404cce
    LEA EAX,[EBX + 0x18]                ; 00404cd1
    SHL ESI,0x2                         ; 00404cd4
    ADD EAX,ESI                         ; 00404cd7
    POP ESI                             ; 00404cd9
    POP EBX                             ; 00404cda
    RET                                 ; 00404cdb
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404cdc | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00404cdc
    JMP 0x00404ca2                      ; 00404ce6 | LAB_00404ca2
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404ce8 | int g_BitsPerPixel
        ;   Label: LAB_00404ce8
    JNZ 0x00404cfd                      ; 00404cef | LAB_00404cfd
        ;   XREF to: 00404cfd (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404cf1 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00404ca2                      ; 00404cfb | LAB_00404ca2
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404cfd | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00404cfd
    JMP 0x00404ca2                      ; 00404d07 | LAB_00404ca2
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00404d09 | BOOL g_MMXSupported
        ;   Label: LAB_00404d09
    JNZ 0x00404d2e                      ; 00404d10 | LAB_00404d2e
        ;   XREF to: 00404d2e (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404d12 | int g_BitsPerPixel
    JZ 0x00404c98                       ; 00404d19 | LAB_00404c98
        ;   XREF to: 00404c98 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404d1f | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00404ca2                      ; 00404d29 | LAB_00404ca2
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00404d2e | int g_BitsPerPixel
        ;   Label: LAB_00404d2e
    JNZ 0x00404cfd                      ; 00404d35 | LAB_00404cfd
        ;   XREF to: 00404cfd (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404d37 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00404ca2                      ; 00404d41 | LAB_00404ca2
        ;   XREF to: 00404ca2 (UNCONDITIONAL_JUMP)

