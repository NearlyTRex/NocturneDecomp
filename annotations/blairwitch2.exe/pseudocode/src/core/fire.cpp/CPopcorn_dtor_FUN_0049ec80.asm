; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPopcorn * __cdecl core_fire_cpp_CPopcorn_dtor_FUN_0049ec80(CPopcorn *this_ptr,uint flags)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00510df0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0049ec80
        ;   Label: core_fire.cpp_CPopcorn_dtor_FUN_0049ec80
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049ec82
    PUSH EDX                            ; 0049ec86
    CALL core_particle.cpp_CParticle_dtor_FUN_00510df0 ; 0049ec87
        ;   XREF to: 00510df0 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00510df0(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0049ec8c
    RET                                 ; 0049ec8f

