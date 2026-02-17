; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonExtremeQualityMode_FUN_00406b40(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
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

    PUSH EBX                            ; 00406b40
        ;   Label: engine_3d.c_renderPolygonExtremeQualityMode_FUN_00406b40
    PUSH ESI                            ; 00406b41
    PUSH EBP                            ; 00406b42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406b43
    LEA ESI,[EBX + 0x18]                ; 00406b47
    LEA EAX,[EBX + 0x8]                 ; 00406b4a
    PUSH EAX                            ; 00406b4d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00406b4e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406b53
    TEST EAX,EAX                        ; 00406b56
    JZ 0x00406ba4                       ; 00406b58
        ;   XREF to: 00406ba4 (CONDITIONAL_JUMP)  ; LAB_00406ba4
    CMP dword ptr [0x02d05248],0x0      ; 00406b5a | g_MMXSupported
    JNZ 0x00406bbf                      ; 00406b61
        ;   XREF to: 00406bbf (CONDITIONAL_JUMP)  ; LAB_00406bbf
    CMP dword ptr [0x0067939c],0x20     ; 00406b63 | g_BitsPerPixel
    JNZ 0x00406bb3                      ; 00406b6a
        ;   XREF to: 00406bb3 (CONDITIONAL_JUMP)  ; LAB_00406bb3
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00406b6c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00406b76
        ;   Label: LAB_00406b76
    MOV EDI,0x1f3                       ; 00406b77
    MOV EBP,0x1                         ; 00406b7c
    PUSH EBX                            ; 00406b81
    MOV dword ptr [0x02d052a0],EDI      ; 00406b82 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00406b88 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 00406b8e
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x4                         ; 00406b93
    PUSH ESI                            ; 00406b96
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406b97
    PUSH EAX                            ; 00406b9a
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00406b9b
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406ba0
    POP EDI                             ; 00406ba3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406ba4
        ;   Label: LAB_00406ba4
    ADD EBX,0x18                        ; 00406ba7
    SHL EAX,0x2                         ; 00406baa
    ADD EAX,EBX                         ; 00406bad
    POP EBP                             ; 00406baf
    POP ESI                             ; 00406bb0
    POP EBX                             ; 00406bb1
    RET                                 ; 00406bb2
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00406bb3 | g_ScanlineRenderFunc
        ;   Label: LAB_00406bb3
    JMP 0x00406b76                      ; 00406bbd
        ;   XREF to: 00406b76 (UNCONDITIONAL_JUMP)  ; LAB_00406b76
    CMP dword ptr [0x0067939c],0x20     ; 00406bbf | g_BitsPerPixel
        ;   Label: LAB_00406bbf
    JNZ 0x00406bd4                      ; 00406bc6
        ;   XREF to: 00406bd4 (CONDITIONAL_JUMP)  ; LAB_00406bd4
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00406bc8 | g_ScanlineRenderFunc
    JMP 0x00406b76                      ; 00406bd2
        ;   XREF to: 00406b76 (UNCONDITIONAL_JUMP)  ; LAB_00406b76
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00406bd4 | g_ScanlineRenderFunc
        ;   Label: LAB_00406bd4
    JMP 0x00406b76                      ; 00406bde
        ;   XREF to: 00406b76 (UNCONDITIONAL_JUMP)  ; LAB_00406b76

