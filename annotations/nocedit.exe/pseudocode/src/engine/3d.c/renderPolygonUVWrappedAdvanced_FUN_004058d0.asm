; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVWrappedAdvanced_FUN_004058d0(SMRGLHeaderPrimitive *polygon_info)
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

    PUSH EBX                            ; 004058d0
        ;   Label: engine_3d.c_renderPolygonUVWrappedAdvanced_FUN_004058d0
    PUSH ESI                            ; 004058d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004058d2
    LEA ESI,[EBX + 0x18]                ; 004058d6
    LEA EAX,[EBX + 0x8]                 ; 004058d9
    PUSH EAX                            ; 004058dc
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004058dd
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004058e2
    TEST EAX,EAX                        ; 004058e5
    JZ 0x00405925                       ; 004058e7
        ;   XREF to: 00405925 (CONDITIONAL_JUMP)  ; LAB_00405925
    CMP dword ptr [0x02d05248],0x0      ; 004058e9 | g_MMXSupported
    JNZ 0x0040593f                      ; 004058f0
        ;   XREF to: 0040593f (CONDITIONAL_JUMP)  ; LAB_0040593f
    CMP dword ptr [0x0067939c],0x20     ; 004058f2 | g_BitsPerPixel
    JNZ 0x00405933                      ; 004058f9
        ;   XREF to: 00405933 (CONDITIONAL_JUMP)  ; LAB_00405933
    MOV dword ptr [0x02d0257c],0x5b50ec ; 004058fb | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405905
        ;   Label: LAB_00405905
    PUSH ESI                            ; 00405906
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405907
    MOV EDI,0x5                         ; 0040590a
    PUSH EAX                            ; 0040590f
    MOV dword ptr [0x02d052a0],EDI      ; 00405910 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 00405916 | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040591c
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405921
    POP EDI                             ; 00405924
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405925
        ;   Label: LAB_00405925
    ADD EBX,0x18                        ; 00405928
    SHL EAX,0x2                         ; 0040592b
    ADD EAX,EBX                         ; 0040592e
    POP ESI                             ; 00405930
    POP EBX                             ; 00405931
    RET                                 ; 00405932
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405933 | g_ScanlineRenderFunc
        ;   Label: LAB_00405933
    JMP 0x00405905                      ; 0040593d
        ;   XREF to: 00405905 (UNCONDITIONAL_JUMP)  ; LAB_00405905
    CMP dword ptr [0x0067939c],0x20     ; 0040593f | g_BitsPerPixel
        ;   Label: LAB_0040593f
    JNZ 0x00405954                      ; 00405946
        ;   XREF to: 00405954 (CONDITIONAL_JUMP)  ; LAB_00405954
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405948 | g_ScanlineRenderFunc
    JMP 0x00405905                      ; 00405952
        ;   XREF to: 00405905 (UNCONDITIONAL_JUMP)  ; LAB_00405905
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405954 | g_ScanlineRenderFunc
        ;   Label: LAB_00405954
    JMP 0x00405905                      ; 0040595e
        ;   XREF to: 00405905 (UNCONDITIONAL_JUMP)  ; LAB_00405905

