; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; STriangleVertices * Stack[0x8]:4   triangle_vertices
; CVector3i *      Stack[0xc]:4   uv_u_per_vertex
; CVector3i *      Stack[0x10]:4   uv_v_per_vertex
; SMRGLTextureBasic * Stack[0x14]:4   texture
; int              Stack[0x18]:4   lifetime
;
; XREF[2]:
;   core_glass.cpp_FUN_004c5bb0 at 004c5cd0
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_00543d80 at 005440ab
;
; Referenced Globals:
;   undefined4 DAT_01c86e60
;
; Called Functions:
;   core_fire.cpp_CGlassParticle_init_FUN_00496c60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d450
        ;   Label: core_fire.cpp_CFireEffect_createGlassParticle_FUN_0049d450
    PUSH EDI                            ; 0049d451
    PUSH EBP                            ; 0049d452
    MOV EDX,dword ptr [0x01c86e60]      ; 0049d453 | DAT_01c86e60
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d459
    ADD EAX,EDX                         ; 0049d460
    SHL EAX,0x3                         ; 0049d462
    ADD EAX,EDX                         ; 0049d465
    SHL EAX,0x2                         ; 0049d467
    INC EDX                             ; 0049d46a
    ADD EAX,0x1c86e64                   ; 0049d46b
    MOV dword ptr [0x01c86e60],EDX      ; 0049d470 | DAT_01c86e60
    CMP EDX,0x100                       ; 0049d476
    JL 0x0049d488                       ; 0049d47c
        ;   XREF to: 0049d488 (CONDITIONAL_JUMP)  ; LAB_0049d488
    PUSH EBX                            ; 0049d47e
    XOR EBX,EBX                         ; 0049d47f
    MOV dword ptr [0x01c86e60],EBX      ; 0049d481 | DAT_01c86e60
    POP EBX                             ; 0049d487
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049d488
        ;   Label: LAB_0049d488
    PUSH ESI                            ; 0049d48c
    MOV EDI,dword ptr [ESP + 0x24]      ; 0049d48d
    PUSH EDI                            ; 0049d491
    MOV EBP,dword ptr [ESP + 0x24]      ; 0049d492
    PUSH EBP                            ; 0049d496
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049d497
    PUSH EDX                            ; 0049d49b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0049d49c
    PUSH ECX                            ; 0049d4a0
    PUSH EAX                            ; 0049d4a1
    CALL core_fire.cpp_CGlassParticle_init_FUN_00496c60 ; 0049d4a2
        ;   XREF to: 00496c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGlassParticle_init_FUN_00496c60(CGlassParticle * this_ptr, STriangleVertices * triangle_vertices, CVector3i * uv_u_per_vertex, CVector3i * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 0049d4a7
    POP EBP                             ; 0049d4aa
    POP EDI                             ; 0049d4ab
    POP ESI                             ; 0049d4ac
    RET                                 ; 0049d4ad

