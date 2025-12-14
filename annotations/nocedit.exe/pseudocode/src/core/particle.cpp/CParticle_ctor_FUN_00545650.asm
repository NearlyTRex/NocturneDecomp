; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CParticle * core_particle.cpp_CParticle_ctor_FUN_00545650(CParticle * this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_fire.cpp_CFireball_ctor_FUN_004c96e0 at 004c96e5
;   core_fire.cpp_CGlassParticle_ctor_FUN_004c9630 at 004c9635
;   core_fire.cpp_CPopcorn_ctor_FUN_004c94c0 at 004c94c5
;   core_fire.cpp_CRainDrop_ctor_FUN_004c9490 at 004c9495
;   core_fire.cpp_CRock_ctor_FUN_004c96b0 at 004c96b5
;   core_fire.cpp_CShell_ctor_FUN_004c94f0 at 004c94f5
;   core_fire.cpp_CSpark_ctor_FUN_004c9710 at 004c9715
;   core_gore.cpp_FUN_004ee3f0 at 004ee3f5
;
; Referenced Globals:
;   CParticle_vtable g_CParticleVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00545650
        ;   Label: core_particle.cpp_CParticle_ctor_FUN_00545650
    MOV dword ptr [EAX + 0x18],0x0      ; 00545654
    MOV dword ptr [EAX + 0x34],0x661f24 ; 0054565b | g_CParticleVTable
    RET                                 ; 00545662

