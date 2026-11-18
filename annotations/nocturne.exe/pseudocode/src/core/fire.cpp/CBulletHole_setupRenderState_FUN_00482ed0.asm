; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970 at 0048a97d
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a732
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   SMRGLTextureBasic g_FireEffectBlackHoleTexture
;   CDemonRenderer g_CDemonRenderer_01b4d738
;   undefined4 g_BillboardPrimitive.base.base.count
;   undefined4 g_BillboardPrimitive.base.surface_normal.A
;   undefined4 g_BillboardPrimitive.base.surface_normal.B
;   undefined4 g_BillboardPrimitive.base.surface_normal.C
;   undefined4 g_BillboardPrimitive.base.surface_normal.D
;   undefined4 g_BillboardPrimitive.vertices[0]
;   undefined4 g_BillboardPrimitive.vertices[1]
;   undefined4 g_BillboardPrimitive.vertices[2]
;   undefined4 g_BillboardPrimitive.vertices[3]
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482ed0
        ;   Label: core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
    PUSH ESI                            ; 00482ed1
    PUSH EDI                            ; 00482ed2
    MOV EDX,0x4                         ; 00482ed3
    MOV EBX,0x1                         ; 00482ed8
    MOV ESI,0x2                         ; 00482edd
    MOV EDI,0x3                         ; 00482ee2
    PUSH 0x5b84b4                       ; 00482ee7 | g_FireEffectBlackHoleTexture
    XOR ECX,ECX                         ; 00482eec
    MOV dword ptr [0x01c08d24],EDX      ; 00482eee | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x01c08d38],ECX      ; 00482ef4 | g_BillboardPrimitive.vertices[0]
    MOV dword ptr [0x01c08d3c],EBX      ; 00482efa | g_BillboardPrimitive.vertices[1]
    MOV dword ptr [0x01c08d40],ESI      ; 00482f00 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x01c08d44],EDI      ; 00482f06 | g_BillboardPrimitive.vertices[3]
    MOV dword ptr [0x01c08d28],ECX      ; 00482f0c | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x01c08d2c],ECX      ; 00482f12 | g_BillboardPrimitive.base.surface_normal.B
    MOV EBX,dword ptr [0x005ae704]      ; 00482f18 | g_CDemonRenderer_PTR_005ae704
    MOV EDX,0xffff                      ; 00482f1e
    PUSH EBX                            ; 00482f23 | g_CDemonRenderer_01b4d738
    MOV dword ptr [0x01c08d34],ECX      ; 00482f24 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x01c08d30],EDX      ; 00482f2a | g_BillboardPrimitive.base.surface_normal.C
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00482f30
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00482f35
    PUSH 0xffff                         ; 00482f38
    MOV ESI,dword ptr [0x005ae704]      ; 00482f3d | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00482f43 | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00482f44
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00482f49
    POP EDI                             ; 00482f4c
    POP ESI                             ; 00482f4d
    POP EBX                             ; 00482f4e
    RET                                 ; 00482f4f

