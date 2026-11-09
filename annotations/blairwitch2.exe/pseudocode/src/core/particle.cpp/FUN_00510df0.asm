; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_FUN_00510df0(CParticle *this_ptr,uint flags)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[10]:
;   core_fire.cpp_CFireball_dtor_FUN_0049eea0 at 0049eea7
;   core_fire.cpp_CFirefly_dtor_FUN_0049eed0 at 0049eed7
;   core_fire.cpp_CGlassParticle_dtor_FUN_0049edf0 at 0049edf7
;   core_fire.cpp_CLeaf_dtor_FUN_0049ee40 at 0049ee47
;   core_fire.cpp_CPopcorn_dtor_FUN_0049ec80 at 0049ec87
;   core_fire.cpp_CRainDrop_dtor_FUN_0049ec50 at 0049ec57
;   core_fire.cpp_CRock_dtor_FUN_0049ee70 at 0049ee77
;   core_fire.cpp_CShell_dtor_FUN_0049ecb0 at 0049ecb7
;   core_fire.cpp_CSpark_dtor_FUN_0049ef00 at 0049ef07
;   core_gore.cpp_CBloodParticle_dtor_FUN_004ca090 at 004ca097
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510df0
        ;   Label: core_particle.cpp_FUN_00510df0
    MOV dword ptr [EAX + 0x3c],0x5fa8ec ; 00510df4
    RET                                 ; 00510dfb

