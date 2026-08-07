; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedPerspOp39_FUN_00406ea0(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406ea0
        ;   Label: engine_3d.c_renderPolygonFogTexturedPerspOp39_FUN_00406ea0
    PUSH ESI                            ; 00406ea1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00406ea2
    LEA ESI,[EBX + 0x18]                ; 00406ea6
    LEA EAX,[EBX + 0x8]                 ; 00406ea9
    PUSH EAX                            ; 00406eac
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406ead
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406eb2
    TEST EAX,EAX                        ; 00406eb5
    JZ 0x00406ef5                       ; 00406eb7
        ;   XREF to: 00406ef5 (CONDITIONAL_JUMP)  ; LAB_00406ef5
    CMP dword ptr [0x01c03948],0x0      ; 00406eb9 | g_MMXSupported
    JNZ 0x00406f0f                      ; 00406ec0
        ;   XREF to: 00406f0f (CONDITIONAL_JUMP)  ; LAB_00406f0f
    CMP dword ptr [0x005b7624],0x20     ; 00406ec2 | g_BitsPerPixel
    JNZ 0x00406f03                      ; 00406ec9
        ;   XREF to: 00406f03 (CONDITIONAL_JUMP)  ; LAB_00406f03
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406ecb | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406ed5
        ;   Label: LAB_00406ed5
    PUSH ESI                            ; 00406ed6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406ed7
    MOV EDI,0x5                         ; 00406eda
    PUSH EAX                            ; 00406edf
    MOV dword ptr [0x01c039a0],EDI      ; 00406ee0 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EDI      ; 00406ee6 | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 00406eec
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406ef1
    POP EDI                             ; 00406ef4
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406ef5
        ;   Label: LAB_00406ef5
    ADD EBX,0x18                        ; 00406ef8
    SHL EAX,0x2                         ; 00406efb
    ADD EAX,EBX                         ; 00406efe
    POP ESI                             ; 00406f00
    POP EBX                             ; 00406f01
    RET                                 ; 00406f02
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406f03 | g_ScanlineRenderFunc
        ;   Label: LAB_00406f03
    JMP 0x00406ed5                      ; 00406f0d
        ;   XREF to: 00406ed5 (UNCONDITIONAL_JUMP)  ; LAB_00406ed5
    CMP dword ptr [0x005b7624],0x20     ; 00406f0f | g_BitsPerPixel
        ;   Label: LAB_00406f0f
    JNZ 0x00406f24                      ; 00406f16
        ;   XREF to: 00406f24 (CONDITIONAL_JUMP)  ; LAB_00406f24
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406f18 | g_ScanlineRenderFunc
    JMP 0x00406ed5                      ; 00406f22
        ;   XREF to: 00406ed5 (UNCONDITIONAL_JUMP)  ; LAB_00406ed5
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406f24 | g_ScanlineRenderFunc
        ;   Label: LAB_00406f24
    JMP 0x00406ed5                      ; 00406f2e
        ;   XREF to: 00406ed5 (UNCONDITIONAL_JUMP)  ; LAB_00406ed5

