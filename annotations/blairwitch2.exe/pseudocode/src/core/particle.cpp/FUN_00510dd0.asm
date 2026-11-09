; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_FUN_00510dd0(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_fire.cpp_CFireball_ctor_FUN_0049ee80 at 0049ee85
;   core_fire.cpp_CFirefly_ctor_FUN_0049eeb0 at 0049eeb5
;   core_fire.cpp_CGlassParticle_ctor_FUN_0049edc0 at 0049edc5
;   core_fire.cpp_CLeaf_ctor_FUN_0049ee20 at 0049ee25
;   core_fire.cpp_CPopcorn_ctor_FUN_0049ec60 at 0049ec65
;   core_fire.cpp_CRainDrop_ctor_FUN_0049ec30 at 0049ec35
;   core_fire.cpp_CRock_ctor_FUN_0049ee50 at 0049ee55
;   core_fire.cpp_CShell_ctor_FUN_0049ec90 at 0049ec95
;   core_fire.cpp_CSpark_ctor_FUN_0049eee0 at 0049eee5
;   core_gore.cpp_CBloodParticle_ctor_FUN_004ca070 at 004ca075
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510dd0
        ;   Label: core_particle.cpp_FUN_00510dd0
    MOV dword ptr [EAX + 0x24],0x0      ; 00510dd4
    MOV dword ptr [EAX + 0x3c],0x5fa8ec ; 00510ddb
    RET                                 ; 00510de2

