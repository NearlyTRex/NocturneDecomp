; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureEnable_FUN_00403cc0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   core_texlist.cpp_CTextureList_previewTexture_FUN_005dc760 at 005dc975
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403cc0
        ;   Label: engine_3d.c_renderPolygonTextureEnable_FUN_00403cc0
    PUSH ESI                            ; 00403cc1
    PUSH EBP                            ; 00403cc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403cc3
    LEA ESI,[EBX + 0x18]                ; 00403cc7
    LEA EAX,[EBX + 0x8]                 ; 00403cca
    PUSH EAX                            ; 00403ccd
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00403cce
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00403cd3
    TEST EAX,EAX                        ; 00403cd6
    JZ 0x00403d21                       ; 00403cd8
        ;   XREF to: 00403d21 (CONDITIONAL_JUMP)  ; LAB_00403d21
    CMP dword ptr [0x02d05248],0x0      ; 00403cda | g_MMXSupported
    JNZ 0x00403d3c                      ; 00403ce1
        ;   XREF to: 00403d3c (CONDITIONAL_JUMP)  ; LAB_00403d3c
    CMP dword ptr [0x0067939c],0x20     ; 00403ce3 | g_BitsPerPixel
    JNZ 0x00403d30                      ; 00403cea
        ;   XREF to: 00403d30 (CONDITIONAL_JUMP)  ; LAB_00403d30
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00403cec | g_ScanlineRenderFunc
    PUSH EDI                            ; 00403cf6
        ;   Label: LAB_00403cf6
    MOV EDI,0x1                         ; 00403cf7
    PUSH EBX                            ; 00403cfc
    XOR EBP,EBP                         ; 00403cfd
    MOV dword ptr [0x02d052a0],EDI      ; 00403cff | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00403d05 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00403d0b
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00403d10
    PUSH ESI                            ; 00403d13
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d14
    PUSH EAX                            ; 00403d17
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00403d18
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403d1d
    POP EDI                             ; 00403d20
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d21
        ;   Label: LAB_00403d21
    ADD EBX,0x18                        ; 00403d24
    SHL EAX,0x2                         ; 00403d27
    ADD EAX,EBX                         ; 00403d2a
    POP EBP                             ; 00403d2c
    POP ESI                             ; 00403d2d
    POP EBX                             ; 00403d2e
    RET                                 ; 00403d2f
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00403d30 | g_ScanlineRenderFunc
        ;   Label: LAB_00403d30
    JMP 0x00403cf6                      ; 00403d3a
        ;   XREF to: 00403cf6 (UNCONDITIONAL_JUMP)  ; LAB_00403cf6
    CMP dword ptr [0x0067939c],0x20     ; 00403d3c | g_BitsPerPixel
        ;   Label: LAB_00403d3c
    JNZ 0x00403d51                      ; 00403d43
        ;   XREF to: 00403d51 (CONDITIONAL_JUMP)  ; LAB_00403d51
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00403d45 | g_ScanlineRenderFunc
    JMP 0x00403cf6                      ; 00403d4f
        ;   XREF to: 00403cf6 (UNCONDITIONAL_JUMP)  ; LAB_00403cf6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00403d51 | g_ScanlineRenderFunc
        ;   Label: LAB_00403d51
    JMP 0x00403cf6                      ; 00403d5b
        ;   XREF to: 00403cf6 (UNCONDITIONAL_JUMP)  ; LAB_00403cf6

