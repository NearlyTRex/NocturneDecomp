; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_FUN_00509e30(CParticle *this_ptr,uint flags)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   core_fire.cpp_CFireball_dtor_FUN_004a4810 at 004a4817
;   core_fire.cpp_CFirefly_dtor_FUN_004a4840 at 004a4847
;   core_fire.cpp_CGlassParticle_dtor_FUN_004a4760 at 004a4767
;   core_fire.cpp_CLeaf_dtor_FUN_004a47b0 at 004a47b7
;   core_fire.cpp_CPopcorn_dtor_FUN_004a45a0 at 004a45a7
;   core_fire.cpp_CRainDrop_dtor_FUN_004a4570 at 004a4577
;   core_fire.cpp_CRock_dtor_FUN_004a47e0 at 004a47e7
;   core_fire.cpp_CShell_dtor_FUN_004a45d0 at 004a45d7
;   core_fire.cpp_CSpark_dtor_FUN_004a4870 at 004a4877
;   core_gore.cpp_CBloodParticle_dtor_FUN_004cf230 at 004cf237
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509e30
        ;   Label: core_particle.cpp_FUN_00509e30
    MOV dword ptr [EAX + 0x3c],0x5e2fa4 ; 00509e34
    RET                                 ; 00509e3b

