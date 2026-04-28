; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrimitiveUVWrappedSpecial_FUN_00403d60(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
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

    PUSH EBX                            ; 00403d60
        ;   Label: engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60
    PUSH ESI                            ; 00403d61
    PUSH EBP                            ; 00403d62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403d63
    LEA ESI,[EBX + 0x18]                ; 00403d67
    LEA EAX,[EBX + 0x8]                 ; 00403d6a
    PUSH EAX                            ; 00403d6d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00403d6e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00403d73
    TEST EAX,EAX                        ; 00403d76
    JZ 0x00403dbb                       ; 00403d78
        ;   XREF to: 00403dbb (CONDITIONAL_JUMP)  ; LAB_00403dbb
    CMP dword ptr [0x02d05248],0x0      ; 00403d7a | g_MMXSupported
    JNZ 0x00403dd6                      ; 00403d81
        ;   XREF to: 00403dd6 (CONDITIONAL_JUMP)  ; LAB_00403dd6
    CMP dword ptr [0x0067939c],0x20     ; 00403d83 | g_BitsPerPixel
    JNZ 0x00403dca                      ; 00403d8a
        ;   XREF to: 00403dca (CONDITIONAL_JUMP)  ; LAB_00403dca
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00403d8c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00403d96
        ;   Label: LAB_00403d96
    MOV EDI,0x5                         ; 00403d97
    PUSH ESI                            ; 00403d9c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403d9d
    MOV EBP,0x4                         ; 00403da0
    PUSH EAX                            ; 00403da5
    MOV dword ptr [0x02d052a0],EDI      ; 00403da6 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00403dac | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00403db2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403db7
    POP EDI                             ; 00403dba
    MOV EAX,dword ptr [EBX + 0x4]       ; 00403dbb
        ;   Label: LAB_00403dbb
    ADD EBX,0x18                        ; 00403dbe
    SHL EAX,0x2                         ; 00403dc1
    ADD EAX,EBX                         ; 00403dc4
    POP EBP                             ; 00403dc6
    POP ESI                             ; 00403dc7
    POP EBX                             ; 00403dc8
    RET                                 ; 00403dc9
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00403dca | g_ScanlineRenderFunc
        ;   Label: LAB_00403dca
    JMP 0x00403d96                      ; 00403dd4
        ;   XREF to: 00403d96 (UNCONDITIONAL_JUMP)  ; LAB_00403d96
    CMP dword ptr [0x0067939c],0x20     ; 00403dd6 | g_BitsPerPixel
        ;   Label: LAB_00403dd6
    JNZ 0x00403deb                      ; 00403ddd
        ;   XREF to: 00403deb (CONDITIONAL_JUMP)  ; LAB_00403deb
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00403ddf | g_ScanlineRenderFunc
    JMP 0x00403d96                      ; 00403de9
        ;   XREF to: 00403d96 (UNCONDITIONAL_JUMP)  ; LAB_00403d96
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00403deb | g_ScanlineRenderFunc
        ;   Label: LAB_00403deb
    JMP 0x00403d96                      ; 00403df5
        ;   XREF to: 00403d96 (UNCONDITIONAL_JUMP)  ; LAB_00403d96

