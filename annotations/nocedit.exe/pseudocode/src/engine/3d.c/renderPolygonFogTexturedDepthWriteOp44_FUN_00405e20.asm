; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedDepthWriteOp44_FUN_00405e20(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405e20
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthWriteOp44_FUN_00405e20
    PUSH ESI                            ; 00405e21
    PUSH EBP                            ; 00405e22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405e23
    LEA ESI,[EBX + 0x18]                ; 00405e27
    LEA EAX,[EBX + 0x8]                 ; 00405e2a
    PUSH EAX                            ; 00405e2d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405e2e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405e33
    TEST EAX,EAX                        ; 00405e36
    JZ 0x00405e7b                       ; 00405e38
        ;   XREF to: 00405e7b (CONDITIONAL_JUMP)  ; LAB_00405e7b
    CMP dword ptr [0x02d05248],0x0      ; 00405e3a | g_MMXSupported
    JNZ 0x00405e96                      ; 00405e41
        ;   XREF to: 00405e96 (CONDITIONAL_JUMP)  ; LAB_00405e96
    CMP dword ptr [0x0067939c],0x20     ; 00405e43 | g_BitsPerPixel
    JNZ 0x00405e8a                      ; 00405e4a
        ;   XREF to: 00405e8a (CONDITIONAL_JUMP)  ; LAB_00405e8a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405e4c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405e56
        ;   Label: LAB_00405e56
    MOV EDI,0x85                        ; 00405e57
    PUSH ESI                            ; 00405e5c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405e5d
    MOV EBP,0x1                         ; 00405e60
    PUSH EAX                            ; 00405e65
    MOV dword ptr [0x02d052a0],EDI      ; 00405e66 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405e6c | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405e72
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405e77
    POP EDI                             ; 00405e7a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405e7b
        ;   Label: LAB_00405e7b
    ADD EBX,0x18                        ; 00405e7e
    SHL EAX,0x2                         ; 00405e81
    ADD EAX,EBX                         ; 00405e84
    POP EBP                             ; 00405e86
    POP ESI                             ; 00405e87
    POP EBX                             ; 00405e88
    RET                                 ; 00405e89
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405e8a | g_ScanlineRenderFunc
        ;   Label: LAB_00405e8a
    JMP 0x00405e56                      ; 00405e94
        ;   XREF to: 00405e56 (UNCONDITIONAL_JUMP)  ; LAB_00405e56
    CMP dword ptr [0x0067939c],0x20     ; 00405e96 | g_BitsPerPixel
        ;   Label: LAB_00405e96
    JNZ 0x00405eab                      ; 00405e9d
        ;   XREF to: 00405eab (CONDITIONAL_JUMP)  ; LAB_00405eab
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405e9f | g_ScanlineRenderFunc
    JMP 0x00405e56                      ; 00405ea9
        ;   XREF to: 00405e56 (UNCONDITIONAL_JUMP)  ; LAB_00405e56
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405eab | g_ScanlineRenderFunc
        ;   Label: LAB_00405eab
    JMP 0x00405e56                      ; 00405eb5
        ;   XREF to: 00405e56 (UNCONDITIONAL_JUMP)  ; LAB_00405e56

