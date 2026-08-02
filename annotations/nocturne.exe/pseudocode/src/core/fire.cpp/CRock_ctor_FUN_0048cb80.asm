; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRock * __cdecl core_fire_cpp_CRock_ctor_FUN_0048cb80(CRock *this_ptr)
;
; Parameters:
; CRock *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CParticle_vtable g_CRockVTable
;
; Called Functions:
;   core_particle.cpp_CParticle_ctor_FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cb80
        ;   Label: core_fire.cpp_CRock_ctor_FUN_0048cb80
    PUSH EDX                            ; 0048cb84
    CALL core_particle.cpp_CParticle_ctor_FUN_004ef010 ; 0048cb85
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_ctor_FUN_004ef010(CParticle * this_ptr)
    ADD ESP,0x4                         ; 0048cb8a
    MOV dword ptr [EAX + 0x34],0x59d2a4 ; 0048cb8d | g_CRockVTable
    RET                                 ; 0048cb94

