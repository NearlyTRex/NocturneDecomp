; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004c8800(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gore.cpp_CGore_process_FUN_004c9670 at 004c96d5
;   core_gore.cpp_CGore_renderDecals_FUN_004c94c0 at 004c9535
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].v
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].v
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[2].v
;   undefined4 g_SRenderVertex_ARRAY_00622014[3].u
;   undefined4 g_SRenderVertex_ARRAY_00622014[3].v
;   undefined4 g_GoreQuadPrimitive.base.base.count
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.A
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.B
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.C
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.D
;   undefined4 g_GoreQuadPrimitive.vertices[0]
;   ... and 3 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8800
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004c8800
    PUSH ESI                            ; 004c8801
    PUSH EDI                            ; 004c8802
    PUSH EBP                            ; 004c8803
    MOV EDX,0x4                         ; 004c8804
    MOV EBX,0x1                         ; 004c8809
    MOV ESI,0x2                         ; 004c880e
    MOV EDI,0x3                         ; 004c8813
    MOV EBP,0x80000                     ; 004c8818
    MOV EAX,0xf80000                    ; 004c881d
    XOR ECX,ECX                         ; 004c8822
    MOV dword ptr [0x01cb828c],EDX      ; 004c8824 | g_GoreQuadPrimitive.base.base.count
    MOV dword ptr [0x01cb82a0],ECX      ; 004c882a | g_GoreQuadPrimitive.vertices[0]
    MOV dword ptr [0x01cb82a4],EBX      ; 004c8830 | g_GoreQuadPrimitive.vertices[1]
    MOV dword ptr [0x01cb82a8],ESI      ; 004c8836 | g_GoreQuadPrimitive.vertices[2]
    MOV dword ptr [0x01cb82ac],EDI      ; 004c883c | g_GoreQuadPrimitive.vertices[3]
    MOV dword ptr [0x0062202c],EBP      ; 004c8842 | g_SRenderVertex_ARRAY_00622014[0].u
    MOV [0x00622030],EAX                ; 004c8848 | g_SRenderVertex_ARRAY_00622014[0].v
    MOV [0x0062205c],EAX                ; 004c884d | g_SRenderVertex_ARRAY_00622014[1].u
    MOV [0x00622060],EAX                ; 004c8852 | g_SRenderVertex_ARRAY_00622014[1].v
    MOV [0x0062208c],EAX                ; 004c8857 | g_SRenderVertex_ARRAY_00622014[2].u
    MOV dword ptr [0x00622090],EBP      ; 004c885c | g_SRenderVertex_ARRAY_00622014[2].v
    MOV dword ptr [0x006220bc],EBP      ; 004c8862 | g_SRenderVertex_ARRAY_00622014[3].u
    MOV dword ptr [0x006220c0],EBP      ; 004c8868 | g_SRenderVertex_ARRAY_00622014[3].v
    MOV EDX,0xffff                      ; 004c886e
    MOV dword ptr [0x01cb8290],ECX      ; 004c8873 | g_GoreQuadPrimitive.base.surface_normal.A
    PUSH EDX                            ; 004c8879
    MOV ESI,dword ptr [0x0060b280]      ; 004c887a | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [0x01cb8298],ECX      ; 004c8880 | g_GoreQuadPrimitive.base.surface_normal.C
    PUSH ESI                            ; 004c8886
    MOV dword ptr [0x01cb829c],ECX      ; 004c8887 | g_GoreQuadPrimitive.base.surface_normal.D
    MOV dword ptr [0x01cb8294],EDX      ; 004c888d | g_GoreQuadPrimitive.base.surface_normal.B
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004c8893
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c8898
    POP EBP                             ; 004c889b
    POP EDI                             ; 004c889c
    POP ESI                             ; 004c889d
    POP EBX                             ; 004c889e
    RET                                 ; 004c889f

