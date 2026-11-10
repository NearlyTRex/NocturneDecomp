; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_00532150(CParticle *this_ptr,uint flags)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   core_fire.cpp_CFireball_dtor_FUN_004b7770 at 004b7777
;   core_fire.cpp_CFirefly_dtor_FUN_004b77a0 at 004b77a7
;   core_fire.cpp_CGlassParticle_dtor_FUN_004b76c0 at 004b76c7
;   core_fire.cpp_CLeaf_dtor_FUN_004b7710 at 004b7717
;   core_fire.cpp_CPopcorn_dtor_FUN_004b7550 at 004b7557
;   core_fire.cpp_CRainDrop_dtor_FUN_004b7520 at 004b7527
;   core_fire.cpp_CRock_dtor_FUN_004b7740 at 004b7747
;   core_fire.cpp_CShell_dtor_FUN_004b7580 at 004b7587
;   core_fire.cpp_CSpark_dtor_FUN_004b77d0 at 004b77d7
;   core_gore.cpp_CBloodParticle_dtor_FUN_004e68a0 at 004e68a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00532150
        ;   Label: core_particle.cpp_CParticle_dtor_FUN_00532150
    MOV dword ptr [EAX + 0x3c],0x6045e0 ; 00532154
    RET                                 ; 0053215b

