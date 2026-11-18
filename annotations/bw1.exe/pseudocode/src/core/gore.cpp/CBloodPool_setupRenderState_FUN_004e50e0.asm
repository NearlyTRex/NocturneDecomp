; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodPool_setupRenderState_FUN_004e50e0(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gore.cpp_CGore_process_FUN_004e5e80 at 004e5ee5
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 at 004e5d45
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[0].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[1].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[1].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[2].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[2].v
;   undefined4 g_SRenderVertex_ARRAY_00629014[3].u
;   undefined4 g_SRenderVertex_ARRAY_00629014[3].v
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   undefined4 g_GoreQuadPrimitive.base.base.count
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.A
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.B
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.C
;   undefined4 g_GoreQuadPrimitive.base.surface_normal.D
;   ... and 4 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e50e0
        ;   Label: core_gore.cpp_CBloodPool_setupRenderState_FUN_004e50e0
    PUSH ESI                            ; 004e50e1
    PUSH EDI                            ; 004e50e2
    PUSH EBP                            ; 004e50e3
    MOV EDX,0x4                         ; 004e50e4
    MOV EBX,0x1                         ; 004e50e9
    MOV ESI,0x2                         ; 004e50ee
    MOV EDI,0x3                         ; 004e50f3
    MOV EBP,0x80000                     ; 004e50f8
    MOV EAX,0xf80000                    ; 004e50fd
    XOR ECX,ECX                         ; 004e5102
    MOV dword ptr [0x01cd0e44],EDX      ; 004e5104 | g_GoreQuadPrimitive.base.base.count
    MOV dword ptr [0x01cd0e58],ECX      ; 004e510a | g_GoreQuadPrimitive.vertices[0]
    MOV dword ptr [0x01cd0e5c],EBX      ; 004e5110 | g_GoreQuadPrimitive.vertices[1]
    MOV dword ptr [0x01cd0e60],ESI      ; 004e5116 | g_GoreQuadPrimitive.vertices[2]
    MOV dword ptr [0x01cd0e64],EDI      ; 004e511c | g_GoreQuadPrimitive.vertices[3]
    MOV dword ptr [0x0062902c],EBP      ; 004e5122 | g_SRenderVertex_ARRAY_00629014[0].u
    MOV [0x00629030],EAX                ; 004e5128 | g_SRenderVertex_ARRAY_00629014[0].v
    MOV [0x0062905c],EAX                ; 004e512d | g_SRenderVertex_ARRAY_00629014[1].u
    MOV [0x00629060],EAX                ; 004e5132 | g_SRenderVertex_ARRAY_00629014[1].v
    MOV [0x0062908c],EAX                ; 004e5137 | g_SRenderVertex_ARRAY_00629014[2].u
    MOV dword ptr [0x00629090],EBP      ; 004e513c | g_SRenderVertex_ARRAY_00629014[2].v
    MOV dword ptr [0x006290bc],EBP      ; 004e5142 | g_SRenderVertex_ARRAY_00629014[3].u
    MOV dword ptr [0x006290c0],EBP      ; 004e5148 | g_SRenderVertex_ARRAY_00629014[3].v
    MOV EDX,0xffff                      ; 004e514e
    MOV dword ptr [0x01cd0e48],ECX      ; 004e5153 | g_GoreQuadPrimitive.base.surface_normal.A
    PUSH EDX                            ; 004e5159
    MOV ESI,dword ptr [0x00612560]      ; 004e515a | g_CDemonRenderer_PTR_00612560
    MOV dword ptr [0x01cd0e50],ECX      ; 004e5160 | g_GoreQuadPrimitive.base.surface_normal.C
    PUSH ESI                            ; 004e5166 | g_CDemonRenderer_01bc120c
    MOV dword ptr [0x01cd0e54],ECX      ; 004e5167 | g_GoreQuadPrimitive.base.surface_normal.D
    MOV dword ptr [0x01cd0e4c],EDX      ; 004e516d | g_GoreQuadPrimitive.base.surface_normal.B
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e5173
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e5178
    POP EBP                             ; 004e517b
    POP EDI                             ; 004e517c
    POP ESI                             ; 004e517d
    POP EBX                             ; 004e517e
    RET                                 ; 004e517f

