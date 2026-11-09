; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_FUN_00532130(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_fire.cpp_CFireball_ctor_FUN_004b7750 at 004b7755
;   core_fire.cpp_CFirefly_ctor_FUN_004b7780 at 004b7785
;   core_fire.cpp_CGlassParticle_ctor_FUN_004b7690 at 004b7695
;   core_fire.cpp_CLeaf_ctor_FUN_004b76f0 at 004b76f5
;   core_fire.cpp_CPopcorn_ctor_FUN_004b7530 at 004b7535
;   core_fire.cpp_CRainDrop_ctor_FUN_004b7500 at 004b7505
;   core_fire.cpp_CRock_ctor_FUN_004b7720 at 004b7725
;   core_fire.cpp_CShell_ctor_FUN_004b7560 at 004b7565
;   core_fire.cpp_CSpark_ctor_FUN_004b77b0 at 004b77b5
;   core_gore.cpp_CBloodParticle_ctor_FUN_004e6880 at 004e6885
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00532130
        ;   Label: core_particle.cpp_FUN_00532130
    MOV dword ptr [EAX + 0x24],0x0      ; 00532134
    MOV dword ptr [EAX + 0x3c],0x6045e0 ; 0053213b
    RET                                 ; 00532142

