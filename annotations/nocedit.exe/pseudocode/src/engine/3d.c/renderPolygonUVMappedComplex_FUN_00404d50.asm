; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[1]:
;   shape_design.c_renderSinglePolygon_FUN_0045ce20 at 0045d184
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
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

    PUSH EBX                            ; 00404d50
        ;   Label: engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
    PUSH ESI                            ; 00404d51
    PUSH EBP                            ; 00404d52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404d53
    LEA ESI,[EBX + 0x18]                ; 00404d57
    LEA EAX,[EBX + 0x8]                 ; 00404d5a
    PUSH EAX                            ; 00404d5d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00404d5e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404d63
    TEST EAX,EAX                        ; 00404d66
    JZ 0x00404dab                       ; 00404d68
        ;   XREF to: 00404dab (CONDITIONAL_JUMP)  ; LAB_00404dab
    CMP dword ptr [0x02d05248],0x0      ; 00404d6a | g_MMXSupported
    JNZ 0x00404dc6                      ; 00404d71
        ;   XREF to: 00404dc6 (CONDITIONAL_JUMP)  ; LAB_00404dc6
    CMP dword ptr [0x0067939c],0x20     ; 00404d73 | g_BitsPerPixel
    JNZ 0x00404dba                      ; 00404d7a
        ;   XREF to: 00404dba (CONDITIONAL_JUMP)  ; LAB_00404dba
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00404d7c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00404d86
        ;   Label: LAB_00404d86
    MOV EDI,0xc4                        ; 00404d87
    PUSH ESI                            ; 00404d8c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404d8d
    MOV EBP,0x1                         ; 00404d90
    PUSH EAX                            ; 00404d95
    MOV dword ptr [0x02d052a0],EDI      ; 00404d96 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00404d9c | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00404da2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404da7
    POP EDI                             ; 00404daa
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404dab
        ;   Label: LAB_00404dab
    ADD EBX,0x18                        ; 00404dae
    SHL EAX,0x2                         ; 00404db1
    ADD EAX,EBX                         ; 00404db4
    POP EBP                             ; 00404db6
    POP ESI                             ; 00404db7
    POP EBX                             ; 00404db8
    RET                                 ; 00404db9
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00404dba | g_ScanlineRenderFunc
        ;   Label: LAB_00404dba
    JMP 0x00404d86                      ; 00404dc4
        ;   XREF to: 00404d86 (UNCONDITIONAL_JUMP)  ; LAB_00404d86
    CMP dword ptr [0x0067939c],0x20     ; 00404dc6 | g_BitsPerPixel
        ;   Label: LAB_00404dc6
    JNZ 0x00404ddb                      ; 00404dcd
        ;   XREF to: 00404ddb (CONDITIONAL_JUMP)  ; LAB_00404ddb
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00404dcf | g_ScanlineRenderFunc
    JMP 0x00404d86                      ; 00404dd9
        ;   XREF to: 00404d86 (UNCONDITIONAL_JUMP)  ; LAB_00404d86
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00404ddb | g_ScanlineRenderFunc
        ;   Label: LAB_00404ddb
    JMP 0x00404d86                      ; 00404de5
        ;   XREF to: 00404d86 (UNCONDITIONAL_JUMP)  ; LAB_00404d86

