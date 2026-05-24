; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403ad0(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d1c0
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentPolygonColor
;   int g_ActiveRenderColor
;   int g_CurrentLightingValue
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_makeGrayscaleColor_FUN_004039c0
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403ad0
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403ad0
    PUSH ESI                            ; 00403ad1
    PUSH EBP                            ; 00403ad2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403ad3
    LEA ESI,[EBX + 0x18]                ; 00403ad7
    LEA EAX,[EBX + 0x8]                 ; 00403ada
    PUSH EAX                            ; 00403add
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00403ade
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00403ae3
    TEST EAX,EAX                        ; 00403ae6
    JZ 0x00403b5a                       ; 00403ae8
        ;   XREF to: 00403b5a (CONDITIONAL_JUMP)  ; LAB_00403b5a
    CMP dword ptr [0x02d05248],0x0      ; 00403aea | g_MMXSupported
    JNZ 0x00403b75                      ; 00403af1
        ;   XREF to: 00403b75 (CONDITIONAL_JUMP)  ; LAB_00403b75
    CMP dword ptr [0x0067939c],0x20     ; 00403af7 | g_BitsPerPixel
    JNZ 0x00403b69                      ; 00403afe
        ;   XREF to: 00403b69 (CONDITIONAL_JUMP)  ; LAB_00403b69
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00403b00 | g_ScanlineRenderFunc
    PUSH EDI                            ; 00403b0a
        ;   Label: LAB_00403b0a
    MOV EAX,dword ptr [EBX + 0x10]      ; 00403b0b
    PUSH EAX                            ; 00403b0e
    MOV EDX,dword ptr [EBX + 0xc]       ; 00403b0f
    MOV EDI,0x10                        ; 00403b12
    PUSH EDX                            ; 00403b17
    MOV ECX,dword ptr [EBX + 0x8]       ; 00403b18
    XOR EBP,EBP                         ; 00403b1b
    PUSH ECX                            ; 00403b1d
    MOV dword ptr [0x02d052a0],EDI      ; 00403b1e | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00403b24 | g_VertexPreprocessMode
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00403b2a
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00403b2f
    PUSH EAX                            ; 00403b32
    MOV EDI,dword ptr [0x00772a5c]      ; 00403b33 | g_CurrentPolygonColor
    PUSH EDI                            ; 00403b39
    MOV [0x02d02574],EAX                ; 00403b3a | g_CurrentLightingValue
    CALL engine_3d.c_makeGrayscaleColor_FUN_004039c0 ; 00403b3f
        ;   XREF to: 004039c0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00403b44
    PUSH ESI                            ; 00403b47
    MOV EBP,dword ptr [EBX + 0x4]       ; 00403b48
    PUSH EBP                            ; 00403b4b
    MOV [0x02d02570],EAX                ; 00403b4c | g_ActiveRenderColor
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00403b51
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403b56
    POP EDI                             ; 00403b59
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403b5a
        ;   Label: LAB_00403b5a
    LEA EAX,[EBX + 0x18]                ; 00403b5d
    SHL ESI,0x2                         ; 00403b60
    ADD EAX,ESI                         ; 00403b63
    POP EBP                             ; 00403b65
    POP ESI                             ; 00403b66
    POP EBX                             ; 00403b67
    RET                                 ; 00403b68
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00403b69 | g_ScanlineRenderFunc
        ;   Label: LAB_00403b69
    JMP 0x00403b0a                      ; 00403b73
        ;   XREF to: 00403b0a (UNCONDITIONAL_JUMP)  ; LAB_00403b0a
    CMP dword ptr [0x0067939c],0x20     ; 00403b75 | g_BitsPerPixel
        ;   Label: LAB_00403b75
    JNZ 0x00403b8a                      ; 00403b7c
        ;   XREF to: 00403b8a (CONDITIONAL_JUMP)  ; LAB_00403b8a
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00403b7e | g_ScanlineRenderFunc
    JMP 0x00403b0a                      ; 00403b88
        ;   XREF to: 00403b0a (UNCONDITIONAL_JUMP)  ; LAB_00403b0a
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00403b8a | g_ScanlineRenderFunc
        ;   Label: LAB_00403b8a
    JMP 0x00403b0a                      ; 00403b94
        ;   XREF to: 00403b0a (UNCONDITIONAL_JUMP)  ; LAB_00403b0a

