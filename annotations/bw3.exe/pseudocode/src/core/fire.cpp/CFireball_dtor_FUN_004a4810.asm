; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004a4810(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4810
        ;   Label: core_fire.cpp_CFireball_dtor_FUN_004a4810
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4812
    PUSH EDX                            ; 004a4816
    CALL core_particle.cpp_CParticle_dtor_FUN_00509e30 ; 004a4817
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00509e30(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a481c
    RET                                 ; 004a481f

