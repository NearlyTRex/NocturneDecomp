; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonVertexLitNormalized_FUN_00405020(SMRGLHeaderPrimitive *polygon_info)
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

    PUSH EBX                            ; 00405020
        ;   Label: engine_3d.c_renderPolygonVertexLitNormalized_FUN_00405020
    PUSH ESI                            ; 00405021
    PUSH EBP                            ; 00405022
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405023
    LEA ESI,[EBX + 0x18]                ; 00405027
    LEA EAX,[EBX + 0x8]                 ; 0040502a
    PUSH EAX                            ; 0040502d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040502e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405033
    TEST EAX,EAX                        ; 00405036
    JZ 0x0040507b                       ; 00405038
        ;   XREF to: 0040507b (CONDITIONAL_JUMP)  ; LAB_0040507b
    CMP dword ptr [0x02d05248],0x0      ; 0040503a | g_MMXSupported
    JNZ 0x00405096                      ; 00405041
        ;   XREF to: 00405096 (CONDITIONAL_JUMP)  ; LAB_00405096
    CMP dword ptr [0x0067939c],0x20     ; 00405043 | g_BitsPerPixel
    JNZ 0x0040508a                      ; 0040504a
        ;   XREF to: 0040508a (CONDITIONAL_JUMP)  ; LAB_0040508a
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040504c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405056
        ;   Label: LAB_00405056
    MOV EDI,0x9                         ; 00405057
    PUSH ESI                            ; 0040505c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040505d
    MOV EBP,0x2                         ; 00405060
    PUSH EAX                            ; 00405065
    MOV dword ptr [0x02d052a0],EDI      ; 00405066 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0040506c | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405072
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405077
    POP EDI                             ; 0040507a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040507b
        ;   Label: LAB_0040507b
    ADD EBX,0x18                        ; 0040507e
    SHL EAX,0x2                         ; 00405081
    ADD EAX,EBX                         ; 00405084
    POP EBP                             ; 00405086
    POP ESI                             ; 00405087
    POP EBX                             ; 00405088
    RET                                 ; 00405089
    MOV dword ptr [0x02d0257c],0x5b5322 ; 0040508a | g_ScanlineRenderFunc
        ;   Label: LAB_0040508a
    JMP 0x00405056                      ; 00405094
        ;   XREF to: 00405056 (UNCONDITIONAL_JUMP)  ; LAB_00405056
    CMP dword ptr [0x0067939c],0x20     ; 00405096 | g_BitsPerPixel
        ;   Label: LAB_00405096
    JNZ 0x004050ab                      ; 0040509d
        ;   XREF to: 004050ab (CONDITIONAL_JUMP)  ; LAB_004050ab
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0040509f | g_ScanlineRenderFunc
    JMP 0x00405056                      ; 004050a9
        ;   XREF to: 00405056 (UNCONDITIONAL_JUMP)  ; LAB_00405056
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004050ab | g_ScanlineRenderFunc
        ;   Label: LAB_004050ab
    JMP 0x00405056                      ; 004050b5
        ;   XREF to: 00405056 (UNCONDITIONAL_JUMP)  ; LAB_00405056

