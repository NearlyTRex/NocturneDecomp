; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_004ef010(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_fire.cpp_CFireball_ctor_FUN_0048cbb0 at 0048cbb5
;   core_fire.cpp_CGlassParticle_ctor_FUN_0048cb00 at 0048cb05
;   core_fire.cpp_CPopcorn_ctor_FUN_0048c990 at 0048c995
;   core_fire.cpp_CRaindrop_ctor_FUN_0048c960 at 0048c965
;   core_fire.cpp_CRock_ctor_FUN_0048cb80 at 0048cb85
;   core_fire.cpp_CShell_ctor_FUN_0048c9c0 at 0048c9c5
;   core_fire.cpp_CSpark_ctor_FUN_0048cbe0 at 0048cbe5
;   core_gore.cpp_CBloodParticle_ctor_FUN_004b0a30 at 004b0a35
;
; Referenced Globals:
;   CParticle_vtable g_CParticleVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef010
        ;   Label: core_particle.cpp_CParticle_ctor_FUN_004ef010
    MOV dword ptr [EAX + 0x18],0x0      ; 004ef014
    MOV dword ptr [EAX + 0x34],0x5a1034 ; 004ef01b | g_CParticleVTable
    RET                                 ; 004ef022

