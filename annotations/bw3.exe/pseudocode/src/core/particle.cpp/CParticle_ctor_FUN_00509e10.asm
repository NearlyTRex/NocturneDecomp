; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00509e10(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_fire.cpp_CFireball_ctor_FUN_004a47f0 at 004a47f5
;   core_fire.cpp_CFirefly_ctor_FUN_004a4820 at 004a4825
;   core_fire.cpp_CGlassParticle_ctor_FUN_004a4730 at 004a4735
;   core_fire.cpp_CLeaf_ctor_FUN_004a4790 at 004a4795
;   core_fire.cpp_CPopcorn_ctor_FUN_004a4580 at 004a4585
;   core_fire.cpp_CRainDrop_ctor_FUN_004a4550 at 004a4555
;   core_fire.cpp_CRock_ctor_FUN_004a47c0 at 004a47c5
;   core_fire.cpp_CShell_ctor_FUN_004a45b0 at 004a45b5
;   core_fire.cpp_CSpark_ctor_FUN_004a4850 at 004a4855
;   core_gore.cpp_CBloodParticle_ctor_FUN_004cf210 at 004cf215
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509e10
        ;   Label: core_particle.cpp_CParticle_ctor_FUN_00509e10
    MOV dword ptr [EAX + 0x24],0x0      ; 00509e14
    MOV dword ptr [EAX + 0x3c],0x5e2fa4 ; 00509e1b
    RET                                 ; 00509e22

