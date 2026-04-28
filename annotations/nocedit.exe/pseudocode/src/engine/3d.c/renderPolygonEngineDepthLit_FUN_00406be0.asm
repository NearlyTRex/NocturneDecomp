; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonEngineDepthLit_FUN_00406be0(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406be0
        ;   Label: engine_3d.c_renderPolygonEngineDepthLit_FUN_00406be0
    PUSH ESI                            ; 00406be1
    PUSH EBP                            ; 00406be2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406be3
    LEA ESI,[EBX + 0x18]                ; 00406be7
    LEA EAX,[EBX + 0x8]                 ; 00406bea
    PUSH EAX                            ; 00406bed
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406bee
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406bf3
    TEST EAX,EAX                        ; 00406bf6
    JZ 0x00406c44                       ; 00406bf8
        ;   XREF to: 00406c44 (CONDITIONAL_JUMP)  ; LAB_00406c44
    CMP dword ptr [0x02d05248],0x0      ; 00406bfa | g_MMXSupported
    JNZ 0x00406c5f                      ; 00406c01
        ;   XREF to: 00406c5f (CONDITIONAL_JUMP)  ; LAB_00406c5f
    CMP dword ptr [0x0067939c],0x20     ; 00406c03 | g_BitsPerPixel
    JNZ 0x00406c53                      ; 00406c0a
        ;   XREF to: 00406c53 (CONDITIONAL_JUMP)  ; LAB_00406c53
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406c0c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406c16
        ;   Label: LAB_00406c16
    MOV EDI,0x163                       ; 00406c17
    MOV EBP,0x1                         ; 00406c1c
    PUSH EBX                            ; 00406c21
    MOV dword ptr [0x02d052a0],EDI      ; 00406c22 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00406c28 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00406c2e
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406c33
    PUSH ESI                            ; 00406c36
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406c37
    PUSH EAX                            ; 00406c3a
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406c3b
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406c40
    POP EDI                             ; 00406c43
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406c44
        ;   Label: LAB_00406c44
    ADD EBX,0x18                        ; 00406c47
    SHL EAX,0x2                         ; 00406c4a
    ADD EAX,EBX                         ; 00406c4d
    POP EBP                             ; 00406c4f
    POP ESI                             ; 00406c50
    POP EBX                             ; 00406c51
    RET                                 ; 00406c52
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406c53 | g_ScanlineRenderFunc
        ;   Label: LAB_00406c53
    JMP 0x00406c16                      ; 00406c5d
        ;   XREF to: 00406c16 (UNCONDITIONAL_JUMP)  ; LAB_00406c16
    CMP dword ptr [0x0067939c],0x20     ; 00406c5f | g_BitsPerPixel
        ;   Label: LAB_00406c5f
    JNZ 0x00406c74                      ; 00406c66
        ;   XREF to: 00406c74 (CONDITIONAL_JUMP)  ; LAB_00406c74
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406c68 | g_ScanlineRenderFunc
    JMP 0x00406c16                      ; 00406c72
        ;   XREF to: 00406c16 (UNCONDITIONAL_JUMP)  ; LAB_00406c16
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406c74 | g_ScanlineRenderFunc
        ;   Label: LAB_00406c74
    JMP 0x00406c16                      ; 00406c7e
        ;   XREF to: 00406c16 (UNCONDITIONAL_JUMP)  ; LAB_00406c16

