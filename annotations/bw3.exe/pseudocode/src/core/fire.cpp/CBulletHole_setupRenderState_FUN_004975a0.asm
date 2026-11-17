; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004975a0(CBulletHole *this_ptr)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90 at 004a1e9d
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1c02
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   CDemonRenderer g_CDemonRenderer_01bdd7e4
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.A
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.B
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.C
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.D
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01c73670.vertices[3]
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004975a0
        ;   Label: core_fire.cpp_CBulletHole_setupRenderState_FUN_004975a0
    PUSH ESI                            ; 004975a1
    PUSH EDI                            ; 004975a2
    MOV EDX,0x4                         ; 004975a3
    MOV EBX,0x1                         ; 004975a8
    MOV ESI,0x2                         ; 004975ad
    MOV EDI,0x3                         ; 004975b2
    PUSH 0x8000                         ; 004975b7
    XOR ECX,ECX                         ; 004975bc
    MOV dword ptr [0x01c73674],EDX      ; 004975be | g_SMRGLPrimitiveQuadIndex_01c73670.base.base.count
    MOV dword ptr [0x01c73688],ECX      ; 004975c4 | g_SMRGLPrimitiveQuadIndex_01c73670.vertices[0]
    MOV dword ptr [0x01c7368c],EBX      ; 004975ca | g_SMRGLPrimitiveQuadIndex_01c73670.vertices[1]
    MOV dword ptr [0x01c73690],ESI      ; 004975d0 | g_SMRGLPrimitiveQuadIndex_01c73670.vertices[2]
    MOV dword ptr [0x01c73694],EDI      ; 004975d6 | g_SMRGLPrimitiveQuadIndex_01c73670.vertices[3]
    MOV dword ptr [0x01c73678],ECX      ; 004975dc | g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.A
    MOV dword ptr [0x01c7367c],ECX      ; 004975e2 | g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.B
    MOV EBX,dword ptr [0x005f2afc]      ; 004975e8 | g_CDemonRenderer_PTR_005f2afc
    MOV EDX,0xffff                      ; 004975ee
    PUSH EBX                            ; 004975f3 | g_CDemonRenderer_01bdd7e4
    MOV dword ptr [0x01c73684],ECX      ; 004975f4 | g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.D
    MOV dword ptr [0x01c73680],EDX      ; 004975fa | g_SMRGLPrimitiveQuadIndex_01c73670.base.surface_normal.C
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00497600
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00497605
    POP EDI                             ; 00497608
    POP ESI                             ; 00497609
    POP EBX                             ; 0049760a
    RET                                 ; 0049760b

