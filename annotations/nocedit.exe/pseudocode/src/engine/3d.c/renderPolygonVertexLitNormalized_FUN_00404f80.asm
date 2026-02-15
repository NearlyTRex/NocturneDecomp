; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonVertexLitNormalized_FUN_00404f80(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404f80
        ;   Label: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00404f80
    PUSH ESI                            ; 00404f81
    PUSH EBP                            ; 00404f82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404f83
    LEA ESI,[EBX + 0x18]                ; 00404f87
    LEA EAX,[EBX + 0x8]                 ; 00404f8a
    PUSH EAX                            ; 00404f8d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404f8e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404f93
    TEST EAX,EAX                        ; 00404f96
    JZ 0x00404fdb                       ; 00404f98
        ;   XREF to: 00404fdb (CONDITIONAL_JUMP)  ; LAB_00404fdb
    CMP dword ptr [0x02d05248],0x0      ; 00404f9a | g_MMXSupported
    JNZ 0x00404ff6                      ; 00404fa1
        ;   XREF to: 00404ff6 (CONDITIONAL_JUMP)  ; LAB_00404ff6
    CMP dword ptr [0x0067939c],0x20     ; 00404fa3 | g_BitsPerPixel
    JNZ 0x00404fea                      ; 00404faa
        ;   XREF to: 00404fea (CONDITIONAL_JUMP)  ; LAB_00404fea
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404fac | g_ScanlineRenderFunc
    PUSH EDI                            ; 00404fb6
        ;   Label: LAB_00404fb6
    MOV EDI,0x9                         ; 00404fb7
    PUSH ESI                            ; 00404fbc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404fbd
    MOV EBP,0x2                         ; 00404fc0
    PUSH EAX                            ; 00404fc5
    MOV dword ptr [0x02d052a0],EDI      ; 00404fc6 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00404fcc | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404fd2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404fd7
    POP EDI                             ; 00404fda
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404fdb
        ;   Label: LAB_00404fdb
    ADD EBX,0x18                        ; 00404fde
    SHL EAX,0x2                         ; 00404fe1
    ADD EAX,EBX                         ; 00404fe4
    POP EBP                             ; 00404fe6
    POP ESI                             ; 00404fe7
    POP EBX                             ; 00404fe8
    RET                                 ; 00404fe9
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404fea | g_ScanlineRenderFunc
        ;   Label: LAB_00404fea
    JMP 0x00404fb6                      ; 00404ff4
        ;   XREF to: 00404fb6 (UNCONDITIONAL_JUMP)  ; LAB_00404fb6
    CMP dword ptr [0x0067939c],0x20     ; 00404ff6 | g_BitsPerPixel
        ;   Label: LAB_00404ff6
    JNZ 0x0040500b                      ; 00404ffd
        ;   XREF to: 0040500b (CONDITIONAL_JUMP)  ; LAB_0040500b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404fff | g_ScanlineRenderFunc
    JMP 0x00404fb6                      ; 00405009
        ;   XREF to: 00404fb6 (UNCONDITIONAL_JUMP)  ; LAB_00404fb6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0040500b | g_ScanlineRenderFunc
        ;   Label: LAB_0040500b
    JMP 0x00404fb6                      ; 00405015
        ;   XREF to: 00404fb6 (UNCONDITIONAL_JUMP)  ; LAB_00404fb6

