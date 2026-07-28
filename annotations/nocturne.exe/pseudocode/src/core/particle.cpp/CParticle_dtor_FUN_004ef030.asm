; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_004ef030(CParticle *this_ptr,uint flags)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30 at 0048cb48
;   core_fire.cpp_FUN_0048c980 at 0048c987
;   core_fire.cpp_FUN_0048c9b0 at 0048c9b7
;   core_fire.cpp_FUN_0048c9e0 at 0048c9e7
;   core_fire.cpp_FUN_0048cba0 at 0048cba7
;   core_fire.cpp_FUN_0048cbd0 at 0048cbd7
;   core_fire.cpp_FUN_0048cc00 at 0048cc07
;   core_gore.cpp_FUN_004b0a50 at 004b0a57
;
; Referenced Globals:
;   undefined1* PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_005a1034 = 004ef040
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef030
        ;   Label: core_particle.cpp_CParticle_dtor_FUN_004ef030
    MOV dword ptr [EAX + 0x34],0x5a1034 ; 004ef034 | PTR_core_particle.cpp_CParticle_setup_FUN_004ef040_005a1034
    RET                                 ; 004ef03b

