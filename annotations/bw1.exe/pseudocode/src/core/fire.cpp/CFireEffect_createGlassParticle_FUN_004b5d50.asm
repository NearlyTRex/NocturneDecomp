; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createGlassParticle_FUN_004b5d50(CFireEffect *this_ptr,STriangleVertices *triangle_vertices,CVector3i *uv_u_per_vertex,CVector3i *uv_v_per_vertex,SMRGLTextureBasic *texture,int lifetime)
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
;   core_glass.cpp_FUN_004e2320 at 004e2440
;   core_skeleton.cpp_CDeformableModel_shatter_FUN_00566420 at 0056674b
;
; Referenced Globals:
;   undefined4 DAT_01c9f8ec
;
; Called Functions:
;   core_fire.cpp_CGlassParticle_init_FUN_004af600
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5d50
        ;   Label: core_fire.cpp_CFireEffect_createGlassParticle_FUN_004b5d50
    PUSH EDI                            ; 004b5d51
    PUSH EBP                            ; 004b5d52
    MOV EDX,dword ptr [0x01c9f8ec]      ; 004b5d53 | DAT_01c9f8ec
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5d59
    ADD EAX,EDX                         ; 004b5d60
    SHL EAX,0x3                         ; 004b5d62
    ADD EAX,EDX                         ; 004b5d65
    SHL EAX,0x2                         ; 004b5d67
    INC EDX                             ; 004b5d6a
    ADD EAX,0x1c9f8f0                   ; 004b5d6b
    MOV dword ptr [0x01c9f8ec],EDX      ; 004b5d70 | DAT_01c9f8ec
    CMP EDX,0x100                       ; 004b5d76
    JL 0x004b5d88                       ; 004b5d7c
        ;   XREF to: 004b5d88 (CONDITIONAL_JUMP)  ; LAB_004b5d88
    PUSH EBX                            ; 004b5d7e
    XOR EBX,EBX                         ; 004b5d7f
    MOV dword ptr [0x01c9f8ec],EBX      ; 004b5d81 | DAT_01c9f8ec
    POP EBX                             ; 004b5d87
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b5d88
        ;   Label: LAB_004b5d88
    PUSH ESI                            ; 004b5d8c
    MOV EDI,dword ptr [ESP + 0x24]      ; 004b5d8d
    PUSH EDI                            ; 004b5d91
    MOV EBP,dword ptr [ESP + 0x24]      ; 004b5d92
    PUSH EBP                            ; 004b5d96
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b5d97
    PUSH EDX                            ; 004b5d9b
    MOV ECX,dword ptr [ESP + 0x24]      ; 004b5d9c
    PUSH ECX                            ; 004b5da0
    PUSH EAX                            ; 004b5da1
    CALL core_fire.cpp_CGlassParticle_init_FUN_004af600 ; 004b5da2
        ;   XREF to: 004af600 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGlassParticle_init_FUN_004af600(CGlassParticle * this_ptr, STriangleVertices * triangle_vertices, CVector3i * uv_u_per_vertex, CVector3i * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 004b5da7
    POP EBP                             ; 004b5daa
    POP EDI                             ; 004b5dab
    POP ESI                             ; 004b5dac
    RET                                 ; 004b5dad

