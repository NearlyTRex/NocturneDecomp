; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygon_FUN_00403ba0(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d195
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_AdvancedClippingEnabled
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403ba0
        ;   Label: engine_3d.c_renderPolygon_FUN_00403ba0
    PUSH ESI                            ; 00403ba1
    PUSH EBP                            ; 00403ba2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403ba3
    LEA ESI,[EBX + 0x18]                ; 00403ba7
    LEA EAX,[EBX + 0x8]                 ; 00403baa
    PUSH EAX                            ; 00403bad
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00403bae | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00403bb3
    TEST EAX,EAX                        ; 00403bb6
    JZ 0x00403c02                       ; 00403bb8 | LAB_00403c02
        ;   XREF to: 00403c02 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d02578],0x0      ; 00403bba | int g_AdvancedClippingEnabled
    JZ 0x00403c3e                       ; 00403bc1 | LAB_00403c3e
        ;   XREF to: 00403c3e (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00403bc7 | BOOL g_MMXSupported
    JNZ 0x00403c1d                      ; 00403bce | LAB_00403c1d
        ;   XREF to: 00403c1d (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00403bd0 | int g_BitsPerPixel
    JNZ 0x00403c11                      ; 00403bd7 | LAB_00403c11
        ;   XREF to: 00403c11 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00403bd9 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EBP,0x4                         ; 00403be3
        ;   Label: LAB_00403be3
    PUSH ESI                            ; 00403be8
    MOV EDX,dword ptr [EBX + 0x4]       ; 00403be9
    XOR EAX,EAX                         ; 00403bec
    PUSH EDX                            ; 00403bee
    MOV dword ptr [0x02d052a0],EBP      ; 00403bef | int g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 00403bf5 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00403bfa | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00403bff
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403c02
        ;   Label: LAB_00403c02
    LEA EAX,[EBX + 0x18]                ; 00403c05
    SHL ESI,0x2                         ; 00403c08
    ADD EAX,ESI                         ; 00403c0b
    POP EBP                             ; 00403c0d
    POP ESI                             ; 00403c0e
    POP EBX                             ; 00403c0f
    RET                                 ; 00403c10
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00403c11 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00403c11
    JMP 0x00403be3                      ; 00403c1b | LAB_00403be3
        ;   XREF to: 00403be3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00403c1d | int g_BitsPerPixel
        ;   Label: LAB_00403c1d
    JNZ 0x00403c32                      ; 00403c24 | LAB_00403c32
        ;   XREF to: 00403c32 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00403c26 | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00403be3                      ; 00403c30 | LAB_00403be3
        ;   XREF to: 00403be3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00403c32 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00403c32
    JMP 0x00403be3                      ; 00403c3c | LAB_00403be3
        ;   XREF to: 00403be3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00403c3e | BOOL g_MMXSupported
        ;   Label: LAB_00403c3e
    JNZ 0x00403c94                      ; 00403c45 | LAB_00403c94
        ;   XREF to: 00403c94 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00403c47 | int g_BitsPerPixel
    JNZ 0x00403c88                      ; 00403c4e | LAB_00403c88
        ;   XREF to: 00403c88 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00403c50 | RenderScanlineFunc * g_ScanlineRenderFunc
    MOV EBP,0x204                       ; 00403c5a
        ;   Label: LAB_00403c5a
    PUSH ESI                            ; 00403c5f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00403c60
    XOR EAX,EAX                         ; 00403c63
    PUSH EDX                            ; 00403c65
    MOV dword ptr [0x02d052a0],EBP      ; 00403c66 | int g_RenderStateFlags
    MOV [0x02d052a4],EAX                ; 00403c6c | int g_RenderStateFlag2
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00438420 ; 00403c71 | void engine_clipper.c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices)
        ;   XREF to: 00438420 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00403c76
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403c79
    LEA EAX,[EBX + 0x18]                ; 00403c7c
    SHL ESI,0x2                         ; 00403c7f
    ADD EAX,ESI                         ; 00403c82
    POP EBP                             ; 00403c84
    POP ESI                             ; 00403c85
    POP EBX                             ; 00403c86
    RET                                 ; 00403c87
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00403c88 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00403c88
    JMP 0x00403c5a                      ; 00403c92 | LAB_00403c5a
        ;   XREF to: 00403c5a (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00403c94 | int g_BitsPerPixel
        ;   Label: LAB_00403c94
    JNZ 0x00403ca9                      ; 00403c9b | LAB_00403ca9
        ;   XREF to: 00403ca9 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00403c9d | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00403c5a                      ; 00403ca7 | LAB_00403c5a
        ;   XREF to: 00403c5a (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00403ca9 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00403ca9
    JMP 0x00403c5a                      ; 00403cb3 | LAB_00403c5a
        ;   XREF to: 00403c5a (UNCONDITIONAL_JUMP)

