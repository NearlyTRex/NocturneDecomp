; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_00405ce0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d0c8
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

    PUSH EBX                            ; 00405ce0
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthOp42_FUN_00405ce0
    PUSH ESI                            ; 00405ce1
    PUSH EBP                            ; 00405ce2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405ce3
    LEA ESI,[EBX + 0x18]                ; 00405ce7
    LEA EAX,[EBX + 0x8]                 ; 00405cea
    PUSH EAX                            ; 00405ced
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405cee
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405cf3
    TEST EAX,EAX                        ; 00405cf6
    JZ 0x00405d3b                       ; 00405cf8
        ;   XREF to: 00405d3b (CONDITIONAL_JUMP)  ; LAB_00405d3b
    CMP dword ptr [0x02d05248],0x0      ; 00405cfa | g_MMXSupported
    JNZ 0x00405d56                      ; 00405d01
        ;   XREF to: 00405d56 (CONDITIONAL_JUMP)  ; LAB_00405d56
    CMP dword ptr [0x0067939c],0x20     ; 00405d03 | g_BitsPerPixel
    JNZ 0x00405d4a                      ; 00405d0a
        ;   XREF to: 00405d4a (CONDITIONAL_JUMP)  ; LAB_00405d4a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405d0c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405d16
        ;   Label: LAB_00405d16
    MOV EDI,0xc5                        ; 00405d17
    PUSH ESI                            ; 00405d1c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405d1d
    MOV EBP,0x1                         ; 00405d20
    PUSH EAX                            ; 00405d25
    MOV dword ptr [0x02d052a0],EDI      ; 00405d26 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405d2c | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405d32
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405d37
    POP EDI                             ; 00405d3a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405d3b
        ;   Label: LAB_00405d3b
    ADD EBX,0x18                        ; 00405d3e
    SHL EAX,0x2                         ; 00405d41
    ADD EAX,EBX                         ; 00405d44
    POP EBP                             ; 00405d46
    POP ESI                             ; 00405d47
    POP EBX                             ; 00405d48
    RET                                 ; 00405d49
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405d4a | g_ScanlineRenderFunc
        ;   Label: LAB_00405d4a
    JMP 0x00405d16                      ; 00405d54
        ;   XREF to: 00405d16 (UNCONDITIONAL_JUMP)  ; LAB_00405d16
    CMP dword ptr [0x0067939c],0x20     ; 00405d56 | g_BitsPerPixel
        ;   Label: LAB_00405d56
    JNZ 0x00405d6b                      ; 00405d5d
        ;   XREF to: 00405d6b (CONDITIONAL_JUMP)  ; LAB_00405d6b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405d5f | g_ScanlineRenderFunc
    JMP 0x00405d16                      ; 00405d69
        ;   XREF to: 00405d16 (UNCONDITIONAL_JUMP)  ; LAB_00405d16
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405d6b | g_ScanlineRenderFunc
        ;   Label: LAB_00405d6b
    JMP 0x00405d16                      ; 00405d75
        ;   XREF to: 00405d16 (UNCONDITIONAL_JUMP)  ; LAB_00405d16

