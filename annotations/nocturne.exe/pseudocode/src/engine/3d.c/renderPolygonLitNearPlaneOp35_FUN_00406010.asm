; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitNearPlaneOp35_FUN_00406010(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406010
        ;   Label: engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_00406010
    PUSH ESI                            ; 00406011
    PUSH EBP                            ; 00406012
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406013
    LEA ESI,[EBX + 0x18]                ; 00406017
    LEA EAX,[EBX + 0x8]                 ; 0040601a
    PUSH EAX                            ; 0040601d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040601e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406023
    TEST EAX,EAX                        ; 00406026
    JZ 0x00406074                       ; 00406028
        ;   XREF to: 00406074 (CONDITIONAL_JUMP)  ; LAB_00406074
    CMP dword ptr [0x01c03948],0x0      ; 0040602a | g_MMXSupported
    JNZ 0x0040608f                      ; 00406031
        ;   XREF to: 0040608f (CONDITIONAL_JUMP)  ; LAB_0040608f
    CMP dword ptr [0x005b7624],0x20     ; 00406033 | g_BitsPerPixel
    JNZ 0x00406083                      ; 0040603a
        ;   XREF to: 00406083 (CONDITIONAL_JUMP)  ; LAB_00406083
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040603c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406046
        ;   Label: LAB_00406046
    MOV EDI,0xd1                        ; 00406047
    MOV EBP,0x3                         ; 0040604c
    PUSH EBX                            ; 00406051
    MOV dword ptr [0x01c039a0],EDI      ; 00406052 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EBP      ; 00406058 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040605e
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406063
    PUSH ESI                            ; 00406066
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406067
    PUSH EAX                            ; 0040606a
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 0040606b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406070
    POP EDI                             ; 00406073
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406074
        ;   Label: LAB_00406074
    ADD EBX,0x18                        ; 00406077
    SHL EAX,0x2                         ; 0040607a
    ADD EAX,EBX                         ; 0040607d
    POP EBP                             ; 0040607f
    POP ESI                             ; 00406080
    POP EBX                             ; 00406081
    RET                                 ; 00406082
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406083 | g_ScanlineRenderFunc
        ;   Label: LAB_00406083
    JMP 0x00406046                      ; 0040608d
        ;   XREF to: 00406046 (UNCONDITIONAL_JUMP)  ; LAB_00406046
    CMP dword ptr [0x005b7624],0x20     ; 0040608f | g_BitsPerPixel
        ;   Label: LAB_0040608f
    JNZ 0x004060a4                      ; 00406096
        ;   XREF to: 004060a4 (CONDITIONAL_JUMP)  ; LAB_004060a4
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406098 | g_ScanlineRenderFunc
    JMP 0x00406046                      ; 004060a2
        ;   XREF to: 00406046 (UNCONDITIONAL_JUMP)  ; LAB_00406046
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004060a4 | g_ScanlineRenderFunc
        ;   Label: LAB_004060a4
    JMP 0x00406046                      ; 004060ae
        ;   XREF to: 00406046 (UNCONDITIONAL_JUMP)  ; LAB_00406046

