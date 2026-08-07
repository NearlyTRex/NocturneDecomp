; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedOp45_FUN_004074b0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   MainScanlineFunc* g_ScanlineRenderFunc
;   int g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004074b0
        ;   Label: engine_3d.c_renderPolygonTexturedOp45_FUN_004074b0
    PUSH ESI                            ; 004074b1
    PUSH EBP                            ; 004074b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004074b3
    LEA ESI,[EBX + 0x18]                ; 004074b7
    LEA EAX,[EBX + 0x8]                 ; 004074ba
    PUSH EAX                            ; 004074bd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004074be
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 004074c3
    TEST EAX,EAX                        ; 004074c6
    JZ 0x00407508                       ; 004074c8
        ;   XREF to: 00407508 (CONDITIONAL_JUMP)  ; LAB_00407508
    CMP dword ptr [0x01c03948],0x0      ; 004074ca | g_MMXSupported
    JNZ 0x00407523                      ; 004074d1
        ;   XREF to: 00407523 (CONDITIONAL_JUMP)  ; LAB_00407523
    CMP dword ptr [0x005b7624],0x20     ; 004074d3 | g_BitsPerPixel
    JNZ 0x00407517                      ; 004074da
        ;   XREF to: 00407517 (CONDITIONAL_JUMP)  ; LAB_00407517
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004074dc | g_ScanlineRenderFunc
    PUSH EDI                            ; 004074e6
        ;   Label: LAB_004074e6
    MOV EDI,0x1                         ; 004074e7
    PUSH ESI                            ; 004074ec
    MOV EAX,dword ptr [EBX + 0x4]       ; 004074ed
    XOR EBP,EBP                         ; 004074f0
    PUSH EAX                            ; 004074f2
    MOV dword ptr [0x01c039a0],EDI      ; 004074f3 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EBP      ; 004074f9 | g_VertexPreprocessMode
    CALL engine_clipper.c_clipAndRasterize_FUN_00432cd0 ; 004074ff
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00432cd0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407504
    POP EDI                             ; 00407507
    MOV EAX,dword ptr [EBX + 0x4]       ; 00407508
        ;   Label: LAB_00407508
    ADD EBX,0x18                        ; 0040750b
    SHL EAX,0x2                         ; 0040750e
    ADD EAX,EBX                         ; 00407511
    POP EBP                             ; 00407513
    POP ESI                             ; 00407514
    POP EBX                             ; 00407515
    RET                                 ; 00407516
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407517 | g_ScanlineRenderFunc
        ;   Label: LAB_00407517
    JMP 0x004074e6                      ; 00407521
        ;   XREF to: 004074e6 (UNCONDITIONAL_JUMP)  ; LAB_004074e6
    CMP dword ptr [0x005b7624],0x20     ; 00407523 | g_BitsPerPixel
        ;   Label: LAB_00407523
    JNZ 0x00407538                      ; 0040752a
        ;   XREF to: 00407538 (CONDITIONAL_JUMP)  ; LAB_00407538
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040752c | g_ScanlineRenderFunc
    JMP 0x004074e6                      ; 00407536
        ;   XREF to: 004074e6 (UNCONDITIONAL_JUMP)  ; LAB_004074e6
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407538 | g_ScanlineRenderFunc
        ;   Label: LAB_00407538
    JMP 0x004074e6                      ; 00407542
        ;   XREF to: 004074e6 (UNCONDITIONAL_JUMP)  ; LAB_004074e6

