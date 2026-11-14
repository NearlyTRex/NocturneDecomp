; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireball * __cdecl core_fire_cpp_CFireball_dtor_FUN_004b7770(CFireball *this_ptr,uint flags)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_particle.cpp_CParticle_dtor_FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7770
        ;   Label: core_fire.cpp_CFireball_dtor_FUN_004b7770
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7772
    PUSH EDX                            ; 004b7776
    CALL core_particle.cpp_CParticle_dtor_FUN_00532150 ; 004b7777
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; CParticle * core_particle.cpp_CParticle_dtor_FUN_00532150(CParticle * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b777c
    RET                                 ; 004b777f

