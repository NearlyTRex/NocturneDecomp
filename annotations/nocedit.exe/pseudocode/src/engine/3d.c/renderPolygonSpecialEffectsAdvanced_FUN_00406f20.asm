; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20(SMRGLHeaderPrimitive * polygon_info)
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
;   engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406f20
        ;   Label: engine_3d.c_renderPolygonSpecialEffectsAdvanced_FUN_00406f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406f21
    CMP dword ptr [0x02d03e94],0x0      ; 00406f25 | int g_UseExternalRenderer
    JZ 0x00407045                       ; 00406f2c | LAB_00407045
        ;   XREF to: 00407045 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00406f32
    LEA ESI,[EBX + 0x18]                ; 00406f33
    LEA EAX,[EBX + 0x8]                 ; 00406f36
    PUSH EAX                            ; 00406f39
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406f3a | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00406f3f
    TEST EAX,EAX                        ; 00406f42
    JZ 0x00406f91                       ; 00406f44 | LAB_00406f91
        ;   XREF to: 00406f91 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d02578],0x0      ; 00406f46 | int g_AdvancedClippingEnabled
    JZ 0x00406fcc                       ; 00406f4d | LAB_00406fcc
        ;   XREF to: 00406fcc (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406f53 | BOOL g_MMXSupported
    JNZ 0x00406fab                      ; 00406f5a | LAB_00406fab
        ;   XREF to: 00406fab (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406f5c | int g_BitsPerPixel
    JNZ 0x00406f9f                      ; 00406f63 | LAB_00406f9f
        ;   XREF to: 00406f9f (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406f65 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EAX,0x8d                        ; 00406f6f
        ;   Label: LAB_00406f6f
    PUSH ESI                            ; 00406f74
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406f75
    MOV EDX,0x5                         ; 00406f78
    PUSH ECX                            ; 00406f7d
    MOV [0x02d052a0],EAX                ; 00406f7e | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 00406f83 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406f89 | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00406f8e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406f91
        ;   Label: LAB_00406f91
    LEA EAX,[EBX + 0x18]                ; 00406f94
    SHL ESI,0x2                         ; 00406f97
    ADD EAX,ESI                         ; 00406f9a
    POP ESI                             ; 00406f9c
    POP EBX                             ; 00406f9d
    RET                                 ; 00406f9e
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406f9f | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406f9f
    JMP 0x00406f6f                      ; 00406fa9 | LAB_00406f6f
        ;   XREF to: 00406f6f (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406fab | int g_BitsPerPixel
        ;   Label: LAB_00406fab
    JNZ 0x00406fc0                      ; 00406fb2 | LAB_00406fc0
        ;   XREF to: 00406fc0 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406fb4 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406f6f                      ; 00406fbe | LAB_00406f6f
        ;   XREF to: 00406f6f (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406fc0 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00406fc0
    JMP 0x00406f6f                      ; 00406fca | LAB_00406f6f
        ;   XREF to: 00406f6f (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00406fcc | BOOL g_MMXSupported
        ;   Label: LAB_00406fcc
    JNZ 0x00407024                      ; 00406fd3 | LAB_00407024
        ;   XREF to: 00407024 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00406fd5 | int g_BitsPerPixel
    JNZ 0x00407018                      ; 00406fdc | LAB_00407018
        ;   XREF to: 00407018 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406fde | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EAX,0x28d                       ; 00406fe8
        ;   Label: LAB_00406fe8
    PUSH ESI                            ; 00406fed
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406fee
    MOV EDX,0x5                         ; 00406ff1
    PUSH ECX                            ; 00406ff6
    MOV [0x02d052a0],EAX                ; 00406ff7 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDX      ; 00406ffc | int g_RenderStateFlag2
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00407002 | void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00407007
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040700a
    LEA EAX,[EBX + 0x18]                ; 0040700d
    SHL ESI,0x2                         ; 00407010
    ADD EAX,ESI                         ; 00407013
    POP ESI                             ; 00407015
    POP EBX                             ; 00407016
    RET                                 ; 00407017
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00407018 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00407018
    JMP 0x00406fe8                      ; 00407022 | LAB_00406fe8
        ;   XREF to: 00406fe8 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00407024 | int g_BitsPerPixel
        ;   Label: LAB_00407024
    JNZ 0x00407039                      ; 0040702b | LAB_00407039
        ;   XREF to: 00407039 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040702d | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00406fe8                      ; 00407037 | LAB_00406fe8
        ;   XREF to: 00406fe8 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00407039 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00407039
    JMP 0x00406fe8                      ; 00407043 | LAB_00406fe8
        ;   XREF to: 00406fe8 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00407045
        ;   Label: LAB_00407045
    CALL engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 ; 00407046 | SMRGLHeaderExtended * engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 00405960 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040704b
    PUSH EBX                            ; 0040704e
    CALL engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0 ; 0040704f | SMRGLHeaderExtended * engine_3d.c_renderPolygonEnginePlaneMaskedAdvanced_FUN_004057b0(SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 004057b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00407054
    POP EBX                             ; 00407057
    RET                                 ; 00407058

