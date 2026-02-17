; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004ecc40(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gore.cpp_CGore_process_FUN_004ed9e0 at 004eda45
;   core_gore.cpp_CGore_renderDecals_FUN_004ed830 at 004ed8a5
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   undefined4 g_RenderVertexBuffer[3].u
;   undefined4 g_RenderVertexBuffer[3].v
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 g_GoreQuadPrimitive.base.base.count
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.A
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.B
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.C
;   ... and 5 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecc40
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004ecc40
    PUSH ESI                            ; 004ecc41
    PUSH EDI                            ; 004ecc42
    PUSH EBP                            ; 004ecc43
    MOV EDX,0x4                         ; 004ecc44
    MOV EBX,0x1                         ; 004ecc49
    MOV ESI,0x2                         ; 004ecc4e
    MOV EDI,0x3                         ; 004ecc53
    MOV EBP,0x80000                     ; 004ecc58
    MOV EAX,0xf80000                    ; 004ecc5d | DAT_00f80000
    XOR ECX,ECX                         ; 004ecc62
    MOV dword ptr [0x02d8336c],EDX      ; 004ecc64 | g_GoreQuadPrimitive.base.base.count
    MOV dword ptr [0x02d83380],ECX      ; 004ecc6a | g_GoreQuadPrimitive.vertices[0]
    MOV dword ptr [0x02d83384],EBX      ; 004ecc70 | g_GoreQuadPrimitive.vertices[1]
    MOV dword ptr [0x02d83388],ESI      ; 004ecc76 | g_GoreQuadPrimitive.vertices[2]
    MOV dword ptr [0x02d8338c],EDI      ; 004ecc7c | g_GoreQuadPrimitive.vertices[3]
    MOV dword ptr [0x0068802c],EBP      ; 004ecc82 | g_RenderVertexBuffer[0].u
    MOV [0x00688030],EAX                ; 004ecc88 | g_RenderVertexBuffer[0].v
    MOV [0x0068805c],EAX                ; 004ecc8d | g_RenderVertexBuffer[1].u
    MOV [0x00688060],EAX                ; 004ecc92 | g_RenderVertexBuffer[1].v
    MOV [0x0068808c],EAX                ; 004ecc97 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EBP      ; 004ecc9c | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EBP      ; 004ecca2 | g_RenderVertexBuffer[3].u
    MOV dword ptr [0x006880c0],EBP      ; 004ecca8 | g_RenderVertexBuffer[3].v
    MOV EDX,0xffff                      ; 004eccae
    MOV dword ptr [0x02d83370],ECX      ; 004eccb3 | g_GoreQuadPrimitive.base.surface_normal.A
    PUSH EDX                            ; 004eccb9
    MOV ESI,dword ptr [0x006703ec]      ; 004eccba | g_CDemonRendererPtr2
    MOV dword ptr [0x02d83378],ECX      ; 004eccc0 | g_GoreQuadPrimitive.base.surface_normal.C
    PUSH ESI                            ; 004eccc6 | g_CDemonRendererInstance
    MOV dword ptr [0x02d8337c],ECX      ; 004eccc7 | g_GoreQuadPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d83374],EDX      ; 004ecccd | g_GoreQuadPrimitive.base.surface_normal.B
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004eccd3
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004eccd8
    POP EBP                             ; 004eccdb
    POP EDI                             ; 004eccdc
    POP ESI                             ; 004eccdd
    POP EBX                             ; 004eccde
    RET                                 ; 004eccdf

