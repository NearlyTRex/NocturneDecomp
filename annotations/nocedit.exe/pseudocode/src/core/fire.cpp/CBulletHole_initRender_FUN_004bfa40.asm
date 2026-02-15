; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 at 004c74ad
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c7262
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectBlackHoleTexture
;   CDemonRenderer g_CDemonRendererInstance
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
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfa40
        ;   Label: core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
    PUSH ESI                            ; 004bfa41
    PUSH EDI                            ; 004bfa42
    MOV EDX,0x4                         ; 004bfa43
    MOV EBX,0x1                         ; 004bfa48
    MOV ESI,0x2                         ; 004bfa4d
    MOV EDI,0x3                         ; 004bfa52
    PUSH 0x67a794                       ; 004bfa57 | g_FireEffectBlackHoleTexture
    XOR ECX,ECX                         ; 004bfa5c
    MOV dword ptr [0x02d12dd0],EDX      ; 004bfa5e | g_BillboardPrimitive.base.base.count
    MOV dword ptr [0x02d12de4],ECX      ; 004bfa64 | g_BillboardPrimitive.vertices[0]
    MOV dword ptr [0x02d12de8],EBX      ; 004bfa6a | g_BillboardPrimitive.vertices[1]
    MOV dword ptr [0x02d12dec],ESI      ; 004bfa70 | g_BillboardPrimitive.vertices[2]
    MOV dword ptr [0x02d12df0],EDI      ; 004bfa76 | g_BillboardPrimitive.vertices[3]
    MOV dword ptr [0x02d12dd4],ECX      ; 004bfa7c | g_BillboardPrimitive.base.surface_normal.A
    MOV dword ptr [0x02d12dd8],ECX      ; 004bfa82 | g_BillboardPrimitive.base.surface_normal.B
    MOV EBX,dword ptr [0x006703ec]      ; 004bfa88 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,0xffff                      ; 004bfa8e
    PUSH EBX                            ; 004bfa93 | g_CDemonRendererInstance
    MOV dword ptr [0x02d12de0],ECX      ; 004bfa94 | g_BillboardPrimitive.base.surface_normal.D
    MOV dword ptr [0x02d12ddc],EDX      ; 004bfa9a | g_BillboardPrimitive.base.surface_normal.C
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004bfaa0
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004bfaa5
    PUSH 0x8000                         ; 004bfaa8
    MOV ESI,dword ptr [0x006703ec]      ; 004bfaad | g_CDemonRendererPtr2
    PUSH ESI                            ; 004bfab3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004bfab4
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004bfab9
    POP EDI                             ; 004bfabc
    POP ESI                             ; 004bfabd
    POP EBX                             ; 004bfabe
    RET                                 ; 004bfabf

