; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonDepthWriteTexturedLit_FUN_00405d80(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405d80
        ;   Label: engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80
    PUSH ESI                            ; 00405d81
    PUSH EBP                            ; 00405d82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405d83
    LEA ESI,[EBX + 0x18]                ; 00405d87
    LEA EAX,[EBX + 0x8]                 ; 00405d8a
    PUSH EAX                            ; 00405d8d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405d8e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405d93
    TEST EAX,EAX                        ; 00405d96
    JZ 0x00405ddb                       ; 00405d98
        ;   XREF to: 00405ddb (CONDITIONAL_JUMP)  ; LAB_00405ddb
    CMP dword ptr [0x02d05248],0x0      ; 00405d9a | g_MMXSupported
    JNZ 0x00405df6                      ; 00405da1
        ;   XREF to: 00405df6 (CONDITIONAL_JUMP)  ; LAB_00405df6
    CMP dword ptr [0x0067939c],0x20     ; 00405da3 | g_BitsPerPixel
    JNZ 0x00405dea                      ; 00405daa
        ;   XREF to: 00405dea (CONDITIONAL_JUMP)  ; LAB_00405dea
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405dac | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405db6
        ;   Label: LAB_00405db6
    MOV EDI,0x81                        ; 00405db7
    PUSH ESI                            ; 00405dbc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405dbd
    MOV EBP,0x1                         ; 00405dc0
    PUSH EAX                            ; 00405dc5
    MOV dword ptr [0x02d052a0],EDI      ; 00405dc6 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405dcc | g_RenderStateFlag2
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405dd2
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405dd7
    POP EDI                             ; 00405dda
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405ddb
        ;   Label: LAB_00405ddb
    ADD EBX,0x18                        ; 00405dde
    SHL EAX,0x2                         ; 00405de1
    ADD EAX,EBX                         ; 00405de4
    POP EBP                             ; 00405de6
    POP ESI                             ; 00405de7
    POP EBX                             ; 00405de8
    RET                                 ; 00405de9
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405dea | g_ScanlineRenderFunc
        ;   Label: LAB_00405dea
    JMP 0x00405db6                      ; 00405df4
        ;   XREF to: 00405db6 (UNCONDITIONAL_JUMP)  ; LAB_00405db6
    CMP dword ptr [0x0067939c],0x20     ; 00405df6 | g_BitsPerPixel
        ;   Label: LAB_00405df6
    JNZ 0x00405e0b                      ; 00405dfd
        ;   XREF to: 00405e0b (CONDITIONAL_JUMP)  ; LAB_00405e0b
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405dff | g_ScanlineRenderFunc
    JMP 0x00405db6                      ; 00405e09
        ;   XREF to: 00405db6 (UNCONDITIONAL_JUMP)  ; LAB_00405db6
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405e0b | g_ScanlineRenderFunc
        ;   Label: LAB_00405e0b
    JMP 0x00405db6                      ; 00405e15
        ;   XREF to: 00405db6 (UNCONDITIONAL_JUMP)  ; LAB_00405db6

