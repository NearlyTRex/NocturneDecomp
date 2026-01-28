; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_00545670(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_fire.cpp_CFireball_dtor_FUN_004c9700 at 004c9707
;   core_fire.cpp_CGlassParticle_dtor_FUN_004c9660 at 004c9678
;   core_fire.cpp_CPopcorn_dtor_FUN_004c94e0 at 004c94e7
;   core_fire.cpp_CRainDrop_dtor_FUN_004c94b0 at 004c94b7
;   core_fire.cpp_CRock_dtor_FUN_004c96d0 at 004c96d7
;   core_fire.cpp_CShell_dtor_FUN_004c9510 at 004c9517
;   core_fire.cpp_CSpark_dtor_FUN_004c9730 at 004c9737
;   core_gore.cpp_FUN_004ee410 at 004ee417
;
; Referenced Globals:
;   CParticle_vtable g_CParticleVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00545670
        ;   Label: core_particle.cpp_CParticle_dtor_FUN_00545670
    MOV dword ptr [EAX + 0x34],0x661f24 ; 00545674 | g_CParticleVTable
    RET                                 ; 0054567b

