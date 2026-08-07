; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonVertexAlphaLitOp60_FUN_004081d0(SMRGLHeaderPrimitive *prim)
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

    PUSH EBX                            ; 004081d0
        ;   Label: engine_3d.c_renderPolygonVertexAlphaLitOp60_FUN_004081d0
    PUSH ESI                            ; 004081d1
    PUSH EBP                            ; 004081d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004081d3
    LEA ESI,[EBX + 0x18]                ; 004081d7
    LEA EAX,[EBX + 0x8]                 ; 004081da
    PUSH EAX                            ; 004081dd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004081de
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004081e3
    TEST EAX,EAX                        ; 004081e6
    JZ 0x00408234                       ; 004081e8
        ;   XREF to: 00408234 (CONDITIONAL_JUMP)  ; LAB_00408234
    CMP dword ptr [0x01c03948],0x0      ; 004081ea | g_MMXSupported
    JNZ 0x0040824f                      ; 004081f1
        ;   XREF to: 0040824f (CONDITIONAL_JUMP)  ; LAB_0040824f
    CMP dword ptr [0x005b7624],0x20     ; 004081f3 | g_BitsPerPixel
    JNZ 0x00408243                      ; 004081fa
        ;   XREF to: 00408243 (CONDITIONAL_JUMP)  ; LAB_00408243
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004081fc | g_ScanlineRenderFunc
    PUSH EDI                            ; 00408206
        ;   Label: LAB_00408206
    MOV EDI,0x163                       ; 00408207
    MOV EBP,0x1                         ; 0040820c
    PUSH EBX                            ; 00408211
    MOV dword ptr [0x01c039a0],EDI      ; 00408212 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EBP      ; 00408218 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040821e
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00408223
    PUSH ESI                            ; 00408226
    MOV EAX,dword ptr [EBX + 0x4]       ; 00408227
    PUSH EAX                            ; 0040822a
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 0040822b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00408230
    POP EDI                             ; 00408233
    MOV EAX,dword ptr [EBX + 0x4]       ; 00408234
        ;   Label: LAB_00408234
    ADD EBX,0x18                        ; 00408237
    SHL EAX,0x2                         ; 0040823a
    ADD EAX,EBX                         ; 0040823d
    POP EBP                             ; 0040823f
    POP ESI                             ; 00408240
    POP EBX                             ; 00408241
    RET                                 ; 00408242
    MOV dword ptr [0x01c00c7c],0x530322 ; 00408243 | g_ScanlineRenderFunc
        ;   Label: LAB_00408243
    JMP 0x00408206                      ; 0040824d
        ;   XREF to: 00408206 (UNCONDITIONAL_JUMP)  ; LAB_00408206
    CMP dword ptr [0x005b7624],0x20     ; 0040824f | g_BitsPerPixel
        ;   Label: LAB_0040824f
    JNZ 0x00408264                      ; 00408256
        ;   XREF to: 00408264 (CONDITIONAL_JUMP)  ; LAB_00408264
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00408258 | g_ScanlineRenderFunc
    JMP 0x00408206                      ; 00408262
        ;   XREF to: 00408206 (UNCONDITIONAL_JUMP)  ; LAB_00408206
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408264 | g_ScanlineRenderFunc
        ;   Label: LAB_00408264
    JMP 0x00408206                      ; 0040826e
        ;   XREF to: 00408206 (UNCONDITIONAL_JUMP)  ; LAB_00408206

