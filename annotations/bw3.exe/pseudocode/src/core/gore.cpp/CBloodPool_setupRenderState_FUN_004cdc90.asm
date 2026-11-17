; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004cdc90(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gore.cpp_CGore_process_FUN_004ce7e0 at 004ce845
;   core_gore.cpp_CGore_renderDecals_FUN_004ce630 at 004ce6a5
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[0].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[1].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[2].v
;   undefined4 g_SRenderVertex_ARRAY_0060b014[3].u
;   undefined4 g_SRenderVertex_ARRAY_0060b014[3].v
;   CDemonRenderer g_CDemonRenderer_01bdd7e4
;   undefined4 g_SMRGLHeaderPrimitive_01d22e48.base.count
;   undefined4 g_SMRGLHeaderPrimitive_01d22e48.surface_normal.A
;   undefined4 g_SMRGLHeaderPrimitive_01d22e48.surface_normal.B
;   undefined4 g_SMRGLHeaderPrimitive_01d22e48.surface_normal.C
;   undefined4 g_SMRGLHeaderPrimitive_01d22e48.surface_normal.D
;   ... and 4 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdc90
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004cdc90
    PUSH ESI                            ; 004cdc91
    PUSH EDI                            ; 004cdc92
    PUSH EBP                            ; 004cdc93
    MOV EDX,0x4                         ; 004cdc94
    MOV EBX,0x1                         ; 004cdc99
    MOV ESI,0x2                         ; 004cdc9e
    MOV EDI,0x3                         ; 004cdca3
    MOV EBP,0x80000                     ; 004cdca8
    MOV EAX,0xf80000                    ; 004cdcad
    XOR ECX,ECX                         ; 004cdcb2
    MOV dword ptr [0x01d22e4c],EDX      ; 004cdcb4 | g_SMRGLHeaderPrimitive_01d22e48.base.count
    MOV dword ptr [0x01d22e60],ECX      ; 004cdcba | g_INT_01d22e60
    MOV dword ptr [0x01d22e64],EBX      ; 004cdcc0 | g_INT_01d22e64
    MOV dword ptr [0x01d22e68],ESI      ; 004cdcc6 | g_INT_01d22e68
    MOV dword ptr [0x01d22e6c],EDI      ; 004cdccc | g_INT_01d22e6c
    MOV dword ptr [0x0060b02c],EBP      ; 004cdcd2 | g_SRenderVertex_ARRAY_0060b014[0].u
    MOV [0x0060b030],EAX                ; 004cdcd8 | g_SRenderVertex_ARRAY_0060b014[0].v
    MOV [0x0060b05c],EAX                ; 004cdcdd | g_SRenderVertex_ARRAY_0060b014[1].u
    MOV [0x0060b060],EAX                ; 004cdce2 | g_SRenderVertex_ARRAY_0060b014[1].v
    MOV [0x0060b08c],EAX                ; 004cdce7 | g_SRenderVertex_ARRAY_0060b014[2].u
    MOV dword ptr [0x0060b090],EBP      ; 004cdcec | g_SRenderVertex_ARRAY_0060b014[2].v
    MOV dword ptr [0x0060b0bc],EBP      ; 004cdcf2 | g_SRenderVertex_ARRAY_0060b014[3].u
    MOV dword ptr [0x0060b0c0],EBP      ; 004cdcf8 | g_SRenderVertex_ARRAY_0060b014[3].v
    MOV EDX,0xffff                      ; 004cdcfe
    MOV dword ptr [0x01d22e50],ECX      ; 004cdd03 | g_SMRGLHeaderPrimitive_01d22e48.surface_normal.A
    PUSH EDX                            ; 004cdd09
    MOV ESI,dword ptr [0x005f2afc]      ; 004cdd0a | g_CDemonRenderer_PTR_005f2afc
    MOV dword ptr [0x01d22e58],ECX      ; 004cdd10 | g_SMRGLHeaderPrimitive_01d22e48.surface_normal.C
    PUSH ESI                            ; 004cdd16 | g_CDemonRenderer_01bdd7e4
    MOV dword ptr [0x01d22e5c],ECX      ; 004cdd17 | g_SMRGLHeaderPrimitive_01d22e48.surface_normal.D
    MOV dword ptr [0x01d22e54],EDX      ; 004cdd1d | g_SMRGLHeaderPrimitive_01d22e48.surface_normal.B
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004cdd23
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004cdd28
    POP EBP                             ; 004cdd2b
    POP EDI                             ; 004cdd2c
    POP ESI                             ; 004cdd2d
    POP EBX                             ; 004cdd2e
    RET                                 ; 004cdd2f

