; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50(SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_info
;
; XREF[2]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407bc7
;   engine_3d.c_flushRenderQueue_FUN_00407a30 at 00407a5a
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   uint g_ProcessedVertexOffset
;   int[24] g_ProcessedVertexIndices
;   undefined4 DAT_00772a9c
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   float g_PerspectiveReciprocal
;   BOOL g_MMXSupported
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_clipper.c_clipAndRasterize_FUN_004371b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405b50
        ;   Label: engine_3d.c_renderPolygonTextureWrappedPlaneMasked_FUN_00405b50
    PUSH EDI                            ; 00405b51
    PUSH EBP                            ; 00405b52
    MOV EBP,dword ptr [0x00772a60]      ; 00405b53 | g_ProcessedVertexOffset
    MOV EDI,dword ptr [ESP + 0x10]      ; 00405b59
    LEA ESI,[EDI + 0x18]                ; 00405b5d
    LEA EAX,[EDI + 0x8]                 ; 00405b60
    PUSH EAX                            ; 00405b63
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 00405b64
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405b69
    TEST EAX,EAX                        ; 00405b6c
    JZ 0x00405cb6                       ; 00405b6e
        ;   XREF to: 00405cb6 (CONDITIONAL_JUMP)  ; LAB_00405cb6
    PUSH EBX                            ; 00405b74
    MOV EDX,dword ptr [0x02d051f4]      ; 00405b75 | g_PerspectiveReciprocal
    MOV EBP,dword ptr [0x00772a60]      ; 00405b7b | g_ProcessedVertexOffset
    TEST EDX,EDX                        ; 00405b81
    JZ 0x00405c40                       ; 00405b83
        ;   XREF to: 00405c40 (CONDITIONAL_JUMP)  ; LAB_00405c40
    CMP dword ptr [0x02d05248],0x0      ; 00405b89 | g_MMXSupported
    JNZ 0x00405c19                      ; 00405b90
        ;   XREF to: 00405c19 (CONDITIONAL_JUMP)  ; LAB_00405c19
    CMP dword ptr [0x0067939c],0x20     ; 00405b96 | g_BitsPerPixel
    JNZ 0x00405c0d                      ; 00405b9d
        ;   XREF to: 00405c0d (CONDITIONAL_JUMP)  ; LAB_00405c0d
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405b9f | g_ScanlineRenderFunc
    MOV EBX,0x1                         ; 00405ba9
        ;   Label: LAB_00405ba9
    MOV ECX,0xcd                        ; 00405bae
    MOV dword ptr [0x02d052a4],EBX      ; 00405bb3 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],ECX      ; 00405bb9 | g_RenderStateFlags
    MOV EBX,0x772a98                    ; 00405bbf | g_ProcessedVertexIndices
        ;   Label: LAB_00405bbf
    MOV EAX,ESI                         ; 00405bc4
    XOR ECX,ECX                         ; 00405bc6
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405bc8
        ;   Label: LAB_00405bc8
    LEA EDX,[EDX + EDX*0x2]             ; 00405bcb
    MOV dword ptr [0x00772a60],EBP      ; 00405bce | g_ProcessedVertexOffset
    CMP ECX,EDX                         ; 00405bd4
    JGE 0x00405ca4                      ; 00405bd6
        ;   XREF to: 00405ca4 (CONDITIONAL_JUMP)  ; LAB_00405ca4
    MOV EDX,dword ptr [EAX]             ; 00405bdc
    ADD EDX,EBP                         ; 00405bde
    MOV dword ptr [EBX],EDX             ; 00405be0 | g_ProcessedVertexIndices | DAT_00772a9c
    MOV EDX,dword ptr [EAX]             ; 00405be2
    ADD EDX,EBP                         ; 00405be4
    IMUL EDX,EDX,0x30                   ; 00405be6
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405be9
    MOV dword ptr [EDX + 0x68802c],ESI  ; 00405bec | g_RenderVertexBuffer[0].u
    MOV EDX,dword ptr [EAX]             ; 00405bf2
    ADD EDX,EBP                         ; 00405bf4
    IMUL ESI,EDX,0x30                   ; 00405bf6
    ADD EAX,0xc                         ; 00405bf9
    ADD EBX,0x4                         ; 00405bfc | DAT_00772a9c
    MOV EDX,dword ptr [EAX + -0x4]      ; 00405bff
    ADD ECX,0x3                         ; 00405c02
    MOV dword ptr [ESI + 0x688030],EDX  ; 00405c05 | g_RenderVertexBuffer[0].v
    JMP 0x00405bc8                      ; 00405c0b
        ;   XREF to: 00405bc8 (UNCONDITIONAL_JUMP)  ; LAB_00405bc8
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405c0d | g_ScanlineRenderFunc
        ;   Label: LAB_00405c0d
    JMP 0x00405ba9                      ; 00405c17
        ;   XREF to: 00405ba9 (UNCONDITIONAL_JUMP)  ; LAB_00405ba9
    CMP dword ptr [0x0067939c],0x20     ; 00405c19 | g_BitsPerPixel
        ;   Label: LAB_00405c19
    JNZ 0x00405c31                      ; 00405c20
        ;   XREF to: 00405c31 (CONDITIONAL_JUMP)  ; LAB_00405c31
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405c22 | g_ScanlineRenderFunc
    JMP 0x00405ba9                      ; 00405c2c
        ;   XREF to: 00405ba9 (UNCONDITIONAL_JUMP)  ; LAB_00405ba9
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405c31 | g_ScanlineRenderFunc
        ;   Label: LAB_00405c31
    JMP 0x00405ba9                      ; 00405c3b
        ;   XREF to: 00405ba9 (UNCONDITIONAL_JUMP)  ; LAB_00405ba9
    CMP dword ptr [0x02d05248],0x0      ; 00405c40 | g_MMXSupported
        ;   Label: LAB_00405c40
    JNZ 0x00405c83                      ; 00405c47
        ;   XREF to: 00405c83 (CONDITIONAL_JUMP)  ; LAB_00405c83
    CMP dword ptr [0x0067939c],0x20     ; 00405c49 | g_BitsPerPixel
    JNZ 0x00405c77                      ; 00405c50
        ;   XREF to: 00405c77 (CONDITIONAL_JUMP)  ; LAB_00405c77
    MOV dword ptr [0x02d0257c],0x5b50ec ; 00405c52 | g_ScanlineRenderFunc
    MOV ECX,0x1                         ; 00405c5c
        ;   Label: LAB_00405c5c
    MOV EDX,0xc5                        ; 00405c61
    MOV dword ptr [0x02d052a4],ECX      ; 00405c66 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDX      ; 00405c6c | g_RenderStateFlags
    JMP 0x00405bbf                      ; 00405c72
        ;   XREF to: 00405bbf (UNCONDITIONAL_JUMP)  ; LAB_00405bbf
    MOV dword ptr [0x02d0257c],0x5b5322 ; 00405c77 | g_ScanlineRenderFunc
        ;   Label: LAB_00405c77
    JMP 0x00405c5c                      ; 00405c81
        ;   XREF to: 00405c5c (UNCONDITIONAL_JUMP)  ; LAB_00405c5c
    CMP dword ptr [0x0067939c],0x20     ; 00405c83 | g_BitsPerPixel
        ;   Label: LAB_00405c83
    JNZ 0x00405c98                      ; 00405c8a
        ;   XREF to: 00405c98 (CONDITIONAL_JUMP)  ; LAB_00405c98
    MOV dword ptr [0x02d0257c],0x5b4031 ; 00405c8c | g_ScanlineRenderFunc
    JMP 0x00405c5c                      ; 00405c96
        ;   XREF to: 00405c5c (UNCONDITIONAL_JUMP)  ; LAB_00405c5c
    MOV dword ptr [0x02d0257c],0x5b4823 ; 00405c98 | g_ScanlineRenderFunc
        ;   Label: LAB_00405c98
    JMP 0x00405c5c                      ; 00405ca2
        ;   XREF to: 00405c5c (UNCONDITIONAL_JUMP)  ; LAB_00405c5c
    PUSH 0x772a98                       ; 00405ca4 | g_ProcessedVertexIndices
        ;   Label: LAB_00405ca4
    MOV ESI,dword ptr [EDI + 0x4]       ; 00405ca9
    PUSH ESI                            ; 00405cac
    CALL engine_clipper.c_clipAndRasterize_FUN_004371b0 ; 00405cad
        ;   XREF to: 004371b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405cb2
    POP EBX                             ; 00405cb5
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405cb6
        ;   Label: LAB_00405cb6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405cb9
    SUB EAX,EDX                         ; 00405cc0
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405cc2
    LEA EAX,[EDI + 0x18]                ; 00405cc9
    MOV EBP,dword ptr [0x00772a60]      ; 00405ccc | g_ProcessedVertexOffset
    ADD EAX,EDX                         ; 00405cd2
    POP EBP                             ; 00405cd4
    POP EDI                             ; 00405cd5
    POP ESI                             ; 00405cd6
    RET                                 ; 00405cd7

