; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFirefly * core_fire_cpp_CFirefly_dtor_FUN_0049eed0(CFirefly *this_ptr,uint flags)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049eed0
        ;   Label: core_fire.cpp_CFirefly_dtor_FUN_0049eed0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049eed2
    PUSH EDX                            ; 0049eed6
    CALL core_particle.cpp_CParticle_dtor_FUN_00510df0 ; 0049eed7
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049eedc
    RET                                 ; 0049eedf

