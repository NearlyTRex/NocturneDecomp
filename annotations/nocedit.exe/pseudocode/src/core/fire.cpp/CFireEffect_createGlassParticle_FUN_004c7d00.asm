; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3f *uv_u_per_vertex,CVector3f *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; STriangleVertices * Stack[0x8]:4   triangle_vertices
; CVector3f *      Stack[0xc]:4   uv_u_per_vertex
; CVector3f *      Stack[0x10]:4   uv_v_per_vertex
; SMRGLTextureBasic * Stack[0x14]:4   texture
; int              Stack[0x18]:4   lifetime
;
; XREF[2]:
;   core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 at 004ea362
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 at 0059d424
;
; Referenced Globals:
;   int g_GlassParticleAllocIndex
;   CGlassParticle[256] g_GlassParticlePool
;
; Called Functions:
;   core_fire.cpp_CGlassParticle_init_FUN_004c1c00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c7d00
        ;   Label: core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00
    PUSH EDI                            ; 004c7d01
    PUSH EBP                            ; 004c7d02
    MOV EDX,dword ptr [0x02d59134]      ; 004c7d03 | g_GlassParticleAllocIndex
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c7d09
    ADD EAX,EDX                         ; 004c7d10
    SHL EAX,0x3                         ; 004c7d12
    SUB EAX,EDX                         ; 004c7d15
    SHL EAX,0x2                         ; 004c7d17
    INC EDX                             ; 004c7d1a
    ADD EAX,0x2d59138                   ; 004c7d1b | g_GlassParticlePool
    MOV dword ptr [0x02d59134],EDX      ; 004c7d20 | g_GlassParticleAllocIndex
    CMP EDX,0x100                       ; 004c7d26
    JL 0x004c7d38                       ; 004c7d2c
        ;   XREF to: 004c7d38 (CONDITIONAL_JUMP)  ; LAB_004c7d38
    PUSH EBX                            ; 004c7d2e
    XOR EBX,EBX                         ; 004c7d2f
    MOV dword ptr [0x02d59134],EBX      ; 004c7d31 | g_GlassParticleAllocIndex
    POP EBX                             ; 004c7d37
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c7d38
        ;   Label: LAB_004c7d38
    PUSH ESI                            ; 004c7d3c
    MOV EDI,dword ptr [ESP + 0x24]      ; 004c7d3d
    PUSH EDI                            ; 004c7d41
    MOV EBP,dword ptr [ESP + 0x24]      ; 004c7d42
    PUSH EBP                            ; 004c7d46
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c7d47
    PUSH EDX                            ; 004c7d4b
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c7d4c
    PUSH ECX                            ; 004c7d50
    PUSH EAX                            ; 004c7d51
    CALL core_fire.cpp_CGlassParticle_init_FUN_004c1c00 ; 004c7d52
        ;   XREF to: 004c1c00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGlassParticle_init_FUN_004c1c00(CGlassParticle * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 004c7d57
    POP EBP                             ; 004c7d5a
    POP EDI                             ; 004c7d5b
    POP ESI                             ; 004c7d5c
    RET                                 ; 004c7d5d

