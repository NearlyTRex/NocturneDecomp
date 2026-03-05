; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonUVVertexLitNormalized_FUN_00405510(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_calculatePolygonLighting_FUN_00403a00
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405510
        ;   Label: engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510
    PUSH ESI                            ; 00405511
    PUSH EBP                            ; 00405512
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405513
    LEA ESI,[EBX + 0x18]                ; 00405517
    LEA EAX,[EBX + 0x8]                 ; 0040551a
    PUSH EAX                            ; 0040551d
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0040551e
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405523
    TEST EAX,EAX                        ; 00405526
    JZ 0x00405574                       ; 00405528
        ;   XREF to: 00405574 (CONDITIONAL_JUMP)  ; LAB_00405574
    CMP dword ptr [0x02d05248],0x0      ; 0040552a | g_MMXSupported
    JNZ 0x0040558f                      ; 00405531
        ;   XREF to: 0040558f (CONDITIONAL_JUMP)  ; LAB_0040558f
    CMP dword ptr [0x0067939c],0x20     ; 00405533 | g_BitsPerPixel
    JNZ 0x00405583                      ; 0040553a
        ;   XREF to: 00405583 (CONDITIONAL_JUMP)  ; LAB_00405583
    MOV dword ptr [0x02d0257c],0x5b50ec ; 0040553c | g_ScanlineRenderFunc
    PUSH EDI                            ; 00405546
        ;   Label: LAB_00405546
    MOV EDI,0x9                         ; 00405547
    MOV EBP,0x2                         ; 0040554c
    PUSH EBX                            ; 00405551
    MOV dword ptr [0x02d052a0],EDI      ; 00405552 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 00405558 | g_RenderStateFlag2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00 ; 0040555e
        ;   XREF to: 00403a00 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405563
    PUSH ESI                            ; 00405566
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405567
    PUSH EAX                            ; 0040556a
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 0040556b
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405570
    POP EDI                             ; 00405573
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405574
        ;   Label: LAB_00405574
    ADD EBX,0x18                        ; 00405577
    SHL EAX,0x2                         ; 0040557a
    ADD EAX,EBX                         ; 0040557d
    POP EBP                             ; 0040557f
    POP ESI                             ; 00405580
    POP EBX                             ; 00405581
    RET                                 ; 00405582
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405583 | g_ScanlineRenderFunc
        ;   Label: LAB_00405583
    JMP 0x00405546                      ; 0040558d
        ;   XREF to: 00405546 (UNCONDITIONAL_JUMP)  ; LAB_00405546
    CMP dword ptr [0x0067939c],0x20     ; 0040558f | g_BitsPerPixel
        ;   Label: LAB_0040558f
    JNZ 0x004055a4                      ; 00405596
        ;   XREF to: 004055a4 (CONDITIONAL_JUMP)  ; LAB_004055a4
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405598 | g_ScanlineRenderFunc
    JMP 0x00405546                      ; 004055a2
        ;   XREF to: 00405546 (UNCONDITIONAL_JUMP)  ; LAB_00405546
    MOV dword ptr [0x02d0257c],0x5b4823 ; 004055a4 | g_ScanlineRenderFunc
        ;   Label: LAB_004055a4
    JMP 0x00405546                      ; 004055ae
        ;   XREF to: 00405546 (UNCONDITIONAL_JUMP)  ; LAB_00405546

