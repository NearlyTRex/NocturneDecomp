; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_004047e0(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_006b0260
;   int g_ActiveRenderColor
;   int g_CurrentLightingValue
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_lookupLitColor_FUN_00404680
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;   engine_light.cpp_calculateLighting_FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004047e0
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_004047e0
    PUSH ESI                            ; 004047e1
    PUSH EBP                            ; 004047e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004047e3
    LEA ESI,[EBX + 0x18]                ; 004047e7
    LEA EAX,[EBX + 0x8]                 ; 004047ea
    PUSH EAX                            ; 004047ed
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004047ee
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004047f3
    TEST EAX,EAX                        ; 004047f6
    JZ 0x0040486a                       ; 004047f8
        ;   XREF to: 0040486a (CONDITIONAL_JUMP)  ; LAB_0040486a
    CMP dword ptr [0x01c03948],0x0      ; 004047fa | g_MMXSupported
    JNZ 0x00404885                      ; 00404801
        ;   XREF to: 00404885 (CONDITIONAL_JUMP)  ; LAB_00404885
    CMP dword ptr [0x005b7624],0x20     ; 00404807 | g_BitsPerPixel
    JNZ 0x00404879                      ; 0040480e
        ;   XREF to: 00404879 (CONDITIONAL_JUMP)  ; LAB_00404879
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00404810 | g_ScanlineRenderFunc
    PUSH EDI                            ; 0040481a
        ;   Label: LAB_0040481a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040481b
    PUSH EAX                            ; 0040481e
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040481f
    MOV EDI,0x10                        ; 00404822
    PUSH EDX                            ; 00404827
    MOV ECX,dword ptr [EBX + 0x8]       ; 00404828
    XOR EBP,EBP                         ; 0040482b
    PUSH ECX                            ; 0040482d
    MOV dword ptr [0x01c039a0],EDI      ; 0040482e | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EBP      ; 00404834 | g_VertexPreprocessMode
    CALL engine_light.cpp_calculateLighting_FUN_004c6cc0 ; 0040483a
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004c6cc0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040483f
    PUSH EAX                            ; 00404842
    MOV EDI,dword ptr [0x006b0260]      ; 00404843 | DAT_006b0260
    PUSH EDI                            ; 00404849
    MOV [0x01c00c74],EAX                ; 0040484a | g_CurrentLightingValue
    CALL engine_3d.c_lookupLitColor_FUN_00404680 ; 0040484f
        ;   XREF to: 00404680 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00404680(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00404854
    PUSH ESI                            ; 00404857
    MOV EBP,dword ptr [EBX + 0x4]       ; 00404858
    PUSH EBP                            ; 0040485b
    MOV [0x01c00c70],EAX                ; 0040485c | g_ActiveRenderColor
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 00404861
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404866
    POP EDI                             ; 00404869
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040486a
        ;   Label: LAB_0040486a
    LEA EAX,[EBX + 0x18]                ; 0040486d
    SHL ESI,0x2                         ; 00404870
    ADD EAX,ESI                         ; 00404873
    POP EBP                             ; 00404875
    POP ESI                             ; 00404876
    POP EBX                             ; 00404877
    RET                                 ; 00404878
    MOV dword ptr [0x01c00c7c],0x530322 ; 00404879 | g_ScanlineRenderFunc
        ;   Label: LAB_00404879
    JMP 0x0040481a                      ; 00404883
        ;   XREF to: 0040481a (UNCONDITIONAL_JUMP)  ; LAB_0040481a
    CMP dword ptr [0x005b7624],0x20     ; 00404885 | g_BitsPerPixel
        ;   Label: LAB_00404885
    JNZ 0x0040489a                      ; 0040488c
        ;   XREF to: 0040489a (CONDITIONAL_JUMP)  ; LAB_0040489a
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040488e | g_ScanlineRenderFunc
    JMP 0x0040481a                      ; 00404898
        ;   XREF to: 0040481a (UNCONDITIONAL_JUMP)  ; LAB_0040481a
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040489a | g_ScanlineRenderFunc
        ;   Label: LAB_0040489a
    JMP 0x0040481a                      ; 004048a4
        ;   XREF to: 0040481a (UNCONDITIONAL_JUMP)  ; LAB_0040481a

