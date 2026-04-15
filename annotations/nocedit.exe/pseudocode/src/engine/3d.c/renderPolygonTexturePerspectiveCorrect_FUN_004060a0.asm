; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004060a0
        ;   Label: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0
    PUSH ESI                            ; 004060a1
    PUSH EBP                            ; 004060a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004060a3
    LEA ESI,[EBX + 0x18]                ; 004060a7
    LEA EAX,[EBX + 0x8]                 ; 004060aa
    PUSH EAX                            ; 004060ad
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004060ae
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004060b3
    TEST EAX,EAX                        ; 004060b6
    JZ 0x00406111                       ; 004060b8
        ;   XREF to: 00406111 (CONDITIONAL_JUMP)  ; LAB_00406111
    CMP dword ptr [0x02d05248],0x0      ; 004060ba | g_MMXSupported
    JNZ 0x0040612c                      ; 004060c1
        ;   XREF to: 0040612c (CONDITIONAL_JUMP)  ; LAB_0040612c
    CMP dword ptr [0x0067939c],0x20     ; 004060c3 | g_BitsPerPixel
    JNZ 0x00406120                      ; 004060ca
        ;   XREF to: 00406120 (CONDITIONAL_JUMP)  ; LAB_00406120
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004060cc | g_ScanlineRenderFunc
    PUSH EDI                            ; 004060d6
        ;   Label: LAB_004060d6
    MOV EDI,0xc3                        ; 004060d7
    PUSH 0xffff                         ; 004060dc
    MOV dword ptr [0x02d052a0],EDI      ; 004060e1 | g_RenderStateFlags
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004060e7
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004060ec
    MOV EBP,0x1                         ; 004060ef
    PUSH EBX                            ; 004060f4
    MOV dword ptr [0x02d052a4],EBP      ; 004060f5 | g_VertexPreprocessMode
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 004060fb
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406100
    PUSH ESI                            ; 00406103
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406104
    PUSH EAX                            ; 00406107
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406108
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040610d
    POP EDI                             ; 00406110
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406111
        ;   Label: LAB_00406111
    ADD EBX,0x18                        ; 00406114
    SHL EAX,0x2                         ; 00406117
    ADD EAX,EBX                         ; 0040611a
    POP EBP                             ; 0040611c
    POP ESI                             ; 0040611d
    POP EBX                             ; 0040611e
    RET                                 ; 0040611f
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406120 | g_ScanlineRenderFunc
        ;   Label: LAB_00406120
    JMP 0x004060d6                      ; 0040612a
        ;   XREF to: 004060d6 (UNCONDITIONAL_JUMP)  ; LAB_004060d6
    CMP dword ptr [0x0067939c],0x20     ; 0040612c | g_BitsPerPixel
        ;   Label: LAB_0040612c
    JNZ 0x00406141                      ; 00406133
        ;   XREF to: 00406141 (CONDITIONAL_JUMP)  ; LAB_00406141
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406135 | g_ScanlineRenderFunc
    JMP 0x004060d6                      ; 0040613f
        ;   XREF to: 004060d6 (UNCONDITIONAL_JUMP)  ; LAB_004060d6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406141 | g_ScanlineRenderFunc
        ;   Label: LAB_00406141
    JMP 0x004060d6                      ; 0040614b
        ;   XREF to: 004060d6 (UNCONDITIONAL_JUMP)  ; LAB_004060d6

