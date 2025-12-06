; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_AdvancedClippingEnabled
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406c80
        ;   Label: engine_3d.c_renderPolygonEngineEnhancedDepthLit_FUN_00406c80
    PUSH ESI                            ; 00406c81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00406c82
    LEA ESI,[EBX + 0x18]                ; 00406c86
    LEA EAX,[EBX + 0x8]                 ; 00406c89
    PUSH EAX                            ; 00406c8c
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406c8d | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406c92
    TEST EAX,EAX                        ; 00406c95
    JZ 0x00406cf9                       ; 00406c97 | LAB_00406cf9
        ;   XREF to: 00406cf9 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406c99 | BOOL g_MMXSupported
    JNZ 0x00406d13                      ; 00406ca0 | LAB_00406d13
        ;   XREF to: 00406d13 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406ca2 | int g_BitsPerPixel
    JNZ 0x00406d07                      ; 00406ca9 | LAB_00406d07
        ;   XREF to: 00406d07 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406cab | RenderScanlineFunc * g_ScanlineRenderFunc
    CMP dword ptr [0x02d02578],0x0      ; 00406cb5 | int g_AdvancedClippingEnabled
        ;   Label: LAB_00406cb5
    JZ 0x00406d34                       ; 00406cbc | LAB_00406d34
        ;   XREF to: 00406d34 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d052a0],0x67     ; 00406cc2 | int g_RenderStateFlags
    MOV EDX,0x1                         ; 00406ccc
        ;   Label: LAB_00406ccc
    PUSH EBX                            ; 00406cd1
    MOV dword ptr [0x02d052a4],EDX      ; 00406cd2 | int g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00406cd8 | void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02d02578]      ; 00406cdd | int g_AdvancedClippingEnabled
    ADD ESP,0x4                         ; 00406ce3
    TEST ECX,ECX                        ; 00406ce6
    JZ 0x00406d40                       ; 00406ce8 | LAB_00406d40
        ;   XREF to: 00406d40 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00406cea
    PUSH ESI                            ; 00406ceb
    MOV EDI,dword ptr [EBX + 0x4]       ; 00406cec
    PUSH EDI                            ; 00406cef
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406cf0 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00406cf5
    POP EDI                             ; 00406cf8
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406cf9
        ;   Label: LAB_00406cf9
    LEA EAX,[EBX + 0x18]                ; 00406cfc
    SHL ESI,0x2                         ; 00406cff
    ADD EAX,ESI                         ; 00406d02
    POP ESI                             ; 00406d04
    POP EBX                             ; 00406d05
    RET                                 ; 00406d06
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406d07 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406d07
    JMP 0x00406cb5                      ; 00406d11 | LAB_00406cb5
        ;   XREF to: 00406cb5 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406d13 | int g_BitsPerPixel
        ;   Label: LAB_00406d13
    JNZ 0x00406d28                      ; 00406d1a | LAB_00406d28
        ;   XREF to: 00406d28 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406d1c | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406cb5                      ; 00406d26 | LAB_00406cb5
        ;   XREF to: 00406cb5 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406d28 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406d28
    JMP 0x00406cb5                      ; 00406d32 | LAB_00406cb5
        ;   XREF to: 00406cb5 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d052a0],0x267    ; 00406d34 | int g_RenderStateFlags
        ;   Label: LAB_00406d34
    JMP 0x00406ccc                      ; 00406d3e | LAB_00406ccc
        ;   XREF to: 00406ccc (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 00406d40
        ;   Label: LAB_00406d40
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d41
    PUSH ESI                            ; 00406d44
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00406d45 | void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00406d4a
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d4d
    LEA EAX,[EBX + 0x18]                ; 00406d50
    SHL ESI,0x2                         ; 00406d53
    ADD EAX,ESI                         ; 00406d56
    POP ESI                             ; 00406d58
    POP EBX                             ; 00406d59
    RET                                 ; 00406d5a

