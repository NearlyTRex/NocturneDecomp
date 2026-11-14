; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlassParticle * __cdecl core_fire_cpp_CGlassParticle_dtor_FUN_0049edf0(CGlassParticle *this_ptr,uint flags)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049edf0
        ;   Label: core_fire.cpp_CGlassParticle_dtor_FUN_0049edf0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049edf2
    PUSH EDX                            ; 0049edf6
    CALL core_particle.cpp_CParticle_dtor_FUN_00510df0 ; 0049edf7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049edfc
    RET                                 ; 0049edff

