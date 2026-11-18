; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gore.cpp_CGore_process_FUN_004b0030 at 004b0095
;   core_gore.cpp_CGore_renderDecals_FUN_004afe80 at 004afef5
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].u
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].v
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].u
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].v
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].u
;   undefined4 g_SRenderVertex_ARRAY_005c5014[2].v
;   undefined4 g_SRenderVertex_ARRAY_005c5014[3].u
;   undefined4 g_SRenderVertex_ARRAY_005c5014[3].v
;   CDemonRenderer g_CDemonRenderer_01b4d738
;   undefined4 g_GoreQuadPrimitive.base.base.count
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.A
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.B
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.C
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.D
;   ... and 4 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af2a0
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004af2a0
    PUSH ESI                            ; 004af2a1
    PUSH EDI                            ; 004af2a2
    PUSH EBP                            ; 004af2a3
    MOV EDX,0x4                         ; 004af2a4
    MOV EBX,0x1                         ; 004af2a9
    MOV ESI,0x2                         ; 004af2ae
    MOV EDI,0x3                         ; 004af2b3
    MOV EBP,0x80000                     ; 004af2b8
    MOV EAX,0xf80000                    ; 004af2bd
    XOR ECX,ECX                         ; 004af2c2
    MOV dword ptr [0x01c78c84],EDX      ; 004af2c4 | g_GoreQuadPrimitive.base.base.count
    MOV dword ptr [0x01c78c98],ECX      ; 004af2ca | g_GoreQuadPrimitive.vertices[0]
    MOV dword ptr [0x01c78c9c],EBX      ; 004af2d0 | g_GoreQuadPrimitive.vertices[1]
    MOV dword ptr [0x01c78ca0],ESI      ; 004af2d6 | g_GoreQuadPrimitive.vertices[2]
    MOV dword ptr [0x01c78ca4],EDI      ; 004af2dc | g_GoreQuadPrimitive.vertices[3]
    MOV dword ptr [0x005c502c],EBP      ; 004af2e2 | g_SRenderVertex_ARRAY_005c5014[0].u
    MOV [0x005c5030],EAX                ; 004af2e8 | g_SRenderVertex_ARRAY_005c5014[0].v
    MOV [0x005c505c],EAX                ; 004af2ed | g_SRenderVertex_ARRAY_005c5014[1].u
    MOV [0x005c5060],EAX                ; 004af2f2 | g_SRenderVertex_ARRAY_005c5014[1].v
    MOV [0x005c508c],EAX                ; 004af2f7 | g_SRenderVertex_ARRAY_005c5014[2].u
    MOV dword ptr [0x005c5090],EBP      ; 004af2fc | g_SRenderVertex_ARRAY_005c5014[2].v
    MOV dword ptr [0x005c50bc],EBP      ; 004af302 | g_SRenderVertex_ARRAY_005c5014[3].u
    MOV dword ptr [0x005c50c0],EBP      ; 004af308 | g_SRenderVertex_ARRAY_005c5014[3].v
    MOV EDX,0xffff                      ; 004af30e
    MOV dword ptr [0x01c78c88],ECX      ; 004af313 | g_GoreQuadPrimitive.base.surface_normal.A
    PUSH EDX                            ; 004af319
    MOV ESI,dword ptr [0x005ae704]      ; 004af31a | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [0x01c78c90],ECX      ; 004af320 | g_GoreQuadPrimitive.base.surface_normal.C
    PUSH ESI                            ; 004af326 | g_CDemonRenderer_01b4d738
    MOV dword ptr [0x01c78c94],ECX      ; 004af327 | g_GoreQuadPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c78c8c],EDX      ; 004af32d | g_GoreQuadPrimitive.base.surface_normal.B
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004af333
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004af338
    POP EBP                             ; 004af33b
    POP EDI                             ; 004af33c
    POP ESI                             ; 004af33d
    POP EBX                             ; 004af33e
    RET                                 ; 004af33f

