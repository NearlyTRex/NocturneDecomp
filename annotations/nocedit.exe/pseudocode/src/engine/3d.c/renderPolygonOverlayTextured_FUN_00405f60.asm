; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60(SMRGLHeaderPrimitive * polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   BOOL g_MMXSupported
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405f60
        ;   Label: engine_3d.c_renderPolygonOverlayTextured_FUN_00405f60
    PUSH ESI                            ; 00405f61
    PUSH EBP                            ; 00405f62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405f63
    LEA ESI,[EBX + 0x18]                ; 00405f67
    LEA EAX,[EBX + 0x8]                 ; 00405f6a
    PUSH EAX                            ; 00405f6d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405f6e | int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00405f73
    TEST EAX,EAX                        ; 00405f76
    JZ 0x00405fb8                       ; 00405f78 | LAB_00405fb8
        ;   XREF to: 00405fb8 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d05248],0x0      ; 00405f7a | BOOL g_MMXSupported
    JNZ 0x00405fd3                      ; 00405f81 | LAB_00405fd3
        ;   XREF to: 00405fd3 (CONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405f83 | int g_BitsPerPixel
    JNZ 0x00405fc7                      ; 00405f8a | LAB_00405fc7
        ;   XREF to: 00405fc7 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405f8c | RenderScanlineFunc * g_ScanlineRenderFunc
    PUSH EDI                            ; 00405f96
        ;   Label: LAB_00405f96
    MOV EDI,0x1                         ; 00405f97
    PUSH ESI                            ; 00405f9c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f9d
    XOR EBP,EBP                         ; 00405fa0
    PUSH EAX                            ; 00405fa2
    MOV dword ptr [0x02d052a0],EDI      ; 00405fa3 | int g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405fa9 | int g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405faf | void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00405fb4
    POP EDI                             ; 00405fb7
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405fb8
        ;   Label: LAB_00405fb8
    ADD EBX,0x18                        ; 00405fbb
    SHL EAX,0x2                         ; 00405fbe
    ADD EAX,EBX                         ; 00405fc1
    POP EBP                             ; 00405fc3
    POP ESI                             ; 00405fc4
    POP EBX                             ; 00405fc5
    RET                                 ; 00405fc6
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405fc7 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405fc7
    JMP 0x00405f96                      ; 00405fd1 | LAB_00405f96
        ;   XREF to: 00405f96 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x0067939c],0x20     ; 00405fd3 | int g_BitsPerPixel
        ;   Label: LAB_00405fd3
    JNZ 0x00405fe8                      ; 00405fda | LAB_00405fe8
        ;   XREF to: 00405fe8 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405fdc | RenderScanlineFunc * g_ScanlineRenderFunc
    JMP 0x00405f96                      ; 00405fe6 | LAB_00405f96
        ;   XREF to: 00405f96 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405fe8 | RenderScanlineFunc * g_ScanlineRenderFunc
        ;   Label: LAB_00405fe8
    JMP 0x00405f96                      ; 00405ff2 | LAB_00405f96
        ;   XREF to: 00405f96 (UNCONDITIONAL_JUMP)

